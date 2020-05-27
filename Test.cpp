#include "doctest.h"
#include "Soldier.hpp"
#include "Board.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include <string>
using namespace std;
//using namespace WarGame;



namespace WarGame {
	
   


TEST_CASE("a") {

Board b(30,30);
   CHECK(!b.has_soldiers(1));
   CHECK(!b.has_soldiers(2));
   for (int i = 0; i < 30; i++) {
     
     b[{5,i}] = new FootSoldier(1);
   CHECK(true);
   }
   CHECK(b.has_soldiers(1));
   CHECK(!b.has_soldiers(2));
   for (int i = 0; i < 30; i++) {
     
     b[{15,i}] = new FootSoldier(2);
   //   CHECK_NOTHROW( b[{0,i}] = new FootSoldier(1));
   CHECK(true);
   }
   CHECK(b.has_soldiers(1));
   CHECK(b.has_soldiers(2));

   for (int i = 0; i < 30; i++) {
     b[{0,i}] = new FootSoldier(1);
   CHECK(true);
   }
   

   for (int i = 0; i < 30; i++) {
     b[{19,i}] = new FootCommander(2);

   CHECK(true);
   }

   for (int i = 0; i < 15; i++)
   {
      if(b.has_soldiers(2) &&b.has_soldiers(1)){
        CHECK_NOTHROW(b.move(1, {0,i}, Board::MoveDIR::Up));
        CHECK_NOTHROW(b.move(2, {15,i}, Board::MoveDIR::Down));
      }
   }
   

   


}


TEST_CASE("c") {

Board c(30,30);

   CHECK(!c.has_soldiers(1));
   CHECK(!c.has_soldiers(2));
   for (int i = 0; i < 30; i++) {
     
     c[{5,i}] = new FootSoldier(1);
   CHECK(true);
   }
   CHECK(c.has_soldiers(1));
   CHECK(!c.has_soldiers(2));
   for (int i = 0; i < 30; i++) {
     
     c[{15,i}] = new FootSoldier(2);
   //   CHECK_NOTHROW( c[{0,i}] = new FootSoldier(1));
   CHECK(true);
   }
   CHECK(c.has_soldiers(1));
   CHECK(c.has_soldiers(2));

   for (int i = 0; i < 30; i++) {
     c[{0,i}] = new FootSoldier(1);
   CHECK(true);
   }
   

   for (int i = 0; i < 30; i++) {
     c[{19,i}] = new FootCommander(2);

   CHECK(true);
   }

   for (int i = 0; i < 15; i++)
   {
      if(c.has_soldiers(2) &&c.has_soldiers(1)){
        CHECK_NOTHROW(c.move(1, {0,i}, Board::MoveDIR::Up));
        CHECK_NOTHROW(c.move(2, {15,i}, Board::MoveDIR::Down));
      }
   }
   

   


}

TEST_CASE("d") {
Board d(30,30);


   CHECK(!d.has_soldiers(1));
   CHECK(!d.has_soldiers(2));
   for (int i = 0; i < 30; i++) {
     
     d[{5,i}] = new FootSoldier(1);
   CHECK(true);
   }
   CHECK(d.has_soldiers(1));
   CHECK(!d.has_soldiers(2));
   for (int i = 0; i < 30; i++) {
     
     d[{15,i}] = new FootSoldier(2);
   //   CHECK_NOTHROW( d[{0,i}] = new FootSoldier(1));
   CHECK(true);
   }
   CHECK(d.has_soldiers(1));
   CHECK(d.has_soldiers(2));

   for (int i = 0; i < 30; i++) {
     d[{0,i}] = new FootSoldier(1);
   CHECK(true);
   }
   

   for (int i = 0; i < 30; i++) {
     d[{19,i}] = new FootCommander(2);

   CHECK(true);
   }

   for (int i = 0; i < 15; i++)
   {
      if(d.has_soldiers(2) &&d.has_soldiers(1)){
        CHECK_NOTHROW(d.move(1, {0,i}, Board::MoveDIR::Up));
        CHECK_NOTHROW(d.move(2, {15,i}, Board::MoveDIR::Down));
      }
   }
   

   


}


TEST_CASE("e") {

Board e(30,30);

   CHECK(!e.has_soldiers(1));
   CHECK(!e.has_soldiers(2));
   for (int i = 0; i < 30; i++) {
     
     e[{5,i}] = new FootSoldier(1);
   CHECK(true);
   }
   CHECK(e.has_soldiers(1));
   CHECK(!e.has_soldiers(2));
   for (int i = 0; i < 30; i++) {
     
     e[{15,i}] = new FootSoldier(2);
   //   CHECK_NOTHROW( e[{0,i}] = new FootSoldier(1));
   CHECK(true);
   }
   CHECK(e.has_soldiers(1));
   CHECK(e.has_soldiers(2));

   for (int i = 0; i < 30; i++) {
     e[{0,i}] = new FootSoldier(1);
   CHECK(true);
   }
   

   for (int i = 0; i < 30; i++) {
     e[{19,i}] = new FootCommander(2);

   CHECK(true);
   }

   for (int i = 0; i < 15; i++)
   {
      if(e.has_soldiers(2) &&e.has_soldiers(1)){
        CHECK_NOTHROW(e.move(1, {0,i}, Board::MoveDIR::Up));
        CHECK_NOTHROW(e.move(2, {15,i}, Board::MoveDIR::Down));
      }
   }
   

   


}
}

