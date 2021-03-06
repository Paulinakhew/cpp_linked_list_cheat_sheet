//
// Created by Paulina Khew on 2020-02-18.
//

#ifndef CPP_LINKED_LISTS_RECURSIVE_FUNCTIONS_HPP
#define CPP_LINKED_LISTS_RECURSIVE_FUNCTIONS_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

void tower_of_hanoi(int n, string starting, string destination, string interim);
int sum_of_squares_bottom_up(int a, int b);
int sum_of_squares_top_down(int a, int b);
void print_vector(vector<int> numbers, int index);
void to_lower_string(string& my_string, int index);
void print_hex_from_dec(int n);
void print_reverse_int(int my_number);
void print_individual_digits(int n);
int compute_sum_of_series(int n);
void print_series_of_squares(int n);
int largest_int_divisor(int number, int divisor);
bool check_valid_palindrome(string my_string);
bool is_prime_number(int n, int divisor);
bool is_prime_number(int n);
int factorial(int n);
int largest_int_divisor(int number);
int convert_dec_to_binary(int decimal);
int convert_binary_to_dec(int binary);
int bin2dec(string binary);
string dec2bin(int decimal);
int ascii2int(string digits);
string int2ascii(int my_int);
vector<int> recursive_selection_sort(vector<int> numbers, int n);
int find_max(vector<int> numbers, int n);



#endif //CPP_LINKED_LISTS_RECURSIVE_FUNCTIONS_HPP
