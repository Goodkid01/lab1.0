
//Переменная- именованный участок в оперативной памяти 
//Типы данных:
//1)	Целочисленные:
//-char, 1 байт , -128… 127
//-short, 2 байта, -32768…32767
//-int, 4 байта, -2^31… 2^31-1
//-long long, 8 байт, -2^63... 2^63-1
//-unsigned(без знаковые) int, 4 байта, 0…2^32-1
 //       2) Символьный:
 //-char, 1 байт , -128… 127
 //       3)Вещественные типы:
//	-float,4 байт,6-7 цифр(точность)
//	-double, 8 байт, 15-16 цифр
  //      4)Логический тип
	//-bool, 1байт, true/false
//Арифметические операции
//+,-,*,/,%
//Встроенные функции
//Pow, sqrt, sin , cos, tan, atan

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main() {
  
    std::cout << "char" << " " << sizeof(char) <<" "<< CHAR_MIN <<" "<< CHAR_MAX << std::endl;
    
    
    std::cout << "short" << " "<<  sizeof(short) << " " << SHRT_MIN << " " << SHRT_MAX << std::endl;
    
    
    std::cout << "int" << " "  << sizeof(int) << " " << INT_MIN << "  " << INT_MAX << std::endl;
  
    
    std::cout << "long long" << " "  << sizeof(long long) << " " << LLONG_MIN << " " << LLONG_MAX << std::endl;
    
    
    std::cout << "float"  << " " << sizeof(float) << " " << FLT_MIN << " " << FLT_MAX << std::endl;
    
    
    std::cout << "double" << " "  << sizeof(double) << " " << DBL_MIN << " " << DBL_MAX << std::endl;
    
    
    std::cout << "bool"<< " "  << sizeof(bool) << std::endl;

    char a=81;
    char b=12;
    char c=a+b;
    std::cout <<c<< std::endl;

    short a1=81;
    short c1=a1 * 2;
    std::cout <<c1<< std::endl;


    int a2=9000;
    int b2=8000;
    int c2=a2+b2;
    std::cout <<c2<< std::endl;


    float a3=9.7;
    float b3=8.6;
    float c3=a3+b3;
    std::cout <<c3<< std::endl;


    long long a4=90000000000000;
    long long b4=a4*2;
    std::cout <<b4<< std::endl;


    double a5=2.76767;
    double b5=a5*2.0;
    std::cout <<b5<< std::endl;
    






}
