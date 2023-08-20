#ifndef ENTITY_H
#define ENTITY_H

#define ENTITIES_COUNT 20 // ���������� ���������

#include "Physics.h" // �������������� ������ ������
#include "Item.h" // �������������� ������ ��������

class Entity : public Position { // ����� ��������
protected: // ����������� ����
	int id; // �������������
	int color; // ����
	int hp; // ��������
	char symbol; // ������ �����������
	int maxItems; // ������������ ���������� ���������
public: // ��������� ����
	// ����������
	Item* inventory; // ���������

	// ������������
	Entity(); // ����������� �� ���������
	Entity(int _id); // ����������� � �������� ��������������
	Entity(int _id, int _color, int _hp, char _symbol); // ����������� ��� ���������
	Entity(int _id, int _color, int _hp, char _symbol, int _x, int _y); // ����������� � ������������

	// �������
	int getId(); // ������� �������������
	int getColor(); // ������� �������� �����
	int getHp(); // ������� �������� ��������
	char getSymbol(); // ������� ������ �����������
	int getMaxItems(); // ������� ����������� ���������� ���������

	// ������
	void setHp(int _hp) { hp = _hp; }; // ���������� �������� ��������
	void addItem(Item _item) { // �������� �������
		for (int i = 0; i < maxItems; i++) // ������ �� ���������
			if (inventory[i].getId() == 0) { // ���� ������ ������ ����
				inventory[i] = _item; // �������� � ������ ���� �������
				break; // ����� �� �����
			}
	};
	void deleteItem(int i) { inventory[i] = NULL; }; // ������� �������
};

#endif