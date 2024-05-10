#pragma once

#include <iostream>
#include <string>
#include "leiguvara.hpp"

class Hjol : public Leiguvara {
    private:
        int fjoldi_gira;
    public:
        Hjol();
        Hjol(int fjoldi_gira, int id, int verd, bool i_utlani);
        int getGira();
        void setGira(int fjoldi_gira);
};