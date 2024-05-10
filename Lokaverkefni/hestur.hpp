#pragma once


#include <iostream>
#include <string>
#include "leiguvara.hpp"

class Hestur : public Leiguvara {
    private:
        std::string nafn;
    public:
        Hestur();
        Hestur(std::string nafn, int id, int verd, bool i_utlani);
        std::string getNafn();
        void setNafn(std::string nafn);
};