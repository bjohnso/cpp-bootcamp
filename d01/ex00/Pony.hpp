#ifndef PONY_CLASS_H
# define PONY_CLASS_H

#include <string>

class Pony {
    public: 
        Pony(std::string name);
        ~Pony(void);
        void jump();

    private:
        std::string _name;
        int _jumpHeight;
};

#endif