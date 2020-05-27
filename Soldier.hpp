#pragma once

#include <stdexcept>
#include <math.h>
#include <vector>

using namespace std;
class Soldier {
        
private:
        uint max_health;
        uint health;
        uint damage;
        uint player_number;
        

public:
        Soldier(uint p, uint h, int d) : player_number(p), max_health(h), health(h), damage(d) { }
        virtual ~Soldier() {}
        double distance(uint x_s, uint y_s, uint x_t, uint y_t){
                return sqrt(pow(x_s - x_t,2) + pow(y_s - y_t,2));}
        virtual void attack (std::vector<std::vector<Soldier*>> &b, pair<int,int> location) = 0;
		  uint get_health() { return health;}
        uint get_max_health() { return max_health;}
        void set_health(uint h) { health = min(h,max_health);}
        uint get_damage() { return damage;}
        uint get_player_number() { return player_number;}
      
};
