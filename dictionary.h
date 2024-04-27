#ifndef DICTIONARY_H
#define DICTIONARY_H

#endif // DICTIONARY_H
#include <iostream>
struct treeNode{


    int key;

    std::string item;
    treeNode* left;
    treeNode* right;
    treeNode(int, std::string,treeNode*,treeNode*);



};

class Dictionary{
private:
    treeNode *root;
public:
    Dictionary();
    std::string* lookup(int);
    void insert(int, std::string);
};

