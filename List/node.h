//
// Created by lijiahao on 9/17/16.
//

#ifndef DSA_2016_NODE_H
#define DSA_2016_NODE_H

#include "list.h"

template <typename T>
class node
{
    T data;
    node<T> *pred;
    node<T> *succ;
public:
    node();
    node(T e, node<T> *p = 0, node<T> *s = 0);
    node<T> *insertAsPred(const T &e);
    node<T> *insertAsSucc(const T &e);

    friend class list<T>;
    friend class queue<T>;
    friend std::ostream &operator<< <T>(std::ostream &os, const list<T> &l);
};

#include "node.cpp"

#endif //DSA_2016_NODE_H

