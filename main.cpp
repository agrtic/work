#define <iostream>

using namespace std;

int main(){
while (true){
cout << "1.Menu: " << endl;
cout << "2.Option 1: " << endl;
cout << "3.Option 2: " << endl;
cout << "4.Option 3: " << endl;
cout << "5.Exit: " << endl;
}

switch (choice){
case 1:
     cout << "Option 1" << endl;
     break;
case 2:
     cout << "Option 2" << endl;
     break;
case 3:
     cout << "Option 3" << endl;
     break;
case 4:
      cout << "Exiting ......" << endl;
      return 0;
}
}
