#include<iostream>
#include<math.h>
#include<fstream>
#include <conio.h>

using namespace std;

int main()
{
    int a,b;
    float hasil;
    char judul;
    
	system("cls");
 	
 	ifstream file;
 	file.open("judul.txt");
 		while(!file.eof())
 	{
     file.get(judul);
     cout<<judul;
 	}
 		file.close();
    
    
    cout<<"Masukan Sisi Pertama : ";
        cin>>a;
    cout<<"Masukan Sisi Kedua : ";
        cin>>b;

    hasil=sqrt((a*a)+(b*b));
    cout<<"Hasil : "<<hasil;

    getch();
	return 0;
}
