#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{

    cout << "Welcome to saif store" << endl;
    string in = "a";
    double final_price, total = 0, Total_dis = 0;
    while (in.compare("e") != 0)
    {
        double mp, sp, dis_per;
        cout << "Enter the mark price of the product :" << endl;
        cin >> mp;
        cout << "Enter the discount rate : " << endl;
        cin >> dis_per;
        sp = (1 - dis_per / 100) * mp;
        cout << "Enter the rate of gst" << endl;
        double rate_gst;
        cin >> rate_gst;
        double gst = rate_gst / 100 * sp;
        total = sp + gst;
        cout << "Discount on this product :" << (mp - sp) << endl;
        cout << "Gst : @ " << rate_gst <<"  "<< gst << endl;
        cout << "Price befor discount :" << (mp + gst) << endl;
        cout << "Price after discount : " << final_price << endl;
        final_price = total + final_price;
        Total_dis = Total_dis + (mp - sp);
        cout << "Enter e to exit and any other key to continue" << endl;
        cin >> in;
    }
    double x;
    if (final_price <= 1000)
        x = final_price;
    else if (final_price > 1000 && final_price <= 5000)
        x = final_price * (1 - 10 / 100.0);
    else if (final_price > 5000 && final_price <= 10000)
        x = final_price * (1 - 12 / 100.0);
    else if (final_price > 10000 && final_price <= 20000)
        x = final_price * (1 - 15 / 100.0);
    else
        x = final_price * (1 - 18 / 100.0);

    cout << "Total amout is :" << final_price << endl;
    cout << "Total dicount is:" << Total_dis << endl;
    cout << "Amout to be paid = " << x << endl;
    cout << "Thank you :)....." << endl;
    cout << "Please visit again" << endl;
    return 0;
}
