#include "SniperCommander.hpp"
#include <iostream>
#include "Sniper.hpp"

void SniperCommander::attack(vector<vector<Soldier*>> &b, pair<int,int> location){
    int row = b.size();
    int col = b[0].size();
    pair<double, Soldier*> toAttack =make_pair(INFINITY, nullptr); //maxfloat
    for(int i= 0; i<row; ++i){
        for(int j= 0; j<col; ++j){
            Soldier* s = b[i][j];
            if(s != nullptr) {        
                if(s->get_player_number() != player_number){
                    double d = s->get_health();
                    if (d < toAttack.first) {
                        toAttack.first = d;
                        toAttack.second = s;
                    }
                }
            	else {
                    if(Sniper* ps=dynamic_cast<Sniper*>(s)){
						cout<< "I found a soldier there: " << i << " " << j <<endl;
				    	ps->attack(b, {i,j});
					}
            	}
            }
		}
	}
    int Nhealth = toAttack.second->get_health() + damage;
    if(Nhealth <= 0) { delete toAttack.second; toAttack.second = nullptr;}
    else { toAttack.second->set_health(Nhealth); }
}
