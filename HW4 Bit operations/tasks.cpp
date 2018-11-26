#include <stdio.h>
#include <iostream>
#include <bitset>

typedef unsigned short  int UINT;

// Ввести целое число N и вывести 2^N, используя битовые операции.
int task1(UINT n)
{
    UINT a = 2;
    a = a << (n-1);
    std::cout << "task1: " << "2^n = " << a << std::endl;
    return 0;
}

// Вывести двоичное представление целого положительного числа
int task2(UINT n)
{
    std::string otvet;
    UINT a = 1;
    while (n > 0)
    {
        if ((n & a) == 1)
        {
            otvet = "1" + otvet;
        }
        else
        {
            otvet = "0" + otvet;
        }
        n = n - (n/2 + (n&a));
    }
    std::cout << "task2: " << "Dvoichnoe predstavlenie = " << otvet << std::endl;
    return 0;
}

// Найти количество едениц в двоичном представлении числа
int task3(UINT n)
{
    UINT a = 1;
    UINT c = 0;
    while (n > 0)
    {
        if ((n & a) == 1)
        {
            c++;
        }

        n = n - (n/2 + (n&a));
    }
    std::cout << "task3: " << "kol-vo edenic = " << c << std::endl;
    return 0;
}

// Найти номер старшего бита
int task4(UINT n)
{
    UINT a = 1;
    UINT c = 0;
    while (n > 0)
    {
        c++;
        n = n - (n/2 + (n&a));
    }
    std::cout << "task4: " <<  "Nomer starshego bita = " << c-1 << std::endl;
    return 0;
}

// число n, где i-й бит = 1
// оставил bitset для проверки.
int task5(UINT n, UINT i)
{
    i = 1 << i;
    // std::cout <<  std::bitset<8>(i) << std::endl;
    // std::cout <<  std::bitset<8>(n) << std::endl;
    n = n|i;
    // std::cout <<  std::bitset<8>(n) << std::endl;
    std::cout << "task5: " << "result = " << n << std::endl;
    return 0;
}

// число n, где i-й бит = 0
// оставил bitset для проверки.
int task6(UINT n, UINT i)
{
    i = 1 << i;
    i = ~i;
    // std::cout <<  std::bitset<8>(i) << std::endl;
    // std::cout <<  std::bitset<8>(n) << std::endl;
    n = n&i;
    // std::cout <<  std::bitset<8>(n) << std::endl;
    std::cout << "task6: " << "result = " << n << std::endl;
    return 0;
}

// число n, где i-й бит отличается
int task7(UINT n, UINT i)
{
    UINT a = n;
    UINT s = i;
    i = 1 << i;         // кусочек outplacei
    i = ~i;             // кусочек outplacei
    a = a&i;            // кусочек outplacei
    if (a != n)
    {
        n = a;
    }
    else
    {
        n = n + (2 << (s -1));
    }

    std::cout << "task7: " << "result = " << n <<  std::endl;
    return 0;
}

// циклический сдвиг влево на 1 разряд
int task8(unsigned char n)
{
    if ((128 & n ) == (128))
    {
        n = n << 1;
        n = n + 1;
    }
    else
    {
        n = n << 1;
    }
    std::cout << "task8: " << "result = " << (int)(n) << std::endl;
    return 0;
}

// сколько раз встречается 11 в двоичном представлении целого положительного числа
int task9 (UINT n)
{
    int counter = 0;
    while (n >= 1)
    {
       if ((n & 3) == 3)
       {
           counter++;
       }
       n = n >> 1;
    }
    std::cout << "task9: result = " << counter << std::endl;
    return 0;
}

// в числе n сменить местами бит b1 и b2
int task10 (UINT n, UINT b1, UINT b2)
{
    if (((n & (1 << b1)) >> b1) > ((n & (1 << b2)) >> b2))
    {
        n = n - (1 << b1) + (1 << b2);
    }
    else
    {
        if (((n & (1 << b1)) >> b1) < ((n & (1 << b2)) >> b2))
        {
            n = n + (1 << b1) - (1 << b2);
        }
    }
    std::cout << "task10: result = " << n << std::endl;
    return 0;
}

// Вырвать бит
int task11 (UINT n, UINT i)
{
    UINT perem = 1;
    for(UINT l = 0; l < i; ++l)
    {
        perem = perem + ( 2 << l-1);
    }
    n = n - perem;
    n = n >> 1;
    n = n + perem;
    std::cout << "task11: result = " << n << std::endl;
    return  0;
}

