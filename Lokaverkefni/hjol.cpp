#include <iostream>
#include <string>
#include "hjol.hpp"
#include "leiguvara.hpp"

Hjol::Hjol() {
    this->fjoldi_gira = -1;
};
Hjol::Hjol(int fjoldi_gira, int id, int verd, bool i_utlani)
    :Leiguvara(id, verd, i_utlani) {
        this->fjoldi_gira = fjoldi_gira;
};
int Hjol::getGira() {
    return this->fjoldi_gira;
};
void Hjol::setGira(int fjoldi_gira) {
    this->fjoldi_gira = fjoldi_gira;
};