#include <iostream>
#include "CycleBufferQueue.h"
#include "CycleBufferStack.h"

void task1()
{
    std::cout << "Cyclic Buffer based on Queue: \n";

    buffers::cycleBufferQueue ob(5); //the cyclic buffer based on Queue
    ob.pushBack(10);
    ob.pushBack(20);
    ob.pushBack(30);
    ob.show(); //5 <-- 10<-- 20 <-- 30
    std::cout << "Deleted: " << ob.popFront() << std::endl; //delete 5, because it is first el in data structure - QUEUE
    ob.show(); //10 <-- 20 <-- 30

    std::cout << "\nBypass the cyclic buffer 2 times: \n";
    for (size_t i = 0; i < 6; i++) //the loop is run 2 times to show that the buffer is cyclic
        std::cout << ob.getValue() << std::endl;

    std::cout << "------------------------------\n\n";

    std::cout << "Cyclic Buffer based on Stack: \n";
    buffers::cycleBufferStack bu(99); //the cyclic buffer based on Stack
    bu.pushBack(100);
    bu.pushBack(200);
    bu.pushBack(300);
    bu.show(); //99 --> 100 --> 200 --> 300
    std::cout << "Deleted: " << bu.popFront() << std::endl; //delete 300, because it is first el in data structure - STACK
    bu.show(); //100 -- > 200 -- > 300

    std::cout << "\nBypass the cyclic buffer 2 times: \n";
    for (size_t i = 0; i < 6; i++) //the loop is run 2 times to show that the buffer is cyclic
        std::cout << bu.getValue() << std::endl;


}
