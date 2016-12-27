#include <iostream>
#include <cstdlib>
#include "testActors.cpp"

using namespace std;

/*
2/1/2015:: 4:31pm -- start implementing mentalities
*/

Monster e_party [9];

/*
void showEnemy (Actor arg[]){
    int step_sE;
    if (sizeof(arg) > 1) {
        while (step_sE < sizeof(arg)) {
            cout<<arg.char_name<<" ";
        }
        cout<<arg.char_name<<endl;
    }
    else {
        cout<<arg.char_name<<endl;
    }
};

void pickTarget (Actor actor, Actor arg[], int mood,) {
    Actor target;
    switch (mood) {
    case 30:   //normal
        //comment
        break;
    case 31:   //alpha-male
        //comment
        break;
    case 32:   // ?
        //comment
        break;
    case 33:   //crafty
        for (int step_pT = -1; step_pT <= sizeof(arg); step_pT++) {
            int health_buffer[ sizeof(arg) ] ;
            health_buffer[step_pT] = arg[step_pT].current_health;
        }
        int control_var = health_buffer[0];
        for (int step_pT2 = 0; step_pT2 <= sizeof(health_buffer); step_pT2++) {
            if (control_var > health_buffer[step_pT2]) {            //loop to check for target with lowest current health
                control_var = health_buffer[step_pT2];
            }
            else {
                continue;
            }
        }
        break;

    }
};

int attackTarget (Actor actor){
    actor.doAttack();
    actor.threat = actor.doAttack();
};

void startBattle (Goblin goblin){
    Goblin enemy_party[9];
    int step_sB = 0;

    //dice roll to determine number of enemies, set to a variable.
    //int enemies = diceRoll();

    while ( step_sB <= enemies){
        enemy_party[step_sB] = Goblin ();
        enemy_party[step_sB].char_name = "Goblin "+step_sB;
        step_sB++;
    }
    showEnemy(enemy_party);
};
*/
