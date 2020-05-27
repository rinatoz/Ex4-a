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
	

   Board b(30,30);
   


TEST_CASE("a") {


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


TEST_CASE("a") {


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

TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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


TEST_CASE("a") {


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



}









