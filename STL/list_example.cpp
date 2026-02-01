//
// Created by subin on 2026. 1. 31..
//
#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> l = {10, 20, 30};

    l.push_front(5);    // 맨 앞에 추가 (Vector는 불가능하거나 매우 느림)
    l.push_back(40);    // 맨 뒤에 추가

    // l[1] 과 같은 인덱스 접근 불가!
    // 탐색하려면 반복자를 사용해야 함
    auto it = l.begin();
    std::advance(it, 2); // 3번째 위치로 이동

    l.insert(it, 25);    // 해당 위치에 삽입 (연결만 바꾸면 끝, 매우 빠름)
    l.remove(20);        // 값이 20인 요소 삭제

    return 0;
}