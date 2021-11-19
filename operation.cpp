/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */

int op(char operate){

    if (operate == '+') {
        return 1;
    }
    else if (operate == '-') {
        return 2;
    }
    else if (operate == '*') {
        return 3;
    }
    else if (operate == '/') {
        return 4;
    }
    else
        return 5;

}
