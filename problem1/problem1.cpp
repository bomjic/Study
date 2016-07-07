#include<iostream>

int main ()
{
int summ=0;
for (int i=0; i < 1000; i=i+3)
	{
//	std::cout << i << " ";
	summ=summ+i;
//	std::cout << "summ " << summ << "\n";
	}

for (int i=0; i < 1000; i=i+5)
        {
//	std::cout << i << " ";
        summ=summ+i;
//	std::cout << "summ " << summ << "\n";
        }

for (int i=0; i < 1000; i=i+15)
        {
//        std::cout << i << " ";
        summ=summ-i;
//        std::cout << "summ " << summ << "\n";
        }

std::cout << "summ" << summ;
return 0;

}
