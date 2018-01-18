# Cryptarithm

Program based on this r/dailyprogrammer challenge post here:
https://www.reddit.com/r/dailyprogrammer/comments/7p5p2o/20180108_challenge_346_easy_cryptarithmetic_solver/

Code is written in C++

Summary:
This program seeks to solve cryptarithmic problems.  For example, SEND + MORE == MONEY evaluates to:
O = 0, M = 1, Y = 2, E = 5, N = 6, D = 7, R = 8, and S = 9

Current Progress:
-Created Word class that contains the word string, and can evaluate the value of the word based on a given key
-(Key is a standard 10 unit length, with each element containing a character.  A Cryptarithmic problem can only contain a range of 0-9 for each letter in each word)
