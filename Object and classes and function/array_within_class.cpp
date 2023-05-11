// Shopping_list
#include <iostream>
using namespace std;

const int m = 30;

class items
{

    int itemcode[m];
    float itemprice[m];
    int count;

public:
    void cnt() { count = 0; }
    void getdata();
    void disaplysum();
    void remove();
    void diaplayitems();
};

void items::getdata()
{
    cout << "Enter item code: ";
    cin >> itemcode[count];
    cout << "\nEnter item price: ";
    cin >> itemprice[count];
    count++;
}
void items::disaplysum()
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += itemprice[i];
    }
    cout << "\nsum is: " << sum << endl;
}
void items::diaplayitems()
{
    for (int i = 0; i < count; i++)
    {
        cout << "Item tag : " << itemcode[i] << " & item price is: " << itemprice[i] << endl;
    }
    cout << endl;
}
void items::remove()
{
    int a;
    cout << "Enter item code to remove: ";
    cin >> a;
    for (int i = 0; i < count; i++)
    {
        if (itemcode[i] == a)
        {
            itemprice[i] = 0;
        }
    }
}

int main()
{

    items order;
    order.cnt();
    int x;
    do
    {
        cout << "\nYou can do the folloeing:\n1.add\n2.dispaly sum\n3.remove item \n4.disaply all item\n5.exit ";
        cin >> x;
        switch (x)
        {
        case 1:
            order.getdata();
            break;
        case 2:
            order.disaplysum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.diaplayitems();
            break;
        case 5:
            break;
        default:
            cout << "error in input";
            break;
        }

    } while (x != 5);

    return 0;
}
