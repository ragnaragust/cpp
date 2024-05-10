#pragma once

#include <iostream>
#include <string>

class Leiguvara {
    private:
        int id;
        int verd;
        bool i_utlani;
    public:
        Leiguvara();
        Leiguvara(int id, int verd, bool i_utlani);
        int getID();
        void setID(int id);
        int getLeiguverd();
        void setLeiguverd(int verd);
        bool getUtlan();
        void setUtlan(bool i_utlani);
        virtual void prenta();

        bool operator==(Leiguvara& temp);
        bool operator!=(Leiguvara& temp);
        bool operator>(Leiguvara& temp);
        bool operator<(Leiguvara& temp);
        bool operator>=(Leiguvara& temp);
        bool operator<=(Leiguvara& temp);

        virtual std::string tegund();
        virtual ~Leiguvara() {}
};