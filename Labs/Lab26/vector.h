/** vector.h
* ================================================================
* Name: C3C Jim Wang
* Section: T3A
* Project: Lab26 - Vector ADT
* =================================================================
*/

#ifndef MYEXE_LAB26FUNCTS_H
#define MYEXE_LAB26FUNCTS_H

// struct and typedef declaration for Vector ADT
typedef struct vector_struct {
    int* elements;
    unsigned int size;
} vector;

// interface for accessing Vector ADT

/** ----------------------------------------------------------
 * vector_create() - initialize vector with specified size
 * @param v is a pointer to a struct of type vector
 * @param vectorSize is the size of the vector to initialize
 * ----------------------------------------------------------
 */
void vector_create(vector* v, unsigned int vectorSize);

/** ----------------------------------------------------------
 * vector_destroy() - destroy the vector pointed to by v
 * @param v is a pointer to a struct of type vector
 * ----------------------------------------------------------
 */
void vector_destroy(vector* v);

/** ----------------------------------------------------------
 * vector_resize() - resize an existing vector
 * @param v is a pointer to a struct of type vector
 * @param vectorSize is the size of the new vector
 * ----------------------------------------------------------
 */
void vector_resize(vector* v, unsigned int vectorSize);

/** ----------------------------------------------------------
 * vector_at() - determine the address of a specific element
 * @param v is a pointer to a struct of type vector
 * @param index specified vector element
 * @return int* a pointer to the location of the specified element
 * ----------------------------------------------------------
 */
int* vector_at(vector* v, unsigned int index);

/** ----------------------------------------------------------
 * vector_insert() - insert a value at a specified index
 * @param v is a pointer to a struct of type vector
 * @param index is the location to insert the new value
 * @param value the new value to insert into the vector
 * ----------------------------------------------------------
 */
void vector_insert(vector* v, unsigned int index, int value);

/** ----------------------------------------------------------
 * vector_push_back() - insert new value at the end of the vector
 * @param v is a pointer to a struct of type vector
 * @param value new value to insert at the end of the vector
 * ----------------------------------------------------------
 */
void vector_push_back(vector* v, int value);

/** ----------------------------------------------------------
 * vector_erase() - iremove value from specified index
 * @param v is a pointer to a struct of type vector
 * @param index location in vector to remove value
 * ----------------------------------------------------------
 */
void vector_erase(vector* v, unsigned int index);

/** ----------------------------------------------------------
 * vector_size() - return number of elements in vector
 * @param v is a pointer to a struct of type vector
 * @return number of elements in vector
 * ----------------------------------------------------------
 */
int vector_size(vector* v);

#endif //MYEXE_LAB26FUNCTS_H
