#include "lab26.h"

int main(void)
{
   // With the functions provided in the Vector ADT,
   //   create a correctly sized vector to read-in all
   //   data from the lab26Data.csv file
    vector v;
    vector_create(&v, 0);

    // Utilize your readFile() function from Lab 25
   //   to populate the vector -- you will need to make changes
   //   for this function to perform correctly
    readFile(FILENAME, &v, 1000);

   // With the functions provided in the Vector ADT,
   //   print the number of vector elements
    printf("%d", vector_size(&v));



    // With the functions provided in the Vector ADT,
   //   insert a 12 at index 139
    vector_insert(&v, 139, 12);

   // With the functions provided in the Vector ADT,
   //   print the number of vector elements
    printf("%d", vector_size(&v));

   // With the functions provided in the Vector ADT,
   //   print the element at index 999
    printf("%d", *vector_at(&v, 999));

   // With the functions provided in the Vector ADT,
   //   erase the element at index 999
    vector_erase(&v, 999);

   // With the functions provided in the Vector ADT,
   //   print the element at index 999
    printf("%d", *vector_at(&v, 999));

   // With the functions provided in the Vector ADT,
   //   print the number of vector elements
    printf("%d", vector_size(&v));

    // Using the Vector ADT provided function
    //   vector_push_back to insert the integer 222
   vector_push_back(&v, 22);

   // With the functions provided in the Vector ADT,
   //   print the number of vector elements
    printf("%d", vector_size(&v));

   // With the functions provided in the Vector ADT,
   //   destroy the vector
    vector_destroy(&v);

}


void readFile(char filename[], vector* vectorPtr, int records) {
    FILE* fp = fopen(filename, "r");
    int temp;

    for(int i = 0; i < records; i++) {
        fscanf(fp, "%d,\n", &temp);
        vector_insert(vectorPtr, i, temp);
    }

    fclose(fp);
}