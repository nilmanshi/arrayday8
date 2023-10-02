#include <iostream>
using namespace std;

void printArray(int arr[][4], int row , int col){
  for(int i=0; i <row;i++){
    for(int j =0; j<col; j++){
      cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
  }
}

int main() {
  int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
  int row=3;
  int col =3;
  
  printArray(arr , row , col ) ;
  return 0;
}






#include <iostream>
using namespace std;
// acces element by col

void printArray(int arr[][3], int row, int col) {
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      cout << arr[i][j] << "  ";
    }
    cout << endl;
  }
}

int main() {
  int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
  int row = 3;
  int col = 3;

  printArray(arr, row, col);
  return 0;
}









#include <iostream>
using namespace std;
// take input row wise

int main() {
  int arr[3][3];
  int row = 3;
  int col = 3;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << "ener input for row index:" << i << "column index :" << j << endl;
      cin >> arr[i][j];
    }
  }

  return 0;
}



#include <iostream>
using namespace std;
// SEARCHING

bool findtarget(int arr[][3], int row, int col,int target){
  for(int i =0; i<row; row++){
    for(int j=0; j<col; col++){
      if(arr[i][j] == target){
        return true;
      }
    }
  }
  return false;
}

int main() {
  int arr[3][3]= {{10,20,30},{40,50,60},{70,80,90}};
  int row =3;
  int col=3;
  int target=30;
  cout<<"found :"<<findtarget(arr , row, col, target);

}