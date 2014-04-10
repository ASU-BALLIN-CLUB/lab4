//
//  BTree.cpp
//  
//
//  Created by James on 4/9/14.
//
//

#include "BTree.h"

BTree::BTree()
{
    root = NULL;
    num = 1;
}
BTree::~BTree()
{
    recursiveDeleteTree(root);
}
void recursiveDeleteTree(Token *root)
{
    if(node->left!= null)
    {
        recursiveDeleteTree(node->left);
    }
    if(node->right!= null)
    {
        recursiveDeleteTree(node->right);
    }
    delete;
}
void add_node(Token *new_token){
    if(root==null)
        root = next;
    else{
        Token *temp = root;
        while(temp != null)
        {
            if(temp.getString().compare(new_token->getString()) < 0)
            {
                if(temp->getLeft() == null)
                {
                    temp->setLeft(new_token);
                    temp =null;
                    new_token->add_line_num();
                }else
                {
                    temp =  temp->getLeft();
                }
            }else if(temp.getString().compare(new_token->getString()) > 0)
            {
                if(temp->getRight() == null)
                {
                    temp->setRight(new_token);
                    temp =null;
                    new_token->add_line_num();
                }else
                {
                    temp =  temp->getLeft();
                }
            }else if(temp.getString().compare(new_token->getString()) == 0)
            {
                delete new_token;
            }
        }
    }
}
void add_line_num(){
    LineList *linenum = new LineList();
    linenum = &num;
    
}
