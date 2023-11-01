
#include<bits/stdc++.h>

usingnamespacestd;
charch,buffer[10],b[30],logicalop[]="><";

ifstreamfin("checkinput.txt");

stringstr[100];
intcheckIf(charbuffer[])

{

inti,flag=0;

charch;

if(strcmp(buffer,"if")==0)

{

flag=1;

while(ch!=')')

{

ch=fin.get();

if(ch==fin.eof())

return0;


}

ch=fin.get();

if(ch=='\n')

{

ch=fin.get();

}

//cout<<ch<<endl;

if(ch=='{')

{

while(ch!='}')

{

ch=fin.get();

}

}

}

else

flag=0;

returnflag;

}








intcheckElse(charbuffer[])

{

inti,flag=0;

charch,c[]="else";


if(strncmp(buffer,c,4)==0)

{

flag=2;

ch=fin.get();

if(ch=='\n')

{

ch=fin.get();

}

}

else

flag=0;

returnflag;

}



intmain()

{

if(!fin.is_open())

{

cout<<"erorwhileopeningthefile\n";

exit(0);

}

intinc=0,stdi=0,flag=1;

inti=0,j=0;

while(!fin.eof())

{


if(flag==0)

break;

ch=fin.get();

if(ch=='')

{

continue;

}

elseif(ch>=97&&ch<=122))

{

int_if=0;

j=0;

while(!fin.eof())

{

if(_if!=1)

{

while(ch!='(')

{

buffer[j++]=ch;

ch=fin.get();

}

buffer[j]='\0';

}

else

{

//cout<<buffer[0]<<endl;


j=0;

for(inti=0;i<5;i++)

{

ch=fin.get();

if(ch=='\n')

continue;

buffer[j++]=ch;

}

buffer[j]='\0';

//cout<<buffer<<endl;

}



if(checkIf(buffer)==1)

{

_if=1;

flag=1;

continue;

}

elseif(checkElse(buffer)==2)

{

cout<<"Hi3"<<endl;

flag=1;

break;


}

else

{

flag=0;

break;

}

}



}

}

if(flag==0)

{

cout<<"Thisisnotanifelseblock"<<endl;

return0;

}

else

{

cout<<"Thisisanifelseblock"<<endl;

}

fin.close();

return0;

}
