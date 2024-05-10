#include <iostream>
#include <string>
#include "tjald.hpp"
#include "leiguvara.hpp"

Tjald::Tjald() {
    this->fjoldi_manna = -1;
};
Tjald::Tjald(int fjoldi_manna, int id, int verd, bool i_utlani)
    : Leiguvara(id, verd, i_utlani) {
        this->fjoldi_manna = fjoldi_manna;
};
int Tjald::getFjoldi() {
    return this->fjoldi_manna;
};
void Tjald::setFjoldi(int fjoldi_manna) {
    this->fjoldi_manna = fjoldi_manna;
};