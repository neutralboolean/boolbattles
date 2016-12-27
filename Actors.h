#ifndef ACTORS_H_INCLUDED
#define ACTORS_H_INCLUDED

using namespace std;

class Actor{
protected:
    int health;
    int threat;

    int level;
    int e_p;

    string char_name;

    int damage;
    int unarmed_dam;

public:
    Actor();
    Actor(string given_name);

    void nameActor(string name);

    string getName();

    friend void characterSheet(Actor actor);
};

struct Party{
    int members = 0;
    Actor member_1;
    Actor member_2;
    Actor member_3;
    Actor member_4;
    Actor member_5;
};

void joinParty (Party& player_p, Actor actor);

class Forge {
public:
    Actor *create(){return new Actor();};
};
//EoPA

//Start of Enemy class declaration
class Enemy : public Actor{

};


#endif // ACTORS_H_INCLUDED
