#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Attributes{
    const int D_20 = 20;
    string _name;
    int _life;
    int _damage;
    int _hit;

    void feture(string n, int d, int l, int h){
        _name = n;
        _damage = d;
        _life = l;
        _hit = h;
    };

};


struct Actions : Attributes{
    
    int randon(){
        srand(static_cast<unsigned>(time(nullptr)));
        return rand() % 21;
    }

    float multiplier(int randon) {
        return 1.0f + ((randon - _hit) / static_cast<float>(D_20 - _hit)) * 0.5f;
    }

    int attack(){
        int _randon;
        _randon = randon();

        if(_hit <= _randon){
            return _damage * multiplier(_randon);

        };

        return _damage = 0;

    };

    void set_life(int l){
        _life += l;
    }
    
    void set_damage(int d){
        _life -= d;
    }
};

// Ajudantes do game
struct Seller{

};

struct dog{

};

// Heroi do game
struct Vlad: Actions{

};

int main(){


};
