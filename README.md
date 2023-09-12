# CS303-ASM1

## data.txt file specifications:
The filename should be "data.txt".
Every integer in the file up to 100 will be loaded into the array and split by the " " value.

## Upon running the Program, a file named "data.txt" will be loaded into an array presented with four different functions:
1) A function to check if a certain integer exists in the array if the number is present return the
index where the number is present.
2) A function that can modify the value of an integer when called with the index of the integer in
the array and return the new value and old value back to the user.
3) A function that adds a new integer to the end of the array
4) A function which intakes an index of an array and replaces the value with either 0 or removes
the integer altogether.


The user will select which function to use by entering an integer ranging from 1 to 4.
![alt text](https://github.com/pv747/CS303-ASM1/blob/e38901fa3ce69a7d7829bc04d3f29fc9c1fc9752/Screenshots/Select_functionality.png)

## 1.) Search target function:
Upon selecting 1, the user will be prompted with text asking user for a value they would like to search. If the user enters an invalid input(non-integer), they will be prompted to reenter the search value.

If the value is found, the program will provide the index of user-entered target.

![alt text](https://github.com/pv747/CS303-ASM1/blob/e38901fa3ce69a7d7829bc04d3f29fc9c1fc9752/Screenshots/Search_target.png)

## 2.) Modify value function:
Upon selecting 2, the user will be prompted with text asking the user for an index they would like to modify. If the user enters an invalid input(non-integer), they will be prompted to reenter the index value.

After choosing an index, the user will be prompted with text asking the user for a value they would like to to have at specified index. If the user enters an invalid input(non-integer), they will be prompted to reenter the search value.

If the index is out of bounds the program cannot modify the value at specified index. Therefore, the program will throw an error and prompt the user to reenter the index and number they would like to change to.
![alt text](https://github.com/pv747/CS303-ASM1/blob/e38901fa3ce69a7d7829bc04d3f29fc9c1fc9752/Screenshots/Index_out_of_bounds_err.png)

After the program successfully modified a number in the array, the program will print the old value and the new value as well as the new array to the user.
![alt text](https://github.com/pv747/CS303-ASM1/blob/e38901fa3ce69a7d7829bc04d3f29fc9c1fc9752/Screenshots/Modify_val.png)
## 3.) Add value function:
Upon selecting 3, the user will be prompted with text asking the user for a value they would like to add to the very end of the array. If the user enters an invalid input(non-integer), or the program could not add the value for any reason, an error message will be printed indicating such and asking the user for reentry.
![alt text](https://github.com/pv747/CS303-ASM1/blob/624350bc36d6d281b1aaa64e3c27a22fc81e3d34/Screenshots/non_integer_value_error.png)

After the program successfully modified a number in the array, the program will print the new array to the user.
![alt text](https://github.com/pv747/CS303-ASM1/blob/e38901fa3ce69a7d7829bc04d3f29fc9c1fc9752/Screenshots/Add_val.png)
## 4. ) Set to 0 function:
Upon selecting 4, the user will be prompted with text asking the user to specify an index in the array they would like to set to 0. if the user entry is invalid(non-integer) or out of bounds, an error will be printed as such and they wil be prompted to reenter the index value.
![alt text](https://github.com/pv747/CS303-ASM1/blob/e38901fa3ce69a7d7829bc04d3f29fc9c1fc9752/Screenshots/Remove_val.png)
