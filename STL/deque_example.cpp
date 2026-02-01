//
// Created by subin on 2026. 1. 31..
//
#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30};

    dq.push_front(5);   // 맨 앞 추가 (Vector보다 훨씬 빠름)
    dq.push_back(40);   // 맨 뒤 추가

    // 인덱스 접근 가능
    std::cout << "Deque 1번째 요소: " << dq[0] << std::endl;

    dq.pop_front();     // 맨 앞 삭제
    dq.pop_back();      // 맨 뒤 삭제

    return 0;
}