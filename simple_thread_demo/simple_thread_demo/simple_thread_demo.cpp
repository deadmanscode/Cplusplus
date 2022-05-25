// simple_thread_demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<thread>
#include<string>
#include <chrono>
using namespace std;
void task(string tname,int x)
{
	for (int i=0;i<=x;i++)
	{
		cout << tname<< "--->" << i << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
}
int main()
{
	thread t1,t2;
	t1 = thread(task, "Thread-1", 10);
	t2 = thread(task, "Thread-2", 20);
	t1.join();
	t2.join();
    cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//new comment to understand how commit works