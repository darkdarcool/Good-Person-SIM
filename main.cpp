#include <unistd.h>
#include "util.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
void clearf() {
    std::cout << "\x1B[2J\x1B[H";
}
void challengeONE() {
    typewriter("Hello contestant. Here is the first challenge. You will have to answer a seires of questions to earn tokens. ", 50);
    usleep(2 * microsecond);
    clearf();
    typewriter("While you are beushing your teeth, do you...", 50);
    std::cout << "[1] Leave the water running\n";
    std::cout << "[2] Turn it off then back on at the end\n";
    typewriter("Which one? [1/2]\n", 50);
    std::string << challengeONEplayerINPUT;
    std::cin << challengeONEplayerINPUT;
    if (challengeONEplayerINPUT == "1") {
        typewriter("That isn't good. You get NO coins.", 50);
        coins = 0;
    }
    else if (challengeONEplayerINPUT "2") {
        typewriter("YEAH!! You did the right thing! You get one coin. ", 50);
        coins = 1;
    }
}
int main() {
  unsigned int microsecond = 1000000; 
  char normal[] = "\x1b[0;39m";
  char black[] = "\x1b[0;30m";
  char red[] = { 0x1b, '[', '0', ';', '3', '1', 'm', 0    };
  char green[] = { 0x1b, '[', '0', ';', '3', '2', 'm', 0  };
  char yellow[] = { 0x1b, '[', '0', ';', '3', '3', 'm', 0 };
  char blue[] = { 0x1b, '[', '0', ';', '3', '4', 'm', 0   };
  char purple[] = { 0x1b, '[', '0', ';', '3', '5', 'm', 0 };
  char cyan[] = { 0x1b, '[', '0', ';', '3', '6', 'm', 0   };
  char Lgray[] = { 0x1b, '[', '0', ';', '3', '7', 'm', 0  };
  char Dgray[] = { 0x1b, '[', '0', ';', '3', '8', 'm', 0  };
  char Bred[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0   };
  clearf();
  std::cout << cyan;
  typewriter("What is your name?\n", 50);
  std::cout << normal;
  std::string name;
  std::cin >> name;
  std::cout << cyan;
  typewriter("Hello " + name, 50);
  usleep(2 * microsecond);
  typewriter("\nToday we will be testing you by seeing how good of a person you are.\nThe more coins, the more that you are a good person.", 50);
  usleep(2 * microsecond);
  clearf();
  typewriter("Here is the first challenge.", 50);
  usleep(2 * microsecond);
  clearf();
  challengeONE();
  usleep(2 * microsecond);
  clearf();
  typewriter("You know have " + std::to_string(coins) + " coins." 50);
}
