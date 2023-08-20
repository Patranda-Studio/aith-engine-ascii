#include "Entity.h"
#include "Physics.h" // �������������� ������ ������

extern Entity entitys[ENTITIES_COUNT]; // ��������� ���������
extern Entity EntityList[2] = { // ������ �������
	Entity(0, 35, 1, 'O'),
	Entity(1, 36, 1, 'R')
};

// ���������� ������ ��������

// ������������
Entity::Entity() : Position() { // ����������� �� ���������
	id = 0; // ��������� ��������������
	color = 0; // ��������� �����
	hp = 0; // ��������� ��������
	symbol = ' '; // ��������� ������� �����������
};
Entity::Entity(int _id) : Position() { // ����������� � �������� ��������������
	id = _id; // �������� ��������������
	color = 0; // ��������� �����
	hp = 0; // ��������� ��������
	symbol = ' '; // ��������� ������� �����������
};
Entity::Entity(int _id, int _color, int _hp, char _symbol) : Position() { // ����������� ��� ���������
	id = _id; // �������� ��������������
	color = _color; // �������� �����
	hp = _hp; // �������� ��������
	symbol = _symbol; // �������� ������� �����������
};
Entity::Entity(int _id, int _color, int _hp, char _symbol, int _x, int _y) : Position(_x, _y) { // ����������� � ������������
	id = _id; // �������� ��������������
	color = _color; // �������� �����
	hp = _hp; // �������� ��������
	symbol = _symbol; // �������� ������� �����������
};

// �������
int Entity::getId() { return id; }; // ������� �������������
int Entity::getColor() { return color; }; // ������� �������� �����
int Entity::getHp() { return hp; }; // ������� �������� ��������
char Entity::getSymbol() { return symbol; }; // ������� ������ �����������
int Entity::getMaxItems() { return maxItems; }; // ������� ����������� ���������� ���������