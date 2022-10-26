#include <iostream>
#include "CycleBufferQueue.h"
#include "CycleBufferStack.h"

int main()
{
    buffers::cycleBufferQueue ob(5);
    ob.pushBack(10);
    ob.pushBack(20);
    ob.pushBack(30);
    ob.show();
    std::cout << "Delete: " << ob.popFront() << std::endl;
    ob.show();
    int i = 3;
    
    while (i)
    {
        std::cout << ob.getValue() << std::endl;
        i--;
    }

    std::cout << "------------------------------\n";

    buffers::cycleBufferStack bu(99);
    bu.pushBack(100);
    bu.pushBack(200);
    bu.pushBack(300);
    bu.popFront();

    
    int iter = 10;
    while (iter)
    {
        std::cout << bu.getValue() << std::endl;
        iter--;
    }
    


    
}
