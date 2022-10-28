#include <iostream>
void task1();
void task2();

std::string foo()
{
    return "-1" + std::string(std::numeric_limits<int>::digits, '0');
}

int main()
{
    int a = -16;
    if (!(-16))
        std::cout << '+';
    //std::cout << a;


}
