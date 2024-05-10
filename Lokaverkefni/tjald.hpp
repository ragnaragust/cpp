#pragma once

#include <iostream>
#include <string>
#include "leiguvara.hpp"

class Tjald : Leiguvara {
    private:
        int fjoldi_manna;
    public:
        Tjald();
        Tjald(int fjoldi_manna, int id, int verd, bool i_utlani);
        int getFjoldi();
        void setFjoldi(int fjoldi_manna);
};