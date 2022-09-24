// compatible with Turbo c++ compiler

#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int i,star,moon,rocket;
 clrscr();
 getch();
 //Stars Start
 delay(70);
 for(star=1; star<=49; star++)
 {
  delay(70);
  cout<<"*   *   *    ";
 }
 //Stars End
 //Moon Start
 delay(100);
 for(moon=1; moon<=5; moon++ )
 {
  delay(100);
  for(i=4; i>=moon; i-- )
   cout<<"  ";
  for(i=2; i<=moon*2-1; i++ )
   cout<<" O";
   cout<<endl;
 }//Moon 2d half
 for(moon=5; moon>=1; moon-- )
 {
  delay(100);
  for(i=4; i>=moon; i-- )
   cout<<"  ";
  for(i=2; i<=moon*2-1; i++ )
   cout<<" O";
   cout<<endl;
 }
 //Moon End
 //Rocket Star
	//rocket Top
 delay(100);
 for(rocket=1; rocket<=3; rocket++ )
 {
  delay(500);
  cout<<"\t";
  for(i=2; i>=rocket; i-- )
   cout<<"  ";
  for(i=1; i<=rocket*2-1; i++ )
   cout<<" O";
   cout<<endl;
 }
	//Rocket Middle
 for(i=1;i<=10;i++)
 {
  delay(500);
  cout<<"\t O O O O O";
  cout<<endl;
 }
	//rocket bottum
 for(rocket=1; rocket<=5; rocket++)
 {
  delay(500);
  for(i=4;i>=rocket;i--)
  cout<<"  ";
  for(i=1;i<=rocket; i++)
  cout<<" 1";
  for(i=1;i<=3; i++)
  cout<<" 1";
  for(i=1;i<=rocket; i++)
  cout<<" 1";
  cout<<endl;
 }
 cout<<endl;
	//Rocket Burner
 for(rocket=1; rocket<=7; rocket++)
 {
 delay(500);
   cout<<" |  |  |  |  |  |  |  |  | "<<endl;
 delay(500);
   cout<<"   |  |  |  |  |  |  |  |  "<<endl;
 }
 //Rocket End
 getch();
}
