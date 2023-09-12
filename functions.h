#pragma once
#include <iostream>

using namespace std;

int find_num(int target, int nums[], int len);

void modify_val(int nums[], int len, int i, int val);

void add_val(int nums[], int &len, int val);

void remove_val(int nums[], int len, int i);
