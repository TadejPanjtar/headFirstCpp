#include "rlutil.h"
int main()
{
    for (int i = 0; i < 16; i++)
    {
        rlutil::setColor(i);
        std::cout << i << " ";
    }
    rlutil::setColor(rlutil::GREY);
    std::cout << std::endl << rlutil::trows() << "x" << rlutil::tcols() << std::endl;
    std::cout << std::endl;
    return 0;
}
