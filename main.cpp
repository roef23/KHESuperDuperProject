#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>


using std::cout; using std::cin; using std::endl; using std::string;

bool contin(string s)
{
    if (s == "1")
    {
        return true;
    }
    if (s == "2")
    {
        return false;
    }
}

int rng(int n) {
    int max = n;

    int num = rand() % max;
   // cout << num << endl;
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
    //TODO 1 for figher 2 for mage 3 for random
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
    string eventArray[6] =
            {
                    "YOU FOUND A CHEST", //if(Event = 1-5, cout "Will you open?"
                    "YOU ARE ATTACKED BY AN ENEMY", //if (Event = 6-10, cout "Will you fight?"
                    "HEAL UP",
                    "ITEM PICK UP", //Strength determined by door and room level
                    "TRAP ROOM", //get hurt
                    "TODO Nothing is boring and boring is bad"
            };
    int player[3] =
            {
            100, //Health
            10, //Physical damage
            10 //Magic damage TODO
            };

    string monsterArray[14][3] =
            {{"Ghost",                                              "5", "5"},
             {"Goblins",                                            "5", "5"},
             {"Armor Knights",                                      "5", "5"},
             {"Zombie",                                             "5", "5"},
             {"Vampire",                                            "5", "5"},
             {"Ghost of Stonewall Jackson",                         "5", "5"},
             {"Ghost of David Baraona",                             "5", "5"},
             {"That crazy ex of yours",                             "5", "5"},
             {"Zack and Cody from the Suite Life of Zack and Cody", "5", "5"},
             {"Cory from Cory in the House",                        "5", "5"},
             {"Lois Griffin or just anyone from Family Guy",        "5", "5"},
             {"Marge Simpson",                                      "5", "5"},
             {"Bernie Sanders",                                     "5", "5"},
             {"The Burger King mascot",                             "5", "5"}};


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
    string monsterSpawner;
    int monsterName;
    int roomNum = 1;
    int randomArrayChoice;
    bool repeatRoom = false;
    string userPathChoice;
    string continCONST = "1";
//TODO FIX THE REROLL CALCULATION AND CLEAN THIS UP
    while (true) {

        if (contin("1")) {
            cout << "What door are you using?";
            cin >> userPathChoice;
        }
        if (userPathChoice == "left") {

            randomArrayChoice = rand() % 6;
            //if (rerollCalculation(eventCounter, randomArrayChoice, roomNum) == "1") {
                //if (repeatRoom == false) { //duplicate event handler
                    //repeatRoom = !repeatRoom;
               // }
             //  continCONST = "2";
           //     cout << "Repeat event \n";

           // } else {
          //      continCONST = "1";
                cout << eventArray[randomArrayChoice] << endl;
                if (eventArray[randomArrayChoice] == eventArray[1]) //Combat starter
                {
                    monsterName = rng(14);
                    monsterSpawner = monsterArray[monsterName][0];
                    cout << monsterSpawner << endl;

                }
                roomNum++;
                cout << "Room number ";
                cout << roomNum << endl;
            //}
        }
        if (userPathChoice == "right") {
            randomArrayChoice = rand() % 6;

            cout << eventArray[randomArrayChoice] << endl;
            if (eventArray[randomArrayChoice] == eventArray[1]) //Combat starter
            {
                monsterName = rng(14);
                monsterSpawner = monsterArray[monsterName][0];
                cout << monsterSpawner << endl;

            }
            roomNum++;
            cout << "Room number ";
            cout << roomNum << endl;
            //}

        }
        if (userPathChoice == "middle") {
            randomArrayChoice = rand() % 6;

            cout << eventArray[randomArrayChoice] << endl;
            if (eventArray[randomArrayChoice] == eventArray[1]) //Combat starter
            {
                monsterName = rng(14);
                monsterSpawner = monsterArray[monsterName][0];
                cout << monsterSpawner << endl;

            }
            roomNum++;
            cout << "Room number ";
            cout << roomNum << endl;
            //}
        }

        if (userPathChoice != "left"
            && userPathChoice != "right"
            && userPathChoice != "middle"
                ) {
            cout << "Wrong input" << endl;
        }

        if (userPathChoice == "close")
            break;
    }
    return 0;
}


