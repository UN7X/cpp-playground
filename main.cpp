#include <iostream>
#include <string>

using namespace std;

/*

 █     █░ ██▓▄▄▄█████▓ ██░ ██ ▓█████  ██▀███   ██▓ ███▄    █   ▄████     ██░ ██ ▓█████  ██▓  ▄████  ██░ ██ ▄▄▄█████▓  ██████ \n
▓█░ █ ░█░▓██▒▓  ██▒ ▓▒▓██░ ██▒▓█   ▀ ▓██ ▒ ██▒▓██▒ ██ ▀█   █  ██▒ ▀█▒   ▓██░ ██▒▓█   ▀ ▓██▒ ██▒ ▀█▒▓██░ ██▒▓  ██▒ ▓▒▒██    ▒ \n
▒█░ █ ░█ ▒██▒▒ ▓██░ ▒░▒██▀▀██░▒███   ▓██ ░▄█ ▒▒██▒▓██  ▀█ ██▒▒██░▄▄▄░   ▒██▀▀██░▒███   ▒██▒▒██░▄▄▄░▒██▀▀██░▒ ▓██░ ▒░░ ▓██▄   \n
░█░ █ ░█ ░██░░ ▓██▓ ░ ░▓█ ░██ ▒▓█  ▄ ▒██▀▀█▄  ░██░▓██▒  ▐▌██▒░▓█  ██▓   ░▓█ ░██ ▒▓█  ▄ ░██░░▓█  ██▓░▓█ ░██ ░ ▓██▓ ░   ▒   ██▒\n
░░██▒██▓ ░██░  ▒██▒ ░ ░▓█▒░██▓░▒████▒░██▓ ▒██▒░██░▒██░   ▓██░░▒▓███▀▒   ░▓█▒░██▓░▒████▒░██░░▒▓███▀▒░▓█▒░██▓  ▒██▒ ░ ▒██████▒▒\n
░ ▓░▒ ▒  ░▓    ▒ ░░    ▒ ░░▒░▒░░ ▒░ ░░ ▒▓ ░▒▓░░▓  ░ ▒░   ▒ ▒  ░▒   ▒     ▒ ░░▒░▒░░ ▒░ ░░▓   ░▒   ▒  ▒ ░░▒░▒  ▒ ░░   ▒ ▒▓▒ ▒ ░\n
  ▒ ░ ░   ▒ ░    ░     ▒ ░▒░ ░ ░ ░  ░  ░▒ ░ ▒░ ▒ ░░ ░░   ░ ▒░  ░   ░     ▒ ░▒░ ░ ░ ░  ░ ▒ ░  ░   ░  ▒ ░▒░ ░    ░    ░ ░▒  ░ ░\n
  ░   ░   ▒ ░  ░       ░  ░░ ░   ░     ░░   ░  ▒ ░   ░   ░ ░ ░ ░   ░     ░  ░░ ░   ░    ▒ ░░ ░   ░  ░  ░░ ░  ░      ░  ░  ░  \n
    ░     ░            ░  ░  ░   ░  ░   ░      ░           ░       ░     ░  ░  ░   ░  ░ ░        ░  ░  ░  ░               ░  \n
                                                                                                                             \n

Withering Heights is a CYOA Horror game where you wake up on top of a creepy tower with no memory of how you got there.
You have to get down to the bottomost floor, as a mysterious creature chases you, and hunts you down.
Use items you find on each floor to help you escape, and avoid the creature at all costs!
Find hidden exits, and solve puzzles to unlock new areas of the tower. 

---

notes:
- This is going to be a small CYOA text adventure game written in C++.
- The game will feature multiple endings based on the player's choices.
- The game will have a horror theme, with creepy descriptions and suspenseful moments.

(the player can either use stairs to safely, but slowly get down to the next floor, which allows the monster to get near aka have a higher chance of appearing, or
they can use the hole in the floor, which will damage them, but let them get down faster.)
(Start) -> Init rounds_remaining var to 10 -> [ RNG: 1/3 | 1-2: Stairs are on the floor 3: There is a hole + stairs on the floor] 
-> [ RNG: 1-5 | 1-4: Nothing 5: A random item (further RNG)] -> {IF Item: [ RNG: 1/4 | 1: A baseball bat 2: A bandage 3: An energy drink 4: Nothing] ELSE: Nothing} 
-> Next floor (rounds_remaining -= 1) -> [ RNG: 1/6 | 1: Monster catches up 2-6: Nothing ] -> {IF MonsterIsHere AND UserHasAnyWeapon: [ RNG: 1/7 | 1: Monster unaffected; user dies 2-7: Monster Stunned; safely move on] ELSE: UserDies() }
-> [IF rounds_remaining == 0: UserWins() ELSE: Nextfloor() ]
*/

void clear() {
  system("clear||cls");
}

int main() {
    cout << "Initiating preliminary setup..." << endl;
    int remaining_rounds = 10;
    int health = 100;
    int input = NULL;
    clear();
    cout << "Setup complete. \n\nWelcome to" << endl;
titlescreen:
    cout << " █     █░ ██▓▄▄██████▓ ██░ ██ ▓█████  ██▀███   ██▓ ███▄    █   ▄████     ██░ ██ ▓█████  ██▓  ▄████  ██░ ██ ▄▄▄█████▓  ██████ \n";
    cout << "▓█░ █ ░█░▓██▒▓  ██▒ ▓▒▓██░ ██▒▓█   ▀ ▓██ ▒ ██▒▓██▒ ██ ▀█   █  ██▒ ▀█▒   ▓██░ ██▒▓█   ▀ ▓██▒ ██▒ ▀█▒▓██░ ██▒▓  ██▒ ▓▒▒██    ▒ \n";
    cout << "▒█░ █ ░█ ▒██▒▒ ▓██░ ▒░▒██▀▀██░▒███   ▓██ ░▄█ ▒▒██▒▓██  ▀█ ██▒▒██░▄▄▄░   ▒██▀▀██░▒███   ▒██▒▒██░▄▄▄░▒██▀▀██░▒ ▓██░ ▒░░ ▓██▄   \n";
    cout << "░█░ █ ░█ ░██░░ ▓██▓ ░ ░▓█ ░██ ▒▓█  ▄ ▒██▀▀█▄  ░██░▓██▒  ▐▌██▒░▓█  ██▓   ░▓█ ░██ ▒▓█  ▄ ░██░░▓█  ██▓░▓█ ░██ ░ ▓██▓ ░   ▒   ██▒\n";
    cout << "░░██▒██▓ ░██░  ▒██▒ ░ ░▓█▒░██▓░▒████▒░██▓ ▒██▒░██░▒██░   ▓██░░▒▓███▀▒   ░▓█▒░██▓░▒████▒░██░░▒▓███▀▒░▓█▒░██▓  ▒██▒ ░ ▒██████▒▒\n";
    cout << "░ ▓░▒ ▒  ░▓    ▒ ░░    ▒ ░░▒░▒░░ ▒░ ░░ ▒▓ ░▒▓░░▓  ░ ▒░   ▒ ▒  ░▒   ▒     ▒ ░░▒░▒░░ ▒░ ░░▓   ░▒   ▒  ▒ ░░▒░▒  ▒ ░░   ▒ ▒▓▒ ▒ ░\n";
    cout << "  ▒ ░ ░   ▒ ░    ░     ▒ ░▒░ ░ ░ ░  ░  ░▒ ░ ▒░ ▒ ░░ ░░   ░ ▒░  ░   ░     ▒ ░▒░ ░ ░ ░  ░ ▒ ░  ░   ░  ▒ ░▒░ ░    ░    ░ ░▒  ░ ░\n";
    cout << "  ░   ░   ▒ ░  ░       ░  ░░ ░   ░     ░░   ░  ▒ ░   ░   ░ ░ ░ ░   ░     ░  ░░ ░   ░    ▒ ░░ ░   ░  ░  ░░ ░  ░      ░  ░  ░  \n";
    cout << "    ░     ░            ░  ░  ░   ░  ░   ░      ░           ░       ░     ░  ░  ░   ░  ░ ░        ░  ░  ░  ░               ░  \n";
    cout << "                                                                                                                             \n\n\n";
    
    cout << "[1] Play [2] Settings  [3] Credits  [4] Exit\n\n>";
    cin >> input;
    switch (input) {
      case 1:
      case 2:
      case 3:
        cout << "Created by Andres B | AP (very boring) intro to Computer Science | October 2025 | on Arch Linux, baby";
        cin >> input;
        input = NULL;
        goto titlescreen;
        break;
      case 4:
        return 0;
      default:
        cout << "Please enter a valid option";
    }
    return 0;
}