#include "leiguvara.hpp"

Leiguvara::Leiguvara() {
    this->id = -1;
    this->verd = -1;
    this->i_utlani = false;
}

Leiguvara::Leiguvara(int id, int verd, bool i_utlani) {
    this->id = id;
    this->verd = verd;
    this->i_utlani = i_utlani;
}

int Leiguvara::getID() {
    return this->id;
}

void Leiguvara::setID(int id) {
    this->id = id;
}

int Leiguvara::getLeiguverd() {
    return this->verd;
}

void Leiguvara::setLeiguverd(int verd) {
    this->verd = verd;
}

bool Leiguvara::getUtlan() {
    return this->i_utlani;
}

void Leiguvara::setUtlan(bool i_utlani) {
    this->i_utlani = i_utlani;
}

void Leiguvara::prenta() {
    std::cout << "ID: " << this->id << " Verð: " << this->verd << " í útláni: " << this->i_utlani;
}

bool Leiguvara::operator==(Leiguvara& temp) {
    return this->verd == this->getLeiguverd();
}

bool Leiguvara::operator!=(Leiguvara& temp) {
    return !(*this == temp); 

}

bool Leiguvara::operator<(Leiguvara& temp) {
    if(this->verd == temp.getLeiguverd()) {
        return this->id < temp.getID();
    }
    return this->verd < temp.getLeiguverd();
}

bool Leiguvara::operator>(Leiguvara& temp) {
    return *this > temp;
}

bool Leiguvara::operator<=(Leiguvara& temp) {
    return !(temp < *this);
}

bool Leiguvara::operator>=(Leiguvara& temp) {

}


std::string Leiguvara::tegund() {
    return "Leiguvara";
}