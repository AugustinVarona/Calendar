#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int luna=1, an;
    int prima_zi, nr_zile,nr_luni;
    int i, j;
    cout << "Care este anul pentru care doriti afisarea calendarului?"<<endl;
      cin >> an;
    cout << endl;

    cout << "Pentru cate luni din anul "<<an<<" doriti afisarea calendarului?"<<endl;
        cin >> nr_luni;
        cout << endl;

      cout << "In ce zi din saptamana este ziua de 1 ianuarie "<<an<<"? (1 pentru Luni, 2 pentru Marti, etc.)"<<endl;
      cin >> prima_zi;
      cout<<endl;

    for(int k=1;k<=nr_luni;k++)
    {
        switch (luna)
        {
            case 2:
                if((an%400==0) || (an%4==0 && an%100 !=0))
                {
                    nr_zile = 29;
                    cout<<"Februarie"<<endl;
                }
                else
                {
                    nr_zile = 28;
                    cout<<"Februarie"<<endl;
                }
                break;
           case 4:
               cout<<"Aprilie"<<endl;
               nr_zile = 30;
               break;
           case 6:
               cout<<"Iunie"<<endl;
               nr_zile = 30;
               break;
           case 9:
               cout<<"Septembrie"<<endl;
               nr_zile = 30;
               break;
           case 11:
               cout<<"Noiembrie"<<endl;
               nr_zile = 30;
               break;
          case 1:
              cout<<"Ianuarie"<<endl;
               nr_zile = 31;
               break;
          case 3:
              cout<<"Martie"<<endl;
               nr_zile = 31;
               break;
          case 5:
              cout<<"Mai"<<endl;
               nr_zile = 31;
               break;
          case 7:
              cout<<"Iulie"<<endl;
               nr_zile = 31;
               break;
          case 8:
              cout<<"August"<<endl;
               nr_zile = 31;
               break;
          case 10:
              cout<<"Octombrie"<<endl;
               nr_zile = 31;
               break;
          case 12:
                cout<<"Decembrie"<<endl;
                nr_zile = 31;
                break;

        }
        luna++;
        cout << endl << "L\tM\tM\tJ\tV\tS\tD\n";
        for (i = 1; i < prima_zi; i++)
        {
            cout << " \t";
        }

        for (j = 1; j <= nr_zile; j++)
        {
            if (((j + prima_zi - 2) % 7 == 0) && (j != 1))
                cout << endl;
            cout << j  << "\t";
        }
        cout << endl << endl;

        prima_zi = (j + prima_zi - 2) % 7 + 1;


    }

    return 0;
}
