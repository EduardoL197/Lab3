/*
	Eduardo Lopez
	CPSC 121 Lab 3
	2/13/18
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	char user;
	int width;
	int ww;
	string word;
	int height;
	int cotxt;
	int end;
	int point;
		cout << "Choose between (R)ectangle or (T)riangle. R/T?" << endl;
		cin >> user;
		if (user == 'R')
		{
																					// word or width
			cout << "Word(1) or width(2)? 1/2?" << endl;
			cin >> ww;
																					// word or width
			if (ww == 2)
			{	// obtain width
				cout << "Enter width" << endl;
				cin >> width;
			}
			else if (ww == 1)// word
			{	// obtain word
				cout << "Enter word" << endl;
				cin >> word;
			}// ask height
			cout << "What is the height?" << endl;
			cin >> height;// obtain height
				// cout or .txt?
			cout << "Would you like to cout (1) or write into a .txt file (2)? 1/2?" << endl;
			cin >> cotxt;
			// if cout
			if (cotxt == 1)
			{// display cout
				if (ww == 1)
				{
					int wordfunc = word.length();
					for (int func_height = 0; func_height < height; func_height++)
					{
						for (int func_word = 0; func_word < wordfunc; func_word++)
						{
							cout << word[func_word];
						}
						cout << endl;
					}

				}
				else if (ww == 2)
				{
					for (int func_height = 0; func_height < height; func_height++)
					{
						for (int func_width = 0; func_width < width; func_width++)
						{
							cout << "*";
						}
						cout << endl;
					}
				}
			}
			else if (cotxt == 2)// if .txt
			{		// output to 
				ofstream out;
				out.open("display.txt");
				if (ww == 1)
				{
					int wordfunc = word.length();
					for (int func_height = 0; func_height < height; func_height++)
					{
						for (int func_word = 0; func_word < wordfunc; func_word++)
						{
							out << word[func_word];
						}
						out << endl;
					}

				}
				else if (ww == 2)
				{
					for (int func_height = 0; func_height < height; func_height++)
					{
						for (int func_width = 0; func_width < width; func_width++)
						{
							out << "*";
						}
						out << endl;
					}
				}						
			}
			// exit or restart
			cout << "Would you like to exit(1) or restart(2)? 1/2?" << endl;
			cin >> end;
			// exit
			if (end == 1)
			{// exit
				return 0;
				system("PAUSE");
			}
			else if (end == 2)	// restart
			{	
				cout << "Close the program and start again" << endl; // sorry couldn't figure it out without using do/while
				return 0;
				system("PAUSE");
			}
		}
		else if (user == 'T')
		{
			int up;
			// word of width
			cout << "Word(1) or width(2)? 1/2?" << endl;
			cin >> ww;
			// width
			if (ww == 2)
			{// obtain width
				cout << "Enter width" << endl;
				cin >> width;
			}
			else if (ww == 1)// word
			{// obtain word
				cout << "Enter word" << endl;
				cin >> word;
			}// triangle points up or down?
			cout << "Is the triangle pointing up (1) or down (2)? 1/2?" << endl;
			cin >> point;
			// up
			if (point == 1)
			{	// read input
				up = 1;
			}
			else if (point == 2)	// down 
			{	// read input
				up = 2;
			}
			// cout or .txt?
			cout << "Would you like to cout (1) or write into a .txt file (2)? 1/2?" << endl;
			cin >> cotxt;
			// if cout
			if (cotxt == 1)
			{//display cout
				if (up == 2) // down
				{
					if (ww == 1)
					{
						int wordfunc = word.length();
						for (int func_word = wordfunc; func_word >= 0; func_word--)
						{
							for (int func_height = 0; func_height < func_word; func_height++)
							{
								cout << word[func_height];
							}
							cout << endl;
						}

					}
					else if (ww == 2)
					{
						for (int func_width = width; func_width >= 0; func_width--)
						{
							for (int func_height = 0; func_height < func_width; func_height++)
							{
								cout << "*";
							}
							cout << endl;
						}
					}
				}
				else if (up == 1) // up
				{
					if (ww == 1)
					{
						int wordfunc = word.length();
						for (int func_word = 0; func_word < wordfunc; func_word++)
						{
							for (int func_height = 0; func_height < func_word+1; func_height++)
							{
								cout << word[func_height];
							}
							cout << endl;
						}

					}
					else if (ww == 2)
					{
						for (int func_width = 0; func_width < width; func_width++)
						{
							for (int func_height = 0; func_height < func_width+1; func_height++)
							{
								cout << "*";
							}
							cout << endl;
						}
					}

				}
			}
			else if (cotxt == 2)// if .txt
			{		// output to 
				ofstream out;
				out.open("display.txt");
				//out << (triangle function) << endl;									********
			}
			// exit or restart
			cout << "Would you like to exit(1) or restart(2)? 1/2?" << endl;
			cin >> end;
			// exit
			if (end == 1)
			{
				return 0;
				system("PAUSE");
			}
			else if (end == 2)
			{
				cout << "Close the program and start again" << endl; // sorry couldn't figure it out without using do/while
				return 0;
				system("PAUSE");
			}
		}
		else
			cout << "Invalid input closing program." << endl;
	return 0;
	system("PAUSE");
}
