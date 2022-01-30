#include<bits/stdc++.h>

int main () {
	{
		ifstream fin();//fin Rule//输入Rule文件
		f()//对文件进行处理；

		fin.close();;//关掉Rule文件
	}

	{	
		ifstream fin();//fin data i//输入Data文件
		f()//对文件进行处理；

		fin.close();;//关掉Rule文件
	}


		f//f(match)//对两个文件进行匹配 
			//变量如下
		1.data_ip_source & rule_ip_source_low & rule_ip_source_high;
		2.data_ip_destination & rule_ip_destination_low & rule_ip_destination_high;
		3.data_port_source & rule_port_source_low & rule_port_source_high;
		4.data_port_destination & rule_port_destination_low & rule_port_destination_high;
		5.tcp_source & tcp_destination;

		//{
			data源ip == rule源ip；
			data目的ip between rule目的ip范围；
			data源port between rule源port范围；
			data目的port between rule目的port范围；
			data的tcp == rule_tcp or (rule_ctp == 0xFF);

		fout << ();//将结果输出result;


	ofstream fout("res.txt");


}