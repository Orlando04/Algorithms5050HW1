#include <iostream> 
using namespace std;

// initialize an array containing all elements to be partitioned
// create the PartitionEvenOdd function
// -> recieve the array
/* -> run through it using iterators i and j 
       if the spot in i % 2 == 0 we move j 
       when j % 2 != 0 we swap with i */

void PartitionEvenOdd(int A[]){
       // Store the size of A
       int SIZE = sizeof(A);

       // we recieved the array
       for (int i = 0; i < SIZE; i++){
              cout << A[i] << endl;
       }

}

int main(){
      int partition_array[] = {7, 17, 74, 21, 7, 9, 26, 10};
      PartitionEvenOdd(partition_array);

      return 0;
}