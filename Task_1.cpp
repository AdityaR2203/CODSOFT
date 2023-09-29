//------------------------------------ RANDOM NUMBER GUESSING PROGRAM ------------------------------------
#include <iostream>
#include<cstdlib>
#include<time.h>
using\namespace std;
int main()
{

    int guess, random;
    cout << "********************* Welcome to guess\number game ***************************\n\n"<< endl;
    char repeat = 'y';

    while (repeat == 'y')
    {

        srand(time(0));//used to genrate random staring point of the series each time.
        random = rand() % 10 + 1;//used to generate a series random\number upto 10.

        while (1)
        {

            cout << "Enter the guess\number from 1-10 you think --------";
            cin >> guess;
            cout << endl;
            if (random == guess)
            {
                cout << "Congratulations you guess correct\number     " << endl<<endl;
                break;
            }
            else if (guess > random)
            {
                cout << "Enter a Smaller\number " << endl<<endl;
            }
            else
            {
                cout << "Enter a Greater\number " << endl<<endl;
            }
        }
        cout << "Enter 'y' for play again and 'n' for exit the game" << endl;
        cin >> repeat;
    }
    cout<<"\nThank you for playing the game. ";
    return 0;
}
