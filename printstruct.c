#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_struct(struct person_age u){
    printf("age: %d\n",u.age);
}

struct person_age * new_person(int age, struct person_age *next){
    struct person_age *np;
    np = malloc(sizeof(struct person_age));
    np->age = age;
    np->next = next;
    return np;
}

void print_list(struct person_age* u){
    if (u == NULL){
        printf("List is Empty");
    }
    else{
        while(u != NULL){
            printf("age: %d\n",u->age);
            u = u->next;
        }
    }
}

struct person_age * insert_front(struct person_age* u, int a){
    struct person_age* newNode = new_person(a,u);
    return(newNode);
}

struct person_age * free_list(struct person_age* u){
    struct person_age* temp;
    while (u!= NULL){
        temp = u->next;
        free(u);
        u = NULL;
        u = temp;
    }
    return(u);
}

struct person_age *remove_node(struct person_age *u, int data){
    struct person_age *front = NULL;
    front = u;
    if (u->age == data){
        front = u->next;
    }
    while (u->next != NULL){
        if (u->next->age == data){
            u->next = u->next->next;
            u = u->next;
        }
        u = u->next;
    }
    return(front);
}
