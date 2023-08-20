#ifndef ITEM_H
#define ITEM_H

#include <string> // �������������� ���������� �����

using namespace std;

class Item { // ����� ��������
private: // ��������� ����
	int id; // �������������
public: // ��������� ����
	string name; // ���
	// ������������
	Item();
	Item(int _id);
	Item(int _id, string _name);

	// �������
	int getId(); // ������� �������������
	string getName(); // ������� ���
};

#endif