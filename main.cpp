#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;

int main() {

    cout << " ________.__                                  .__/\\           _____                       .__                \n"
                 " /  _____/|__| _______  _______    ____   ____ |__)/______    /     \\ _____    ____   _____|__| ____   ____   \n"
                 "/   \\  ___|  |/  _ \\  \\/ /\\__  \\  /    \\ /    \\|  |/  ___/   /  \\ /  \\\\__  \\  /    \\ /  ___/  |/  _ \\ /    \\  \n"
                 "\\    \\_\\  \\  (  <_> )   /  / __ \\|   |  \\   |  \\  |\\___ \\   /    Y    \\/ __ \\|   |  \\\\___ \\|  (  <_> )   |  \\ \n"
                 " \\______  /__|\\____/ \\_/  (____  /___|  /___|  /__/____  >  \\____|__  (____  /___|  /____  >__|\\____/|___|  / \n"
                 "        \\/                     \\/     \\/     \\/        \\/           \\/     \\/     \\/     \\/               \\/  "<< std::endl;

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
cout << "This will print if the game continues";
//creates the array that hold all the events
string eventArray[5] =
        {
                "YOU FOUND A CHEST", //if(Event = 1-5, cout "Will you open?"
                "YOU ARE ATTACKED BY AN ENEMY", //if (Event = 6-10, cout "Will you fight?"
                "HEAL UP",
                "ITEM PICK UP", //Strength 

        };
    return 0;
}
