#include <Animal.h>

class Lion : public Animal
{
private:
    /* data */
public:
    Lion();
    ~Lion();

    void setAttaque();
    void deplace(int maxX, int maxY);
};
