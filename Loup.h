#include <Animal.h>

class Loup : public Animal
{
private:
    /* data */
public:
    Loup();
    ~Loup();

    void setAttaque();
    void deplace(int maxX, int maxY);
};
