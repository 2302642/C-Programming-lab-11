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
            - void print_data( const void* ptr, size_t size, size_t span );                 // print data form array in the form of 2d array as hexadecimal and alphas

            - struct Datum contains object char upper, char lower, unsigned short int value;
_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/
#include "q.h"

void print_data( const void* ptr, size_t size, size_t span ){                               // print data form array in the form of 2d array as hexadecimal and alphas

    const char* temp = ptr;                                                                 // setiing temp pointer for hexadecimal
    const char* temp2 = ptr;                                                                // setiing temp pointer for letters

    for(size_t i=0; i< size/span;i++){                                                      // i is iterating rows
        
        for(size_t changer = 0; changer < 2; changer++){                                    // change to print hexadecimal and letters
            
            for(size_t j=0; j< span; j++){                                                  // j is iterating colum
                
                if(changer == 0){ printf("%x", *temp); temp++; }                            // printing in the form of hexadecimals using %x prints hexadecimal values without 0X (ref 1)
                else{printf("%c", *temp2); temp2++;}                                        // printing in the form of letters

                if (j != span-1){printf(" ");}                                              // printing spaces after each elements printer except the last element
                if((j+1)%4 == 0 && j !=0 && j != span-1){printf("  ");}                     // printing set spaces (each value in array) after each sets of elements are printer
                if(j == span-1 && changer == 0){ printf("   |   ");}                        // printing "   |   " to seporate the print of hexadecimals and letters
            
            } 
        }
        printf("\n");                                                                       // printing "\n" for next row
    }
}                                                                                           //(ref 1) (e.g the hexadecimal number 0X41 printed using %x will print 41 and 0X4161 will print 61 41) 