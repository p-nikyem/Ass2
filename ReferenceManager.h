#pragma once
#include "Article.h";
#include"Book.h";
#include "Textbook.h";
class ReferenceManager
{
private:
	/*Article Art;
	Book b;
	Textbook text;*/
	
	ReferenceManager* storage;
	int size;
	int capacity;

public:
	ReferenceManager();
	ReferenceManager( int capacity);
	bool add(Reference& reference);
	int get(int pos);
	bool Delete(int pos);
	bool search(int id);
};

