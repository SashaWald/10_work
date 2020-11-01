#ifndef STRUCT_H
#define STRUCT_H
struct person_age{int age; struct person_age *next;};
struct person_age * new_person(int age, struct person_age *next);
void print_struct(struct person_age u);
void print_list(struct person_age* u);
struct person_age * insert_front(struct person_age* u, int a);
struct person_age * free_list(struct person_age* u);
struct person_age *remove_node(struct person_age *u, int data);
#endif