//
//  BTree.h
//  
//
//  Created by James on 4/9/14.
//
//

#ifndef ____BTree__
#define ____BTree__

#include <iostream>

class BTree{
private:
	Token *root;
    int num;
    
public:
    BTree();
    ~BTree()
    void add_node(Token *new_tokent);
    void recuresiveDeleteTree(Token *root);
    void add_line_num();
    
    #endif /* defined(____BTree__) */
