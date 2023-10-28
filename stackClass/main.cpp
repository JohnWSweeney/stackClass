#include "stack.h"

int main()
{
	std::cout << "Stack Class v1.0.0\n\n";

	node* list = nullptr;
	int result;
	int data;
	int nodeCount;

	stack stack;

	for (int i = 0; i < 5; i++)
	{
		stack.push(&list, pow(i, 4));
	}
	result = stack.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		stack.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
	/// test code here: ////////////////////////////////////////
	
	std::cout << "result: " << result << "\n\n";
	////////////////////////////////////////////////////////////
	result = stack.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		stack.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
}