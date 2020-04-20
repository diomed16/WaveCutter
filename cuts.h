#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include<math.h>
using namespace std;


void readData (string fileName, int step, int multiplier, vector<float> &numbers) // Функция принимает 4 значения, последнее ссылка на вектор. Ссылка используется, чтобы не копировать вектор, а изменять исходный, который объявлен в Form1. Обозначается как &
{
    float num;
	string buffer;
	ifstream inFile(fileName);  //открытие ввода из файла
	int i=0;
	while(getline(inFile, buffer))       //цикл построчного чтения
	{   if (i==0)
		{
			buffer.replace(buffer.find(","),1,"."); //замена запятых точками
			num=strtof(buffer.c_str(), 0); //преобразование строки в число
			num=round(num*multiplier);     //умножение с округлением
			cout<<num<<endl;               //вывод в консоль для отладки
			numbers.push_back(num);        //заталкивание в вектор(динамический массив)
		}
		i++;
		if (i>=step)     //ограничение количества запихиваемого в вектор, например, каждое 8-ое значение
        {
            i=0;
        }
    }
	inFile.close();    //закрытие файла

}

void writeData(string fileName, vector<float> &numbers)
{
    ofstream outFile;          // поток для записи
	outFile.open(fileName); // окрываем файл для записи
	if (outFile.is_open())
    {
		 for (int i = 0; i < numbers.size(); i++)    //цикл с вектором, numbers.size() - размер вектора
		{
			if (i==(numbers.size()-1)) {
			  outFile << numbers[i];
			}
			else {
			outFile << numbers[i] << ","<<endl; }   //вывод в файл содержимого вектора
		}
	}
	outFile.close(); //закрытие файла
}