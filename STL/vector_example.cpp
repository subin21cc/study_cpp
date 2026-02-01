//
// Created by subin on 2026. 1. 31..
//
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {10, 20, 30};

    v.push_back(40);    // 맨 뒤에 추가
    v.pop_back();       // 맨 뒤 삭제

    // 인덱스로 직접 접근 (매우 빠름)
    std::cout << "Vector 2번째 요소: " << v[1] << std::endl;

    // 중간 삽입 (비효율적: 뒤 요소를 다 밀어야 함)
    v.insert(v.begin() + 1, 15);

    return 0;
}