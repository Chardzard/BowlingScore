/*
Parke
11/4/2022
This program scores a game of bowling :)
*/

#include <iostream>                                          // Input,Output

int main() {                                                 // Main driver for program
  const int NUM_PINS = 10;
  const int NUM_THROWS = 21;
  int scoresArray[NUM_THROWS];                               // Variable declarations followed by array declarations 
  int sumOfThrowsArray[NUM_PINS];

  for (int i = 0; i < NUM_THROWS; i++){                      // For loop to get all user values inputted into first array
    std::cin >> scoresArray[i];
  }
 
  int tempSum = 0;                                           // Counter variable along with temporary variable to hold final value that we will copy into our second array
  int j = 0;
  
  for (int i = 0; i < NUM_THROWS - 1; i++){                  // For loop to iterate through each item in our first array and perform proper scoring calculations on each value
    
    if (scoresArray[i] == 10){                               // If strike...
      tempSum += scoresArray[i] + scoresArray[i + 1] + scoresArray[i + 2];
      sumOfThrowsArray[j] = tempSum;      
    }

    else if (scoresArray[i] + scoresArray[i + 1] == 10){    // If spare
      tempSum += scoresArray[i] + scoresArray[i + 1] + scoresArray[i + 2];
      sumOfThrowsArray[j] = tempSum;
      i++;
    }

    else{                                                   // Otherwise... , also use j as counter here so as not to overlap with the values in first array 
      tempSum += scoresArray[i] + scoresArray[i + 1];
      sumOfThrowsArray[j] = tempSum;
      i++;
    }

    j++;
  }

  for (int i = 0; i < NUM_PINS; i++){                      // Final for loop to print each bowling frames score we computed and copied to second array to the console  
    std::cout << sumOfThrowsArray[i] << " ";
  }
  return 0;                                                // Successful program run 
}
