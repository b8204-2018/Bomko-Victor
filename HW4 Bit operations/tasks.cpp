#include <stdio.h>
#include <iostream>
#include <bitset>

typedef unsigned short  int UINT;

// Ввести целое число N и вывести 2^N, используя битовые операции.
int stepen(UINT n)
{
    UINT a = 2;
    a = a << (n-1);
    std::cout << "2^n = " << a << std::endl;
    return 0;
}

// Вывести двоичное представление целого положительного числа
int bitvivod(UINT n)
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
    std::cout << "Dvoichnoe predstavlenie = " << otvet << std::endl;
    return 0;
}

// Найти количество едениц в двоичном представлении числа
int onecounter(UINT n)
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
    std::cout << "kol-vo edenic = " << c << std::endl;
    return 0;
}

// Найти номер старшего бита
int upnumber(UINT n)
{
    UINT a = 1;
    UINT c = 0;
    while (n > 0)
    {
        c++;
        n = n - (n/2 + (n&a));
    }
    std::cout << "Nomer starshego bita = " << c-1 << std::endl;
    return 0;
}

// число n, где i-й бит = 1
// оставил bitset для проверки.
int replacei(UINT n, UINT i)
{
    i = 1 << i;
    // std::cout <<  std::bitset<8>(i) << std::endl;
    // std::cout <<  std::bitset<8>(n) << std::endl;
    n = n|i;
    // std::cout <<  std::bitset<8>(n) << std::endl;
    std::cout << "n = " << n << std::endl;
    return 0;
}

// число n, где i-й бит = 0
// оставил bitset для проверки.
int outplacei(UINT n, UINT i)
{
    i = 1 << i;
    i = ~i;
    // std::cout <<  std::bitset<8>(i) << std::endl;
    // std::cout <<  std::bitset<8>(n) << std::endl;
    n = n&i;
    // std::cout <<  std::bitset<8>(n) << std::endl;
    std::cout << "n = " << n << std::endl;
    return 0;
}

// число n, где i-1 бит отличается
int diffi(UINT n, UINT i)
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

    std::cout << "n = " << n <<  std::endl;
    return 0;
}

