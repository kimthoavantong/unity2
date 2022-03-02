#include <iostream>
using namespace std;
#define KDL int
#define MAXLEN 100
int po;
struct Node
{
	int a;
	Node *pNext;
};
struct Stack
{
	Node *pTop;
};
Node* CreateNode(KDL x)
{
	Node* p = new Node;
	if (p == NULL)
	{
		return NULL;
	} 
	p->a = x;
	p->pNext = NULL;
	return p;
}
void InitStack(Stack &s)
{
	s.pTop = NULL;
}
int isEmpty(Stack &s)
{
	if (s.pTop == NULL)
	{
		return 1;
	}
	return 0;
}
void Push(Stack &s, int x)
{
	Node *p = CreateNode(x);
	if (p == NULL)
	{
		return;
	}
	p->pNext = s.pTop;
	s.pTop = p;
}
void Push(Stack &s, Node *p)
{
	if (p == NULL)
	{
		return ;
	}
	p->pNext = s.pTop; 		// B1: cho con trỏ của node p trỏ đến node pTop
	s.pTop = p;			// B2: cập nhật lại node đầu chính là node p
}
int Pop(Stack &s, int &x)
{
	if (isEmpty(s) == 1)
		return 0;
	Node* p = s.pTop;
	x = s.pTop->a;
	s.pTop = s.pTop->pNext;
	delete p;
	return 1;
}

void PrintStack(Stack s)
{
	Node *p;
	p = s.pTop;
	while (p != NULL)
	{
		printf("%d ", p->a);
		p = p->pNext;
	}
	cout << endl;
}
int Top(Stack &s)
{
	if (isEmpty(s) == 1)
		return 0;
	int x = s.pTop->a;
	return x;
}
void ChuyenCoSo(Stack &s, int cosocandoi, int hethapphan)
{
	while (hethapphan != 0)
	{
		int x = hethapphan % cosocandoi;
		Node *p = CreateNode(x); // thêm x vào node p
		Push(s, p); // thêm node p vào stack
		hethapphan /= cosocandoi; //tiếp tục chia đến hết
	}
}
void a5()
{
	int a123;
	a123 = 555;
	int c123;
<<<<<<< HEAD
<<<<<<< HEAD
	c123 = a123 - 555;
=======
	c123 = a123 - 555 -333;
>>>>>>> phu-hieu
	int c12;
=======
	c123 = a123 + 555 + 666;
>>>>>>> phu
}
void main()
{
	Stack s,s1;
	Node *p; int x;
	InitStack(s);
	InitStack(s1);
	do {
		cout << "nhap x = ";
		cin >> x;
		if (x > 0)
		{
			p = CreateNode(x);
			Push(s, x);
		}
	} while (x > 0);
	PrintStack(s);
	Pop(s,x);
	PrintStack(s);
	int k = Top(s);
	cout << k << endl;


	int hethapphan, cosocandoi;
	cout << endl <<"Nhap gia tri can chuyen : ";
	cin >> hethapphan;
	do {
		cout << endl <<"nhap co so can chuyen (2, 8, 16):  ";
		cin >> cosocandoi;
	} while (cosocandoi != 2 && cosocandoi != 8 && cosocandoi != 16);

	ChuyenCoSo(s1, cosocandoi, hethapphan);
	cout << endl <<"Ket qua: " << endl;
	PrintStack(s1);
	cout << endl;
}