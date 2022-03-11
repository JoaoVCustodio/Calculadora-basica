

#include <iostream>

using namespace std;



int main()
{
    double b, r, a;

    cout << "Escolha uma opcao. \n 1 e adicao \n 2 para subtrair \n 3 para multiplicar \n 4 para dividir \n";
    cin >> a;

    if (a == 1) {
        goto adicao;
    }

    else if (a == 2) {
        goto subtracao;
    }

    else if (a == 3) {
        goto multiplicacao;
    }

    else (a == 4); {
            goto divisao;
        }

    {
      adicao:

                cout << "Digite o primeiro numero: \n";
                cin >> a;

                cout << "Digite o segundo numero: \n";
                cin >> b;

                    r = a + b;

                cout << "O seu resultado e: " << r;
                
                goto fim;
    }

    {
      subtracao:

                cout << "Digite o primeiro numero: \n";
                cin >> a;

                cout << "Digite o segundo numero: \n";
                cin >> b;

                r = a - b;

                cout << "O seu resultado e: " << r;

                goto fim;

    }

    {
      multiplicacao:


            cout << "Digite o primeiro numero: \n";
            cin >> a;

            cout << "Digite o segundo numero: \n";
            cin >> b;

            r = a * b;
  
            cout << "O seu resultado e: " << r;

            goto fim;
    }

    {
      divisao:

            cout << "Digite o primeiro numero: \n";
            cin >> a;

            cout << "Digite o segundo numero: \n";
            cin >> b;

            r = a / b;

            cout << "O seu resultado e: " << r;

            goto fim;
    }

fim:
    system("pause");
}
