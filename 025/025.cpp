#include <iostream>
#include <math.h>
using namespace std;
struct kk
{
    int data;
    kk* next;
};
kk* newkk(int data)
{
    kk* temp = new kk;
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void inorder(kk* root)
{
    if (root != NULL)
    {

        (root->data == 0) ? cout << "NO" << endl : cout << root->data << endl;
        inorder(root->next);
    }
}
kk* _push(kk** node, int data)
{
    kk* temp = new kk;
    temp->data = data;
    temp->next = *node;
    *node = temp;
}
kk* insert(kk* node, int data)
{
    if (node == NULL)
    {

        return newkk(data);
    }

    node->next = insert(node->next, data);

    return node;
}
int _max(int x, int y)
{
    return (x > y) * x + (x <= y) * y;
}

int main()
{
    kk* root = NULL;
    int n;
    cin >> n;
    long data[1001];

    for (int i = 0; i < n; i++)
        cin >> data[i];

    for (int j = 0; j < n; j++)
    {
        int max_res = 0;
        long x = data[j];
        for (long i = sqrt(x); i >= 2; i--)
        {
            long i_i = x, p = 0;
            while (i_i % i == 0)
            {
                i_i /= i;
                p++;
            }

            if (i_i == 1)
            {
                max_res = _max(p, max_res);
            }
        }

        if (j > 0 and root != NULL)
            insert(root, max_res);
        if (j == 0 or root == NULL)
            root = insert(root, max_res);
    }

    inorder(root);
}