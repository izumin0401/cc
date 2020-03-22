#include <iostream>

class Oton {
    public: 
        void call_oton() {
            std::cout << "おとんやで！" << std::endl;
        }
};

class Okan {
    public: 
        void call_okan() {
            std::cout << "おかんやで！" << std::endl;
        }
};

class Ore : public Oton, public Okan {
    public: 
        void call_ore() {
            std::cout << "おれやで！" << std::endl;
        }
};

int main() {
    Ore ore;
    ore.call_oton();
    ore.call_okan();
    ore.call_ore();
}
