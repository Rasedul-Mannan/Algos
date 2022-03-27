#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *head;
void print()
{
    struct node *tem;
    tem = head;
    while (tem != NULL)
    {
        cout << tem->data << endl;
        tem = tem->link;
    }
    cout << "Done\";
}
void insert(int value)
{
    struct node *tt;
    struct node *temp;
    tt = (struct node *)malloc(sizeof(struct node));
    tt->data = value;
    tt->link = NULL;

    temp = head;
    if (temp == NULL)
        head = tt;
    else
    {
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = tt;
    }
}
void insertinfirst(int value)
{
    struct node *tt;
    tt = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        head->data = value;
        head->link = NULL;
    }
    else
    {
        tt->data = value;
        tt->link = head;
        head = tt;
    }
}
void deletefromposition(int pos)
{
    if (pos == 1)
    {
        head = head->link;
        return;
    }
    struct node *tem;
    tem = head;
    // 6 9 3 9 6
    for (int i = 1; i < pos - 1; i++)
    {
        tem = tem->link;
    }
    struct node *tem2;
    tem2 = tem->link;       //indexof6
    tem->link = tem2->link; //indexof9=indexof6
}

int main()
{
    head = NULL;
    /*   head = (struct node*) malloc(sizeof(struct node));
    head->data=5;
    head->link=(struct node*) malloc(sizeof(struct node));
    head->link->data=9;
    head->link->link=NULL;*///commented

    for (int i = 0; i < 5; i++)
    {
        int p;
        cin >> p;
        insert(p);
    }
    insertinfirst(99);
    while (1)
    {
        int k;
        cin >> k;
        deletefromposition(k);
        print();
    }
}
