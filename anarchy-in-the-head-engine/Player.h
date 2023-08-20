#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h" // �������������� ������ ��������

class Player : public Entity { // ����� ������
public: // ��������� ����
	Player(int _id, int _color, int _hp, char _symbol, int _maxItems); // ����������� ��� ���������
	Player(int _id, int _color, int _hp, char _symbol, int _x, int _y, int _maxItems); // ����������� � ������������

	// ������
	void Controls(); // ���������� �������
};

#endif