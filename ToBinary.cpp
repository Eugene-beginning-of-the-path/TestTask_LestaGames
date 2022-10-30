#include <iostream>

bool isEven(int value)
{
	std::string buffer;
	bool negative = false;
	buffer.reserve(std::numeric_limits<int>::digits + 1); //добавляем +1 для представления 
													//отрицательного числа в бинарном виде
													//по методу "two's component"
	if (value < 0)
	{
		value = -value;
		negative = true;
	}

	do
	{
		buffer += char('0' + value % 2);
		value /= 2;
	} while (value); //в buffer будет хранится двоичное представление десятичного числа
					 //в обратной последовательности!! Т.е. стоку нужно перевернуть для
					 //корректного отображения в двоичном виде, но т.к. мы показывать двоичное
					 //представление мы не будем, поэтому можно не переворачивать, но
					 //держать в уме, что начало у нас - в конце строки buffer

	if (negative)
		buffer += '-';

	////с помощью итераторов идем с конца строки --> в начало, чтобы отобразить двоичное представление
	//for (auto i = buffer.crbegin(); i < buffer.crend(); i++)
	//	std::cout << *i;
	//std::cout << std::endl;

	if (buffer[0] == '0')
		return true;	//число четное
	else
		return false;	//число нечетное
}

void task2()
{
	(isEven(17)) ? (std::cout << "The number is even") : 
		(std::cout << "The number is not even");
}