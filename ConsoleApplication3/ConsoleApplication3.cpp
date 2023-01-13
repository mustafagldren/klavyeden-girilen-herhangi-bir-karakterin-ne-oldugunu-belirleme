// klavyeden girilen herhangi bir karakterin ne oldugunu belirleme

#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "klavyeden herhangi bir tusa basiniz :";
    cin >> x;


    if (x>='0' && x<='9' ) {
        cout << "girilen deger sayidir." << endl;

    }
    else if ((x >= 'a' && x <= 'z') || (x>='A' && x<='Z')) {
        cout << "girilen deger harftir."<<endl;

    }
    else {
        cout <<"girilen deger ozel isarettir."<<endl;
    }

    system("pause");
    return 0;
}


