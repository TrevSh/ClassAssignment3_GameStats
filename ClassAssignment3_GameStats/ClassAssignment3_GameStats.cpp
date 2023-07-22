#include <iostream>

int main()
{
    //Declarations. A variable's name is an Identifier.
    int score;
    const int ALIEN_POINTS = 150;       //const makes a variable unchangeable. Usually written in all uppercase for easy readability.
    double distance;                    //Double precision decimal floating(float) numbers
    char playAgain;                     //Single CHARacter. Can store 128 ASCII(American Standard Code for Information Interchange) character values.
    bool shieldsUp;                     //True or false

    enum difficulty { NOVICE, EASY, NORMAL, HARD, YOUWILLDIE };     //An enum is a set of unsigned int constants called enumerators. Usually related.
    difficulty mydifficulty = EASY;                                 //An enum can be a type. In the case, the variable is set to EASY(or 1).

    enum shipCosts{FIGHTER_COST = 25,BOMBER_COST, MILLENIUM_FALCON = 150};     //An enum can be assigned values on declaration. Unassigned enums get the value of the last enumerator plus 1.
    shipCosts myShipCost = BOMBER_COST;                                        //So BOMBER_COST will be 26.
    MILLENIUM_FALCON - myShipCost;                                             //The cost of Upgrading a ship to the next might look something like this.



    short lives, aliensKilled;          //"short" reduced the number of values a variable can hold and reduces stprage need. "long" increases it.
    //Assignments (=)
    aliensKilled = 10;
    score = aliensKilled * ALIEN_POINTS;//Each alien killed is worth 150 or ALIEN_POINTS. The value of ALIEN_POINTS cannot be altered outside of modifying the variable.
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    //Declaration and Assignment
    double engineTemp = 6572.89;
    std::cout << "\nscore: " << score << '\n';          //'\n' = New Line

    //Adding 100 to the score, changing the value
    score = score += 100;                               //"a mathematical operator followed by a "=" means "add/sub/etc from the current value 
    std::cout << "\nscore: " << score << '\n';

    score++;                                            //++ or -- adds/subtracts the value by 1. Can be a prefix or suffix, which affects when it will apply the operation
    std::cout << "\nscore: " << score << '\n';          



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