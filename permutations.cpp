// Kalonji George

#include "permutations.h"
#include "randint.h"
#include <cstddef>



// A sequential search function, for your convenience.
// Parameters:
//  array - The array of int's to be searched
//  size - The size of the array
//  target - The target value
// Returns:
//  Array index where target is found, or size if target is not found.
// Example:
//  if (search(array, size, x) < size)
//      cout << "x was found in the array\n";
//  else
//      cout << "x was not found in the array\n";
static size_t search (const int array[], size_t size, int target) {
    for (size_t i = 0; i < size; i++)
    if (array[i] == target)
        return i;
    return size;
}

void permutations1 (int array[], size_t size) {
   int rand;

    for(size_t i = 0; i < size; ++i){
        do
        {
        rand = randint(size);
        
        }
        while(search(array,size,rand) < i);
        {
        array[i] = rand;
        
        }
        
        }
    }





void permutations2 (int array[], size_t size) {
   int rand;
   bool *used = new bool[size];
   
    for(size_t i = 0; i < size; ++i){
        do
        {
        rand = randint(size);
        
        }
        while(used[rand-1] == true);{
            array[i] = rand;
            used[rand - 1] = true; 
        }

}

delete [] used;



}
void permutations3 (int array[], size_t size){
    int rand;
    for(int i = 0; i < size; ++i){
        array[i] = i + 1;
        cout << array[i] << endl;

        
    }

    for(int j = 0; j < size; ++j){
            rand = randint(0,size-1);
            cout << rand << endl;
            array[j] = array[rand];
        }

return;











}
