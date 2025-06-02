#include <iostream>
#include <string>
#include <vector>

// sort �Լ� ��� �Ұ�

using namespace std;

// ���� ���

void ascend(vector<int> &v) {
	for (int a = 0; a < v.size(); ++a) {
		for (int b = v.size() - 1; b > a; --b) {
			if (v[a] > v[b]) {
				int temp = v[a];
				v[a] = v[b];
				v[b] = temp;
			}
		}
	}
}

void descend(vector<int> &v) {
	for (int x = 0; x < v.size(); ++x) {
		for (int y = v.size() - 1; y > x; --y) {
			if (v[x] < v[y]) {
				v[x] ^= v[y];
				v[y] ^= v[x];
				v[x] ^= v[y];
			}
		}
	}
}

int main() {
	int num;
	cout << "�迭 ũ�� ����: " << endl;
	cin >> num;
	vector<int> vec;
	vec.resize(num);

	for (int i = 0; i < num; ++i) {
		cout << 1 + i << "��° ���� �Է�: " << endl;
		cin >> vec[i];
	}

	int input;
	cout << "���������� 1, ���������� 2 �Է�: " << endl;
	cin >> input;
	switch (input) {
	case 1:
		ascend(vec);
		for (int j : vec) {
			cout << j << " ";
		}
		break;
	case 2:
		descend(vec);
		for (int k : vec) {
			cout << k << " ";
		}
		break;
	}

	return 0;
}