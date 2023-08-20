#include <iostream>
#include <ctime>

#include "Player.h" // ����������� �������������
#include "Block.h" // �������������� ������ �����

extern Block XY[BLOCKS_COUNT_Y][BLOCKS_COUNT_X]; // ��������� ����
extern Item ItemList[6]; // ������ ���������

// ���������� ������ ������

// ������������
Player::Player(int _id, int _color, int _hp, char _symbol, int _maxItems) : Entity(_id, _color, _hp, _symbol) { // ����������� ��� ���������
	maxItems = _maxItems; // �������� ������������� ���������� ���������
	inventory = new Item[maxItems]; // �������� ������� �������
	for (int i = 0; i < maxItems; i++) inventory[i] = Item(); // ���������� ������� �������� ����������
};
Player::Player(int _id, int _color, int _hp, char _symbol, int _x, int _y, int _maxItems) : Entity(_id, _color, _hp, _symbol, _x, _y) { // ����������� � ������������
	maxItems = _maxItems; // �������� ������������� ���������� ���������
	inventory = new Item[maxItems]; // �������� ������� �������
	for (int i = 0; i < maxItems; i++) inventory[i] = Item(); // ���������� ������� �������� ����������
};

// ������
void Player::Controls() { // ���������� �������
	srand(time(NULL));
	char cmd;
	cmd = getchar();
	if (cmd == 'w')
		if (XY[x - 1][y].getCollision() == false)
			this->transform(-1, 0);
	if (cmd == 's')
		if (XY[x + 1][y].getCollision() == false)
			this->transform(1, 0);
	if (cmd == 'a')
		if (XY[x][y - 1].getCollision() == false)
			this->transform(0, -1);
	if (cmd == 'd')
		if (XY[x][y + 1].getCollision() == false)
			this->transform(0, 1);
	if (XY[x][y].getId() == 2) {
		hp -= 10;
		XY[x][y] = Block(0, 0, ' ', false);
		this->addItem(ItemList[rand() % 5]);
	}
	if (XY[x][y].getId() == 3) {
		hp += 10;
		XY[x][y] = Block(0, 0, ' ', false);
		this->addItem(ItemList[rand() % 5]);
	}
	if (hp == 0) {
		std::cout << "Game Over" << std::endl;
		exit(0);
	}
};