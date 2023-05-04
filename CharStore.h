#pragma once
#include <iostream>
#include <vector>
#include <string>

class CharStore
{
	struct Node
	{
		Node* left;
		Node* right;
		std::string name;

		Node();
		Node(Node* l, Node* r, std::string n);
		~Node();
	};

private:
	Node* tree;
	Node* createTreeFromVector(std::vector<std::string>& v, int start, int end);

public:
	CharStore();
	CharStore(std::vector<std::string>& v);
	~CharStore();

	void insert(std::string n);
	void remove(std::string n);

	friend std::ostream& operator << (std::ostream& out, const CharStore& c);
	friend std::ostream& operator << (std::ostream& out, const Node& n);
};