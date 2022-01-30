#include<cstdio>
void num_10_to_8(int num, char arr[9]);

#include<iostream>
#include<fstream>  //文件读取写入流所用标准库
#include<cstring>
using std::cin;
using std::cout;
using std::string;
using std::ofstream;
using std::ifstream;
using std::endl;
int main()
{
	ifstream fin("textIn.txt");
	ofstream fout("textOut.txt");
	//string data = "test data";
	int a, b;
	fin >> a >> b;
	fout << a + b << endl;
	fin.close();
	fout.close();
}
