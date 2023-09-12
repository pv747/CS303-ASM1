# CS303-ASM1

## Upon running the Program, a file named "data.txt" will be loaded into an array presented with four different functions:
1) A function to check if a certain integer exists in the array if the number is present return the
index where the number is present.
2) A function that can modify the value of an integer when called with the index of the integer in
the array and return the new value and old value back to the user.
3) A function that adds a new integer to the end of the array
4) A function which intakes an index of an array and replaces the value with either 0 or removes
the integer altogether.

The user will select which function to use by entering an integer ranging from 1 to 4.

## 1.) Search target function:
Upon selecting 1, the user will be prompted with text asking user for a value they would like to search. If the user enters an invalid input, they will be prompted to reenter the search value.

If the value is found, the program will provide the index of user-entered target.

## 2.) Modify value function:
Upon selecting 2, the user will be prompted with text asking the user for an index they would like to modify. If the user enters an invalid input, they will be prompted to reenter the index value.

After choosing an index, the user will be prompted with text asking the user for a value they would like to to have at specified index. If the user enters an invalid input, they will be prompted to reenter the search value.

If the index is out of bounds the program cannot modify the value at specified index. Therefore, the program will throw an error and prompt the user to reenter the index and number they would like to change to.

After the program successfully modified a number in the array, the program will print the new array to the user.
## 3.) Add value function:
Upon selecting 3, the user will be prompted with text asking the user for a value they would like to add to the very end of the array. If the user enters an invalid input, an error message will be printed indicating such and asking the user for reentry.

After the program successfully modified a number in the array, the program will print the new array to the user.

## 4. ) Set to 0 function:

Upon selecting 4, the user will be prompted with text asking the user to specify an index in the array they would like to set to 0. if the user entry is invalid or out of bounds, an error will be printed as such and they wil be prompted to reenter the index value.
