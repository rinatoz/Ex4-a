#include "Sniper.hpp"

void Sniper::attack(vector<vector<Soldier*>> &b, pair<int,int> location){
    int row = b.size();
    int col = b[0].size();
    pair<double, Soldier*> toAttack =make_pair(distance(0, 0, row-1, col-1) + 1, nullptr);
    for(int i= 0; i<row; ++i){
        for(int j= 0; j<col; ++j){
            Soldier* s = b[i][j];
	        if(s != nullptr && s->get_player_number() != player_number){
                double d = s->get_health();
                if (d < toAttack.first) {
                    toAttack.first = d;
                    toAttack.second = s;
			    }
            }
        }
    }
    
	int Nhealth = toAttack.second->get_health() + damage;
    if(Nhealth <= 0) { delete toAttack.second; toAttack.second = nullptr;}
    else { toAttack.second->set_health(Nhealth); }
}        
