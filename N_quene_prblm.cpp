// // answer present at the sir drive.........


// #include<iostream>
// using namespace std;
// bool check(int board[][20],int n,int i,int j){
//     // column
//     for(int k=0;k<i;k++){
//         if(board[k][j]==1){
//             return false;
//         }
//     }

//     // left diagnol
//     int x=i;
//     int y=j;
//     while(x>=0 && y>=0){
//         if( board[x][y] ==1){
//             return false;
//         }
//         x--;
//         y--;
//     }
//     // right diagnol
//     x=i;
//     y=j;
//     while(x>=0 && y<n){
//         if( board[x][y] ==1){
//             return false;
//         }
//         x--;
//         y++;
//     }
//     return true;
// }

// void print(int board[][20],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

// bool nquene(int board[][20],int n,int i){
//     // base case
//     if(i==n){
//         print(board,n);
//         return true;
//     }
//     bool success;
//     for(int j=0;j<n;j++){
//             // if i,j is safe or not
//             if(check(board,n,i,j)){
//                 board[i][j]=1;
//                  bool success= nquene(board ,n ,i+1);
            
//             // to check if the place is correct or not
//             if(success){
//                 return true;
//             }
//             board[i][j]=0;
//     }
//     }
//     return false;
// }


// int main(){
//     int board[20][20]={0};
//     int n;
//     cin>>n;
//     nquene(board,0,0);
//     return 0;

// }

#include <iostream> 

using namespace std; 

bool check(int board[][20], int n, int i, int j) 

{ 

    // column 

    for (int k = 0; k < i; k++) 

    { 

        if (board[k][j] == 1) 

        { 

            return false; 

        } 

    } 

    // left diag 

    int x = i; 

    int y = j; 

    while (x >= 0 && y >= 0) 

    { 

        if (board[x][y] == 1) 

        { 

            return false; 

        } 

        x--; 

        y--; 

    } 

    // right diag 

    x = i; 

    y = j; 

    while (x >= 0 && y < n) 

    { 

        if (board[x][y] == 1) 

        { 

            return false; 

        } 

        x--; 

        y++; 

    } 

    return true; 

} 

void print(int board[][20], int n) 

{ 

    for (int i = 0; i < n; i++) 

    { 

        for (int j = 0; j < n; j++) 

        { 

            cout << board[i][j] << " "; 

        } 

        cout << endl; 

    } 

    cout << endl; 

} 

bool nqueen(int board[][20], int n, int i) 

{ 

    // base 

    if (i == n) 

    { 

        print(board, n); 

        return true; 

    } 

    for (int j = 0; j < n; j++) 

    { 

        if (check(board, n, i, j)) 

        { 

            board[i][j] = 1; 

            bool success = nqueen(board, n, i + 1); 

            if (success) 

            { 

                return true; 

            } 

            board[i][j] = 0; 

        } 

    } 

    return false; 

} 

int main() 

{ 

    int board[20][20] = {0}; 

    int n; 

    cin >> n; 

    nqueen(board, n, 0); 

    return 0; 

} 

 