#ifndef LIBRARY_H
#define LIBRARY_H


class Library
{
protected:
	Book** niz;
	int velicina;
	int lv = 0;
public:
	Library(int velicina);
	Library();
	~Library();
	void get_library(char*buffer);
	char** get_titles(char(&buffer),int& size);
	Book** get_part_titles(char(&buffer), int& size);
	int get_size();
};

#endif
