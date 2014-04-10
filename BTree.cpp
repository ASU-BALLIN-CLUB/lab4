//
//  BTree.cpp
//  
//
//  Created by James on 4/9/14.
//
//

#include "BTree.h"
#include <stdio.h>

BTree::BTree()
{
    root = NULL;
    num = 1;
    left = NULL;
    right = NULL;
    next = NULL;
}
BTree::~BTree()
{
    recuresiveDeleteTree(root);
}
void recuresiveDeleteTree(BTree *r)
{
    BTree *temp = r;
    if(temp->getLeft()!= NULL)
    {
        recuresiveDeleteTree(temp->getLeft());
    }
    if(temp->getRight()!= NULL)
    {
        recuresiveDeleteTree(temp->getRight());
    }
    delete temp;
}

void add_node(Token *new_token){
    if(new_token == NULL)
        new_token->getNextToken();
    else{
        Token *temp = new_token;
        while(temp != NULL)
        {
            if(temp->getTokenString().compare(new_token->getTokenString()) < 0)
            {
                if(temp->getLeft() == NULL)
                {
                    temp->setLeft(new_token);
                    temp =NULL;
                    new_token->add_line_num();
                }else
                {
                    temp =  temp->getLeft();
                }
            }else if(temp->getTokenString().compare(new_token->getTokenString()) > 0)
            {
                if(temp->getRight() == NULL)
                {
                    temp->setRight(new_token);
                    temp =NULL;
                    new_token->add_line_num();
                }else
                {
                    temp =  temp->getRight();
                }
            }else if(temp->getTokenString().compare(new_token->getTokenString()) == 0)
            {
                delete new_token;
            }
        }
    }
}
void BTree::setLeft(BTree* node)
{
    node->left = node;
}
BTree* BTree::getLeft()
{
    return this->left;
}
void BTree::setRight(BTree* node)
{
    node->right = node;
}
BTree* BTree::getRight()
{
    return this->right;
}
void add_line_num(){
    LineList *linenum = new LineList();
    
}
