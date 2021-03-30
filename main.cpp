#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <math.h>
#include <cmath>
#include <fstream>
using namespace std;

int main() {

  // int numeri, range, offset = 0;

  int numeri[7] = {100, 1000, 5000, 20000, 50000, 1000000, 1000000};
  int range [8] = {10, 50, 100, 500, 1000, 10000, 50000, 100000};
  int offset[3] = {100, 500, 1000};

  int sizeNumeri = sizeof(numeri) / sizeof(numeri[0]);
  int sizeRange = sizeof(range) / sizeof(range[0]);
  int sizeOffset = sizeof(offset) / sizeof(offset[0]);

  for (int a = 0; a < sizeNumeri; a++){
    int numeriReal = numeri[a];
    for (int b = 0; b < sizeRange; b++) {
      int rangeReal = range[b];
      for (int c = 0; c < sizeOffset; c++){
        int offsetReal = offset[c];

        ifstream checkFile("./csv/pi" + to_string(numeriReal) + "-" + to_string(rangeReal) + "-" + to_string(offsetReal) + ".csv");

        if(checkFile) {
          cout << "";
        } else {
          ofstream myFile("./csv/pi" + to_string(numeriReal) + "-" + to_string(rangeReal) + "-" + to_string(offsetReal) + ".csv");
          myFile << "Iterazione" << "," << "Numero\n";

          srand(time(NULL));
          int n;

          for(int i = 0; i < numeriReal; i++){
            n = rand() % rangeReal + offsetReal;
            myFile << i + 1 << "," << n << "\n";
          };

          myFile.close();
        }  
      };
    };
  };
}