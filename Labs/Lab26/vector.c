/** vector.c
* ================================================================
* Name: C3C Jim Wang
* Section: T3A
* Project: Lab26 - Vector ADT
* =================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


/** ----------------------------------------------------------
 * vector_create() - initialize vector with specified size
 * @param v is a pointer to a struct of type vector
 * @param vectorSize is the size of the vector to initialize
 * ----------------------------------------------------------
 */
void vector_create(vector* v, unsigned int vectorSize) {
    int i;

    if (v == NULL) return;

    v->elements = (int*)malloc(vectorSize * sizeof(int));;
    v->size = vectorSize;
    for (i = 0; i < v->size; ++i) {
        v->elements[i] = 0;
    }
}

/** ----------------------------------------------------------
 * vector_destroy() - destroy the vector pointed to by v
 * @param v is a pointer to a struct of type vector
 * ----------------------------------------------------------
 */
void vector_destroy(vector* v) {
    if (v == NULL) return;

    free(v->elements);
    v->elements = NULL;
    v->size = 0;
}

/** ----------------------------------------------------------
 * vector_resize() - resize an existing vector
 * @param v is a pointer to a struct of type vector
 * @param vectorSize is the size of the new vector
 * ----------------------------------------------------------
 */
void vector_resize(vector* v, unsigned int vectorSize) {
    int oldSize;
    int i;

    if (v == NULL) return;

    oldSize = v->size;
    v->elements = (int*)realloc(v->elements, vectorSize * sizeof(int));
    v->size = vectorSize;
    for (i = oldSize; i < v->size; ++i) {
        v->elements[i] = 0;
    }
}

/** ----------------------------------------------------------
 * vector_at() - determine the address of a specific element
 * @param v is a pointer to a struct of type vector
 * @param index specified vector element
 * @return int* a pointer to the location of the specified element
 * ----------------------------------------------------------
 */
int* vector_at(vector* v, unsigned int index) {
    if (v == NULL || index >= v->size) return NULL;

    return &(v->elements[index]);
}

/** ----------------------------------------------------------
 * vector_insert() - insert a value at a specified index
 * @param v is a pointer to a struct of type vector
 * @param index is the location to insert the new value
 * @param value the new value to insert into the vector
 * ----------------------------------------------------------
 */
void vector_insert(vector* v, unsigned int index, int value) {
    int i;

    if (v == NULL || index > v->size) return;

    vector_resize(v, v->size + 1);
    for (i = v->size - 1; i > index; --i) {
        v->elements[i] = v->elements[i-1];
    }
    v->elements[index] = value;
}

/** ----------------------------------------------------------
 * vector_push_back() - insert new value at the end of the vector
 * @param v is a pointer to a struct of type vector
 * @param value new value to insert at the end of the vector
 * ----------------------------------------------------------
 */
void vector_push_back(vector* v, int value) {
    vector_insert(v, v->size, value);
}

/** ----------------------------------------------------------
 * vector_erase() - iremove value from specified index
 * @param v is a pointer to a struct of type vector
 * @param index location in vector to remove value
 * ----------------------------------------------------------
 */
void vector_erase(vector* v, unsigned int index) {
    int i;

    if (v == NULL || index >= v->size) return;

    for (i = index; i < v->size - 1; ++i) {
        v->elements[i] = v->elements[i+1];
    }
    vector_resize(v, v->size - 1);
}

/** ----------------------------------------------------------
 * vector_size() - return number of elements in vector
 * @param v is a pointer to a struct of type vector
 * @return number of elements in vector
 * ----------------------------------------------------------
 */
int vector_size(vector* v) {
    if (v == NULL) return -1;

    return v->size;
}