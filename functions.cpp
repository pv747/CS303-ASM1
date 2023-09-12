#include "functions.h"

/*
  Finds the index of a target integer in an array.

  @param target The integer to search for.
  @param nums   The integer array to search within.
  @param len    The length of the integer array.

  @pre nums is a valid integer array of length at least len.
  @pre len is a non-negative integer.

  @return The index of the first occurrence of target in nums. If not found,
  returns -1.
 */
int find_num(int target, int nums[], int len) {
  for (int i = 0; i < len; i++) {
    if (nums[i] == target)
      return i;
  }
  return -1;
}

/*
  Modifies the value at a specific index in an integer array.

  @param nums The integer array to modify.
  @param len  The length of the integer array.
  @param i    The index at which to modify the value.
  @param val  The new value to assign at the specified index.

  @pre nums is a valid integer array of length at least len.
  @pre len is a non-negative integer.
  @pre i is a valid index within the bounds of the array (0 <= i < len).

  @post The value at index i in nums is updated to val. Prints the old and new
  values.
*/
void modify_val(int nums[], int len, int i, int val) {
  // Handle an index that does not exist in our array
  if (i >= len || i < 0)
    throw runtime_error("Error: Index out of bounds. ");

  int prevVal = nums[i];
  nums[i] = val;
  cout << "New Value: " << val << endl;
  cout << "Old Value: " << prevVal << endl;
}

/*
  Adds a new integer to the end of an integer array.

  @param nums The integer array to which the new value will be added.
  @param len  The length of the integer array (updated to reflect the new
  length).
  @param val  The new integer value to add to the end of the array.

  @pre nums is a valid integer array of length at least len.
  @pre len is a non-negative integer.

  @post The integer val is added to the end of nums, and len is increased by
  one.
*/
void add_val(int nums[], int &len, int val) {
  int *temp = new int[len + 1];

  copy(nums, nums + len, temp);

  delete[] temp;

  nums[len] = val;
  len = len + 1;
}

/*
  Sets the value at a specific index in an integer array to zero.

  @param nums The integer array in which to remove a value.
  @param len  The length of the integer array.
  @param i    The index at which to set the value to zero.

  @pre nums is a valid integer array of length at least len.
  @pre len is a non-negative integer.
  @pre i is a valid index within the bounds of the array (0 <= i < len).

  @post The value at index i in nums is set to zero.
*/
void remove_val(int nums[], int len, int i) {
  if (i >= len || i < 0)
    throw runtime_error("Error: Index out of bouds. ");
  nums[i] = 0;
}
