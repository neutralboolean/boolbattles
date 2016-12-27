#include <iostream>
#include "Actors.h"

using namespace std;

Actor::Actor (){
    health = 100;
    unarmed_dam = 5;
    level = 1;
    e_p = 0;
}

Actor::Actor (string given_name){
    health = 100;
    unarmed_dam = 5;
    level = 1;
    e_p = 0;

    char_name = given_name;
    }

void Actor::nameActor (string name){
    char_name = name;
    return;
}

string Actor::getName(){
    string namae = char_name;
    return namae;
}

void joinParty (Party& player_p, Actor actor){

    if(player_p.members < 6){
        int index = player_p.members + 1;

        switch(index){
        case 1:
            player_p.member_1 = actor;
            break;
        case 2:
            player_p.member_2 = actor;
            break;
        case 3:
            player_p.member_3 = actor;
            break;
        case 4:
            player_p.member_4 = actor;
            break;
        case 5:
            player_p.member_5 = actor;
            break;
        default:
            cout << "You already have 5 party members. You cannot add more." << endl;
            break;
        }
    }

    player_p.members ++;
}


void characterSheet (Actor actor){                                 //1/31/2015:: 4:56pm -- Made a function of Actor class.
    cout << "\nThe character's name is " << actor.getName() << ". " << endl;
    cout << "\n" << actor.getName() << " is level " << actor.level << " and he has " << actor.e_p << " experience points." << endl;
}

//END of PLAYER ACTORS

class Enemy : public Actor {

};
//EOF
