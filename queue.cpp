#include <iostream>
using namespace std;
class queue
{
	public:
		int front=-1;
		int rear =-1;
		int que[6];
	void insert()
	{
		int n;
		cout<<"Enter the elements to insert:"<<endl;
		cin>>n;
		if(rear==5)
		{
			cout<<"The queue is overflow"<<endl;
			return;
		}
		rear++;
		que[rear]=n;
		if(front==-1)
		{
			front++;
		}
	}
	void remove()
	{
		if(front==-1||front>rear)
		{
			cout<<"The queue is underflow"<<endl;
			return;
		}
		front++;
	}
	void peek()
	{
			if(front==-1||front>rear)
		{
			cout<<"underflow"<<endl;
			return;
		}
		cout<<que[front]<<endl;
		
	}
};
int main() {
    queue q;
    int choice;

    do {
        std::cout << "1. insert\n";
        std::cout << "2. delete\n";
        std::cout << "3. peek\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                q.insert();
                break;
            case 2:
                q.remove();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);
    return 0;
}
