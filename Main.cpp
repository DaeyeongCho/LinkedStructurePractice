#include <iostream>
#include <string>

using namespace std;

#include "SingleLinkedStack.h"
#include "DoubleLinkedQueue.h"

int main() {
	SingleLinkedStack sls;
	DoubleLinkedQueue dlq;

	
	while (true) {
		int mode;
		string input;

		cout << "��� ����" << endl;
		cout << "0: ����, 1: SingleLinkedStack, 2: DoubleLinkedQueue" << endl;
		cout << "�Է�: ";

		cin >> mode;

		if (mode == 0) {
			cout << "���α׷� ����" << endl;
			break;
		}

		switch (mode) //��� ���� ���̽� ��
		{
		case 1: //�̱� ��ũ�� ���� ���
			while (true) {
				cout << "��� ����" << endl;
				cout << "0: ������, 1: isEmpty, 2: countNode, 3: getTop, 4: push, 5:pop, 6: traversal" << endl;
				cout << "�Է�: ";

				cin >> mode;

				if (mode == 0) {
					cout << "SingleLinkedStack ����\n" << endl;
					break;
				}

				switch (mode) //�̱� ��ũ�� ���� ���̽� ��
				{
				case 1:
					cout << sls.isEmpty() << endl;
					break;
				case 2:
					cout << sls.countNode() << endl;
					break;
				case 3:
					cout << sls.getTop() << endl;
					break;
				case 4:
					cout << "�� �Է�: ";
					cin >> input;
					sls.push(input);
					break;
				case 5:
					cout << sls.pop();
					cout << "��(��) ������" << endl;
					break;
				case 6:
					sls.traversal();
					break;
				default:
					cout << "�߸��� �Է�\n" << endl;
					break;
				}
			}
			break;
		case 2: //���� ��ũ�� ť ���
			while (true) {
				cout << "��� ����" << endl;
				cout << "0: ������, 1: isEmpty, 2: countNode, 3: put, 4: get, 5: getHead, 6: getTail, 7: traversal" << endl;
				cout << "�Է�: ";

				cin >> mode;

				if (mode == 0) {
					cout << "DoubleLinkedQueue ����\n" << endl;
					break;
				}

				switch (mode) //���� ��ũ�� ť ���̽� ��
				{
				case 1:
					cout << dlq.isEmpty() << endl;
					break;
				case 2:
					cout << dlq.countNode() << endl;
					break;
				case 3:
					cout << "�� �Է�: ";
					cin >> input;
					dlq.put(input);
					break;
				case 4:
					cout << dlq.get();
					cout << "�� ������" << endl;
					break;
				case 5:
					cout << dlq.getHead() << endl;
					break;
				case 6:
					cout << dlq.getTail() << endl;
					break;
				case 7:
					dlq.traversal();
					break;
				default:
					cout << "�߸��� �Է�\n" << endl;
					break;
				}
			}
			break;
		default:
			cout << "�߸��� �Է�\n" << endl;
			break;
		}
	}


	return 0;
}