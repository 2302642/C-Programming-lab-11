/*!
@file       the name of source file is q.h
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Lab 11
@date       file created on 17/11/2023
@brief      provide a brief explanation about what this source file does:
            
            This file is contains q function declaraction and struct Datum be to called by main in qdriver and used in q.c.
            Functions:
            - void print_data( const void* ptr, size_t size, size_t span );                                     // print data form array in the form of 2d array as hexadecimal and alphas    

            - struct Datum contains object char upper, char lower, unsigned short int value;
_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/
#include <stdio.h>

struct Datum
{
    char upper;
    char lower;
    unsigned short int value;
};
typedef struct Datum DATUM;
typedef DATUM DATA[2];

void print_data( const void* ptr, size_t size, size_t span );                                               // print data form array in the form of 2d array as hexadecimal and alphas    
        // ptr is Address of the first byte.// size Total count of bytes.