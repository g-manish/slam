//program for matrix operation
#include<iostream>
#include<conio>
using namespace std;
int main ()
{
  int r,c
  cout<<"\n for add and sub both matrices should have equal number of rows and coloumns";
  cout<<"enter the no of rows of both matrices";
  cin>>r;
  cout<<"\n enter the no of coloumns of both matrices ";
  cin>>c;
  int mat1[r][c],mat2[r][c],result[r][c];
  cout<<"\n enter mat1";
  input(mat1,r,c);
  cout<<"\n enter mat2";
  input(mat2,r,c);
  cout<<"s\n select one ";
  cout<<"A for addition ";
  cout<<"S for substraction ";
  cout<<"T for transpose ";
  char ch;
  cin>>ch;
  switch(ch)
  {
    case 'A': call Add(mat1,mat2b,c,r,c)
              break;
    case's' : call Sub(a,)
