#include<bits/stdc++.h>

int main () {
	{
		ifstream fin();//fin Rule//����Rule�ļ�
		f()//���ļ����д���

		fin.close();;//�ص�Rule�ļ�
	}

	{	
		ifstream fin();//fin data i//����Data�ļ�
		f()//���ļ����д���

		fin.close();;//�ص�Rule�ļ�
	}


		f//f(match)//�������ļ�����ƥ�� 
			//��������
		1.data_ip_source & rule_ip_source_low & rule_ip_source_high;
		2.data_ip_destination & rule_ip_destination_low & rule_ip_destination_high;
		3.data_port_source & rule_port_source_low & rule_port_source_high;
		4.data_port_destination & rule_port_destination_low & rule_port_destination_high;
		5.tcp_source & tcp_destination;

		//{
			dataԴip == ruleԴip��
			dataĿ��ip between ruleĿ��ip��Χ��
			dataԴport between ruleԴport��Χ��
			dataĿ��port between ruleĿ��port��Χ��
			data��tcp == rule_tcp or (rule_ctp == 0xFF);

		fout << ();//��������result;


	ofstream fout("res.txt");


}