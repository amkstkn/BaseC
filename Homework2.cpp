#include <iostream>


int task1()

{

    short int a = 20000;
    int b = 10000;
    long long c = 100000000000;
    char d = 'F';
    bool e = true;
    float f = 100.123123;
    double g = 20666666666666666666677676960.25858758888888888888888888888888888888886769669698987979797986969689;

    return 0;

};

enum game { S, F, T, U, O, X };

int task23()

{

    game p1[3] = { S, F, T };
    game p2[3] = { U, O, X };
    std::cout << "First gamer - " << p1[2] << std::endl;
    std::cout << "Second gamer - " << p2[0] << std::endl;
    return 0;

};

struct gamebox

{
    short int boxsize;
    char symbol[2];
};


int task4()
{
    gamebox lowlevel = { 3, {'x','o'} };
    gamebox highlevel = { 5, {'g','t'} };
    return 0;
};


union fortask5union
{
    int day : 5;
    char metka : 1;
    float key;

};

struct fortask5bool

{

    unsigned short isInt : 1;
    unsigned short isFLoat : 1;
    unsigned short isChar : 1;

};


struct fortaskfull

{
    union fortask5union;
    struct fortask5bool;

};

int task5()
{
    fortask5union info;
    fortask5bool mybool;
    info.day = 5;
    mybool.isInt = 1;
    info.metka = 'F';
    mybool.isChar = 1;
    return 0;
};

int main()

{
    task1();
    task23();
    task4();
    task5();
    return 0;
};