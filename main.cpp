#include <bits/stdc++.h>
using namespace std;

char board[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int ctr;

void Board()
{
    cout << "Welcome to XO Game Version 1.0" << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << board[i][j]<<" ";
        }
        cout << endl;
    }
}
void entering()
{
    int enter;
    cout << "it's" << " " <<  player << " " <<  "Turn." << endl;
    cout << "Press The Number of the block you want to play in: " << endl;

    cin >> enter;
    if(enter==1) {
        if (board[0][0] == '1')
            board[0][0] = player;
        else {
            cout << "This is already Taken by Another Player, Choose different block" << endl;
            cout << endl;
            entering();
        }
    }
    else if (enter==2) {
        if(board[0][1] == '2')
            board[0][1] = player;
        else
        {
            cout << "This is already Taken by Another Player, Choose different block"<<endl;
            cout << endl;

            entering();
        }
    }
    else if (enter==3){
        if (board[0][2] == '3')
            board[0][2] = player;
        else {
            cout << "This is already Taken by Another Player, Choose different block" << endl;
            cout << endl;

            entering();
        }
    }
    else if (enter==4){
        if (board[1][0] == '4')
            board[1][0] = player;
        else {
            cout << "This is already Taken by Another Player, Choose different block" << endl;
            cout << endl;

            entering();
        }
    }
    else if (enter==5){
        if (board[1][1] == '5')
            board[1][1] = player;
        else {
            cout << "This is already Taken by Another Player, Choose different block" << endl;
            cout << endl;

            entering();
        }
    }
    else if (enter==6){
        if (board[1][2] == '6')
            board[1][2] = player;
        else {
            cout << "This is already Taken by Another Player, Choose different block" << endl;
            cout << endl;

            entering();
        }
    }
    else if (enter==7){
        if (board[2][0] == '7')
            board[2][0] = player;
        else {
            cout << "This is already Taken by Another Player, Choose different block" << endl;
            cout << endl;

            entering();
        }
    }
    else if (enter==8){
        if (board[2][1] == '8')
            board[2][1] = player;
        else {
            cout << "This is already Taken by Another Player, Choose different block" << endl;
            cout << endl;

            entering();
        }
    }
    else if (enter==9){
        if (board[2][2] == '9')
            board[2][2] = player;
        else {
            cout << "This is already Taken by Another Player, Choose different block" << endl;
            cout << endl;

            entering();
        }
    }
}
void playerturn()
{
    if(player == 'X')
        player = 'O';
    else
        player = 'X';
}

char winner()
{
    //Player X
    //Rows
    if(board[0][0]=='X' && board[0][1] =='X' && board[0][2]=='X')
        return 'X';
    if(board[1][0]=='X' && board[1][1] =='X' && board[1][2]=='X')
        return 'X';
    if(board[2][0]=='X' && board[2][1] =='X' && board[2][2]=='X')
        return 'X';
    //Columns
    if(board[0][0]=='X' && board[1][0] =='X' && board[2][0]=='X')
        return 'X';
    if(board[0][1]=='X' && board[1][1] =='X' && board[2][1]=='X')
        return 'X';
    if(board[0][2]=='X' && board[1][2] =='X' && board[2][2]=='X')
        return 'X';
    //Diagonals
    if(board[0][0]=='X' && board[1][1] =='X' && board[2][2]=='X')
        return 'X';
    if(board[0][2]=='X' && board[1][1] =='X' && board[2][0]=='X')
        return 'X';


    //Player O
    //Rows
    if(board[0][0]=='O' && board[0][1] =='O' && board[0][2]=='O')
        return 'O';
    if(board[1][0]=='O' && board[1][1] =='O' && board[1][2]=='O')
        return 'O';
    if(board[2][0]=='O' && board[2][1] =='O' && board[2][2]=='O')
        return 'O';
    //Columns
    if(board[0][0]=='O' && board[1][0] =='O' && board[2][0]=='O')
        return 'O';
    if(board[0][1]=='O' && board[1][1] =='O' && board[2][1]=='O')
        return 'O';
    if(board[0][2]=='O' && board[1][2] =='O' && board[2][2]=='O')
        return 'O';
    //Diagonals
    if(board[0][0]=='O' && board[1][1] =='O' && board[2][2]=='O')
        return 'O';
    if(board[0][2]=='O' && board[1][1] =='O' && board[2][0]=='O')
        return 'O';

    return '/';

}


int main() {
   Board();
while(true)
{
    ctr++;
    entering();
    Board();
    if(winner() == 'X')
    {
        cout << "Player X Wins!" << endl;
        break;
    }
    else if(winner()=='O')
    {
        cout << "Player O Wins!" << endl;
        break;
    }
    else if(winner()=='/' && ctr == 9)
    {
        cout << "It's A Draw!" << endl;
        break;
    }
    playerturn();
}

    return 0;
}
