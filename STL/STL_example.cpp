//
// Created by subin on 2026. 1. 31..
//
#include <iostream>
#include <vector>    // 1. 컨테이너
#include <algorithm> // 3. 알고리즘
#include <iterator>  // 2. 반복자

using namespace std;

// 4. 함수 객체 (Functor): 내림차순 비교를 위한 규칙 정의
struct Descending {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    // [1. 컨테이너] 데이터를 저장하는 그릇 (vector)
    vector<int> numbers = {3, 1, 4, 1, 5, 9, 2};

    // [3. 알고리즘] 정렬 알고리즘 (sort)
    // [2. 반복자] numbers.begin(), numbers.end()로 데이터 범위 지정
    // [4. 함수 객체] Descending() 객체를 전달하여 내림차순 규칙 적용
    sort(numbers.begin(), numbers.end(), Descending());

    cout << "내림차순 정렬 결과: ";

    // [2. 반복자]를 사용하여 컨테이너 순회 및 출력
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " "; // 반복자가 가리키는 실제 데이터 참조
    }

    return 0;
}