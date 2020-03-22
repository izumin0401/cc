#include <iostream>

class God {
    public: 
        void call_god() {
            std::cout << "ゴッドやで！" << std::endl;
        }
};

class Oton : virtual public God {
    public: 
        void call_oton() {
            std::cout << "おとんやで！" << std::endl;
        }
};

class Okan : virtual public God {
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
    ore.call_god();
    ore.call_oton();
    ore.call_okan();
    ore.call_ore();
}
