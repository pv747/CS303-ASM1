#include "functions.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream inF;
  inF.open("data.txt");

  // Check if file is open
  if (!inF.is_open()) {
    cout << "Unable to open data.txt file";
    return -1;
  }

  int len = 100;
  int *nums = new int[len];

  for (int i = 0; i < 100; i++) {
    int val;
    inF >> val;
    nums[i] = val;
  }

  int opt;

  cout << "data.txt file loaded, Choose from the following functions: \n1.) "
          "Search for number in the array \n2.) Modify a value in the array "
          "\n3.) Add a new integer to the array \n4.) Remove an integer in the "
          "array\n\nOptions(1, 2, 3, 4): ";
  cin >> opt;

  // Catches invalid input from user and prompts reentry
  while (cin.fail() || (opt > 4 || opt < 1)) {
    cin.clear(); // Clears faulty entries
    cin.ignore(256, '\n');
    // prompt reentry
    cout
        << "Invalid option. Please read carefully and try again (1, 2, 3, 4): ";
    cin >> opt;
  }
  // Search Function
  if (opt == 1) {
    int val;
    cout << "Enter a search target: ";
    cin >> val;

    int index = find_num(val, nums, len);

    if (index >= 0)
      cout << "The index of integer " << val << " is: " << index << endl;
    else
      cout << "The integer " << val << " does not exist in the array." << endl;
  }
  // Modify Function
  else if (opt == 2) {
    // This loop while only break if modify_val is ran without any exceptions.
    while (true) {
      int index;
      int val;
      cout << "Enter an index you would like to modify: ";
      cin >> index;
      cout << "Enter the desired value at index " << index << ": ";
      cin >> val;
      try {
        modify_val(nums, len, index, val);
        break;
      } catch (runtime_error e) {
        cout << e.what();
      }
    }
  }
  // Add to End Function
  else if (opt == 3) {
    int val;
    cout << "Enter an integer you would like to add to the end of the array: ";
    cin >> val;

    // Catches invalid input from user and prompts reentry
    while (cin.fail()) {
      cin.clear(); // Clears faulty entries
      cin.ignore(256, '\n');

      // prompt reentry
      cout << "Error: Input was not an integer. Enter an integer you would "
              "like to add to the end of the array:  ";
      cin >> val;
    }

    add_val(nums, len, val);
  }
  // Set to 0 Function
  else if (opt == 4) {
    int index;
    // This loop while only break if remove_val is ran without any exceptions.
    while (true) {
      cout << "Enter the index you would like to set to 0: ";
      cin >> index;

      while (cin.fail()) {
        cin.clear(); // Clears faulty entries
        cin.ignore(256, '\n');
        // prompt reentry
        cout << "Error: Input was not an integer. Enter an integer you would "
                "like to add to the end of the array:  ";
        cin >> index;
      }

      try {
        remove_val(nums, len, index);
        break;
      } catch (runtime_error e) {
        cout << e.what();
      }
    }
  }

  // If the option changed the array, print the updated array to the user.
  if (opt != 1) {
    cout << "\nYour current array is: " << endl;
    for (int i = 0; i < len; i++) {
      cout << nums[i] << " ";
    }
    cout << endl;
  }
}