#include <iostream>
#include <vector>
#include <string>
#include <random>


using namespace std;

struct Enemy {
    const int D_20 = 20;
    random_device rd;

    string name;
    float life;
    float damage;
    float hit;

    void feture(string n, float d, float l, float h){
        name = n;
        damage = d;
        life = l;
        hit = h;
    };

    float attack(float damage, float hit, int minimum){
        int random;

        mt19937 gen(rd());
        uniform_int_distribution<> distr(0, D_20); // parametros 
        // distr(gen) gera um numero aleatório 

        if(hit >= distr(gen)){

        } else{
            return 0;

        }

    };

};

struct Elfos : Enemy{
    
};

struct Knights : Enemy{

};

struct Dwarfs : Enemy{

};

struct Princess : Enemy{

};

struct Seller{

};

struct Nurse{

};

struct Vlad{

};

struct dog{

};
