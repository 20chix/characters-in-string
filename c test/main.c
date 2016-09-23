//
//  main.c
//  c test
//
//  Created by Mub on 29/09/2014.
//  Copyright (c) 2014 Hadi. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAX =10;


char name[4];
char string[50];


char first[100];
char last[100];
char full_name[200];    /* full name */
char line[100];  /*Line that I'm looking for */



int main(int argc, const char * argv[])
{

    
    
    
    
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);
    

   
    
    
    printf("The lenght of the line is: %lu\n", strlen(line) - 1); /* %lu long unsigned, calculate how many character */
    
    
    
    /*Start script for enter the full name*/
    
    strcpy(first, "Hadi");
    strcpy(last, "Elmekawi");
    
    strcpy(full_name, first);  /* full = Hadi */
    
    strcat(full_name, " ");
    strcat(full_name, last);
    
    printf("The full name is %s\n", full_name);
    
    /*End of the script for full name*/
    
    name[0]='S';
    name[1]='a';
    name[2]='m';
    name[3]='\0';
    strcpy(string, "Sam");
    /*Enter the char in two different way*/
    printf("print the name %s\n",name);
    printf("print the name %c%c%c\n",name[0], name[1],name[2]);

    printf("Current time: %s\n",__TIME__ );
    printf("The current date is %s\n",__DATE__);
    printf("This file is saved in %s",__FILE__);
    
  
  
    return 0;
}

