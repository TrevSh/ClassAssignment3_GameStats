#include <iostream>

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;     //True or false

    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;

    double engineTemp = 6572.89;

    std::cout << "\nscore: " << score << '\n';
    std::cout << "distance: " << distance << '\n';
    std::cout << "playAgain: " << playAgain << '\n';
    //Skipping printing the bool as you dont print bool values generally
    std::cout << "lives: " << lives << '\n';
    std::cout << "aliensKilled: " << aliensKilled << '\n';
    std::cout << "engineTemp: " << engineTemp << '\n';

    int fuel;
    std::cout << "\nHow much fuel would you like?";
    std::cin >> fuel;
    std::cout << "fuel: " << fuel << '\n';

    typedef unsigned short int ushort;
    ushort bonus = 10;
    std::cout << "\nbonus: " << bonus << '\n';
}