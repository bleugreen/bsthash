#ifndef BST_H
#define BST_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "utility.h"

using namespace std;

class BST
{ 
 public:
  BST();
  BST(string data);
  ~BST();
  void delB(Node* head);
  Node* insert(string s, Node* head);
  Node* del(string s, Node* head);
  bool search(string s, Node* head);
  void sort(string path, Node* head);
  void sortHelper(string arr [], Node* head, int c);
  void rangeSearch(string s1, string s2, Node* head);
  void print(Node* head);
  Node* head;
  int size;
};

#endif
