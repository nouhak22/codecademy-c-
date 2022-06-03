//rock,paper,scissors,lizard,spock. These are the new combinations of the classic rock paper scissors game and this program will be able to let you play this new version.

#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));

  int computer =rand() % 5+1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard Spock!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🤖\n";

  std::cout << "shoot!\n ";

  std::cin >> user;

  if (user == 1 && computer == 1 || user == 2 && computer == 2 || user == 3 && computer == 3 || user == 4 && computer == 4 || user == 5 && computer == 5) {
    std::cout << "It's a tie!\n";
  }
  else if (user == 1 && computer == 2 || 5 || user == 2 && computer == 3 || 4 || user == 3 && computer == 5 || 1 || user == 4 && computer == 1 || 3 || user == 5 && computer == 4 || 2) {
    std::cout << "You lost!\n";
  }
  else if (user == 1 && computer == 4 || 3 || user == 2 && computer == 1 || 5 || user == 3 && computer == 2 || 4 || user == 4 && computer == 5 || 2 || user == 5 && computer == 3 || 1) {
    std::cout << "You Won!\n";
  }
}