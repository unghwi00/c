#include <iostream>
#include <string>
using namespace std;

class Board
{
public:
	static int top;
	static string line[100];

	static void add(string str);
	static void print();
};
string Board::line[] = { "", };
int Board::top = 0;
void Board::add(string str)
{
	line[top++] = str;
}
void Board::print()
{
	cout << "********�Խ��� �Դϴ�.*********" << endl;
	for (int i = 0; i < top; i++)
	{

		cout << i << ": " << line[i] << endl;
	}
	cout << "******************************" << endl;
}
int main()
{
	Board::add("�߰����� �������� ���� �����Դϴ�");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���");
	Board::print();
	Board::add("���Ҹ� �л��� ��ô�ȸ���� �Ի��Ͽ����ϴ�");
	Board::print();
}