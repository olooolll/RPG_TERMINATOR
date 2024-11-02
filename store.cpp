#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Wepons {
    string _name; 
    int _damage;
    int _price;

    void set_feture(string n, int d, int p) {
        _name = n;
        _damage = d;
        _price = p;
    }

    void get_feture(){
        cout << _name << " | " << _damage << " | " << _price;

    };
};


struct Armor {
    string _name; 
    int _protection;
    int _price;

    void set_feture(string n, int p, int pi) {
        _name = n;
        _protection = p;
        _price = pi;
    }
};

vector<Wepons> stand;
vector<Armor> stand2;

int main() {
    

    Wepons sword, bow, wand;
    Armor armo1, armo2, armo3;
    int itens;

    sword.set_feture("Espada de Ferro", 30, 60);
    bow.set_feture("Arco e Flechas", 20, 40);
    wand.set_feture("Varinha do Henri Pote", 10, 20);

    armo1.set_feture("Armadura do diamante", 30, 60);
    armo2.set_feture("Armadura do ferro", 20, 40);
    armo2.set_feture("Armadura do couro", 10, 20);

    stand.push_back(sword);
    stand.push_back(bow);
    stand.push_back(wand);

    stand2.push_back(armo1);
    stand2.push_back(armo2);
    stand2.push_back(armo3);

    // itens = stand.size();
    // for(int i=0; i < itens; i++){
    //     cout << stand[i]._name << " | " << stand[i]._damage << " | " << stand[i]._price << "\n";
    // }
    return 0;
}
