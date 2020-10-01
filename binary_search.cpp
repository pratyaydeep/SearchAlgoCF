#include<iostream>
using namespace std;

bool binary_search(vector<int>& arr, int key){
  //complete this function
  int low = 0, hi = arr.size();
  while(low < hi) {
    int mid = low + (hi - low) / 2;
    if(arr[mid] == key) {
      return true;
    }
    else if (key >= arr[mid]) {
      low = mid + 1;
    }
    else 
      hi = mid - 1;
  }
  return false;
}
 
int main() {
  // INPUT
  
  // PROCESS
  
  return 0;
}
