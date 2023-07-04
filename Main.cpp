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

		cout << "모드 선택" << endl;
		cout << "0: 종료, 1: SingleLinkedStack, 2: DoubleLinkedQueue" << endl;
		cout << "입력: ";

		cin >> mode;

		if (mode == 0) {
			cout << "프로그램 종료" << endl;
			break;
		}

		switch (mode) //모드 선택 케이스 문
		{
		case 1: //싱글 링크드 스택 모드
			while (true) {
				cout << "기능 선택" << endl;
				cout << "0: 나가기, 1: isEmpty, 2: countNode, 3: getTop, 4: push, 5:pop, 6: traversal" << endl;
				cout << "입력: ";

				cin >> mode;

				if (mode == 0) {
					cout << "SingleLinkedStack 나감\n" << endl;
					break;
				}

				switch (mode) //싱글 링크드 스택 케이스 문
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
					cout << "값 입력: ";
					cin >> input;
					sls.push(input);
					break;
				case 5:
					cout << sls.pop();
					cout << "을(를) 제거함" << endl;
					break;
				case 6:
					sls.traversal();
					break;
				default:
					cout << "잘못된 입력\n" << endl;
					break;
				}
			}
			break;
		case 2: //더블 링크드 큐 모드
			while (true) {
				cout << "기능 선택" << endl;
				cout << "0: 나가기, 1: isEmpty, 2: countNode, 3: put, 4: get, 5: getHead, 6: getTail, 7: traversal" << endl;
				cout << "입력: ";

				cin >> mode;

				if (mode == 0) {
					cout << "DoubleLinkedQueue 나감\n" << endl;
					break;
				}

				switch (mode) //더블 링크드 큐 케이스 문
				{
				case 1:
					cout << dlq.isEmpty() << endl;
					break;
				case 2:
					cout << dlq.countNode() << endl;
					break;
				case 3:
					cout << "값 입력: ";
					cin >> input;
					dlq.put(input);
					break;
				case 4:
					cout << dlq.get();
					cout << "을 제거함" << endl;
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
					cout << "잘못된 입력\n" << endl;
					break;
				}
			}
			break;
		default:
			cout << "잘못된 입력\n" << endl;
			break;
		}
	}


	return 0;
}