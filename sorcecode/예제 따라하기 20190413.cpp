//c++ �����÷��� 1416p ����.
#include<iostream>
#include<fstream>
#include<string>

int main()
{
	using namespace std;
	string filename;
	cout<< "�� ������ ���� �̸��� �Է��Ͻʽÿ�: ";
	cin >> filename;
	
// �� ������ ���� ��� ��Ʈ�� ��ü�� fout�̶�� �̸����� �����Ѵ�.
 ofstream fout (filename.c_str());
 fout << "��й�ȣ ���⿡ �����Ͻʽÿ�. \n";   //���Ͽ� ����Ѵ�. 
 cout << "��й�ȣ�� �Է��Ͻʽÿ�: ";          //ȭ�鿡 ����Ѵ�.
 float secreat;
 cin >> secreat;
 fout << "������ ��� ��ȣ�� " << secreat << "�Դϴ�. \n";
 fout.close();   // ������ ��´� 
 
 // �� ������ ���� �Է� ��Ʈ�� ��ü�� fin�̶�� �̸����� �����Ѵ�. 
 ifstream fin(filename.c_str());
 cout << filename << " ������ ������ ������ �����ϴ�: \n";
 char ch;
 while (fin.get(ch))
   cout << ch;
cout << "���α׷��� �����մϴ�. \n";
fin.close();
return 0;  
 } 
