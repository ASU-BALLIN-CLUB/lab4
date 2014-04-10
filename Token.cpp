//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "Token.h"

Token::Token()
{
    //Constructor to set the head Token to NULL.
    head = NULL;
}
Token::~Token()
{
    //Deconstructor to free memory from the Token.
    LineList *temp = head;
    //while loop to iterate through.
    while(head != NULL){
        temp = head->next;
        delete head;
        head = temp;
    }
}

// Mutator method to set the code of the token.
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}

// Accessor method to get the code of the token.
TokenCode Token::getCode()
{
    return this->code;
}

// Mutator method to set the type of the token.
void Token::setType(LiteralType newType)
{
    this->type = newType;
}

// Accessor method to get the type of the token.
LiteralType Token::getType()
{
    return this->type;
}

// Mutator method to set the number literal of the token.
void Token::setLiteral(int newInteger)
{
    this->literal.integer = newInteger;
}

// Accessor method to get the number literal of the token.
int Token::getIntLiteral()
{
    return this->literal.integer;
}

// Mutator method to set the real number of the token.
void Token::setLiteral(float newReal)
{
    this->literal.real = newReal;
}

// Accessor method to get the real literal of the token.
float Token::getRealLiteral()
{
    return this->literal.real;
}

// Mutator method to set the string literal of the token.
void Token::setLiteral(string newString)
{
    this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
    strcpy(this->literal.stringLiteral, newString.c_str());
}

// Accessor method to get the string literal of the token.
string Token::getStringLiteral()
{
    return string(this->literal.stringLiteral);
}

// Mutator method to set the token string of the token.
void Token::setTokenString(string s)
{
    this->tokenString = s;
}

// Accessor method to get the token string of the token.
string Token::getTokenString()
{
    return this->tokenString;
}

//Method used to add nodes to create a binary tree.
void add_node(LineList *item){
    LineList * temp = item;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = item;
}

// Mutator method to set the node left of the token.
void Token::setLeft(Token* node)
{
    node->left = node;
}

// Accessor method to get the node left of the token.
Token* Token::getLeft()
{
    return this->left;
}

// Mutator method to set the node right of the token.
void Token::setRight(Token* node)
{
    node->right = node;
}

// Accessor method to get the node right of the token.
Token* Token::getRight()
{
    return this->right;
}
