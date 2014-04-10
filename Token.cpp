//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include "Token.h"

Token::Token()
{
    //What code do I need here to initialize everything.
    head = NULL;
}
Token::~Token()
{
    //What code do I need here to free memory
    LineList *temp = head;
    while(head != NULL){
        temp = head->next;
        delete head;
        head = temp;
    }
}
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
TokenCode Token::getCode()
{
    return this->code;
}
void Token::setType(LiteralType newType)
{
    this->type = newType;
}
LiteralType Token::getType()
{
    return this->type;
}
void Token::setLiteral(int newInteger)
{
    this->literal.integer = newInteger;
}
int Token::getIntLiteral()
{
    return this->literal.integer;
}
void Token::setLiteral(float newReal)
{
    this->literal.real = newReal;
}
float Token::getRealLiteral()
{
    return this->literal.real;
}
void Token::setLiteral(string newString)
{
    this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
    strcpy(this->literal.stringLiteral, newString.c_str());
}
string Token::getStringLiteral()
{
    return string(this->literal.stringLiteral);
}
void Token::setTokenString(string s)
{
    this->tokenString = s;
}
string Token::getTokenString()
{
    return this->tokenString;
}
//What methods am I missing to implement a binary tree.
void add_node(LineList *item){
    LineList * temp = item;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = item;
}
void Token::setLeft(Token* node)
{
    node->left = node;
}
Token* Token::getLeft()
{
    return this->left;
}
void Token::setRight(Token* node)
{
    node->right = node;
}
Token* Token::getRight()
{
    return this->right;
}
