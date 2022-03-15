

#include <iostream>
#include <cstdlib>

using namespace std;



int main()
{
    double b, r, a;

inicio:

    system("cls");

    cout << "Escolha uma opcao. \n\n 1 e adicao \n\n 2 para subtrair \n\n 3 para multiplicar \n\n 4 para dividir \n\n";
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

                cout << "Digite o primeiro numero: \n\n";
                cin >> a;

                cout << "Digite o segundo numero: \n\n";
                cin >> b;

                    r = a + b;

                cout << "O seu resultado e \n" << r << endl;

                int l;

                cout << "Deseja voltar ao inicio? 1 para sim ou 2 para nao" << endl;
                cin >> l;

                if (l == 1) {

                    goto inicio;
                }
                else goto fim;
                
                
    }

    {
      subtracao:

                cout << "Digite o primeiro numero: \n\n";
                cin >> a;

                cout << "Digite o segundo numero: \n\n";
                cin >> b;

                r = a - b;

                cout << "O seu resultado e \n" << r << endl;

                int l;

                cout << "Deseja voltar ao inicio? 1 para sim ou 2 para nao" << endl;
                cin >> l;

                if (l == 1) {

                    goto inicio;
                }
                else goto fim;


                

    }

    {
      multiplicacao:


            cout << "Digite o primeiro numero: \n\n";
            cin >> a;

            cout << "Digite o segundo numero: \n\n";
            cin >> b;

            r = a * b;
  
            cout << "O seu resultado e \n" << r << endl;

            int l;

            cout << "Deseja voltar ao inicio? 1 para sim ou 2 para nao" << endl;
            cin >> l;

            if (l == 1) {

                goto inicio;
            }
            else goto fim;

    }

    {
      divisao:

            cout << "Digite o primeiro numero: \n\n";
            cin >> a;

            cout << "Digite o segundo numero: \n\n";
            cin >> b;

            r = a / b;

            cout << "O seu resultado e \n" << r << endl;

            int l;

            cout << "Deseja voltar ao inicio? 1 para sim ou 2 para nao" << endl;
            cin >> l;

            if (l == 1) {

                goto inicio;
            }
            else goto fim;

    }

fim:
    system("pause");
}
