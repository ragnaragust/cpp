#include <iostream>
#include <string>
#include "hestur.hpp"
#include "leiguvara.hpp"

Hestur::Hestur() {
    this->nafn = "";
};
Hestur::Hestur(std::string nafn, int id, int verd, bool i_utlani)
    : Leiguvara(id, verd, i_utlani) {
        this->nafn = nafn;
};
std::string Hestur::getNafn() {
    return this->nafn;
};
void Hestur::setNafn(std::string nafn) {
    this->nafn = nafn;
};