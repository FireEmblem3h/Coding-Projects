// LuckySevens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
void LuckySevens()
void PlayUntilBroke();

using namespace std;
int main() {

    //LuckySevens();
    PlayUntilBroke();

    return 0;
}

void LuckySevens() {

    srand(time(0));

    //int money = getPositiveInt("Enter and amount of money: ");

}

void PlayUntilBroke() {

    int money, d1, d2, rolls = 0, maxMoney = 0, maxRolls = 0;
    char play;
    
    srand(time(0));

    cout << "Enter an amount of money (no dollar sign): ";
    cin >> money;

    while (money > 0) {

        // Roll dice
        d1 = rand() % 6 + 1;  
        d2 = rand() % 6 + 1;  
        rolls++;

        if (d1 + d2 == 7) { 
             money += 4; 

             if (money > maxMoney) {
                 maxMoney = money;
                 maxRolls = rolls;
             }
        }
        else {

            money -= 4; 
        }

    }

    cout << "It took " << rolls << " rolls till you ran out of money.\n";
    cout << "You should have quit after " << maxRolls << " when you had $" << maxMoney << endl;

}


