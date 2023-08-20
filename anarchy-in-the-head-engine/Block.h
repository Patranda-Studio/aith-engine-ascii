#ifndef BLOCK_H
#define BLOCK_H

#define BLOCKS_COUNT_X 40 // ���������� ������ �� ��� X
#define BLOCKS_COUNT_Y 20 // ���������� ������ �� ��� Y

class Block{ // ����� �����
private: // ��������� ����
	int id; // �������������
	int color; // ����
	char symbol; // ��������
	bool collision; // ��������
public: // ��������� ����
	// ������������
	Block(); // ����������� �� ���������
	Block(int _id); // ����������� � �������� ��������������
	Block(int _id, int _color, char _symbol, bool _collision); // ������ �����������
	
	// �������
	int getId(); // ������� �������������
	int getColor(); // ������� �������� �����
	char getSymbol(); // ������� �������� ��������
	bool getCollision(); // ������� ��������
};

#endif
