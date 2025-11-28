#pragma once
template<typename T>
class Node {
private:
	Node<T>* nxt, last;
	T val;
	template<typename _Ty>
	friend class LinkList;
public:
	Node() : nxt(nullptr), last(nullptr), val() {}
	Node(const T& _val) : nxt(nullptr), last(nullptr), val(_val) {}
	Node(const Node& other) : nxt(nullptr), last(nullptr), val(other.val) {}
	Node& operator=(const T& _val) {
		val = _val;
		return *this;
	}
	Node& operator=(const Node& other) {
		val = other.val;
		return *this;
	}
	virtual ~Node() {
		nxt = nullptr;
		last = nullptr;
	}
};