#ifndef PHYSICS_H
#define PHYSICS_H

class Position { // ����� �������
protected: // ����������� ����
	int x; // ������� �� ��� X
	int y; // ������� �� ��� Y
public: // ��������� ����
	// ������������
	Position(); // ����������� �� ���������
	Position(int _x, int _y); // �������� �����������

	// �������
	int getX(); // ������� ������� �� ��� X
	int getY(); // ������� ������� �� ��� Y

	// ������
	void transform(int _x = 0, int _y = 0); // ����������� �� ��������� ��������
	void transformTo(int _x = 0, int _y = 0); // ����������� �� ����� �������
};

class Point : public Position { // ����� �����
public: // ��������� ����
	Point(); // ����������� �� ���������
	Point(int _x, int _y); // �������� �����������
};

#endif