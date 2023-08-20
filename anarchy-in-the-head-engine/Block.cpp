#include "Block.h"

extern Block XY[BLOCKS_COUNT_Y][BLOCKS_COUNT_X]; // ��������� ����

extern Block BlockList[4] = { // ������ ������
	Block(0, 0, ' ', false),
	Block(1, 33, '#', true),
	Block(2, 34, '+', false),
	Block(3, 31, '+', false)
};

// ���������� ������ �����

// ������������
Block::Block() { // ����������� �� ���������
	id = 0; // ��������� ��������������
	color = 0; // ��������� �����
	symbol = ' '; // ��������� ������� �����������
	collision = false; // ��������� ��������������
}
Block::Block(int _id) { // ����������� � �������� ��������������
	id = _id; // �������� ��������������
	color = 0; // ��������� �����
	symbol = ' '; // ��������� ������� �����������
	collision = false; // ��������� ��������������
}
Block::Block(int _id, int _color, char _symbol, bool _collision) { // ������ �����������
	id = _id; // �������� ��������������
	color = _color; // �������� �����
	symbol = _symbol; // �������� ������� �����������
	collision = _collision; // �������� ��������������
};

// �������
int Block::getId() { return id; }; // ������� �������������
int Block::getColor() { return color; }; // ������� �������� �����
char Block::getSymbol() { return symbol; }; // ������� �������� ��������
bool Block::getCollision() { return collision; }; // ������� ��������