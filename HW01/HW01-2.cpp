#include <iostream>
#include <string>
#include <vector>

// sort 함수 사용 불가

using namespace std;

// 도전 기능

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
	cout << "배열 크기 지정: " << endl;
	cin >> num;
	vector<int> vec;
	vec.resize(num);

	for (int i = 0; i < num; ++i) {
		cout << 1 + i << "번째 숫자 입력: " << endl;
		cin >> vec[i];
	}

	int input;
	cout << "오름차순은 1, 내림차순은 2 입력: " << endl;
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