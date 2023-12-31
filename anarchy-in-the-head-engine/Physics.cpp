#include "Physics.h"

// ���������� ������ �������

// ������������
Position::Position() { // ����������� �� ���������
	x = 0; // ��������� ������� �� ��� X
	y = 0; // ��������� ������� �� ��� Y
};

Position::Position(int _x, int _y) { // �������� �����������
	x = _x; // �������� ���������� �� ��� X
	y = _y; // �������� ���������� �� ��� Y
};

// �������
int Position::getX() { return x; }; // ������� ������� �� ��� X
int Position::getY() { return y; }; // ������� ������� �� ��� Y

// ������
void Position::transform(int _x, int _y) { // ����������� �� ��������� ��������
	x += _x; // ����������� � ���������� �� ��� X ����� ��������
	y += _y; // ����������� � ���������� �� ��� Y ����� ��������
};
void Position::transformTo(int _x, int _y) { // ����������� �� ����� �������
	x = _x; // �������� ���������� �� ��� X �� ����� ��������
	y = _y; // �������� ���������� �� ��� Y �� ����� ��������
};

// ���������� ������ �����
Point::Point() : Position() { }; // ����������� �� ���������
Point::Point(int _x, int _y) : Position(_x, _y) { }; // �������� �����������