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

string combat(int playerLocal[3], string monsterName, string monsterArrayLocal[14][3])
{

}

string rerollCalculation(int eventCounter[5], int randomArrayChoice, int roomNumber) { //useless dogshit
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
    string combatPhrases[17]
            {
                    "Oh no! A",
                    "Oh, CRAP! IT'S A",
                    "It’s a wild",
                    "Run for your life! It's",
                    "It's coming....It's",
                    "Jesus Christ it's Jason Bourne! Just kidding it's",
                    "It's ya boy",
                    "Wow! An epic battle with",
                    "An epic showdown is about to commence Between our hero and",
                    "Is that a new Pokemon? It's",
                    "Who's that Pokemon? It's",
                    "Let's get this bread! You're fighting",
                    "That's one ugly",
                    "It's not Chuck Norris, but it's",
                    "Oh why do you have to fight",
                    "Oh thank god, it's only",
                    "Peace, love, a"
            };
    string monsterArray[14][3] =
            {{"a Ghost",                                              "5", "5"},
             {"a Goblin",                                            "5", "5"},
             {"an Armor Knight",                                      "5", "5"},
             {"a Zombie",                                             "5", "5"},
             {"a Vampire",                                            "5", "5"},
             {"the Ghost of Stonewall Jackson",                         "5", "5"},
             {"the Ghost of David Baraona",                             "5", "5"},
             {"That crazy ex of yours",                             "5", "5"},
             {"Zack and Cody from the Suite Life of Zack and Cody", "5", "5"},
             {"Cory from Cory in the House",                        "5", "5"},
             {"a My Name Jeff Vine Compilation",        "5", "5"},
             {"Marge Simpson",                                      "5", "5"},
             {"Bernie Sanders",                                     "5", "5"},
             {"The Burger King Mascot",                             "5", "5"}};


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

            cout << eventArray[randomArrayChoice] << endl;
            if (eventArray[randomArrayChoice] == eventArray[1]) //Combat starter
            {
                monsterName = rng(14);
                monsterSpawner = monsterArray[monsterName][0];
                cout << combatPhrases[rng(18)];
                cout << " ";
                cout << monsterSpawner << endl;
                combat(player, monsterSpawner, monsterArray);


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
                cout << combatPhrases[rng(18)];
                cout << " ";
                cout << monsterSpawner << endl;
                combat(player, monsterSpawner, monsterArray);


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
                cout << combatPhrases[rng(18)];
                cout << " ";
                cout << monsterSpawner << endl;
                combat(player, monsterSpawner, monsterArray);


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


