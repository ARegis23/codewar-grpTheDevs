#include <iostream>
using namespace std;

#define MAX 1000
int main() {
int a ;
int b ;
cin >> a;
cin >> b;
int nums[a];
int res = b - 1;
for(int i = 0; i < a; i++){
  nums[i] = i + 1;
}
int sum = 0;
int j =0;
do {
  sum = 0;
  if (res == 0 && nums[j] != 0) {
    nums[j] = 0;
    res = b - 1;
  } else {
    if(nums[j] != 0){
      res--;
    }
  }
  
  for(int i = 0; i < a; i++){
    if(nums[i] != 0){
      sum += 1;
    }
  }
  if(j >= a - 1){
    j=-1;
  }
  j++;
} while(sum > 1);
  
int resultado = 0;
for(int i =0 ; i < a; i++){
  if(nums[i] != 0){
    resultado = nums[i];
  }
}
cout << resultado;
return 0;    
}