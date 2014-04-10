//
//  BTree.cpp
//  
//
//  Created by James on 4/9/14.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "BTree.h"
#include <stdio.h>

// Default Constructor for BTree, sets all values to Null/1.
BTree::BTree()
{
    root = NULL;
    num = 1;
    left = NULL;
    right = NULL;
    next = NULL;
}

// BTree deconstructor
BTree::~BTree()
{
    recuresiveDeleteTree(root);
}

// Function which recursively goes through the Binary Tree to delete all it's nodes.
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

// Function used to add a node to the binary tree.
void add_node(Token *new_token){
    
    //If/else statement to check if the new token is Null/something else
    if(new_token == NULL)
        new_token->getNextToken();
    else{
        Token *temp = new_token;
        //While loop to iterate through the binary tree and place the new token.
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

//Sets the left node of the currently pointed to node.
void BTree::setLeft(BTree* node)
{
    node->left = node;
}

//Accessor method to give the information in the left node of the currently pointed to node.
BTree* BTree::getLeft()
{
    return this->left;
}

//Sets the right node of the currently pointed to node.
void BTree::setRight(BTree* node)
{
    node->right = node;
}

//Accessor method to give the information in the left node of the currently pointed to node.
BTree* BTree::getRight()
{
    return this->right;
}

//Adds a new element to the line list containing a number.
void add_line_num(){
    LineList *linenum = new LineList();
    
}
