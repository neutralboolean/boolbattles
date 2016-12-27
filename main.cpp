#include <iostream>
#include <cstdlib>
#include "Actors.h"

using namespace std;



int main(){

    cout << "Greetings, narrator. I am your Muse." << endl;

    bool running = true;

    string command;

    Party players;

    while(running){
        cin >> command;

        if(command == "create"){
            string given_name;
            int char_numb;

            if(players.members <= 5){

                cout << "How many characters will be created?" << endl;
                cin >> char_numb;

                for(int i = 1; i <= char_numb; i++){

                    cout << "What is the character's name?" << endl;
                    cin >> given_name;

                    Actor person = Actor(given_name);

                    cout << person.getName() <<" has been created." << endl
                         << "Add this character to the party?" << endl;

                    string answer;
                    cin >> answer;

                    if(answer == "Yes" || answer == "Y" || answer == "y" || answer == "yes"){
                        cout << "Adding " << person.getName() << " to the party." << endl << endl;
                        joinParty(players, person);
                    }

                    else if(answer == "No" || answer == "no" || answer == "N" || answer == "n"){
                        cout << "Discarding " << person.getName() << "." << endl << endl;
                        i--;
                    }
                };
            }

            cout << "The party, now, has " << players.members << " characters." << endl;

        };

        if(command == "party"){

            if(players.members == 0){ cout << "The party is empty." << endl; }

            for(int step = 0; step < players.members; step++){
                if(step == 0){
                    characterSheet(players.member_1);
                }
                else if (step == 1){
                    characterSheet(players.member_2);
                }
                else if (step == 2){
                    characterSheet(players.member_3);
                }
                else if (step == 3){
                    characterSheet(players.member_4);
                }
                else if (step == 4){
                    characterSheet(players.member_5);
                }
            };
        };

        if(command == "kill"){
            running = false;
            cout<<"Killing the thing.";
            exit(EXIT_SUCCESS);
        };

        if(command== "help"){
            cout << "There are three (3) commands." << endl
                 << "Type \"create\" to create characters." << endl
                 << "Type \"party\" to look at the simple character sheets for your entire party." << endl
                 << "Type \"kill\" to exit the program." << endl;
        }
    }

}
//End of MAIN


//EOF
