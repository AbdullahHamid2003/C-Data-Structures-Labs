#include <iostream>
using namespace std;
int queue[100];
int n = 100;
int front = -1;
int rear = -1;
void Enqueue()
{
    int val;
    if (rear == n - 1)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        if (front == -1)
            front = 0;
        cout << "Insert the element in queue : " << endl;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}
void Dequeue()
{
    if (front == -1)
    {
        cout << "Queue Underflow ";
        return;
    }
    else
    {
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front++;
    }
}
void Display()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
void exit()
{
    exit();
}
void IsEmpty()
{
    if (front <= -1 || rear <= -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
}
void full()
{
    if (rear >= n - 1)
    {
        cout << "Queue is full " << endl;
    }
    else
    {
        cout << "Queue is not full, You can insert more elements " << endl;
    }
}
int main()
{
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Is your Queue Empty?" << endl;
    cout << "5) Is Your Queue Full ?" << endl;
    cout << "6) Exit" << endl;
    cout << "---------------------------------" << endl;
    do
    {
        cout << "Please Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1: Enqueue();
            break;
        case 2: Dequeue();
            break;
        case 3: Display();
            break;
        case 4: IsEmpty();
            break;
        case 5: full();
            break;
        case 6: exit();
            break;
        default: cout << "Invalid choice" << endl;
        }
    } while (ch != 6);
    return 0;
}