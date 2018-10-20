#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>

using std::cout; using std::cin; using std::endl; using std::string;

int rng(int n) {
    int max = n;

    int num = rand() % max;
    cout << num << endl;
    return num;

}

string rerollCalculation(int eventCounter[5], int randomArrayChoice, int roomNumber) {
    //int currentEvent = randomArrayChoice;
    if (eventCounter[randomArrayChoice] / roomNumber > rng(101)) {
        return "1";
    } else {
        return "2";
    }
}


int main() {
    //TODO maybe add a counter to recall it to get a new seed?
    srand(time(NULL));
    cout
            << " ________.__                                  .__/\\           _____                       .__                \n"
               " /  _____/|__| _______  _______    ____   ____ |__)/______    /     \\ _____    ____   _____|__| ____   ____   \n"
               "/   \\  ___|  |/  _ \\  \\/ /\\__  \\  /    \\ /    \\|  |/  ___/   /  \\ /  \\\\__  \\  /    \\ /  ___/  |/  _ \\ /    \\  \n"
               "\\    \\_\\  \\  (  <_> )   /  / __ \\|   |  \\   |  \\  |\\___ \\   /    Y    \\/ __ \\|   |  \\\\___ \\|  (  <_> )   |  \\ \n"
               " \\______  /__|\\____/ \\_/  (____  /___|  /___|  /__/____  >  \\____|__  (____  /___|  /____  >__|\\____/|___|  / \n"
               "        \\/                     \\/     \\/     \\/        \\/           \\/     \\/     \\/     \\/               \\/  "
            << std::endl;

    cout << endl;
    cout << "Press 1 to continue" << endl;

    string startGame;
    cin >> startGame;
    while (true) {
        if (startGame == "1") {
            //cout << "TODO";
            break;
        } else {

            cout << "Read the directions, asshole" << std::endl;
            cin >> startGame;
            // exit(0);
        }

    }
//cout << "This will print if the game continues";
//creates the array that hold all the events
    string eventArray[5] =
            {
                    "YOU FOUND A CHEST", //if(Event = 1-5, cout "Will you open?"
                    "YOU ARE ATTACKED BY AN ENEMY", //if (Event = 6-10, cout "Will you fight?"
                    "HEAL UP",
                    "ITEM PICK UP", //Strength determined by door and room level
                    "TODO Nothing is boring and boring is bad"
            };
//TODO code the actual game engine!
//Code for random numbers. Getting it from current time, genius!
    srand(time(0));

//counters for the room number and event handles

    int eventCounter[5] = {
            0,//0 CHEST COUNTER
            0,//1 COMBAT COUNTER
            0,//2 HEAL COUNTER
            0,//3 ITEM DROP COUNTER
            0 //4 REROLL COUNTER
    };
    int roomNum = 1;
    int randomArrayChoice;
    bool repeatRoom = false;
    string userPathChoice;
//TODO FIX THE REROLL CALCULATION AND CLEAN THIS UP
    while (true) {

        if (!repeatRoom) {
            cout << "What door are you using?";
            cin >> userPathChoice;
        }
        if (userPathChoice == "left") {
            randomArrayChoice = rand() % 5;
            if (rerollCalculation(eventCounter, randomArrayChoice, roomNum) == "1") {
                if (repeatRoom == false) {
                    repeatRoom = !repeatRoom;
                }
                cout << "Repeat event \n";
            } else {
                cout << eventArray[rand() % 5] + "\n";
                roomNum++;
                cout << "Room number ";
                cout << roomNum << endl;
            }
        }
        if (userPathChoice == "right") {
            randomArrayChoice = rand() % 5;
            if (rerollCalculation(eventCounter, randomArrayChoice, roomNum) == "1") {
                if (repeatRoom == false) {
                    repeatRoom = !repeatRoom;
                }
                cout << "Repeat event \n";
            } else {
                cout << eventArray[rand() % 5] + "\n";
                roomNum++;
                cout << "Room number ";
                cout << roomNum << endl;
            }

        }
        if (userPathChoice == "middle") {
            randomArrayChoice = rand() % 5;
            if (rerollCalculation(eventCounter, randomArrayChoice, roomNum) == "1") {
                if (repeatRoom == false) {
                    repeatRoom = !repeatRoom;
                }
                cout << "Repeat event \n";
            } else {
                cout << eventArray[rand() % 5] + "\n";
                roomNum++;
                cout << "Room number ";
                cout << roomNum << endl;
            }
        }

        if (userPathChoice != "left"
            && userPathChoice != "right"
            && userPathChoice != "center"
                ) {
            cout << "Wrong input" << endl;
        }

        if (userPathChoice == "close")
            break;
    }
    return 0;
}


