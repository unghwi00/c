#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
//GameŬ���� ����

class Game {
private:
	double energy = 100;
	static int life;

public:
	Game();
	double Damage();
	static void Die();
};
int Game::life = 10;

void Game::Die() {
	life--;
	cout << "**������ 1 �����Ͽ� " << life << "�� �Ǿ����ϴ�." << endl << endl;

}
double Game::Damage() {
	srand((unsigned)time(NULL));
	int r rand()%6+1;
	double damaged = 0;

	switch (r)
	{
	case 1:
		damaged = 10;
		break;
	case 2:
		damaged = 20;
		break;
	case 3:
		damaged = 30;
		break;
	case 4:
		damaged = 40;
			break;
	case 5:
		damaged = 50;
		break;
	case 6:
		damaged = 100;
		break;
	}

	if (energy > 0) {
		damaged += rand() % 100;
		/ energy -= damaged;
		cout << "�������� " << damaged << " �����Ͽ� " << energy << " �� �Ǿ����ϴ�.\n";
		if (energy < 0) {
			life--;
			energy = 100;
			cout << "������ 1 �����Ͽ� " << life << "�� �Ǿ����ϴ�." << endl << endl;

		}
	}
	return energy;
}
//GameŬ���� ��� �Լ��� ����
Game::Game()
{
	cout << "�������� " << energy << " �̸�, ������ " << life << "�� ĳ���Ͱ� ����������ϴ�.\n";
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();

}

int main()
{
	srand((unsigned int)time(NULL)); //seed������ ����ð� �ο�
	Game c1;
	Game::Die();
	Game c2;
	c2.Damage();
	c2.Damage();
	c2.Damage();
	c2.Die();
	return 0;
}