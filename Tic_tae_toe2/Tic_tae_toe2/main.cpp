//
//  main.cpp
//  Tic_tae_toe2
//
//  Created by 신영환 on 2018. 11. 4..
//  Copyright © 2018년 신영환. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>



using namespace std;
char board[3][3];

int checkwin()
{
    
    for(int i =0 ; i<3 ; i++)
    {
        if(board[i][0] != ' ')
        {
            if(board[i][0] == board[i][1]==board[i][2])
            {
                if(board[i][0] == 'O')
                {
                return 1;
                break;
                }
                else if(board[i][0] =='X'){ return 2; break;}
            }
            
        }
    }
    for(int i=0; i<3; i++)
    {
        if(board[0][i] != ' ')
        {
            if(board[0][i] == board[1][i]==board[2][i])
            {
                if(board[0][i] == 'O')
                {
                    return 1;
                    break;
                }
                else if(board[0][i] =='X') {return 2; break;}
            }
        }
    }
    return 0;
    }


void mark(int player,int row, int col)
{
    
    if(player ==1)
    {
        board[row][col] = 'O';
    }
    else
        board[row][col] = 'X';
}


void display(){
    for(int i=0;i<3;i++){
        printf("---|---|---\n");
        printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
    }
}

int cNumber()
{
    return (rand()%3);
}

int main()
{
    srand((unsigned int)time(NULL));
    for(int i =0 ; i < 3 ; i++)
    {
        for(int j =0 ; j<3; j++)
        {
            board[i][j] = ' ';
        
        }
    }
    

    int player1 = 1, player2 =2 ;
    
    int result = 0, draw_check = -1 , temp_row =0 , temp_col = 0;
    

    cout << "start tic_tae_toe!"<<endl;
    display();
    while(result != 1 and result != 2)
    {
        printf("(x,y) 좌표 : ");
        scanf("%d%d",&temp_row,&temp_col);
        
        while(board[temp_row][temp_col] != ' ')
        {
            printf("다시입력하십시오. (x,y) 좌표 : ");
            scanf("%d%d",&temp_row,&temp_col);
        }
        
        mark(player1, temp_row, temp_col);
        
        display();
        result =checkwin();
        if (result == 1 )
        {    cout<<"Sorry! you lose 1";
            draw_check = 1;
            break;
        }
        else
            if (result == 2 )
            {   cout<<"Congratualtions! you Win ";
                draw_check = 1;
                break;
            }
        else
            if (draw_check == 0 )
            {cout<<"The game is a draw ";
                break;
            }
        
        
        temp_row = cNumber();
        temp_col = cNumber();
        
        while(board[temp_row][temp_col] != ' ')
        {
            temp_row = cNumber();
            temp_col = cNumber();
        }
        
        mark(player2, temp_row, temp_col);
        
        cout << "computer's turn : " << temp_row << " "<< temp_col << endl;
        
        display();
        
        result =checkwin();
        if (result == 1 )
        {   cout<<"Sorry! you lose!";
            draw_check = 1;
            break;
        }
        else
            if (result == 2 )
            {   cout<<"Congratualtions! you Win! ";
                draw_check = 1;
                break;
            }
    }
    if (draw_check == 0 )
        {
            cout<<"The game is a draw! ";

        }
    
    return 0;
}
