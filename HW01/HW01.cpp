#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int arr[5];

int sum = 0;
double average = 0.0;

int sumFunc(int arr[]) {
	sum = 0; // 함수 사용했을 때도 같이 보고싶어서 여기서 초기화
	for (int a = 0; a < 5; a++) { // 배열의 용량 크기 / 데이터타입의 용량 크기 = 배열 원소 개수
		sum += arr[a];
	}
	return sum;
}

double averageFunc(int arr[]) {
	sum = 0;
	for (int b = 0; b < 5; b++) {
		sum += arr[b];
	}
	average = sum / 5;
	return average;
}

int main() {
	for (int i = 0; i < 5; i++) {
		cout << "숫자 입력: ";
		cin >> arr[i];
	}

	for (int j : arr) {
		sum += j;
	}
	average = sum / 5;

	cout << "합계: " << sum;
	cout << "평균: " << average;

	cout << endl;

	cout << "여기서부턴 함수 사용: \n";

	cout << "합계: " << sumFunc(arr);
	cout << "평균: " << averageFunc(arr);

	return 0;
}
