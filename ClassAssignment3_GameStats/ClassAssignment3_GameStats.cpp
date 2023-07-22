#include <iostream>

int main()
{
    //Declarations. A variable's name is an Identifier.
    int score;
    double distance;                    //Double precision decimal floating(float) numbers
    char playAgain;                     //Single CHARacter. Can store 128 ASCII(American Standard Code for Information Interchange) character values.
    bool shieldsUp;                     //True or false

    short lives, aliensKilled;          //"short" reduced the number of values a variable can hold and reduces stprage need. "long" increases it.
    //Assignments (=)
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    //Declaration and Assignment
    double engineTemp = 6572.89;

    std::cout << "\nscore: " << score << '\n';          //'\n' = New Line
    std::cout << "distance: " << distance << '\n';
    std::cout << "playAgain: " << playAgain << '\n';
    //Skipping printing the bool as you dont print bool values generally
    std::cout << "lives: " << lives << '\n';
    std::cout << "aliensKilled: " << aliensKilled << '\n';
    std::cout << "engineTemp: " << engineTemp << '\n';

    int fuel;
    std::cout << "\nHow much fuel would you like?";     //Takes User Input. Program will wait for user.
    std::cin >> fuel;                                   //Stores User Input in variable
    std::cout << "fuel: " << fuel << '\n';


    //typedef is used to create shorter names for types with longer names.
    typedef unsigned short int ushort;//A signed int means a variable can store both positive and negative values while unsigned only accpets positive values. Neither affact the number of values the variable can hold
    ushort bonus = 10;
    std::cout << "\nbonus: " << bonus << '\n';

    return 0;


}