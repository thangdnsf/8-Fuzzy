#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
struct tree_node{
	tree_node* link1;
	tree_node* link2;
	tree_node* link3;
	tree_node* link4;
	tree_node* parent;
	vector<int> state;
	int cost;
	int index;
	int distance;
};
class searchTree
{
private:
	vector<int> initial, final;
	vector<tree_node*> stack;
	tree_node* root;
	int heuristic;
	bool success;
public:
	searchTree();
	bool isEmpty() const { return root == NULL; }
	void insert(tree_node*);
	void makeRoot(vector<int>);
	void build();
	void read();
	void makeMove(tree_node*, tree_node*, char);
	void print(tree_node*);
	void pv(tree_node*);
	void checkSuccess(tree_node*);
	int h1(tree_node*);
	void sort();
};

