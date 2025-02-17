#include <iostream>
#include <cmath>  // For abs function
using namespace std;

int main() {
    int matrix[5][5];
    int oneRow = -1, oneCol = -1;

    // Read the matrix input
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                oneRow = i;  // Record the row of '1'
                oneCol = j;  // Record the column of '1'
            }
        }
    }

    // Calculate the number of moves to bring '1' to the center (2, 2)
    int moves = abs(oneRow - 2) + abs(oneCol - 2);
    cout << moves << endl;

    return 0;
}





// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     int count=0;
//     while(matrix[2][2]!=1){
//         for(int i=0;i<5;i++){
//             for(int j=0;j<5;j++){
//             if(matrix[0][j]==1){
//                 matrix[0][j]=0;
//                 matrix[1][j]=1;
//                 count++;
//             }else if(matrix[1][j]==1){
//                 matrix[1][j]=0;
//                 matrix[2][j]=1;
//                 count++;
//             }else if(matrix[3][j]==1){
//                 matrix[3][j]=0;
//                 matrix[2][j]=1;
//                 count++;
//             }else if(matrix[4][j]==1){
//                 matrix[4][j]=0;
//                 matrix[3][j]=1;
//                 count++;
//             }else if(matrix[i][0]==1){
//                 matrix[i][0]=0;
//                 matrix[i][1]=1;
//                 count++;
//             }else if(matrix[i][1]==1){
//                 matrix[i][1]=0;
//                 matrix[i][2]=1;
//                 count++;
//             }else if(matrix[i][3]==1){
//                 matrix[i][3]=0;
//                 matrix[i][2]=1;
//                 count++;
//             }else if(matrix[1][4]==1){
//                 matrix[i][4]=0;
//                 matrix[i][3]=1;
//                 count++;
//             }
//         }
//     }
// }
// cout<<count;
//     return 0;
// }