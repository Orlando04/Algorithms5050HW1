#include <iostream> 
using namespace std;

// ---------- Pseudocode for PartitionEvenOdd ----------
// 1. initialize an array containing all elements to be partitioned
// 2. create the PartitionEvenOdd function
// 3. store the size of the array
// 4. use a for loop to run through the array using iterators (named i and j)
// 5. if the spot i is an even number, increment j
// 6. if it's not an even number, swap with j. Increment i & j   

void PartitionEvenOdd(int A[]){
  //Store the size of A
  int SIZE = sizeof(A);

  // run through the array
  for (int i = 0; i < SIZE; i++){
    // second iterator to save the position
    int j = 0;
    
    // check if the number in i is even or odd
    if (A[i] % 2 == 0){
      j++;
    }

    else {
      swap(A[i],A[j]);
      j++; i++;
    }
    
    cout << A[i] << " "; 
  }
}

int main(){
  int partition_array[] = {7, 17, 74, 21, 7, 9, 26, 10};
  PartitionEvenOdd(partition_array);

  return 0;
  
}