/*
  Name: ALBERTO
  Copyright: TO ME ONLY
  Author: BIKASH NARAYAN PANDA
  Date: 08/05/09 17:47
  Description: COMPILE IT USING TURBO C++ VERSION 4.5 .OTHER COMPILERS CANT COMPILE IT
*/
#include<stdio.h>
#include<conio.h>
#include <string.h>
#include<stdlib.h>
#include <time.h>
#include <dos.h>
#include <iostream.h>
#include <math.h>


void Start ();
void GetResults ();

int  i, j, life, maxrand;
char c;

/*find the no game */

void   Start ()
{
    i = 0;
    j = 0;
    life = 0;
    maxrand = 6;

    gotoxy(5,8);
    cout << "SELECT DIFFICULTY MODE:\n";
    gotoxy(29,13);
    cout << "1 : Easy (0-15)\n";
    gotoxy(29,14);
    cout << "2 : Medium (0-30)\n";
    gotoxy(29,15);
    cout << "3 : Difficult (0-50)\n";
    gotoxy(29,16);
    cout << "or type another key to quit\n";
    c = 30;

    cin >> c;
    cout << "\n";
    clrscr();
    switch (c)
    {
    case '1' :
        maxrand = 15;
        break;
    case '2' :
        maxrand = 30;
        break;
    case '3' :
        maxrand = 50;
        break;
    default :
        exit(0);
        break;
    }

    life = 5;
    srand( (unsigned)time( NULL ) );
    j = rand() % maxrand;

    GetResults();

}


void GetResults ()
{
    if (life <= 0)

    {   clrscr();
        gotoxy(25,10);
        cout << "You lose !\n\n";
        getch();
        clrscr();
        Start();

    }

    cout << "Type a number: \n";
    cin >> i;

    if ((i>maxrand) || (i<0))
    {
        cout << "Error : Number not between 0 and \n" << maxrand;
        GetResults();
    }

    if (i == j)
    {   clrscr();
        gotoxy(25,10);
        cout << "YOU WIN !\n\n";
        getch();
        clrscr();
        Start();
    }

    else if (i>j)
    {
        cout << "Too BIG\n";
        life = life - 1;
        cout << "Number of remaining life: " << life << "\n\n";
        GetResults();
    }

    else if (i<j)
    {
        cout << "Too SMALL\n";
        life = life - 1;
        cout << "Number of remaining life:\n" << life << "\n\n";
        GetResults();
    }
}
void game( ) {
    clrscr();
    gotoxy(32,3);
    cout << "** OKSBWN JACKPOT **\n";
    gotoxy(10,10);
    cout << "The goal of this game is to guess a number. You will be ask to type\n";
    gotoxy(10,11);
    cout << "a number (you have 5 guess)\n";
    gotoxy(10,12);
    cout << "Jackpot will then tell you if this number is too big of too small compared to the secret number to find\n\n";
    getch();
    clrscr();
    Start();
}
int code(int a) {
    int b;
    switch (a) {
    case 0:
        b=0;
        break;
    case 1:
        b=2;
        break;
    case 2:
        b=4;
        break;
    case 3:
        b=6;
        break;
    case 4:
        b=8;
        break;
    case 5:
        b=9;
        break;
    case 6:
        b=7;
        break;
    case 7:
        b=5;
        break;
    case 8:
        b=3;
        break;
    case 9:
        b=1;
        break;
    }
    return(b);
}






/*DELAY  functions*/
void delay (int a)
{   long int i,j,k;
    if (a==1) {
        for (i=0; i<1000*a; i++) {
            for (j=0; j<100; j++) {
                for (k=0; k<100; k++) {}
            }
        }
    }
    if (a==2) {
        for (i=0; i<1000*a; i++) {
            for (j=0; j<1000; j++) {	}
        }
    }
    if(a==3) {
        for (i=0; i<10000*a; i++) {
            for (j=0; j<1000; j++) {	}
        }
    }
    if(a==4) {
        for (i=0; i<1000*a; i++) {
            for (j=0; j<1000; j++) {	}
        }
    }
}

/* style functions*/

void style( int a)
{   if(a==1)
    {
        gotoxy(1,10);
        cout<<" ^^" ;
        gotoxy(1,11);
        cout<<"('')" ;
        gotoxy(1,12);
        cout<<" ()" ;
        gotoxy(2,13);
        cout<<"/\\" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(5,10);
        cout<<" ^^" ;
        gotoxy(5,11);
        cout<<"('')" ;
        gotoxy(5,12);
        cout<<" ()" ;
        gotoxy(6,13);
        cout<<"\\" ;
        delay(3);
        gotoxy(5,13);
        cout<<"/" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(9,10);
        cout<<" ^^" ;
        gotoxy(9,11);
        cout<<"('')" ;
        gotoxy(9,12);
        cout<<" ()" ;
        gotoxy(10,13);
        cout<<"/" ;
        delay(3);
        gotoxy(11,13);
        cout<<"\\" ;
        delay(3);
        delay(3);
        gotoxy(9,12);
        cout<<" W" ;
        gotoxy(9,14);
        cout<<"W" ;
        gotoxy(9,18);
        cout<<" W" ;
        gotoxy(10,21);
        cout<<"W" ;
        delay(3);
        gotoxy(11,22);
        cout<<"W" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(13,10);
        cout<<" ^^" ;
        gotoxy(13,11);
        cout<<"('')" ;
        gotoxy(13,12);
        cout<<" ()" ;
        gotoxy(14,13);
        cout<<"\\" ;
        delay(3);
        gotoxy(13,13);
        cout<<"/" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(16,10);
        cout<<" ^^" ;
        gotoxy(16,11);
        cout<<"('')" ;
        gotoxy(16,12);
        cout<<" ()" ;
        gotoxy(17,13);
        cout<<"/" ;
        delay(3);
        gotoxy(18,13);
        cout<<"\\" ;
        delay(3);
        delay(3);
        gotoxy(16,12);
        cout<<" E" ;
        gotoxy(16,14);
        cout<<"E" ;
        gotoxy(16,18);
        cout<<" E" ;
        gotoxy(17,21);
        cout<<"E" ;
        delay(3);
        gotoxy(18,22);
        cout<<"E" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,10);
        cout<<" ^^" ;
        gotoxy(25,11);
        cout<<"('')" ;
        gotoxy(25,12);
        cout<<" ()" ;
        gotoxy(26,13);
        cout<<"/" ;
        delay(3);
        gotoxy(27,13);
        cout<<"\\" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(28,10);
        cout<<" ^^" ;
        gotoxy(28,11);
        cout<<"('')" ;
        gotoxy(28,12);
        cout<<" ()" ;
        gotoxy(29,13);
        cout<<"\\" ;
        delay(3);
        gotoxy(28,13);
        cout<<"/" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(32,10);
        cout<<" ^^" ;
        gotoxy(32,11);
        cout<<"('')" ;
        gotoxy(32,12);
        cout<<" ()" ;
        gotoxy(33,13);
        cout<<"/" ;
        delay(3);
        gotoxy(34,13);
        cout<<"\\" ;
        delay(3);
        delay(3);
        gotoxy(32,12);
        cout<<" L" ;
        gotoxy(32,14);
        cout<<"L" ;
        gotoxy(32,18);
        cout<<" L" ;
        gotoxy(33,21);
        cout<<"L" ;
        delay(3);
        gotoxy(34,22);
        cout<<"L" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(36,10);
        cout<<" ^^" ;
        gotoxy(36,11);
        cout<<"('')" ;
        gotoxy(36,12);
        cout<<" ()" ;
        gotoxy(37,13);
        cout<<"\\" ;
        delay(3);
        gotoxy(36,13);
        cout<<"/" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(40,10);
        cout<<" ^^" ;
        gotoxy(40,11);
        cout<<"('')" ;
        gotoxy(40,12);
        cout<<" ()" ;
        gotoxy(41,13);
        cout<<"/" ;
        delay(3);
        gotoxy(42,13);
        cout<<"\\" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(48,10);
        cout<<" ^^" ;
        gotoxy(48,11);
        cout<<"('')" ;
        gotoxy(48,12);
        cout<<" ()" ;
        gotoxy(49,13);
        cout<<"\\" ;
        delay(3);
        gotoxy(48,13);
        cout<<"/" ;
        delay(3);
        delay(3);
        gotoxy(48,12);
        cout<<" C" ;
        gotoxy(48,14);
        cout<<"C" ;
        gotoxy(48,18);
        cout<<" C" ;
        gotoxy(49,21);
        cout<<"C" ;
        delay(3);
        gotoxy(48,22);
        cout<<"C" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(32,24);
        cout<<"C" ;
        gotoxy(51,10);
        cout<<" ^^" ;
        gotoxy(51,11);
        cout<<"('')" ;
        gotoxy(51,12);
        cout<<" ()" ;
        gotoxy(52,13);
        cout<<"/" ;
        delay(3);
        gotoxy(53,13);
        cout<<"\\" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(32,24);
        cout<<"C" ;
        gotoxy(61,10);
        cout<<" ^^" ;
        gotoxy(61,11);
        cout<<"('')" ;
        gotoxy(61,12);
        cout<<" ()" ;
        gotoxy(62,13);
        cout<<"\\" ;
        delay(3);
        gotoxy(61,13);
        cout<<"/" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(32,24);
        cout<<"C" ;
        gotoxy(71,10);
        cout<<" ^^" ;
        gotoxy(71,11);
        cout<<"('')" ;
        gotoxy(71,12);
        cout<<" ()" ;
        gotoxy(72,13);
        cout<<"/" ;
        delay(3);
        gotoxy(73,13);
        cout<<"\\" ;
        delay(3);
        delay(3);
        gotoxy(71,12);
        cout<<" ^O" ;
        gotoxy(71,14);
        cout<<"(O" ;
        gotoxy(71,18);
        cout<<" O" ;
        gotoxy(72,21);
        cout<<"O" ;
        delay(3);
        gotoxy(73,22);
        cout<<"O" ;
        delay(3);
        delay(3);
        clrscr();
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(32,24);
        cout<<"C" ;
        gotoxy(45,24);
        cout<<"O" ;
        gotoxy(76,10);
        cout<<" ^^" ;
        gotoxy(76,11);
        cout<<"('')" ;
        gotoxy(76,12);
        cout<<" ()" ;
        gotoxy(77,13);
        cout<<"\\" ;
        delay(3);
        gotoxy(76,13);
        cout<<"/" ;
        delay(3);
        delay(3);
        gotoxy(76,12);
        cout<<" M" ;
        gotoxy(76,14);
        cout<<"M" ;
        gotoxy(76,18);
        cout<<"M" ;
        gotoxy(77,21);
        cout<<"M" ;
        delay(3);
        gotoxy(76,22);
        cout<<"M" ;
        delay(3);
        delay(3);
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(32,24);
        cout<<"C" ;
        gotoxy(45,24);
        cout<<"O" ;
        gotoxy(58,24);
        cout<<"M" ;
        gotoxy(76,12);
        cout<<" E" ;
        gotoxy(76,14);
        cout<<"E" ;
        gotoxy(76,18);
        cout<<" E" ;
        gotoxy(77,21);
        cout<<"E" ;
        delay(3);
        gotoxy(76,22);
        cout<<"E" ;
        delay(3);
        delay(3);
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(32,24);
        cout<<"C" ;
        gotoxy(45,24);
        cout<<"O" ;
        gotoxy(58,24);
        cout<<"M" ;
        gotoxy(76,24);
        cout<<"E" ;
        clrscr();
        gotoxy(76,10);
        cout<<" ^^" ;
        gotoxy(76,11);
        cout<<"('')" ;
        gotoxy(75,12);
        cout<<" /()\\" ;
        gotoxy(78,13);
        cout<<"\\" ;
        delay(3);
        gotoxy(77,13);
        cout<<"/" ;
        delay(3);
        delay(3);
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(32,24);
        cout<<"C" ;
        gotoxy(45,24);
        cout<<"O" ;
        gotoxy(58,24);
        cout<<"M" ;
        delay(3);
        gotoxy(11,24);
        cout<<"W" ;
        gotoxy(18,24);
        cout<<"E" ;
        gotoxy(25,24);
        cout<<"L" ;
        gotoxy(32,24);
        cout<<"C" ;
        gotoxy(45,24);
        cout<<"O" ;
        gotoxy(58,24);
        cout<<"M" ;
        gotoxy(76,24);
        cout<<"E" ;
        gotoxy(5,10);
        cout<<" Hi.. Hi,,, HA,,,HA,, wooo" ;
        delay(2);
        delay(2);
        delay(2);
        delay(2);
        delay(2);
        delay(2);
        delay(2);
        delay(2);
        delay(2);
        gotoxy(20,13);
        cout<<"W";
        delay(2);
        delay(2);
        gotoxy(21,13);
        cout<<"E";
        delay(2);
        delay(2);
        gotoxy(22,13);
        cout<<"L";
        delay(2);
        delay(2);
        gotoxy(23,13);
        cout<<"C";
        delay(2);
        delay(2);
        gotoxy(24,13);
        cout<<"O";
        delay(2);
        delay(2);
        gotoxy(25,13);
        cout<<"M";
        delay(2);
        delay(2);
        gotoxy(26,13);
        cout<<"E";
        delay(2);
        delay(2);
        gotoxy(29,13);
        cout<<"T";
        delay(2);
        delay(2);
        gotoxy(30,13);
        cout<<"O";
        delay(2);
        delay(2);
        gotoxy(32,13);
        cout<<"A";
        delay(2);
        delay(2);
        gotoxy(34,13);
        cout<<"N";
        delay(2);
        delay(2);
        gotoxy(35,13);
        cout<<"E";
        delay(2);
        delay(2);
        gotoxy(36,13);
        cout<<"W";
        delay(2);
        delay(2);
        gotoxy(39,13);
        cout<<"W";
        delay(2);
        delay(2);
        gotoxy(40,13);
        cout<<"O";
        delay(2);
        delay(2);
        gotoxy(41,13);
        cout<<"R";
        delay(2);
        delay(2);
        gotoxy(42,13);
        cout<<"L";
        delay(2);
        delay(2);
        gotoxy(43,13);
        cout<<"D";
        delay(2);
        delay(2);
        gotoxy(45,13);
        cout<<"W";
        delay(2);
        delay(2);
        gotoxy(46,13);
        cout<<"I";
        delay(2);
        delay(2);
        gotoxy(47,13);
        cout<<"T";
        delay(2);
        gotoxy(48,13);
        cout<<"H";
        delay(2);
        delay(2);
        gotoxy(53,13);
        cout<<"M";
        delay(2);
        delay(2);
        gotoxy(54,13);
        cout<<"E";
        delay(2);
        getch();


    }
    if(a==2) {    }
    if(a==3)
    {
        gotoxy(1,1);
        cout<<"O";
        gotoxy(80,1);
        cout<<"K";
        gotoxy(1,24);
        cout<<"S";
        gotoxy(80,24);
        cout<<"B";
        gotoxy(1,12);
        cout<<"W";
        gotoxy(80,12);
        cout<<"N";
        delay(1);
        clrscr();

        gotoxy(10,4);
        cout<<"O";
        gotoxy(71,4);
        cout<<"K";
        gotoxy(10,21);
        cout<<"S";
        gotoxy(71,21);
        cout<<"B";
        gotoxy(10,12);
        cout<<"W";
        gotoxy(71,12);
        cout<<"N";
        delay(1);
        clrscr();

        gotoxy(20,6);
        cout<<"O";
        gotoxy(61,6);
        cout<<"K";
        gotoxy(20,19);
        cout<<"S";
        gotoxy(61,19);
        cout<<"B";
        gotoxy(20,12);
        cout<<"W";
        gotoxy(61,12);
        cout<<"N";
        delay(1);
        clrscr();
        gotoxy(25,8);
        cout<<"O";
        gotoxy(56,8);
        cout<<"K";
        gotoxy(25,17);
        cout<<"S";
        gotoxy(56,17);
        cout<<"B";
        gotoxy(25,12);
        cout<<"W";
        gotoxy(56,12);
        cout<<"N";
        delay(1);
        clrscr();
        gotoxy(30,11);
        cout<<"O";
        gotoxy(51,11);
        cout<<"K";
        gotoxy(30,14);
        cout<<"S";
        gotoxy(51,14);
        cout<<"B";
        gotoxy(30,12);
        cout<<"W";
        gotoxy(51,12);
        cout<<"N";
        delay(1);
        clrscr();
        gotoxy(33,13);
        cout<<"O";
        gotoxy(48,13);
        cout<<"K";
        gotoxy(33,12);
        cout<<"S";
        gotoxy(48,12);
        cout<<"B";
        gotoxy(33,12);
        cout<<"W";
        gotoxy(48,12);
        cout<<"N";

        delay(1);
        clrscr();

        gotoxy(36,12);
        cout<<"O K S B W N";
        delay(1);
        delay(2);
        gotoxy(32,10);
        cout<<"*";
        delay(2);
        gotoxy(34,10);
        cout<<"*";
        gotoxy(36,10);
        cout<<"*";
        delay(2);
        gotoxy(38,10);
        cout<<"*";
        delay(2);
        gotoxy(40,10);
        cout<<"*";
        delay(2);
        gotoxy(42,10);
        cout<<"*";
        delay(2);
        delay(2);
        delay(2);
        delay(2);
        gotoxy(44,10);
        cout<<"*";
        delay(2);
        gotoxy(46,10);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(48,10);
        cout<<"*";
        delay(2);

        delay(2);
        gotoxy(51,10);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(51,11);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(51,12);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(51,13);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(51,14);
        cout<<"*";
        delay(2);
        delay(2);


        gotoxy(51,14);
        cout<<"*";
        delay(2);
        delay(2);
        delay(2);
        gotoxy(49,14);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(47,14);
        cout<<"*";
        delay(2);
        delay(2);
        delay(2);
        gotoxy(45,14);
        cout<<"*";
        delay(2);
        delay(2);
        delay(2);
        gotoxy(43,14);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(41,14);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(39,14);
        cout<<"*";
        delay(2);
        gotoxy(37,14);
        cout<<"*";
        delay(2);
        delay(2);
        delay(2);
        gotoxy(35,14);
        cout<<"*";
        delay(2);
        delay(2);
        delay(2);
        gotoxy(33,14);
        cout<<"*";
        delay(2);
        delay(2);


        gotoxy(32,13);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(32,12);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(32,11);
        cout<<"*";
        delay(2);
        delay(2);
        gotoxy(79,25);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(36,12);
        cout<<"INTRODUCES.....";
        delay(1);
        delay(1);
        delay(1);
        delay(1);
    }
    if(a==4)
    {   gotoxy(20,15);
        cout<<"T";
        delay(2);
        gotoxy(21,15);
        cout<<"O";
        delay(2);
        gotoxy(23,15);
        cout<<"P";
        delay(2);
        gotoxy(24,15);
        cout<<"L";
        delay(2);
        gotoxy(25,15);
        cout<<"A";
        delay(2);
        gotoxy(26,15);
        cout<<"Y";
        delay(2);
        gotoxy(29,15);
        cout<<"P";
        delay(2);
        gotoxy(30,15);
        cout<<"R";
        delay(2);
        gotoxy(31,15);
        cout<<"E";
        delay(2);
        gotoxy(32,15);
        cout<<"S";
        delay(2);
        gotoxy(33,15);
        cout<<"S";
        delay(2);
        gotoxy(35,15);
        cout<<"1";
        delay(2);
        gotoxy(37,15);
        cout<<"O";
        delay(2);
        gotoxy(38,15);
        cout<<"R";
        delay(2);
        gotoxy(40,15);
        cout<<"2";
        delay(2);

        gotoxy(22,17);
        cout<<"C";
        delay(2);
        gotoxy(23,17);
        cout<<"H";
        delay(2);
        gotoxy(24,17);
        cout<<"O";
        delay(2);
        gotoxy(25,17);
        cout<<"I";
        delay(2);
        gotoxy(26,17);
        cout<<"C";
        delay(2);
        gotoxy(27,17);
        cout<<"E";
        delay(2);
        gotoxy(29,17);
        cout<<"I";
        delay(2);
        gotoxy(30,17);
        cout<<"S";
        delay(2);
        gotoxy(32,17);
        cout<<"(";
        delay(2);
        gotoxy(35,17);
        cout<<")";
        delay(2);
        gotoxy(22,17);
        delay(2);
        printf("CHOICE IS (  )");
    }
    if(a==5)
    {   gotoxy(25,16);
        delay(2);
        cout<<"H";
        gotoxy(26,16);
        delay(2);
        cout<<"E";
        gotoxy(27,16);
        delay(2);
        cout<<"L";
        gotoxy(28,16);
        delay(2);
        cout<<"L";
        gotoxy(29,16);
        delay(2);
        cout<<"O";
        gotoxy(30,16);
        delay(2);
        cout<<".";
        gotoxy(31,16);
        delay(2);
        cout<<".";
        gotoxy(32,16);
        delay(2);
        cout<<".";
        gotoxy(33,16);
        delay(2);
        cout<<".";
    }
    if(a==6)
    {   gotoxy(26,13);
        delay(2);
        cout<<"E";
        gotoxy(27,13);
        delay(2);
        cout<<"N";
        gotoxy(28,13);
        delay(2);
        cout<<"T";
        gotoxy(29,13);
        delay(2);
        cout<<"E";
        gotoxy(30,13);
        delay(2);
        cout<<"R";
        gotoxy(34,13);
        delay(2);
        cout<<"A";
        gotoxy(36,13);
        delay(2);
        cout<<"N";
        gotoxy(37,13);
        delay(2);
        cout<<"O";
        gotoxy(40,13);
        delay(2);
        cout<<"U";
        gotoxy(43,13);
        delay(2);
        cout<<"L";
        gotoxy(44,13);
        delay(2);
        cout<<"I";
        gotoxy(45,13);
        delay(2);
        cout<<"K";
        gotoxy(46,13);
        delay(2);
        cout<<"E";
        gotoxy(49,13);
        delay(2);
        cout<<"M";
        gotoxy(50,13);
        delay(2);
        cout<<"O";
        gotoxy(51,13);
        delay(2);
        cout<<"S";
        gotoxy(52,13);
        delay(2);
        cout<<"T";
    }
    if(a==7)
    {   gotoxy(20,10);
        delay(2);
        cout<<"R";
        gotoxy(21,10);
        delay(2);
        cout<<"E";
        gotoxy(22,10);
        delay(2);
        cout<<"S";
        gotoxy(23,10);
        delay(2);
        cout<<"E";
        gotoxy(24,10);
        delay(2);
        cout<<"T";
        gotoxy(27,10);
        delay(2);
        cout<<"Y";
        gotoxy(28,10);
        delay(2);
        cout<<"O";
        gotoxy(29,10);
        delay(2);
        cout<<"U";
        gotoxy(30,10);
        delay(2);
        cout<<"R";
        gotoxy(33,10);
        delay(2);
        cout<<"M";
        gotoxy(34,10);
        delay(2);
        cout<<"I";
        gotoxy(35,10);
        delay(2);
        cout<<"N";
        gotoxy(36,10);
        delay(2);
        cout<<"D";
        gotoxy(39,10);
        delay(2);
        cout<<"A";
        gotoxy(40,10);
        delay(2);
        cout<<"N";
        gotoxy(41,10);
        delay(2);
        cout<<"D";
        gotoxy(44,10);
        delay(2);
        cout<<"G";
        gotoxy(45,10);
        delay(2);
        cout<<"E";
        gotoxy(46,10);
        delay(2);
        cout<<"T";
        gotoxy(49,10);
        delay(2);
        cout<<"R";
        gotoxy(50,10);
        delay(2);
        cout<<"E";
        gotoxy(51,10);
        delay(2);
        cout<<"A";
        gotoxy(52,10);
        delay(2);
        cout<<"D";
        gotoxy(53,10);
        delay(2);
        cout<<"Y";
    }
    if(a==8)
    {
        gotoxy(19,10);
        delay(2);
        cout<<"C";
        gotoxy(20,10);
        delay(2);
        cout<<"U";
        gotoxy(21,10);
        delay(2);
        cout<<"R";
        gotoxy(22,10);
        delay(2);
        cout<<"R";
        gotoxy(23,10);
        delay(2);
        cout<<"E";
        gotoxy(24,10);
        delay(2);
        cout<<"N";
        gotoxy(25,10);
        delay(2);
        cout<<"T";
        gotoxy(28,10);
        delay(2);
        cout<<"S";
        gotoxy(29,10);
        delay(2);
        cout<<"C";
        gotoxy(30,10);
        delay(2);
        cout<<"O";
        gotoxy(31,10);
        delay(2);
        cout<<"R";
        gotoxy(32,10);
        delay(2);
        cout<<"E";
        gotoxy(35,10);
        delay(2);
        cout<<"I";
        gotoxy(36,10);
        delay(2);
        cout<<"S";
        gotoxy(39,10);
        delay(2);
        cout<<".";
        gotoxy(40,10);
        delay(2);
        cout<<".";
    }
    if(a==9) {
        gotoxy(20,17);
        delay(1);
        delay(1);
        printf(" .....DO BETTER NEXT TIME......\n") ;
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(26,10);
        delay(1);
        delay(1);
        printf(" CREATED BY\n") ;
        gotoxy(26,11);
        cout<<"------------";
        delay(1);
        delay(1);
        delay(1);
        gotoxy(23,12);
        cout<<"B";
        delay(2);
        gotoxy(24,12);
        cout<<"I";
        delay(2);
        gotoxy(25,12);
        cout<<"K";
        delay(2);
        gotoxy(26,12);
        cout<<"A";
        delay(2);
        gotoxy(27,12);
        cout<<"S";
        delay(2);
        gotoxy(28,12);
        cout<<"H";
        delay(2);
        gotoxy(30,12);
        cout<<"N";
        delay(2);
        gotoxy(31,12);
        cout<<"A";
        delay(2);
        gotoxy(32,12);
        cout<<"R";
        delay(2);
        gotoxy(33,12);
        cout<<"A";
        delay(2);
        gotoxy(34,12);
        cout<<"Y";
        delay(2);
        gotoxy(35,12);
        cout<<"A";
        delay(2);
        gotoxy(36,12);
        cout<<"N";
        delay(2);
        gotoxy(38,12);
        cout<<"P";
        delay(2);
        gotoxy(39,12);
        cout<<"A";
        delay(2);
        gotoxy(40,12);
        cout<<"N";
        delay(2);
        gotoxy(41,12);
        cout<<"D";
        delay(2);
        gotoxy(42,12);
        cout<<"A";
        delay(2);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(26,10);
        printf(" THANKS  TO\n") ;
        gotoxy(26,11);
        cout<<"-------------";
        delay(1);
        delay(1);
        delay(1);
        gotoxy(25,12);
        cout<<"A";
        delay(2);
        gotoxy(26,12);
        cout<<"A";
        delay(2);
        gotoxy(27,12);
        cout<<"L";
        delay(2);
        gotoxy(29,12);
        cout<<"M";
        delay(2);
        gotoxy(30,12);
        cout<<"Y";
        delay(2);
        gotoxy(32,12);
        cout<<"F";
        delay(2);
        gotoxy(33,12);
        cout<<"R";
        delay(2);
        gotoxy(34,12);
        cout<<"I";
        delay(2);
        gotoxy(35,12);
        cout<<"E";
        delay(2);
        gotoxy(36,12);
        cout<<"N";
        delay(2);
        gotoxy(37,12);
        cout<<"D";
        delay(2);
        gotoxy(38,12);
        cout<<"S";
        delay(2);
        delay(1);
        delay(1);
        clrscr();

        gotoxy(27,10);
        printf(" PUBLISHED ON\n") ;
        gotoxy(27,11);
        cout<<"--------------";
        delay(1);
        delay(1);

        gotoxy(29,12);
        cout<<"1";
        delay(2);
        gotoxy(30,12);
        cout<<".";
        delay(2);
        gotoxy(31,12);
        cout<<"0";
        delay(2);
        gotoxy(32,12);
        cout<<"1";
        delay(2);
        gotoxy(33,12);
        cout<<".";
        delay(2);
        gotoxy(34,12);
        cout<<"2";
        delay(2);
        gotoxy(35,12);
        cout<<"0";
        delay(2);
        gotoxy(36,12);
        cout<<"1";
        delay(2);
        gotoxy(37,12);
        cout<<"1";
        delay(2);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(27,10);
        printf(" PROJECT TIME") ;
        gotoxy(26,11);
        cout<<"--------------";
        delay(1);
        delay(1);
        delay(1);
        gotoxy(29,12);
        cout<<"T";
        delay(2);
        gotoxy(30,12);
        cout<<"W";
        delay(2);
        gotoxy(31,12);
        cout<<"O";
        delay(2);
        gotoxy(33,12);
        cout<<"Y";
        delay(2);
        gotoxy(34,12);
        cout<<"E";
        delay(2);
        gotoxy(35,12);
        cout<<"A";
        delay(2);
        gotoxy(36,12);
        cout<<"R";
        delay(2);
        gotoxy(37,12);
        cout<<"S";
        delay(2);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(30,10);
        printf(" HAVE YOUR FEED BACK TO \n") ;
        delay(1);
        delay(1);
        gotoxy(32,12);
        cout<<"O";
        delay(2);
        gotoxy(33,12);
        cout<<"K";
        delay(2);
        gotoxy(34,12);
        cout<<"S";
        delay(2);
        gotoxy(35,12);
        cout<<"B";
        delay(2);
        gotoxy(36,12);
        cout<<"W";
        delay(2);
        gotoxy(37,12);
        cout<<"N";
        delay(2);
        gotoxy(39,12);
        cout<<"@";
        delay(2);
        gotoxy(41,12);
        cout<<"R";
        delay(2);
        gotoxy(42,12);
        cout<<"E";
        delay(2);
        gotoxy(43,12);
        cout<<"D";
        delay(2);
        gotoxy(44,12);
        cout<<"I";
        delay(2);
        gotoxy(45,12);
        cout<<"F";
        delay(2);
        gotoxy(46,12);
        cout<<"F";
        delay(2);
        gotoxy(47,12);
        cout<<"M";
        delay(2);
        gotoxy(48,12);
        cout<<"A";
        delay(2);
        gotoxy(49,12);
        cout<<"I";
        delay(2);
        gotoxy(50,12);
        cout<<"L";
        delay(2);
        gotoxy(52,12);
        cout<<".";
        delay(2);
        gotoxy(54,12);
        cout<<"C";
        delay(2);
        gotoxy(55,12);
        cout<<"O";
        delay(2);
        gotoxy(56,12);
        cout<<"M";
        delay(2);
        gotoxy(60,12);
        cout<<"C";
        delay(2);
        gotoxy(61,12);
        cout<<"A";
        delay(2);
        gotoxy(62,12);
        cout<<"L";
        delay(2);
        gotoxy(63,12);
        cout<<"L";
        delay(2);
        gotoxy(32,12);


        cout<<"1";
        delay(2);
        gotoxy(64,12);
        cout<<":";
        delay(2);
        gotoxy(65,12);

        cout<<":";
        delay(2);

        gotoxy(67,12);
        cout<<"9";
        delay(2);
        gotoxy(68,12);
        cout<<"0";
        delay(2);
        gotoxy(69,12);
        cout<<"4";
        delay(2);
        gotoxy(70,12);
        cout<<"0";
        delay(2);
        gotoxy(71,12);
        cout<<"3";
        delay(2);
        gotoxy(72,12);
        cout<<"8";
        delay(2);
        gotoxy(73,12);
        cout<<"3";
        delay(2);
        gotoxy(74,12);
        cout<<"9";
        delay(2);
        gotoxy(75,12);
        cout<<"8";
        delay(2);
        gotoxy(76,12);
        cout<<"0";
        delay(2);


        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
    }

}


/*FILTER DESIGN */
void filter() {
    double a,b,c,d,e,f,g;
om:
    clrscr();
    gotoxy(36,2);
    cout<<"DESIGN FILTERS";

    gotoxy(20,10);
    cout<<"PRESS 1 FOR LPF ,2 FOR BPF,3 FOR HPF AND 4 FOR BRF";
    gotoxy(39,15);
    cout<<"( )";
    gotoxy(40,15);
    cin>>a;
    if(a==1) {
        clrscr();
        gotoxy(20,10);
        cout<<"ENTER VALUE OF PASS BAND GAIN";
        gotoxy(39,15);
        cout<<"GAIN (    )";
        gotoxy(46,15);
        cin>>a;
        clrscr();
        gotoxy(20,10);
        cout<<"ENTER VALUE OF Fh";
        gotoxy(39,15);
        cout<<"Fh(    )";
        gotoxy(43,15);
        cin>>b;
        clrscr();
        gotoxy(20,10);
        cout<<"CHOOSE A VALUE OF CAPACITOR 0.1(1),0.01(2),0.001(3)";
        gotoxy(39,15);
        cout<<"c:  ";
        gotoxy(42,15);
        cin>>c;
        if(c==1) {
            d=.1;
        }
        if(c==2) {
            d=.01;
        }
        if(c==3) {
            d=.001;
        }
        clrscr();
        gotoxy(20,10);
        cout<<"CHOOSE A VALUE OF  FEEDBACK RESISTANCE";
        gotoxy(39,15);
        cout<<"Rf:";
        gotoxy(42,15);
        cin>>e;
        f=(a-1)*e;
        g=(.15/d)/b;
        clrscr();
        cout<<"THE CIRCUIT IS:";
        gotoxy(5,10);
        cout<<"Gnd";
        gotoxy(10,10);
        cout<<"___**___(    )_|_______|----------";
        gotoxy(33,11);
        cout<<"|";
        gotoxy(33,12);
        cout<<"|";
        gotoxy(33,13);
        cout<<"|";
        gotoxy(25,9);
        cout<<"|";
        gotoxy(25,8);
        cout<<"|";
        gotoxy(10,14);
        cout<<"____**__(    )_________|----------";
        gotoxy(25,8);
        cout<<"_____**_(    )____________";
        gotoxy(44,11);
        cout<<"|";
        gotoxy(44,12);
        cout<<"|";
        gotoxy(44,13);
        cout<<"|";
        gotoxy(45,12);
        cout<<"---------->";
        gotoxy(50,9);
        cout<<":";
        gotoxy(50,10);
        cout<<":";
        gotoxy(50,11);
        cout<<":";
        gotoxy(50,12);
        cout<<":";
        gotoxy(56,12);
        cout<<"OUTPUT";
        gotoxy(36,12);
        cout<<"OP-AMP";
        gotoxy(5,14);
        cout<<"Input";
        gotoxy(31,15);
        cout<<"|";
        gotoxy(31,16);
        cout<<"|";
        gotoxy(31,17);
        cout<<"|";
        gotoxy(25,18);
        cout<<"***(       )";
        gotoxy(31,19);
        cout<<"|";
        gotoxy(31,20);
        cout<<"|";
        gotoxy(30,22);
        cout<<"Gnd";

        gotoxy(19,10);
        cout<<f;
        gotoxy(19,14);
        cout<<g;
        gotoxy(34,8);
        cout<<e;
        gotoxy(29,18);
        cout<<d;
        gotoxy(48,22);
        cout<<"**RESISTANCES IN OHM";
        gotoxy(48,23);
        cout<<"***CAPACITORS IN MICROFARD";
    }

    else	if(a==2) {

        clrscr();
        gotoxy(20,10);
        cout<<"ENTER VALUE OF PASS BAND GAIN";
        gotoxy(39,15);
        cout<<"GAIN (    )";
        gotoxy(46,15);
        cin>>a;
        clrscr();
        gotoxy(20,10);
        cout<<"ENTER VALUE OF FL";
        gotoxy(39,15);
        cout<<"Fl(    )";
        gotoxy(43,15);
        cin>>b;
        clrscr();
        gotoxy(20,10);
        cout<<"CHOOSE A VALUE OF CAPACITOR 0.1(1),0.01(2),0.001(3)";
        gotoxy(39,15);
        cout<<"c:  ";
        gotoxy(42,15);
        cin>>c;
        if(c==1) {
            d=.1;
        }
        if(c==2) {
            d=.01;
        }
        if(c==3) {
            d=.001;
        }
        clrscr();
        gotoxy(20,10);
        cout<<"CHOOSE A VALUE OF  FEEDBACK RESISTANCE";
        gotoxy(39,15);
        cout<<"Rf:";
        gotoxy(42,15);
        cin>>e;
        f=(a-1)*e;
        g=(.15/d)/b;
        clrscr();
        cout<<"THE CIRCUIT IS:";
        gotoxy(5,10);
        cout<<"Gnd";
        gotoxy(10,10);
        cout<<"____**__(    )_|_______|----------";
        gotoxy(33,11);
        cout<<"|";
        gotoxy(33,12);
        cout<<"|";
        gotoxy(33,13);
        cout<<"|";
        gotoxy(25,9);
        cout<<"|";
        gotoxy(25,8);
        cout<<"|";
        gotoxy(10,14);
        cout<<"__***___(    )_________|----------";
        gotoxy(25,8);
        cout<<"____**__(    )____________";
        gotoxy(44,11);
        cout<<"|";
        gotoxy(44,12);
        cout<<"|";
        gotoxy(44,13);
        cout<<"|";
        gotoxy(45,12);
        cout<<"---------->";
        gotoxy(50,9);
        cout<<":";
        gotoxy(50,10);
        cout<<":";
        gotoxy(50,11);
        cout<<":";
        gotoxy(50,12);
        cout<<":";
        gotoxy(56,12);
        cout<<"OUTPUT";
        gotoxy(36,12);
        cout<<"OP-AMP";
        gotoxy(5,14);
        cout<<"Input";
        gotoxy(31,15);
        cout<<"|";
        gotoxy(31,16);
        cout<<"|";
        gotoxy(31,17);
        cout<<"|";
        gotoxy(25,18);
        cout<<"**(       )";
        gotoxy(31,19);
        cout<<"|";
        gotoxy(31,20);
        cout<<"|";
        gotoxy(30,22);
        cout<<"Gnd";

        gotoxy(19,10);
        cout<<f;
        gotoxy(19,14);
        cout<<g;
        gotoxy(34,8);
        cout<<e;
        gotoxy(28,18);
        cout<<d;
        gotoxy(48,22);
        cout<<"**RESISTANCES IN OHM";
        gotoxy(48,23);
        cout<<"***CAPACITORS IN MICROFARD";
    }
    else
    {   gotoxy(20,10);
        cout<<"NOT A PROPER CHOICE";
        goto om;
    }
    getch();
}

/*RULES STYLE*/
int  style5()
{   int  a;
    int i;
    char string[60];
    char str1[40] = "HERE THE RULES TO PLAY THE GAME..";
    strcpy(string, str1);

    for (i=0; i<40; i++) {
        delay(2);
        gotoxy(1+i,5);
        cout<<string[i];
    }
    getch();

    gotoxy(25,10);
    cout<<"TO SKIP RULES PRESS '1' OR ELSE '2'" ;
    gotoxy(25,17);
    cout<<"skip<<(  )???" ;
    gotoxy(32,17);
    cin>>a;
    if(a==1) {
        return(0);
    }
    gotoxy(50,23);
    cout<<"HERE THE RULES TO PLAY THE GAME.." ;
    delay(2);
    clrscr();
    gotoxy(35,23);
    cout<<"HERE THE RULES TO PLAY THE GAME.." ;
    delay(2);
    clrscr();
    gotoxy(30,23);
    cout<<"HERE THE RULES TO PLAY THE GAME.." ;
    delay(2);
    clrscr();
    gotoxy(25,23);
    cout<<"HERE THE RULES TO PLAY THE GAME.." ;
    delay(2);
    clrscr();
    gotoxy(20,23);
    cout<<"HERE THE RULES TO PLAY THE GAME.." ;
    delay(2);
    clrscr();
    gotoxy(10,23);
    cout<<"HERE THE RULES TO PLAY THE GAME.." ;
    delay(2);
    clrscr();
    gotoxy(1,5);
    cout<<"HERE THE RULES TO PLAY THE GAME.." ;
    gotoxy(1,9);
    cout<<"1.SEVERAL QUESTIONS UPON ELECTRONICS WILL BE ASKED TO U." ;
    gotoxy(1,11);
    cout<<"2.THOSE ARE OF MULTIPLE TYPE." ;
    gotoxy(1,13);
    cout<<"3. ANSWER THOSE BY PRESSING 1,2,3 OR ,4 " ;
    gotoxy(1,15);
    cout<<"4.IF YOUR ANSWER IS RIGHT NEXT QUESTION WILL BE FOR U" ;

    gotoxy(1,17);
    cout<<"5.ON WRONG ANSWER GAME WILL OVER" ;
    gotoxy(1,19);
    cout<<"6.3 CHANSES WILL BE FOR U TO SKIP QUESTIONS\n" ;
    gotoxy(1,21);
    cout<<"7. AFTER EVERY 10 ANSWERS U WILL CLEAR THE RESPECTIVE ROUND " ;
    gotoxy(15,23);
    cout<<"OK AFTER READING PRESS ENTER";
    getch();


    return(0);
}

void style4(int i,int j) {
    gotoxy(1,13);
    cout<<i;
    gotoxy(26,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(5,13);
    cout<<i;
    gotoxy(30,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(8,13);
    cout<<i;
    gotoxy(35,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(15,13);
    cout<<i;
    gotoxy(40,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(17,13);
    cout<<i;
    gotoxy(45,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(19,13);
    cout<<i;
    gotoxy(50,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(21,13);
    cout<<i;
    gotoxy(55,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(23,13);
    cout<<i;
    gotoxy(60,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(24,13);
    cout<<i;
    gotoxy(65,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(25,13);
    cout<<i;
    gotoxy(70,13);
    cout<<j;
    delay(4);
    clrscr();
    gotoxy(26,13);
    cout<<i;
    gotoxy(79,13);
    cout<<j;
    delay(4);
    clrscr();
}




/*WRUIGHT WRONG STYLE*/
void style1(int a)
{
    if( a==1) {
        gotoxy(25,24);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(25,22);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(25,20);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(25,19);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(25,18);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(25,16);
        cout<<"RIGHT";
        delay(2);
        clrscr();
    }

    if( a==2) {
        gotoxy(5,15);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(12,15);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(17,15);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(19,15);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(21,15);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(23,15);
        cout<<"WRONG";
        delay(2);
        clrscr();
    }
    if( a==3) {
        gotoxy(75,15);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(69,15);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(62,15);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(54,15);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(42,15);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(30,15);
        cout<<"RIGHT";
        delay(2);
        clrscr();
    }
    if( a==4) {
        gotoxy(1,23);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(5,21);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(10,20);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(18,18);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(21,17);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(23,16);
        cout<<"RIGHT";
        delay(2);
        clrscr();
    }
    if( a==5) {
        gotoxy(75,23);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(69,21);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(62,20);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(54,18);
        cout<<"RIGHT";
        delay(2);
        clrscr();
        gotoxy(42,17);
        cout<<"WRONG";
        delay(2);
        clrscr();
        gotoxy(30,16);
        cout<<"RIGHT";
        delay(2);
        clrscr();
    }
}






/*OPTIONS FUNCTIONS */
int opta(int x)
{   clrscr();
    if (x==1)
    {   gotoxy(20,10);
        printf("YOUR ANSWER IS ....");
        delay(1);
        style1(1);
        gotoxy(25,15);
        printf("RIGHT");
        delay(1);
        delay(1);
        delay(1);
        return (0);
    }
    else {
        gotoxy(20,10);
        printf("YOUR ANSWER IS ....");
        delay(1);
        style(2);
        gotoxy(25,15);
        printf("WRONG");
        delay(1);
        delay(1);
        delay(1);
        return (13);
    }
}
int optb(int x)
{   clrscr();
    if (x==2)
    {   gotoxy(20,10);
        printf("YOUR ANSWER IS ....");
        delay(1);
        style1(3);
        gotoxy(25,15);
        printf("RIGHT");
        delay(1);
        delay(1);
        return (1);
    }
    else {
        gotoxy(20,10);
        printf("YOUR ANSWER IS ....");
        delay(1);
        style1(1);
        gotoxy(25,15);
        printf("WRONG");
        delay(1);
        delay(1);
        delay(1);
        return (13);
    }
}
int optc(int x) {
    clrscr();
    if (x==3) {
        gotoxy(20,10);
        printf("YOUR ANSWER IS ....");
        delay(1);
        style1(4);
        gotoxy(25,15);
        printf("RIGHT");
        delay(1);
        delay(1);
        return (2);
    }
    else {
        gotoxy(20,10);
        printf("YOUR ANSWER IS ....");
        delay(1);
        style1(5);
        gotoxy(25,15);
        printf("WRONG");
        delay(1);
        delay(1);
        delay(1);
        return (13);
    }
}
int optd(int x)
{
    clrscr();
    if (x==4)
    {
        gotoxy(20,10);
        printf("YOUR ANSWER IS ....");
        delay(1);
        style1(1);
        gotoxy(25,15);
        printf("RIGHT");
        delay(1);
        delay(1);
        return (3);
    }
    else
    {
        gotoxy(20,10);
        printf("YOUR ANSWER IS ....");
        delay(1);
        style1(2);
        gotoxy(25,15);
        printf("WRONG");
        delay(1);
        delay(1);
        return (13);
    }
}

/*RESISTOR COLOUR CODE CLCULATOR*/

void rcode() {
    float a,b,c,d,e,f,g,h,i;
om:
    clrscr();
    gotoxy(20,1);
    cout<<"resistor colour code calculator";
    gotoxy(0,8);
    cout<<"BLACK:0,RED:1,YELLOOW:2,BLUE:3,GREY:4,WHITE:5,VIOLET:6,GREEEN:7,ORANGE:8,BROWN:9";
    gotoxy(10,15);
    cout<<"ENTER  ALL 3 BANDS";
    gotoxy(20,18);
    cout<<"FIRST:";
    gotoxy(45,18);
    cout<<"SECOND:";
    gotoxy(33,22);
    cout<<"THIRD:";
    gotoxy(27,18);
    cin>>a;
    d=code(a);
    gotoxy(52,18);
    cin>>b ;
    e=code(b);
    gotoxy(40,22);
    cin>>c ;
    f=code(c);
    g=(10*d)+e;
    h=(g*(pow(10,f)));

    gotoxy(32,12);
    cout<<"RESISTANCE IS::  "<<h<<"  OHM";
    getch();
    clrscr();
    cout<<"ENTER 1 TO  CONTINUE";
    cin>>i;
    if(i==1) goto om;

}


void intro()
{
    int i;
    char string[60];
    char str2[30] = "WE WILL SALUTE THE REAL WINNER";
    char str1[22] = "TEST YOURSELF WITH ME";
    char str3[16] = "BIKASH PRESENTS";
    char str4[15] = "A L B E R T O";
    char str5[22] = "TO PLAY PRESS 1 OR 2";
    char str6[19] = "CHOICE IS (  )";
    strcpy(string, str3);

    for (i=0; i<16; i++) {
        delay(2);
        gotoxy(20+i,10);
        cout<<string[i];
    }
    delay(1);
    delay(1);
    strcpy(string, str4);

    for (i=0; i<14; i++) {
        delay(1);
        gotoxy(23+i,15);
        cout<<string[i];
    }
    delay(1);
    delay(1);
    clrscr();
    delay(1);
    delay(1);

    strcpy(string, str1);

    for (i=0; i<23; i++) {
        delay(2);
        gotoxy(20+i,10);
        cout<<string[i];
    }
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    clrscr();

    strcpy(string, str2);

    for (i=0; i<30; i++) {
        delay(2);
        gotoxy(20+i,10);
        cout<<string[i];
    }
    delay(1);
    delay(1);
    delay(1);
    clrscr();

    strcpy(string, str5);

    for (i=0; i<21; i++) {
        delay(2);
        gotoxy(20+i,15);
        cout<<string[i];
    }
    strcpy(string, str6);

    for (i=0; i<15; i++) {
        delay(2);
        gotoxy(22+i,17);
        cout<<string[i];
    }
    delay(1);
    gotoxy(22,17);
    delay(2);
    printf("CHOICE IS (  )");

}





void qno() {
    gotoxy(22,10);
    delay(2);
    cout<<"Q";
    gotoxy(23,10);
    delay(2);
    cout<<"U";
    gotoxy(24,10);
    delay(2);
    cout<<"E";
    gotoxy(25,10);
    delay(2);
    cout<<"S";
    gotoxy(26,10);
    delay(2);
    cout<<"T";
    gotoxy(27,10);
    delay(2);
    cout<<"I";
    gotoxy(28,10);
    delay(2);
    cout<<"O";
    gotoxy(29,10);
    delay(2);
    cout<<"N";
    gotoxy(32,10);
    delay(2);
    cout<<"N";
    gotoxy(33,10);
    delay(2);
    cout<<"O";
    gotoxy(34,10);
    delay(2);
    cout<<"..";
    gotoxy(35,10);
    delay(2);
    cout<<"..";
}

void cong() {
    gotoxy(33,12);
    cout<<"C";
    delay(2);
    gotoxy(34,12);
    cout<<"O";
    delay(2);
    gotoxy(35,12);
    cout<<"N";
    delay(2);
    gotoxy(36,12);
    cout<<"G";
    delay(2);
    gotoxy(37,12);
    cout<<"R";
    delay(2);
    gotoxy(38,12);
    cout<<"A";
    delay(2);
    gotoxy(39,12);
    cout<<"T";
    delay(2);
    gotoxy(40,12);
    cout<<"U";
    delay(2);
    gotoxy(41,12);
    cout<<"L";
    delay(2);
    gotoxy(42,12);
    cout<<"A";
    delay(2);
    gotoxy(43,12);
    cout<<"T";
    delay(2);
    gotoxy(44,12);
    cout<<"I";
    delay(2);
    gotoxy(45,12);
    cout<<"O";
    delay(2);
    gotoxy(46,12);
    cout<<"N";
    delay(2);
    gotoxy(47,12);
    cout<<"S";
    delay(2);
}




/*OPAMP DESIGAN*/
void func()


{   int x,y,a,b,c,d,z,e;

om:
    clrscr();
    gotoxy(10,8);
    printf("ENTER :");
    gotoxy(15,10);
    printf(" 1 FOR INVERTING TYPE");
    gotoxy(15,12);
    printf(" 2 FOR NON INVERTING TYPE");
    gotoxy(36,16);
    cout<<"TYPE ( )";
    gotoxy(42,16);
    scanf("%d",&x);
    clrscr();

    if(x==1)
    {
        gotoxy(30,1);
        printf("INVERTING TYPE OPAMP");
        gotoxy(20,10);
        printf("PRESS 1 FOR Vo, 2 FOR Rf,3 FOR R1 OR 4 FOR Vi");
        gotoxy(36,12.5);
        cout<<"TYPE ( )";
        gotoxy(42,12);
        scanf("%d",&y);
        clrscr();
        gotoxy(30,1);
        printf("INVERTING TYPE OPAMP");
        switch(y)
        {
        case 1:
            gotoxy(20,10);
            printf("ENTER Vi,R1 AND Rf");
            gotoxy(31,12);
            cout<<"Vi=";
            gotoxy(38,13);
            cout<<"R1=";
            gotoxy(45,14);
            cout<<"Rf=";
            gotoxy(34,12);
            cin>>a;
            delay (1);
            gotoxy(41,13);
            cin>>b;
            delay (1);
            gotoxy(48,14);
            cin>>c;
            delay (1);
            d=c/b;
            e=d*a;
            gotoxy(25,18);
            delay (1);
            delay (1);
            printf("THE OUTPUT VOLTAGE IS=   -%dvolt\n",e);
            gotoxy(30,20);
            delay (1);
            printf("THE GAIN  IS=%d\n",e/a);
            getch();
            goto end;

        case 2:

            gotoxy(20,10);
            printf("ENTER Vi,R1 AND Vo");
            gotoxy(31,12);
            cout<<"Vi=";
            gotoxy(38,13);
            cout<<"R1=";
            gotoxy(46,14);
            cout<<"Vo=";
            gotoxy(34,12);
            cin>>a;
            delay (1);
            gotoxy(41,13);
            cin>>b;
            delay (1);
            gotoxy(49,14);
            cin>>c;
            delay (1);

            d=c/a;
            e=d*b;
            gotoxy(25,18);
            delay (1);
            delay (1);
            printf("THE FEED BACK RESISTANCE VALUE IS = %d ohm\n",e);
            gotoxy(30,20);
            delay (1);
            printf("THE GAIN  IS=%d\n",d);
            getch();
            goto end;
        case 3:
            gotoxy(20,10);
            printf("ENTER Vi,Rf AND Vo");
            gotoxy(31,12);
            cout<<"Vi=";
            gotoxy(38,13);
            cout<<"Rf=";
            gotoxy(46,14);
            cout<<"Vo=";
            gotoxy(34,12);
            cin>>a;
            delay (1);
            gotoxy(41,13);
            cin>>b;
            delay (1);
            gotoxy(49,14);
            cin>>c;
            delay (1);
            d=a/c;
            e=d*b;

            gotoxy(25,18);
            delay (1);
            delay (1);
            printf("THE INPUT  RESISTANCE VALUE IS = %d ohm\n",e);
            gotoxy(30,20);
            delay (1);
            printf("THE GAIN  IS=%d\n",1/d);
            getch();

            goto end;
        case 4:

            gotoxy(20,10);
            printf("ENTER Rf,R1 AND Vo");
            delay (1);
            gotoxy(31,12);
            cout<<"Rf=";
            gotoxy(38,13);
            cout<<"R1=";
            gotoxy(46,14);
            cout<<"Vo=";
            gotoxy(34,12);
            cin>>a;
            gotoxy(41,13);
            cin>>b;
            delay (1);
            gotoxy(49,14);
            cin>>c;
            delay (1);

            d=a/b;
            e=c/d;
            gotoxy(25,18);
            delay (1);
            delay (1);
            printf("THE INPUT VOLTAGE IS=   %dvolt\n",e);
            gotoxy(30,20);
            delay (1);
            printf("THE GAIN  IS=%d\n",c/e);
            getch();


            goto end;


        }
        clrscr();
        gotoxy(20,10);
        printf("NOT A CORRECT CHOICE");
        getch();
        goto om;
    }
    if (x==2)
    {
        gotoxy(30,1);
        printf("NON -INVERTING TYPE OPAMP");
        gotoxy(20,10);
        printf("PRESS 1 FOR Vo, 2 FOR Rf,3 FOR R1 OR 4 FOR Vi");
        gotoxy(36,12.5);
        cout<<"TYPE ( )";
        gotoxy(42,12);
        scanf("%d",&y);
        clrscr();
        gotoxy(30,1);
        printf("INVERTING TYPE OPAMP");

        switch(y)
        {
        case 1:
            gotoxy(20,10);
            printf("ENTER Vi,R1 AND Rf");
            gotoxy(31,12);
            cout<<"Vi=";
            gotoxy(38,13);
            cout<<"R1=";
            gotoxy(46,14);
            cout<<"Rf=";
            gotoxy(34,12);
            cin>>a;
            delay (1);
            gotoxy(41,13);
            cin>>b;
            delay (1);
            gotoxy(49,14);
            cin>>c;
            delay (1);
            d=c/b;
            e=(1+d)*a;

            gotoxy(25,18);
            delay (1);
            delay (1);
            printf("THE OUTPUT VOLTAGE IS=   %dvolt\n",e);
            gotoxy(30,20);
            delay (1);
            printf("THE GAIN  IS=%d\n",e/a);
            getch();

            goto end;

        case 2:
            gotoxy(20,10);
            printf("ENTER Vi,R1 AND Vo");
            gotoxy(31,12);
            cout<<"Vi=";
            gotoxy(38,13);
            cout<<"R1=";
            gotoxy(46,14);
            cout<<"Vo=";
            gotoxy(34,12);
            cin>>a;
            delay (1);
            gotoxy(41,13);
            cin>>b;
            delay (1);
            gotoxy(49,14);
            cin>>c;
            delay (1);
            d=c/a;
            e=(d-1)*b;
            gotoxy(25,18);
            delay (1);
            delay (1);
            printf("THE FEED BACK RESISTANCE VALUE IS = %d ohm\n",e);
            gotoxy(30,20);
            delay (1);
            printf("THE GAIN  IS=%d\n",d);
            getch();

            goto end;
        case 3:
            gotoxy(20,10);
            printf("ENTER Vi,Rf AND Vo");
            gotoxy(31,12);
            cout<<"Vi=";
            gotoxy(38,13);
            cout<<"Rf=";
            gotoxy(46,14);
            cout<<"Vo=";
            gotoxy(34,12);
            cin>>a;
            delay (1);
            gotoxy(41,13);
            cin>>b;
            delay (1);
            gotoxy(49,14);
            cin>>c;
            delay (1);
            d=c/a;
            e=b/(d-1);

            gotoxy(25,18);
            delay (1);
            delay (1);
            printf("THE INPUT  RESISTANCE VALUE IS = %d ohm\n",e);
            gotoxy(30,20);
            delay (1);
            printf("THE GAIN  IS=%d\n",d);
            getch();

            goto end;
        case 4:
            gotoxy(20,10);
            printf("ENTER Rf,R1 AND Vo");
            gotoxy(31,12);
            cout<<"Rf=";
            gotoxy(38,13);
            cout<<"R1=";
            gotoxy(46,14);
            cout<<"Vo=";
            gotoxy(34,12);
            cin>>a;
            delay (1);
            gotoxy(41,13);
            cin>>b;
            delay (1);
            gotoxy(49,14);
            cin>>c;
            delay (1);

            d=a/b;
            e=c/(d+1);
            gotoxy(25,18);
            delay (1);
            delay (1);
            printf("THE INPUT VOLTAGE IS=   %dvolt\n",e);
            gotoxy(30,20);
            delay (1);
            printf("THE GAIN  IS=%d\n",c/e);
            getch();

            goto end;

        }
        clrscr();
        gotoxy(20,10);
        printf("NOT A CORRECT CHOICE");
        getch();
        goto om;
    }
end:
    clrscr();
    gotoxy(20,10);
    delay (1);
    printf("WANT TO CONTINUE  ??\n");
    gotoxy(23,15);
    printf("YES(1)//NO(2)");
    gotoxy(40,15);
    scanf("%d",&z);
    if(z==1)
        goto om;
    else {
        clrscr();
        gotoxy(20,10);
        delay (1);
        delay (1);
        printf("THANKS USE AGAIN\n");
    }
    getch();


}













/*MAIN FUNCTION STARTS*/

int  main()
{
    int b,a,d,e,w,g,i,Q,K=0,A,V,Z;
    int m[60];
    char name[12];
    int q=-10,h=1,l=0,J=0;

    for (i=0; i<=60; i++)
    {
        m[i]=0;
    }




    /*INTRODUCTION */
    style(3);
    delay(1);
    delay(1);
    clrscr();
menu:
    gotoxy(10,8);
    cout<<"1.USE OPAMP CALCULATOR";
    delay(1);
    gotoxy(10,9);
    cout<<"2.PLAY GAME";
    delay(1);
    gotoxy(10,10);
    cout<<"3.FILTER DESIGN";
    delay(1);
    gotoxy(10,11);
    cout<<"4.RESISTOR COLOUR CODE";
    delay(1);
    gotoxy(10,12);
    cout<<"5.FIND THE NO GAME";
    delay(1);
    gotoxy(20,16);
    cout<<"ENTER YOUR CHOICE";
    delay(1);
    gotoxy(35,19);
    cout<<"..( )..";
    gotoxy(38,19);
    cin>>A;
    if(A==1)
    {
        style(1);
        func();
        goto om8;
    }
    if(A==3)
    {
        style(1);
        filter();
        goto om8;
    }
    if(A==4)
    {
        style(1);
        rcode();
        goto om8;
    }
    if(A==5)
    {
        style(1);
        game();
        goto om8;
    }
    delay(1);
    delay(1);
    delay(1);
    clrscr();

    intro();
    gotoxy(33,17);
    scanf("%d",&g);
    if(g==1) goto om;
    else
        goto om1;
    /*ASK A NO*/


om:

    style(1);
    clrscr();
    gotoxy(20,10);
    cout<<"PLEASE ENTER YOUR NAME";
    delay(1);
    gotoxy(21,13);
    cout<<"name:";
    gotoxy(27,13);
    cin>>name;
    getch();
    clrscr();
    style(5);
    gotoxy(38,16);
    cout<<name;
    getch();
    delay(1);
    delay(1);
    delay(1);
    clrscr();


    style5();


    clrscr();
rom:

    gotoxy(20,10);
    cout<<name<<"...." ;
    style(6);
    gotoxy(22,15);
    printf("NO IS.....(  )");
    gotoxy(33,15);
    scanf(" %d",&w);
    d= w*(rand()%100);
    printf("%d",d);
    if(d<0)
        d=d*-1;

    if(d>100) {
        d=d%100;
    }

om5:

    clrscr();
    style(7);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    clrscr();
    /*LOADING*/
    gotoxy(23,10);
    printf("LOADING");
    gotoxy(28,19);
    printf("start");
    delay(1);
    gotoxy(32,10);
    printf("..");
    gotoxy(28,19);
    printf("<1 0>");
    delay(1);
    delay(1);
    delay(1);
    gotoxy(32,10);
    printf("....");
    gotoxy(28,19);
    printf("..9..");
    delay(1);
    delay(1);
    delay(1);

    gotoxy(32,10);
    printf(".......");
    gotoxy(28,19);
    printf("..8..");
    delay(1);
    delay(1);
    gotoxy(32,10);
    printf(".........");
    gotoxy(28,19);
    printf("..7..");
    delay(1);
    delay(1);
    delay(1);
    gotoxy(32,10);
    printf("...........");
    gotoxy(28,19);
    printf("..6..");
    delay(1);
    delay(1);
    gotoxy(32,10);
    printf("..");
    gotoxy(28,19);
    printf("..5..");
    gotoxy(32,10);
    printf("...........");
    gotoxy(28,19);
    printf("..4..");
    delay(1);
    delay(1);
    delay(1);
    gotoxy(32,10);
    printf(".............");
    gotoxy(28,19);
    printf("..3..");
    delay(1);
    delay(1);
    delay(1);
    gotoxy(32,10);
    printf("................");
    gotoxy(28,19);
    printf("..2..");
    delay(1);
    delay(1);
    gotoxy(32,10);
    printf("................");
    gotoxy(28,19);
    printf("..0..");
om2:
    /*SCORE AND Q NO*/
    if(d>65) {
        d=d-30;
        goto om2;
    }
    q=q+10;
    J++;
    delay(1);
    delay(1);
    clrscr();
    style(8);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    style4(q,q-10);
    gotoxy(26,13);
    printf("%d\n",q);

    delay(1);
    delay(1);
    if(J>1) {
        delay(1);
        delay(1);
        delay(1);
        clrscr();

        gotoxy(50,13);
        cout<<"HERE THE RULES TO PLAY THE GAME.." ;
        delay(2);
        clrscr();
        gotoxy(35,13);
        cout<<"HERE THE RULES TO PLAY THE GAME.." ;
        delay(2);
        clrscr();
        gotoxy(30,5);
        cout<<"HERE THE RULES TO PLAY THE GAME.." ;
        delay(2);
        clrscr();
        gotoxy(25,13);
        cout<<"HERE THE RULES TO PLAY THE GAME.." ;
        delay(2);
        clrscr();
        gotoxy(20,13);
        cout<<"HERE THE RULES TO PLAY THE GAME.." ;
        delay(2);
        clrscr();
        gotoxy(10,13);
        cout<<"HERE THE RULES TO PLAY THE GAME.." ;
        delay(2);
        clrscr();
        gotoxy(1,13);
        printf("HERE IS YOUR NEXT QUESTION\n") ;
        delay(1);










    }
    delay(1);
    delay(1);
    clrscr();
    gotoxy(38,10);
    qno();
    printf(" %d",J);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    clrscr();
    gotoxy(20,10);
    printf("NO GENARATED IS  %d\n",d);
    delay(1);
    delay(1);
    delay(1);
    clrscr();
    /*ROUND CLEARED*/

    if(J==11)
    {
        gotoxy(20,10);
        printf("woww.....")	;
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("WELL DONE...");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOU HAVE CLEARED FIRST ROUND..");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("<SMILE.....>");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PLAY NEXT ROUND ..?");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PRESS 1 FOR YES  OR  2 FOR NO");
        gotoxy(22,15);
        printf("INTRESTED?(  )");
        gotoxy(33,15);
        scanf(" %d",&Q);
        if(Q==1) goto ram ;
        else goto om1;
    }


    if(J==21)
    {
        gotoxy(20,10);
        printf("SMILEE,,.......")	;
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("WELL DONE...");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOU HAVE CLEARED    SECOND     R OUND..");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("<SMILE....AGAIN.....>");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PLAY NEXT ROUND ..?");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PRESS 1 FOR YES  OR  2 FOR NO");
        gotoxy(22,15);
        printf("INTRESTED?(  )");
        gotoxy(33,15);
        scanf(" %d",&Q);
        if(Q==1) goto ram;
        else goto om1;
    }

    if(J==31)
    {
        gotoxy(20,10);
        printf("WONDERFULLL.........")	;
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("WELL DONE...");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOU HAVE CLEARED THIRD  ROUND..");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("<SMILE.....>");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PLAY NEXT ROUND ..?");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PRESS 1 FOR YES  OR  2 FOR NO");
        gotoxy(22,15);
        printf("INTRESTED?(  )");
        gotoxy(33,15);
        scanf(" %d",&Q);
        if(Q==1) goto ram;
        else goto om1;
    }

    if(J==41)
    {
        gotoxy(20,10);
        printf("woww.....")	;
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("WELL DONE...");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOU HAVE CLEARED FOURTH  ROUND..");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("<SMILE.....>");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PLAY NEXT ROUND ..?");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PRESS 1 FOR YES  OR  2 FOR NO");
        gotoxy(22,15);
        printf("INTRESTED?(  )");
        gotoxy(33,15);
        scanf(" %d",&Q);
        if(Q==1) goto ram;
        else goto om1;
    }

    if(J==51)
    {
        gotoxy(20,10);
        printf("EXCELLENT....")	;
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOU ARE REALLY   BRILLIENT..");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOU HAVE 5   ROUNDS..  ..");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("<YOU HAVE A WONDERFUL GIFT>");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("CALL 9040383980?");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("PRESS 1 FOR YES  OR  2 FOR NO");
        gotoxy(22,15);
        printf("INTRESTED?(  )");
        gotoxy(33,15);
        scanf(" %d",&Q);
        if(Q==1) goto ram;
        else goto om1;
    }



    if(J==65)
    {
        gotoxy(20,10);
        printf("OH BRILLIENT")	;
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOU ARE REALLY GENIUS");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOU HAVE CLEARED  ALL ROUNDS..");
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("<SMILE.....>");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("YOUR PASSEOWRD IS...");
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        delay(1);
        clrscr();
        gotoxy(20,10);
        printf("OKSBWN");
        gotoxy(22,15);
        printf("THANK U");
    }



    /*QUESTIONS STARTS*/

ram:
    clrscr();

    if (d==0)
    {
        gotoxy(1,7);
        delay(1);
        printf("NO OF JUNCTIONS IN DIODE  ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   1");
        gotoxy(10,12);
        delay(1);
        printf("2.   2");
        gotoxy(55,8);
        delay(1);
        printf("3.   0");
        gotoxy(55,12);
        delay(1);
        printf("4.   4");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }


        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;

        }
        else
        {

            goto om1;
        }



    }


    if(d==2)
    {
        gotoxy(1,7);
        delay(1);
        printf("'ALPHA ' IS RELATED TO WHICH CONFIGURATION ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   common emitter");
        gotoxy(10,12);
        delay(1);
        printf("2.   common base");
        gotoxy(50,8);
        delay(1);
        printf("3.   common collecter");
        gotoxy(50,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }

        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }

    if(d==3)
    {
        gotoxy(1,7);
        delay(1);
        printf("IN WHICH CONFIGURATION NO PHASE SHIFT OF OUTPUT OCCUR  ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   emitter follower");
        gotoxy(10,12);
        delay(1);
        printf("2.   self bias");
        gotoxy(55,8);
        delay(1);
        printf("3. voltage divider");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }





    if(d==4)
    {
        gotoxy(1,7);
        delay(1);
        printf("DEPLETION LAYER IS PRESENT IN ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  diode");
        gotoxy(10,12);
        delay(1);
        printf("2.   FET");
        gotoxy(55,8);
        delay(1);
        printf("3. bjt");
        gotoxy(55,12);
        delay(1);
        printf("4.  ALL");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }



        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==5)
    {
        gotoxy(1,7);
        delay(1);
        printf("DIRECTION OF CURRENT IS ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   SAME AS ELECTROJN");
        gotoxy(10,12);
        delay(1);
        printf("2.  OPPOSITE TO ELECTRON");
        gotoxy(55,8);
        delay(1);
        printf("3.BOTH");
        gotoxy(55,12);
        delay(1);
        printf("4.  NOONE");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==6)
    {
        gotoxy(1,7);
        delay(1);
        printf("IN WHICH QUARDENT ZENER BREAKDOWN OCCURS ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   1ST");
        gotoxy(10,12);
        delay(1);
        printf("2.   2ND");
        gotoxy(55,8);
        delay(1);
        printf("3. 3RD");
        gotoxy(55,12);
        delay(1);
        printf("4.  4TH");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==7)
    {
        gotoxy(1,7);
        delay(1);
        printf("VALUE OF DIODE RESISTANCE IS  ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   26 mv/Id");
        gotoxy(10,12);
        delay(1);
        printf("2.   26mv/Ie");
        gotoxy(55,8);
        delay(1);
        printf("3. 28 mv/Id");
        gotoxy(55,12);
        delay(1);
        printf("4.   28 mv/Ie");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }



        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==8)
    {
        gotoxy(1,7);
        delay(1);
        printf("LED MEANS ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   LIGHT EMMITTER DIODE");
        gotoxy(10,12);
        delay(1);
        printf("2. LIGHT EMITTING DEVICE");
        gotoxy(55,8);
        delay(1);
        printf("3. LIGHT EMITTING DIODE");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==9)
    {
        gotoxy(1,7);
        delay(1);
        printf("LED ARE MADE UP OF ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  SI");
        gotoxy(10,12);
        delay(1);
        printf("2.   GE");
        gotoxy(55,8);
        delay(1);
        printf("3.GEAS");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }




        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==10)
    {
        gotoxy(1,7);
        delay(1);
        printf("VIRTUAL GROUND CONCEPT IS APPLIED IN ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  LED");
        gotoxy(10,12);
        delay(1);
        printf("2. FET");
        gotoxy(55,8);
        delay(1);
        printf("3. OPAMP");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }



        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==11)
    {
        gotoxy(1,7);
        delay(1);
        printf("RECTIFIER CONVERTS ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  AC TO PURE DC");
        gotoxy(10,12);
        delay(1);
        printf("2. AC TO DC");
        gotoxy(55,8);
        delay(1);
        printf("3. PURE DC TO AC");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }




        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==12)
    {
        gotoxy(1,7);
        delay(1);
        printf("AVERAGE VALUE AT OUTPUT OF HALF WAVE RECTIFIER IS  ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  .318Vm");
        gotoxy(10,12);
        delay(1);
        printf("2.  .2334Vm");
        gotoxy(55,8);
        delay(1);
        printf("3. .23Vm");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==13)
    {
        gotoxy(1,7);
        delay(1);
        printf("WHICH CIRCUIT CHANGES THE WAVEFORM ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  CLIPPER");
        gotoxy(10,12);
        delay(1);
        printf("2.   CLAMPER");
        gotoxy(55,8);
        delay(1);
        printf("3.AMPLIFIER");
        gotoxy(55,12);
        delay(1);
        printf("4.  OPAMP");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }


no18:


        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==14)
    {
        gotoxy(1,7);
        delay(1);
        printf("BJT NAME IS DUE TO .......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   ELECTTRON AS CHARGE CARRIER");
        gotoxy(10,12);
        delay(1);
        printf("2.  HOLE AS CHARGE CARRIER");
        gotoxy(55,8);
        delay(1);
        printf("3. BOTH AS CHARGE CARRIER");
        gotoxy(55,12);
        delay(1);
        printf("4.   BY MAKER");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }


        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==15)
    {
        gotoxy(1,7);
        delay(1);
        printf("VOLTAGE DROP ACROOSS DIODE IS .....\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   .4 VOLT");
        gotoxy(10,12);
        delay(1);
        printf("2.  .56 VOLT");
        gotoxy(55,8);
        delay(1);
        printf("3. .3 VOLT");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==17)
    {
        gotoxy(1,7);
        delay(1);
        printf("IN HYBRID MODEL OF BJT Hfe MEANS....\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  VOLTAGE GAIN");
        gotoxy(10,12);
        delay(1);
        printf("2. IMPEDANCE");
        gotoxy(55,8);
        delay(1);
        printf("3. SMALL SIGNAL CURRENT GAIN");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }


        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==18)
    {
        gotoxy(1,7);
        delay(1);
        printf("LOADED VOLTAGE GAIN IS....... \n");
        gotoxy(10,8);
        delay(1);
        printf("1. LESS THAN NO LOAD GAIN");
        gotoxy(10,12);
        delay(1);
        printf("2.   EQUAL");
        gotoxy(55,8);
        delay(1);
        printf("3. GREATER");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto  ram;
        }



        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==19)
    {
        gotoxy(1,7);
        delay(1);
        printf("DARLINGTON TRANSISTOR HAS .......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   LARGE VOLTAGE GAIN");
        gotoxy(10,12);
        delay(1);
        printf("2.  LARGE CURRENT GAIN");
        gotoxy(55,8);
        delay(1);
        printf("3.SMALL CURRENT GAIN");
        gotoxy(55,12);
        delay(1);
        printf("4.  SMALL CURRENT GAIN");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==20)
    {
        gotoxy(1,7);
        delay(1);
        printf("FET IS ....... CONTROLLED DEVICE\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  power");
        gotoxy(10,12);
        delay(1);
        printf("2.   voltage");
        gotoxy(55,8);
        delay(1);
        printf("3. current");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }




        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==21)
    {
        gotoxy(1,7);
        delay(1);
        printf("FET HAS.......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   HIGH INPUT ADMITTANCE");
        gotoxy(10,12);
        delay(1);
        printf("2.  LOW INPUT IMPEDANCE");
        gotoxy(55,8);
        delay(1);
        printf("3. 0   INPUT RESISTANCE");
        gotoxy(55,12);
        delay(1);
        printf("4.  HIGH INPUT IMPEDANCE");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==22)
    {
        gotoxy(1,7);
        delay(1);
        printf("CHANNEL IS CREATED IN WHICH FET .......?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  DEPLETION TYPE");
        gotoxy(10,12);
        delay(1);
        printf("2.   JFET");
        gotoxy(55,8);
        delay(1);
        printf("3. OTHER FET");
        gotoxy(55,12);
        delay(1);
        printf("4.  ENHANCED TYPE");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==23)
    {
        gotoxy(1,7);
        delay(1);
        printf("\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   emitter follower");
        gotoxy(10,12);
        delay(1);
        printf("2.   self bias");
        gotoxy(55,8);
        delay(1);
        printf("3. voltage divider");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }

        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==24)
    {
        gotoxy(1,7);
        delay(1);
        printf("MODES OF OPERATION OF ENHANCEMENT TYPE MOSFET..?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   1");
        gotoxy(10,12);
        delay(1);
        printf("2.  3");
        gotoxy(55,8);
        delay(1);
        printf("3. 2");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==25)
    {
        gotoxy(1,7);
        delay(1);
        printf("WHICH OF BELOW'S VOLATGE EQN IS NOT DEFINED BY SCHOKKELY EQN.....\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  ENHANCEMENT TYPE MOSFETr");
        gotoxy(10,12);
        delay(1);
        printf("2.   DEPLETION TYPE MOSFET");
        gotoxy(55,8);
        delay(1);
        printf("3. JFET");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==27)
    {
        gotoxy(1,7);
        delay(1);
        printf("FET HAS......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   ONE TYPE CARRIER ONLY");
        gotoxy(10,12);
        delay(1);
        printf("2.  BOTH");
        gotoxy(55,8);
        delay(1);
        printf("3. CANT SAY");
        gotoxy(55,12);
        delay(1);
        printf("4.  DEPENDING UPON PERIPHERALS");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==28)
    {
        gotoxy(1,7);
        delay(1);
        printf("Gm STANDS FOR.....\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  TRANSDUCER PARAMETER");
        gotoxy(10,12);
        delay(1);
        printf("2.  TRANS CONDUCTANCE RATIO");
        gotoxy(55,8);
        delay(1);
        printf("3. TANSFER RATIO");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==30)
    {
        gotoxy(1,7);
        delay(1);
        printf("AM STANDS FOR\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  AMPLITUDE MODULATION");
        gotoxy(10,12);
        delay(1);
        printf("2.  AMPLITUDE MODIFICATION");
        gotoxy(55,8);
        delay(1);
        printf("3. AMPLITUDE MULTIPLICATION");
        gotoxy(55,12);
        delay(1);
        printf("4.   AMPLITUDE ACTUATION");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==31)
    {
        gotoxy(1,7);
        delay(1);
        printf("BASEBAND SIGNAL IS........n");
        gotoxy(10,8);
        delay(1);
        printf("1.   CARRIER SIGNAL");
        gotoxy(10,12);
        delay(1);
        printf("2.  DATA SIGNAL TO BE SEND");
        gotoxy(55,8);
        delay(1);
        printf("3. MODULATED SIGNAL");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }



        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {
            goto om1;
        }

    }
    if(d==33)
    {
        gotoxy(1,7);
        delay(1);
        printf("ANTEENA LENGTHH DEPENDS UPON...?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   AMPLITUDE");
        gotoxy(10,12);
        delay(1);
        printf("2. FREQUENCY");
        gotoxy(55,8);
        delay(1);
        printf("3. VELOCITY");
        gotoxy(55,12);
        delay(1);
        printf("4.   WAVELENGTH");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }




        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==34)
    {
        gotoxy(1,7);
        delay(1);
        printf("WHICH REQUIRES SELECTION LINES......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  ENCODER");
        gotoxy(10,12);
        delay(1);
        printf("2. MUX");
        gotoxy(55,8);
        delay(1);
        printf("3. DECODER");
        gotoxy(55,12);
        delay(1);
        printf("4.  COUNTER");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else

            goto om1;


    }
    if(d==36)
    {
        gotoxy(1,7);
        delay(1);
        printf("FLIPFLOPS STORAGE CAPACITY IS...... \n");
        gotoxy(10,8);
        delay(1);
        printf("1.   3 BIT");
        gotoxy(10,12);
        delay(1);
        printf("2.   1 BIT");
        gotoxy(55,8);
        delay(1);
        printf("3. 1 BYTE");
        gotoxy(55,12);
        delay(1);
        printf("4.  8 BIT");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else

            goto om1;


    }
    if(d==37)
    {
        gotoxy(1,7);
        delay(1);
        printf("WHICH FLIPFLOP HAS SAME NEXT STATE AS INPUT.....?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   SR ");
        gotoxy(10,12);
        delay(1);
        printf("2.   JK");
        gotoxy(55,8);
        delay(1);
        printf("3. T");
        gotoxy(55,12);
        delay(1);
        printf("4.   D");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }




        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else

            goto om1;


    }
    if(d==38)
    {
        gotoxy(1,7);
        delay(1);
        printf("UNIVERSAL GATE IS.....?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   NAND");
        gotoxy(10,12);
        delay(1);
        printf("2.  AND");
        gotoxy(55,8);
        delay(1);
        printf("3. OR");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==39)
    {
        gotoxy(1,7);
        delay(1);
        printf("IN EM WAVES  ELECTRIC AND MAGNETIC FIELDS ARE.......?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   perpendicular");
        gotoxy(10,12);
        delay(1);
        printf("2.  parallel");
        gotoxy(55,8);
        delay(1);
        printf("3. 0 degree to each other");
        gotoxy(55,12);
        delay(1);
        printf("4.  opposite to each other");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==40)
    {
        gotoxy(1,7);
        delay(1);
        printf("MICROWAVE HAS.......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  large amplitude");
        gotoxy(10,12);
        delay(1);
        printf("2.  higher frequency");
        gotoxy(55,8);
        delay(1);
        printf("3. o phase");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==42)
    {
        gotoxy(1,7);
        delay(1);
        printf("How many ports are their in a microcontroller..?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   2");
        gotoxy(10,12);
        delay(1);
        printf("2.   3");
        gotoxy(55,8);
        delay(1);
        printf("3. 4");
        gotoxy(55,12);
        delay(1);
        printf("4.   8");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==42)
    {
        gotoxy(1,7);
        delay(1);
        printf("8255 is a ...?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  pid");
        gotoxy(10,12);
        delay(1);
        printf("2. dma controller");
        gotoxy(55,8);
        delay(1);
        printf("3.modem");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }



        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==43)
    {
        gotoxy(1,7);
        delay(1);
        printf("8255 has how many ports....?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  4");
        gotoxy(10,12);
        delay(1);
        printf("2.   8");
        gotoxy(55,8);
        delay(1);
        printf("3.3");
        gotoxy(55,12);
        delay(1);
        printf("4.2");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }




        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==44)
    {
        gotoxy(1,7);
        delay(1);
        printf("WHICH FILTER PROVIDES PHASE DIFF BETWEEN DIFF FREQ.. COMPONENTS   ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   LPF");
        gotoxy(10,12);
        delay(1);
        printf("2.  BPF");
        gotoxy(55,8);
        delay(1);
        printf("3. HPF");
        gotoxy(55,12);
        delay(1);
        printf("4. APF");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==45)
    {
        gotoxy(1,7);
        delay(1);
        printf("FOR A 3rd ORDER FILTER ROLL OFF RATE AT IS.....?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  60 db/decade");
        gotoxy(10,12);
        delay(1);
        printf("2. 20 db/decade");
        gotoxy(55,8);
        delay(1);
        printf("3. 10 db/decade");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(33,15);
        scanf(" %d",&a);

        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==46)
    {
        gotoxy(1,7);
        delay(1);
        printf("FOR OSCILLATORS CLOSED LOOP GAIN IS......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   INFINITY");
        gotoxy(10,12);
        delay(1);
        printf("2.   0");
        gotoxy(55,8);
        delay(1);
        printf("3. 8");
        gotoxy(55,12);
        delay(1);
        printf("4.  1");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }



        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==48)
    {
        gotoxy(1,7);
        delay(1);
        printf("566IS A .........IC\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  VCO");
        gotoxy(10,12);
        delay(1);
        printf("2.   PLL");
        gotoxy(55,8);
        delay(1);
        printf("3. TIMER");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==49)
    {
        gotoxy(1,7);
        delay(1);
        printf("SAMPLING FREQUENCY IS....?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  2 Fm");
        gotoxy(10,12);
        delay(1);
        printf("2.   4Fm");
        gotoxy(55,8);
        delay(1);
        printf("3. Fm");
        gotoxy(55,12);
        delay(1);
        printf("4.  Fm/2");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==51)
    {
        gotoxy(1,7);
        delay(1);
        printf("TUNNEL DIODE S HAVE ....DOPING COMPARED TO DIODES.\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   EQUAL");
        gotoxy(10,12);
        delay(1);
        printf("2.  HIGH");
        gotoxy(55,8);
        delay(1);
        printf("3. LOW");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==52)
    {
        gotoxy(1,7);
        delay(1);
        printf("WHY DSB-SC USED INSTEAD OF AM   ?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  LESS COST");
        gotoxy(10,12);
        delay(1);
        printf("2.  LESS BANDWIDTH");
        gotoxy(55,8);
        delay(1);
        printf("3. LESS ENERGY");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==55)
    {
        gotoxy(1,7);
        delay(1);
        printf("NOTCH FILTER................\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  REJECTS A PARTICULAR FRQUENCY");
        gotoxy(10,12);
        delay(1);
        printf("2.   IS A LPF");
        gotoxy(55,8);
        delay(1);
        printf("3.IS A HPF");
        gotoxy(55,12);
        delay(1);
        printf("4.   SHIFTS THE PHASE");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }




        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==56)
    {
        gotoxy(1,7);
        delay(1);
        printf("TRNSFORMER INPUT AND OUTPUT HAS....\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  SAME AMPLITUDE");
        gotoxy(10,12);
        delay(1);
        printf("2. SAME FREQUENCY");
        gotoxy(55,8);
        delay(1);
        printf("3. SAME PHASE");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            gotoxy(1,6);
            clrscr();
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==58)
    {
        gotoxy(1,7);
        delay(1);
        printf("FLT U2  IS A ......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   OPAMP");
        gotoxy(10,12);
        delay(1);
        printf("2.  BJT");
        gotoxy(55,8);
        delay(1);
        printf("3. UNIVERSAL FILTER");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optc(a);
        clrscr();
        if (b==2)
        {
            gotoxy(1,6);
            clrscr();
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==59)
    {
        gotoxy(1,7);
        delay(1);
        printf("AUDIO FREQUENCY RANGE IS UPTO.......\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   20 KHZ");
        gotoxy(10,12);
        delay(1);
        printf("2. 30 KHZ");
        gotoxy(55,8);
        delay(1);
        printf("3. .2 KHZ");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==64)
    {
        gotoxy(1,7);
        delay(1);
        printf("ANTI ALIASING FILTER REQUIRED IN..\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  MODULATION");
        gotoxy(10,12);
        delay(1);
        printf("2.   QUANTISATION");
        gotoxy(55,8);
        delay(1);
        printf("3. MULTIPLEXING");
        gotoxy(55,12);
        delay(1);
        printf("4.  SAMPLING");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==63)
    {
        gotoxy(1,7);
        delay(1);
        printf("IMPEDANCE MATCHING IS REQUIRED FOR .....\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  AMPLIFICATION..");
        gotoxy(10,12);
        delay(1);
        printf("2.   MODULATION");
        gotoxy(55,8);
        delay(1);
        printf("3. SIGNAL GENERATION");
        gotoxy(55,12);
        delay(1);
        printf("4.  MAXIMUM POWER TRANSFER");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optd(a);
        clrscr();
        if (b==3)
        {
            gotoxy(1,6);
            clrscr();
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==62)
    {
        gotoxy(1,7);
        delay(1);
        printf("CARRIER SIGANL IS..............\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   HIGH FREQUENCY SIGNAL");
        gotoxy(10,12);
        delay(1);
        printf("2.   LARGER WAVELENGTH");
        gotoxy(55,8);
        delay(1);
        printf("3. HIGH AMPLITUDE");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==61)
    {
        gotoxy(1,7);
        delay(1);
        printf("WHICH OPPOSES AC...............\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   CAPACITOR");
        gotoxy(10,12);
        delay(1);
        printf("2.   INDUCTOR");
        gotoxy(55,8);
        delay(1);
        printf("3. RESISTOR");
        gotoxy(55,12);
        delay(1);
        printf("4.  FILTER");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==60)
    {
        gotoxy(1,7);
        delay(1);
        printf("VCO IS A ..............\n");
        gotoxy(10,8);
        delay(1);
        printf("1.VOLTAGE TO VOLTAGE CONVERTER");
        gotoxy(10,12);
        delay(1);
        printf("2.VOLTAGE TO CURRENT CONVERTER");
        gotoxy(55,8);
        delay(1);
        printf("3.VOLTAGE TO FREQUENCY CONVERTER");
        gotoxy(55,12);
        delay(1);
        printf("4.FREQUENCY TO VOLTAGE CONVERTER ");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optc(a);
        clrscr();
        if (b==2)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==57)
    {
        gotoxy(1,7);
        delay(1);
        printf("OPERATING FREQUENCY OF 8O85............?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  300MHZ");
        gotoxy(10,12);
        delay(1);
        printf("2.   7MHZ");
        gotoxy(55,8);
        delay(1);
        printf("3. 30 MHZ");
        gotoxy(55,12);
        delay(1);
        printf("4.  3 MHZ");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==54)
    {
        gotoxy(1,7);
        delay(1);
        printf(" GENERAL  REMOTE CONTROLLER FOR TV  SET USES.........?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   ULTRASONIC TRANSMITTER");
        gotoxy(10,12);
        delay(1);
        printf("2.  INFRARED TRANSMITTER");
        gotoxy(55,8);
        delay(1);
        printf("3. TELESCOPIC ANTEENA");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==53)
    {
        gotoxy(1,7);
        delay(1);
        printf("BIASING REQUIRED FOR LEDS.............?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   YES");
        gotoxy(10,12);
        delay(1);
        printf("2.  NO");
        gotoxy(55,8);
        delay(1);
        printf("3. MAY BE");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }



        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==50)
    {
        gotoxy(1,7);
        delay(1);
        printf("MICROCONTROLLER HAS .............?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   MEMORY");
        gotoxy(10,12);
        delay(1);
        printf("2.  NO MEMORY");
        gotoxy(55,8);
        delay(1);
        printf("3.REQUIRE EXTERNAL MEMORY");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=opta(a);
        clrscr();
        if (b==0)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==47)
    {
        gotoxy(1,7);
        delay(1);
        printf("-----IS A TIMER IC.\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  4047");
        gotoxy(10,12);
        delay(1);
        printf("2.   4017");
        gotoxy(55,8);
        delay(1);
        printf("3. 555");
        gotoxy(55,12);
        delay(1);
        printf("4.   BOTH 1 AND 3");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==41)
    {
        gotoxy(1,7);
        delay(1);
        printf("SIM MEANS..........?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  SERVICE IDENTIFYING MACHINE");
        gotoxy(10,12);
        delay(1);
        printf("2.   SERVER IDENTIFICATION MODULE");
        gotoxy(55,8);
        delay(1);
        printf("3. SERVER IDENTITY MICROS");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==35)
    {
        gotoxy(1,7);
        delay(1);
        printf("7805 IS WHAT TYPE OF IC.........?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   AMPLIFIER");
        gotoxy(10,12);
        delay(1);
        printf("2.   COMPARATOR");
        gotoxy(55,8);
        delay(1);
        printf("3. FILTER");
        gotoxy(55,12);
        delay(1);
        printf("4.   VOLTAGE REGULATOR");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            printf("CONGRATULATIONS.........?\n") ;
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==29)
    {
        gotoxy(1,7);
        delay(1);
        printf("TV CABLE ARE,,,,,,,,,?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   TWISTED WIRE");
        gotoxy(10,12);
        delay(1);
        printf("2.  CO AXIAL CABLE");
        gotoxy(55,8);
        delay(1);
        printf("3. LATERALLY JOINTED WIRE");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==26)
    {
        gotoxy(1,7);
        delay(1);
        printf("POTMETER HAS\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  VARIABLE CPACITANCWE");
        gotoxy(10,12);
        delay(1);
        printf("2. RESISTANNCE");
        gotoxy(55,8);
        delay(1);
        printf("3. INDUCTANCE");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optb(a);
        clrscr();
        if (b==1)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==16)
    {
        gotoxy(1,7);
        delay(1);
        printf("WHICH CAN BE USED AS POLARITY  DETECTOR EASILY............?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.  CAPACITOR");
        gotoxy(10,12);
        delay(1);
        printf("2.   INDUCTOR");
        gotoxy(55,8);
        delay(1);
        printf("3.AMPLIFIER");
        gotoxy(55,12);
        delay(1);
        printf("4.  LED");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }





        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }
    if(d==1)
    {
        gotoxy(1,7);
        delay(1);
        printf("CRT IS USED IN..............?\n");
        gotoxy(10,8);
        delay(1);
        printf("1.   LCD MONITOR");
        gotoxy(10,12);
        delay(1);
        printf("2.  LED TVS");
        gotoxy(55,8);
        delay(1);
        printf("3. TFT MONITOR");
        gotoxy(55,12);
        delay(1);
        printf("4.   none");
        gotoxy(22,15);
        printf("answer is (  )");
        gotoxy(22,4);
        printf("PRESS 6 TO USE CHANCE");
        gotoxy(33,15);
        scanf(" %d",&a);

        if(a==6)
        {

            gotoxy(22,1);
            printf("confirm  ?");
            gotoxy(22,2);
            printf("1 for yes 2 for no");
            gotoxy(22,15);
            printf("response.( )");
            delay(1);
            delay(1);
            gotoxy(33,15);
            scanf ("%d",&V);
            if(V==1)
            {
                if(K==3)
                {   clrscr();
                    printf("SORRY U HAVE NO CHANCES");
                    delay(1);
                    delay(1);
                    delay(1);
                    delay(1);
                    clrscr();
                    goto ram;

                }

                clrscr();
                delay(1);
                delay(1);
                delay(1);
                gotoxy(20,10);
                printf("answer is..............");
                d=rand() % 100;
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                delay(1);
                K++;
                goto om2;
            }
            else
                goto ram;
        }




        b=optd(a);
        clrscr();
        if (b==3)
        {
            clrscr();
            gotoxy(20,10);
            cong();
            gotoxy(20,10);
            delay(1);
            delay(1);
            d=rand() % 100;
            goto om2;
        }
        else
        {

            goto om1;
        }

    }


om1:
    clrscr();
    J=0;

    m[h]=q;
    h++;
    q=0,K=0;

    gotoxy(20,10+i);
    /*ASK AGAIN TO PLAY*/
    printf(" WANT TO PLAAAAAAAY    AGAIN ? \n") ;
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    gotoxy(20,10+i);
    printf(" PRESS 1 FOR 'YES' AND ANY KEY FOR' NO' \n") ;
    gotoxy(22,15);
    delay(1);
    delay(1);
    delay(1);
    printf("wanna na..(  )");
    gotoxy(33,15);
    scanf(" %d",&e);
    if(e==1)
    {
        clrscr();
        goto rom;
    }
    clrscr();
    delay(1);
    delay(1);
    delay(1);
    gotoxy(20,10);
    printf(" YOUR SCORES ARE \n") ;
    delay(1);
    for(i=1; i<h; i++)
    {
        gotoxy(20,12+i);
        delay(1);
        delay(1);
        printf(" %d no try %d? \n",i,m[i]) ;
        l=l+m[i];
    }
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    clrscr();
    gotoxy(18,8);
    cout<<name<<"...." ;
    gotoxy(20,10);
    delay(1);
    delay(1);
    printf(" SO YOUR FINAL SCORE IS =%d\n",l/i) ;


om8:
    if(A==1||A==3||A==4||A==5) {
        clrscr();
        gotoxy(25,12);
        delay(2);
        cout<<"PRESS 1 TO GO TO MAIN MENU";


        scanf("%d",&Z);
        clrscr();
        if(Z==1)goto menu;
    }

    style(9);

    /*THE END*/


    delay(1);
    clrscr();
    gotoxy(18,8);
    cout<<"ok.."<<name<<"...." ;
    gotoxy(28,15);
    printf(" HAVE A GOOD DAY\n") ;
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    delay(1);
    clrscr();


    gotoxy(28,12);
    delay(1);
    delay(1);
    printf("VISIT MY WEBSITE  ''              '' ") ;
    gotoxy(48,12);
    delay(2);
    cout<<"O";
    delay(2);
    gotoxy(49,12);
    delay(2);
    cout<<"K";
    delay(2);
    gotoxy(50,12);
    delay(2);
    cout<<"S";
    delay(2);
    gotoxy(51,12);
    delay(2);
    cout<<"B";
    delay(2);
    gotoxy(52,12);
    delay(2);
    cout<<"W";
    delay(2);
    gotoxy(53,12);
    delay(2);
    cout<<"N";
    delay(2);
    gotoxy(54,12);
    delay(2);
    cout<<".";
    delay(2);
    gotoxy(55,12);
    delay(2);
    cout<<"E";
    delay(2);
    gotoxy(56,12);
    delay(2);
    cout<<"S";
    delay(2);
    gotoxy(57,12);
    delay(2);
    cout<<".";
    delay(2);
    gotoxy(58,12);
    delay(2);
    cout<<"T";
    delay(2);
    gotoxy(59,12);
    delay(2);
    cout<<"L";
    delay(2);
    delay(2);
    delay(2);
    delay(1);
    delay(1);

    clrscr();
    for(i=23; i<57; i++) {
        gotoxy(i,7);
        cout<<"*";
        i++;
        delay(2);
    }
    for(i=7; i<17; i++) {
        gotoxy(55,i);
        cout<<"*";
        delay(2);
    }
    for(i=23; i<56; i++) {
        gotoxy(i,16);
        cout<<"*";
        i++;
        delay(2);
    }
    for(i=7; i<17; i++) {
        gotoxy(23,i);
        cout<<"*";
        delay(2);
    }
    delay(1);
    gotoxy(33,12);
    cout<<"WGLabz";

    return(0);


}
