#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class Player
{
 private:
   string name;
   int score;
 public:
   Player();
   Player(int newScore, string newName) { 
    this->name = newName;
    this->score = newScore;
   }
   void setName(string newName) { this->name = newName; }
   void setScore(int newScore) { this->score = newScore; }
   string getName() { return name; }
   int getScore() { return score; }
  };

int main() {

  vector<Player> players;
  int option,
      playerScore,
      maxPlayers = 10;
  string playerName;
  
  do {
    if (players.size() == 0) {
      cout << "\nThe list of players is currently empty." << endl;
    }
    else {
      // Note: The list of players and their scores are printed everytime before the menu of options is given.
      cout << "\n" << left << setw(10) << "Player" << setw(10) << "Score" << endl;
      for (int i = 0; i < players.size(); i++) {
        cout << left << setw(10) << players[i].getName() << setw(10) << players[i].getScore() << endl;
      }
    }

    cout << "\nWhat would you like to do?" << endl << 
            "1: Add a new player and their score." << endl <<
            "2: Remove a player and their score." << endl <<
            "3: Enter a player's name and view their score." << endl <<
            "4: Exit." << endl <<
            "Option selection: ";
    cin >> option;

    while (option < 1 || option > 4) {
      cout << "Please enter a valid selction (option 1, 2, 3, or 4): ";
      cin >> option;
    }

    switch(option) {
      case 1: {
        if (players.size() >= maxPlayers) {
          cout << "\nThe list of players is full. To add a player, remove a player first." << endl;
          break;
        }
        else {
          cout << "\nEnter the name of the player: ";
          cin >> playerName;
          transform(playerName.begin(), playerName.end(), playerName.begin(), ::toupper);
          cout << "Enter the players score: ";
          cin >> playerScore;
          Player newPlayer(playerScore, playerName);
          newPlayer.setName(playerName);
          newPlayer.setScore(playerScore);
          players.push_back(newPlayer);
        }
        break;
      }
      case 2: {
        cout << "\nEnter the name of the player to remove: ";
        cin >> playerName;
        transform(playerName.begin(), playerName.end(), playerName.begin(), ::toupper);
        int placeholder = -1;
        for (int i = 0; i < players.size(); i++) {
          if (playerName == players[i].getName()) {
            placeholder = 0;
            players.erase(players.begin()+i);
            cout << "Player " << playerName << " has been removed." << endl;
            break;
          }
        }
        if (placeholder == -1) {
            cout << "Player " << playerName << " is not in the list of players." << endl;
          }
        break;
      }
      case 3: {
        cout << "\nEnter the name of a player to view their score: ";
        cin >> playerName;
        transform(playerName.begin(), playerName.end(), playerName.begin(), ::toupper);
          for (int i = 0; i < players.size(); i++) {
            if (playerName == players[i].getName()) {
              cout << "Player " << playerName << " has a score of " << players[i].getScore() << "." << endl;
              break;
            }
            if ((i == players.size()-1) && (playerName != players[i].getName())) {
              cout << "Player " << playerName << " is not in the list of players." << endl;
            }
          }
        break;
      }
    }
  }
  while (option != 4);

  return 0;
}


