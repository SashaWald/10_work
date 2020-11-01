#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include <string.h>
#include <time.h>

int main(){
    
    //testing function to print struct list
    struct person_age *agesList = NULL;
    int i;
    for (i = 0; i < 4; i++){
        agesList = insert_front(agesList, i+30);
    }
    print_list(agesList);
    printf("\n");
    
    printf("Testing - remove age 33\n");
    agesList = remove_node(agesList, 33);
    print_list(agesList);
    
    printf("Testing - remove age 32\n");
    agesList = remove_node(agesList, 32);
    print_list(agesList);
    
    printf("Testing - remove age 31\n");
    agesList = remove_node(agesList, 31);
    print_list(agesList);
    
    printf("Testing - remove age 30\n");
    agesList = remove_node(agesList, 30);
    print_list(agesList);
    printf("\n");

    printf("Testing free list");
    print_list(free_list(agesList));
    
    return(0);
}