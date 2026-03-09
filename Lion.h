#include <Animal.h>

class Lion : public Animal
{
public:
    Lion(int maxX, int maxY);
    ~Lion();

    void setAttaque();
    void deplace(int maxX, int maxY);
};
