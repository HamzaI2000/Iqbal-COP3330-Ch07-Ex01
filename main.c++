/*
 *  UCF COP3330 Fall 2021 Assignment 6 Solution
 *  Copyright 2021 Hamza Iqbal
 */

#include <iostream>

   if (isalpha(ch) || ch == '_') 

   {

    string s;

    s += ch;


     //while there are still chars in cin, read them into s

    while (cin.get(ch) && (isalpha(ch) || isdigit(ch) || ch == '_')) 

     s += ch;

    cin.unget();


     //if string is equal to other commands defined below, return them

    if (s == declKey) 

     return Token(let);

    if (s == quitKey) 

     return Token(quit);

    if (s == sqrtKey)

     return Token(squareR);

    if (s == powKey)

     return Token(findPow);


     return Token(name, s);

   }


    //if the char does not fit any of these parameters return an error message

   error("Bad token");
