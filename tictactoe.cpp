#include <iostream>
using namespace std;

void basic(char L[999][999], int rows, int col)
    {
        int a=2, b=2;
        for(int i=0; i<17; i++)
        {
            if(i==5||i==11)
            {
                for(int j=0; j<17; j++)
                {
                    L[i][j]='-';
                }
            }
            else
            {
                for(int j=0; j<17; j++)
                {
                    if(j==5||j==11)
                    {
                        L[i][j]='|';
                    }
                    else
                    {
                        L[i][j]=' ';
                    }
                }
            }   
        }
        int count=1;
        for(int i=0; i<17; i++)
        {
            for(int j=0; j<17; j++)
            {
                if(i==a && j==b)
                {
                    L[i][j]=count+'0';
                    count++;
                    if(b<14)
                    {
                        b=b+6;
                    }
                    else
                    {
                        a=a+6;
                        b=2;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        for(int i=0; i<17; i++)
        {
            for(int j=0; j<17; j++)
            {
                cout<<L[i][j];
            }
            cout<<endl;
        }
    
    }

void input(char L[999][999] , int row, int col, char play1[], char play2[], int j)
{
    if(j%2==0)
    {
        a:
            {
                int n;
                cout<<"CHOOSE CELL NUMBER: "<<endl;
                cin>>n;
                switch(n)
                {
                    case 1:
                            if(L[2][2]!='X'||L[2][2]!='O')
                            {
                                L[2][2]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!!"<<endl;
                                goto a;
                            }
                            break;
                    case 2:
                            if(L[2][8]!='X'||L[2][8]!='O')
                            {
                                L[2][8]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!! "<<endl;
                                goto a;
                            }
                            break;
                    case 3:
                            if(L[2][14]!='X'||L[2][14]!='O')
                            {
                                L[2][14]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!!"<<endl;
                                goto a;
                            }
                            break;
                    case 4:
                            if(L[8][2]!='X'||L[8][2]!='O')
                            {
                                L[8][2]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!!"<<endl;
                                goto a;
                            }
                            break;
                    case 5:
                            if(L[8][8]!='X'||L[8][8]!='O')
                            {
                                L[8][8]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!!"<<endl;
                                goto a;
                            }
                            break;
                    case 6:
                            if(L[8][14]!='X'||L[8][14]!='O')
                            {
                                L[8][14]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!!"<<endl;
                                goto a;
                            }
                            break;
                    case 7:
                            if(L[14][2]!='X'||L[14][2]!='O')
                            {
                                L[14][2]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!!"<<endl;
                                goto a;
                            }
                            break;
                    case 8:
                            if(L[14][8]!='X'||L[14][8]!='O')
                            {
                                L[14][8]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!!"<<endl;
                                goto a;
                            }
                            break;
                    case 9:
                            if(L[14][14]!='X'||L[14][14]!='O')
                            {
                                L[14][14]='X';
                            }
                            else
                            {
                                cout<<"This cell is filled choose again!!"<<endl;
                                goto a;
                            }
                            break;
                    default:
                            {
                                cout<<"choose a valid cell number!!"<<endl;
                                goto a;
                                break;
                            }
                }
            }
    }

    else
    {
        b:
            int n;
            cout<<"CHOOSE CELL NUMBER: "<<endl;
            cin>>n;
            switch(n)
            {
                case 1:
                        if(L[2][2]!='X'||L[2][2]!='O')
                        {
                            L[2][2]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                case 2:
                        if(L[2][8]!='X'||L[2][8]!='O')
                        {
                            L[2][8]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                case 3:
                        if(L[2][14]!='X'||L[2][14]!='O')
                        {
                            L[2][14]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                case 4:
                        if(L[8][2]!='X'||L[8][2]!='O')
                        {
                           L[8][2]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                case 5:
                        if(L[8][8]!='X'||L[8][8]!='O')
                        {
                            L[8][8]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                case 6:
                        if(L[8][14]!='X'||L[8][14]!='O')
                        {
                            L[8][14]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                case 7:
                        if(L[14][2]!='X'||L[14][2]!='O')
                        {
                            L[14][2]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                case 8:
                        if(L[14][8]!='X'||L[14][8]!='O')
                        {
                            L[14][8]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                case 9:
                        if(L[14][14]!='X'||L[14][14]!='O')
                        {
                            L[14][14]='O';
                        }
                        else
                        {
                            cout<<"This cell is filled choose again!!"<<endl;
                            goto b;
                        }
                        break;
                default:
                        {
                            cout<<"choose a valid cell number!!";
                            goto b;
                            break;
                        }
            }
    }
}



int check_hoz_X( char L[999][999], int row, int col, char* play1, int j)
{
    int a=2, b=2;
    int x, count1=0, count2=0, count3=0;
    for(int i=0; i<3; i++)
    {
        if(L[a][b]=='X')
        {
            count1++;
            b=b+6;
            if(count1==3)
            {
                    cout<<"CONRATS "<<play1<<" you won"<<endl;
                    x=1;
                    break;
            }
        }

        else if(L[a+6][b]=='X')
        {
            count2++;
            b=b+6;
            if(count2==3)
            {
                    cout<<"CONRATS "<<play1<<" you won"<<endl;
                    x=1;
                    break;
            }
        }

        else if (L[a+12][b]=='X')
        {
            count3++;
            b=b+6;
            if(count3==3)
            {
                    cout<<"CONRATS "<<play1<<" you won"<<endl;
                    x=1;
                    break;
            }
            }
        
        else
        {
            x=0;
            break;
        }   
    }
    return x;
}

int check_hoz_O( char L[999][999], int row, int col, char* play2, int j)

{
    int a=2, b=2;
    int p, count1=0, count2=0, count3=0;
    for(int i=0; i<3; i++)
    {
        if(L[a][b]=='O')
        {
            count1++;
            b=b+6;
            if(count1==3)
            {
                    cout<<"CONRATS "<<play2<<" you won"<<endl;
                    p=1;
                    break;
            }
        }

        else if(L[a+6][b]=='O')
        {
            count2++;
            b=b+6;
            if(count2==3)
            {
                    cout<<"CONRATS "<<play2<<" you won"<<endl;
                    p=1;
                    break;
            }
        }

        else if(L[a+12][b]=='O')
        {
            count3++;
            b=b+6;
            if(count3==3)
            {
                    cout<<"CONRATS "<<play2<<" you won"<<endl;
                    p=1;
                    break;
            }
            }
        
        else
        {
            p=0;
            break;
        }   
    }
    
    return p;
}



int check_vert_X( char L[999][999], int row, int col, char* play1,  int j)
{
    int a=2, b=2;
    int y, count1=0, count2=0, count3=0;
    for(int i=0; i<3; i++)
    {
        if(L[a][b]=='X')
        {
            count1++;
            a=a+6;
            if(count1==3)
            {
                    cout<<"CONRATS "<<play1<<" you won"<<endl;
                    y=1;
                    break;
            }
        }

        else if(L[a][b+12]=='X')
        {
            count2++;
            a=a+6;
            if(count2==3)
            {
                    cout<<"CONRATS "<<play1<<" you won"<<endl;
                    y=1;
                    break;
            }
        }
        else if(L[a][b+12]=='X')
        {
            count3++;
            a=a+6;
            if(count3==3)
            {
                    cout<<"CONRATS "<<play1<<" you won"<<endl;
                    y=1;
                    break;
            }
        }
        else
        {
            y=0;
            break;
        }   
    }
    return y;
}   

int check_vert_O( char L[999][999], int row, int col, char* play2, int j)
{
    int a=2, b=2;
    int q, count1=0, count2=0, count3=0;
    for(int i=0; i<3; i++)
    {
        if(L[a][b]=='O')
        {
            count1++;
            a=a+6;
            if(count1==3)
            {
                    cout<<"CONRATS "<<play2<<" you won"<<endl;
                    q=1;
                    break;
            }
        }

        else if(L[a][b+6]=='O')
        {
            count2++;
            a=a+6;
            if(count2==3)
            {
                    cout<<"CONRATS "<<play2<<" you won"<<endl;
                    q=1;
                    break;
            }
        }

        else if(L[a][b+12]=='O')
        {
            count3++;
            a=a+6;
            if(count3==3)
            {
                    cout<<"CONRATS "<<play2<<" you won"<<endl;
                    q=1;
                    break;
            }
            }
        
        else
        {
            q=0;
            break;
        }   
    }
    return q;
}



int check_diag_X(char L[999][999], int row, int col, char* play1, int j)
{
    int z;
    if(L[8][8]!='X')
    {
        z=0;
        
    }
    else if(L[2][2]=='X')
    {
        if(L[14][14]=='X')
        {
            cout<<"CONRATS "<<play1<<" you won"<<endl;
            z=1;
        }
        else
        {
            z=0;
        }
    }
    else if(L[2][14]=='X')
    {
        if(L[14][2]=='X')
        {
            cout<<"CONRATS "<<play1<<" you won"<<endl;
            z=1;
        }
        else
        {
            z=0;
        }
    
    }
    else
    {
        z=0;
    }
    return z;
}

int check_diag_O(char L[999][999], int row, int col, char* play2, int j)
{
    int r;
    if(L[8][8] !='O')
    {
        r=0;
        
    }
    else if(L[2][2]=='O')
    {
        if(L[14][14]=='O')
        {
            cout<<"CONRATS "<<play2<<" you won"<<endl;
            r=1;
        }
        else
        {
            r=0;
        }
    }
    else if(L[2][14]=='O')
    {
        if(L[14][2]=='O')
        {
            cout<<"CONRATS "<<play2<<" you won"<<endl;
            r=1;
        }
        else
        {
            r=0;
        }
    
    }
    else
    {
        r=0;
    }
    return r;
}


void disp(char L[999][999], int row, int col, char play1[], char play2[], int j)
{
        int a=2, b=2;
        for(int i=0; i<17; i++)
        {
            if(i==5||i==11)
            {
                for(int j=0; j<17; j++)
                {
                    L[i][j]='-';
                }
            }
            else
            {
                for(int j=0; j<17; j++)
                {
                    if(j==5||j==11)
                    {
                        L[i][j]='|';
                    }
                    else
                    {
                        if((i==2||i==8||i==14||j==2||j==8||j==14))
                        {
                            continue;
                        }
                        L[i][j]=' ';
                    }
                }
            }   
        }
        input(L, row, col, play1, play2, j);
        for(int i=0; i<17; i++)
        {
            for(int j=0; j<17; j++)
            {
                cout<<L[i][j];
            }
            cout<<endl;
        }
        


}


int main()
{
    char table [999][999];
    char play1[9999], play2[9999];
    cout<<"\n\n";
    cout<<"enter the name of 1st player: ";
    cin>>play1;
    cout<<"enter the name of 2nd player: ";
    cin>>play2;
    cout<<"\n\n";
    cout<<"\t\t\t"<<" so "<<play1<<" and "<<play2<<" are youuu reaadyyy? "<<"\n\n\n";
    cout<<"\t\t\t"<<play1<<" your symbol is X\n" " \n "<<"\t\t\t"<<play2<<" your symbol is O "<<endl;
    basic(table, 18, 18);
    int m=0;
    for(int k=0; k<9; k++)
    {
        cout<<"ROUND "<<k+1<<endl;
        
        if(k%2==0)
        {
            cout<<play1<<" your chance: "<<endl;
            disp(table,18, 18, play1, play2, k);
            int x= check_hoz_X(table, 18, 18, play1, k);
            int y= check_vert_X(table, 18, 18, play1, k);
            int z= check_diag_X(table, 18, 18, play1, k);

            if(x==1||y==1||z==1)
            {
                m++;
                break;
            }
        }
        else
        {
            cout<<play2<<" your chance: "<<endl;
            disp(table,18, 18, play1, play2, k);
            int p= check_hoz_O(table, 18, 18, play2, k);
            int q= check_vert_O(table, 18, 18, play2, k);
            int r= check_diag_O(table, 18, 18, play2, k);

            if(p==1||q==1||r==1)
            {
                m++;
                break;
            }
        }
    }
    if(m==0)
    {
        cout<<"well played "<<play1<<" and "<<play2<<" its a DRAW !!"<<endl;
    }
    return 0;
}

