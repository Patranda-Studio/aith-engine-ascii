#include <string> // �������������� ���������� �����
using namespace std; // ����������� ������������ ���

#include "Item.h" // ����������� �������������

extern Item ItemList[6] = { // ������ ���������
	Item(1, "Apple"),
	Item(2, "Bread"),
	Item(3, "Cinnamon"),
	Item(4, "Death"),
	Item(5, "Emerald"),
	Item(6, "Fire"),
};

// ���������� ������ ��������

// ������������
Item::Item() { // ����������� �� ���������
	id = 0; // ��������� ��������������
	name = ""; // ��������� �����
};
Item::Item(int _id) { // ����������� � �������� ��������������
	id = _id; // �������� ��������������
	name = ""; // ��������� �����
};
Item::Item(int _id, string _name) { // ������ �����������
	id = _id; // �������� ��������������
	name = _name; // �������� �����
};

// �������
int Item::getId() { return id; }; // ������� �������������
string Item::getName() { return name; }; // ������� ���