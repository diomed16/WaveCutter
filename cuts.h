#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include<math.h>
using namespace std;


void readData (string fileName, int step, int multiplier, vector<float> &numbers) // ������� ��������� 4 ��������, ��������� ������ �� ������. ������ ������������, ����� �� ���������� ������, � �������� ��������, ������� �������� � Form1. ������������ ��� &
{
    float num;
	string buffer;
	ifstream inFile(fileName);  //�������� ����� �� �����
	int i=0;
	while(getline(inFile, buffer))       //���� ����������� ������
	{   if (i==0)
		{
			buffer.replace(buffer.find(","),1,"."); //������ ������� �������
			num=strtof(buffer.c_str(), 0); //�������������� ������ � �����
			num=round(num*multiplier);     //��������� � �����������
			cout<<num<<endl;               //����� � ������� ��� �������
			numbers.push_back(num);        //������������ � ������(������������ ������)
		}
		i++;
		if (i>=step)     //����������� ���������� ������������� � ������, ��������, ������ 8-�� ��������
        {
            i=0;
        }
    }
	inFile.close();    //�������� �����

}

void writeData(string fileName, vector<float> &numbers)
{
    ofstream outFile;          // ����� ��� ������
	outFile.open(fileName); // �������� ���� ��� ������
	if (outFile.is_open())
    {
		 for (int i = 0; i < numbers.size(); i++)    //���� � ��������, numbers.size() - ������ �������
		{
			if (i==(numbers.size()-1)) {
			  outFile << numbers[i];
			}
			else {
			outFile << numbers[i] << ","<<endl; }   //����� � ���� ����������� �������
		}
	}
	outFile.close(); //�������� �����
}