#include <iostream>
using namespace std;


bool issafepos(int board[][10],int i,int j,int n){
    for(int row=0;row<i;row++){
        if(board[row][j]==1)
            return false;
    }
    int x=i,y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1)
            return false;
        x--;
        y--;
    }
    x=i;y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1)
            return false;
        x--;
        y++;
    }
    return true;
}

bool solveboard(int board[][10], int i, int n){
    if(i==n){
        for(int a=0;a<n;a++){
            for(int b=0;b<n;b++){
                cout<<board[a][b]<<" ";
            }
        }
        cout<<endl;
        return false;
    }
    for(int j=0;j<n;j++){
        if(issafepos(board,i,j,n)){
            board[i][j]=1;
            bool nextsafepos=solveboard(board,i+1,n);
            if(nextsafepos){
                return true;
            }
            board[i][j]=0;
            
        }
    }
    return false;
    
}
void placeNQueens(int n){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
    int board[10][10]={0};
    
    solveboard(board,0,n);

}


int main(){

  int n; 
  cin >> n ;
  placeNQueens(n);

}


