#include <iostream>
using namespace::std;


int modls (int bilangan)
{
    if(bilangan==0)
        return 1;
    else
        return bilangan%modls (bilangan%4);

}

main()
{
        int bil, mod;

    cout << "Berikan bil anda : ";cin >> bil;
    cout << "Sisa Pembagian dari "<<bil<<" %4 adalah :"<<modls(bil);
    endl (cout);
    return 0;
}
