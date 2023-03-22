 #include<stdio.h>
 #include<iostream.h>
 #include<conio.h>
 #include<stdlib.h>
 #include<graphics.h>
 struct student{
 char name[100],roll[20];
 int marks,random;
 };
student st;
void cpp(){
  int i=0,arr[6];
  st.marks=0;
  char choice;
  while(i<6)
	  {
back:
st.random=rand()%6;
 for(int j=0;j<=6;j++){
   if(st.random==arr[j]){goto back;
   }
 }
arr[i]=st.random;
switch(st.random)
{
case 0:
cout<<i+1<<") Who invent C++? "<<endl;
cout<<"A.Dennis Ritchie"<<endl;
cout<<"B.Ken Thompson"<<endl;
cout<<"C.Brian kernighan"<<endl;
cout<<"D.Bjarne Stroustrup"<<endl;
choice=getch();
if(choice=='d'||choice=='D'){
cout<<"your answer is correct"<<endl<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl<<endl;
cout<<"correct answer is D"<<endl<<endl;
}
break;
case 1:
cout<<i+1<<") Which of the following is used for comments in C++? "<<endl;
cout<<"A./*comment*/"<<endl;
cout<<"B.//comment/"<<endl;
cout<<"C.//comment"<<endl;
cout<<"D.both//comment or /*comment*/"<<endl;
choice=getch();
if(choice=='d'||choice=='D'){
cout<<"your answer is correct"<<endl<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl<<endl;
cout <<"Correct answer is D"<<endl<<endl;
}
break;
case 2:
cout<<i+1<<") Which of the following is a correct identifier in C++? "<<endl;
cout<<"A.VAR_1234"<<endl;
cout<<"B.$Var_name"<<endl;
cout<<"C.7VARNAME"<<endl;
cout<<"D.7var_name"<<endl;
choice=getch();
if(choice=='a'||choice=='A'){
cout<<"your answer is correct"<<endl<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;
cout<<"Correct answer is A"<<endl<<endl;
}
break;
case 3:

cout<<i+1<<") Which of the following type is provided by C++ but not C? "<<endl;
cout<<"A.double"<<endl;
cout<<"B.float"<<endl;
cout<<"C.int"<<endl;
cout<<"D.bool"<<endl;
choice=getch();
if(choice=='D'||choice=='d'){
cout<<"your answer is correct"<<endl<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;
cout<<"Correct answer is D"<<endl<<endl;
}
break;
case 4:
cout<<i+1<<") The C++ language is ______ object-oriented language.  "<<endl;
cout<<"A.Pure object-oriented"<<endl;
cout<<"B.Not object-oriented"<<endl;
cout<<"C.Semi object-oriented and partial object-oriented"<<endl;
cout<<"D.None of the above"<<endl;
choice=getch();
if(choice=='C'||choice=='C'){
cout<<"your answer is correct"<<endl<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;
cout<<"Correct answer is C"<<endl<<endl;
}
break;
case 5:
cout<<i+1<<") C++ is a ____ type of language."<<endl;
cout<<"A.High-level"<<endl;
cout<<"B.Low-level"<<endl;
cout<<"C.Middle-level"<<endl;
cout<<"D.None of the above"<<endl;
choice=getch();
if(choice=='C'||choice=='C'){
cout<<"your answer is correct"<<endl<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;
cout<<"Correct answer is C"<<endl<<endl;
}
break;

}
i++;
}
}
void html(){
st.marks=0;
char choice;
cout<<"\n\n HTML stands for  "<<endl;
cout<<"A.HighText Machine Language"<<endl;
cout<<"B.HyperText and links Markup Language"<<endl;
cout<<"C.HyperText Markup Language"<<endl;
cout<<"D.None of these"<<endl;
choice=getch();
if(choice=='c'||choice=='C'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n Who is the father of HTML?"<<endl;
cout<<"A.Rasmus Lerdorf"<<endl;
cout<<"B.Tim Berners-Lee"<<endl;
cout<<"C.Brendan Eich"<<endl;
cout<<"D.Sergey Brin"<<endl;
choice=getch();
if(choice=='b'||choice=='B'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n Which of the following element is responsible for making the text bold in HTML? "<<endl;
cout<<"A.<pre>"<<endl;
cout<<"B.<a>"<<endl;
cout<<"C.<b>"<<endl;
cout<<"D.<br>"<<endl;
choice=getch();
if(choice=='C'||choice=='c'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n Which of the following tag is used for inserting the largest heading in HTML? "<<endl;
cout<<"A.<h3>"<<endl;
cout<<"B.<h1>"<<endl;
cout<<"C.<h5>"<<endl;
cout<<"D.<h6>"<<endl;
choice=getch();
if(choice=='B'||choice=='b'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n How to create an order list(a list with the list items in numbers) in HTML? "<<endl;
cout<<"A.<ul>"<<endl;
cout<<"B.<ol>"<<endl;
cout<<"C.<li>"<<endl;
cout<<"D.<i>"<<endl;
choice=getch();
if(choice=='b'||choice=='B'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;
cout<<"correct answer is b"<<endl;}
cout<<"\n\n Which of the following is the root tag of the HTML document? "<<endl;
cout<<"A.<body>"<<endl;
cout<<"B.<head>"<<endl;
cout<<"C.<title>"<<endl;
cout<<"D.<html>"<<endl;
choice=getch();
if(choice=='d'||choice=='D'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
}
void key(){
st.marks=0;
char choice;
cout<<"\n\n Switch to next tab in a dialog box use_____? "<<endl;
cout<<"A.SHIFT+TAB"<<endl;
cout<<"B.CTRL+TAB"<<endl;
cout<<"C.CTRL+LEFT ARROW"<<endl;
cout<<"D.ALT+TAB"<<endl;
choice=getch();
if(choice=='A'||choice=='a'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n  F4 key is used "<<endl;
cout<<"A.To display the items in the active list"<<endl;
cout<<"B.To display help"<<endl;
cout<<"C.To display desktop"<<endl;
cout<<"D.To display system properties  dialog box "<<endl;
choice=getch();
if(choice=='A'||choice=='a'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n Ctrl+w is use to "<<endl;
cout<<"A.Open  a saved window "<<endl;
cout<<"B.Open a new file"<<endl;
cout<<"C.Open a new window "<<endl;
cout<<"D.Open a new program"<<endl;
choice=getch();
if(choice=='C'||choice=='c'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n How to move backward through the options? "<<endl;
cout<<"A.Ctrl+Shift+Tab"<<endl;
cout<<"B.Tab"<<endl;
cout<<"C.Shift+Tab"<<endl;
cout<<"D.None of the above"<<endl;
choice=getch();
if(choice=='C'||choice=='c'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n  How to move backward through the tabs?"<<endl;
cout<<"A.Ctrl+Shift+Tab"<<endl;
cout<<"B.Tab"<<endl;
cout<<"C.Shift+Tab"<<endl;
cout<<"D.None of the above"<<endl;
choice=getch();
if(choice=='a'||choice=='A'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
cout<<"\n\n  How will you display the favorites menu using shortcut key?"<<endl;
cout<<"A.Alt+O"<<endl;
cout<<"B.Alt+F"<<endl;
cout<<"C.Ctrl+O"<<endl;
cout<<"D.Ctrl+F"<<endl;
choice=getch();
if(choice=='A'||choice=='a'){
cout<<"your answer is correct"<<endl;
st.marks++;
}
else{
cout<<"your answer is incorrect"<<endl;}
}
void result()
{
int per=0;
cout<<"Student name:"<<st.name<<endl;
cout<<"Roll no:"<<st.roll<<endl;
cout<<"Marks:"<<st.marks<<"out of 6"<<endl;
per=100*st.marks/6;

cout<<"percentage:"<<per<<"%"<<endl;
if(per>=50){
cout<<"status:pass"<< endl;
}
else{
cout<<"Status:Fail"<<endl;
}

}
 main()
{
char press,select;
do{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(GREEN);
cout<<"\n\n\t\t\t\t*************"<<endl;
cout<<"\t\t\t\t Quiz System"<<endl;
cout<<"\t\t\t\t*************"<<endl;
cout<<"\t\tEnter Name:-";
gets(st.name);
cout<<"\t\tRoll No:-";
 gets(st.roll);
clrscr();
 cout<<"\t\t Marks less than 50% will be fail"<<endl<<endl;
cout<<"\n\nSelect which subject quiz you want to perform"<<endl;
cout<<"1) c++"<<endl;
cout<<"2) Html"<<endl;
cout<<"3) short keys"<<endl;
select=getch();
clrscr();
switch(select){
case '1':
cout<<"\t\t C++Quiz"<<endl;
cpp();
clrscr();
cout<<"\t\t Quiz Result "<<endl;
result();
break;
case '2':
html();
break;
case '3':
key();
break;
default :
cout<<"Invalid input"<<endl;
break;
}
cout<<"Press y  for continue or any key to terminate"<<endl;
press=getch();
clrscr();

  }while(press=='y'||press=='Y');
  return (0);
}
