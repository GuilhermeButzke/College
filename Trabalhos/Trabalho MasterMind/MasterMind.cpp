//Jogo MasterMind.
//Programado por Pablo Augusto de Quadros, Bernardo Henrique Gaya e Guilherme Victor Butzke.
//Projeto iniciado no dia 30 de abril de 2021 e finalizado dia 11 de maio de 2021.
#include <iostream>
using namespace std;
#include <time.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int respostaMenu, n1, n2, n3, n4, n5, dificuldade =2, voltardificuldade, resposta1,resposta2,
    resposta3,resposta4,resposta5,contadorJogadas,nresposta, contadorBranco = 0 , contadorPreto = 0;

    do{
        //Escrita do menu principal.
        system("cls");
        cout << "-----------------------";
        cout << "\n [1] Jogar \n [2] Dificuldade \n [3] Sobre \n [4] Sair";
        cout << "\n -----------------------";
        cout<< "\nInforme a opção desejada: ";
        cin >> respostaMenu;
        system("cls");
        //Switch de escolhas do menu principal.
        switch (respostaMenu){
            case 1:
                //O srand é utilizado para que os números gerados posteriormente pelo rand() não sejam os mesmos.
                srand(time(NULL));
                //Do-While responsável por randomizar 5 números de 1 a 6.
                do {
                    n1 = rand()%6 +1; n2 = rand()%6 +1; n3 = rand()%6 +1; n4 = rand()%6 +1; n5 = rand()%6 +1;
                } while (n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5 || n2 == n3 || n2 == n4 || n2 == n5 || n3 == n4 || n3 == n5 || n4 == n5);
                //Switch que seleciona o modo de jogo de acordo com a dificuldade escolhida.
                switch (dificuldade){
                /*Dificuldade 1 (Fácil), 3 digitos randômicos e 8 tentativas. (A ideia do código é a mesma para
                o case 1 ao 3, porém aumentando o número de variáveis a serem acertadas).*/
                    case 1:
                        //Informações de como inserir os dígitos.
                        cout << "Maneiras de Inserir os Números: " << endl <<
                                " - Informe um número de cada vez e aperte a tecla enter, esse processo será feito três vezes por jogada. " << endl <<
                                " - Informe os três números com espaçamento (Ex: 1 2 3) e aperte a tecla enter, esse processo será feito só uma vez por jogada." << endl;
                        system("pause");
                        system("cls");
                        //Colocando a quantidade de jogadas deste nível.
                        contadorJogadas = 8;
                        //Tela de enfeite.
                        cout << "----------------"<< endl;
                        cout <<"  "<< "X" <<"  "<<"  "<< "X" <<"    "<< "X" << endl;
                        cout << "----------------" << endl;
                        cout << "Jogo iniciado com " << contadorJogadas << " jogadas restantes." << endl;
                        //While que diminui conforme passa as jogadas.
                        while (contadorJogadas !=0) {
                            cout<< "----------------" << endl;
                            cout << "Informe três números: "<< endl;
                            //For que recolhe os números a cada rodada.
                            for (nresposta = 0; nresposta <= 2; nresposta++){
                                //Resposta sempre pega os números e depois passa para outra variável.
                                if (nresposta == 0){
                                    cin >> resposta1;
                                    if (resposta1 == n1){
                                        contadorPreto += 1;
                                    }
                                    else if(resposta1 == n2 || resposta1 == n3){
                                        contadorBranco+=1;
                                    }
                                }
                                else{
                                    if (nresposta == 1){
                                        cin >> resposta2;
                                        if (resposta2 == n2){
                                            contadorPreto += 1;
                                        }
                                        else if(resposta2 == n1 || resposta2 == n3){
                                            contadorBranco+=1;
                                        }
                                    }
                                    else{
                                        cin >> resposta3;
                                        if (resposta3 == n3){
                                            contadorPreto += 1;
                                        }
                                        else if(resposta3 == n1 || resposta3 == n2){
                                            contadorBranco+=1;
                                        }
                                    }
                                }
                            }
                            contadorJogadas--;
                            //If para caso o jogador acerte mostre que ele ganhou.
                            if (contadorPreto == 3){
                                cout << "Você venceu!!!" << endl;
                                system("pause");
                                contadorBranco = 0;
                                contadorPreto = 0;
                                break;
                            }
                            //If para caso acabe as jogadas mostre que ele perdeu.
                            else if(contadorJogadas == 0){
                                cout << endl <<"Você perdeu!!!" << endl << "A combinação correta era: " << n1 << " " << n2 << " " << n3 << endl;
                                system("pause");
                                contadorBranco = 0;
                                contadorPreto = 0;
                            }
                            //Mostra os acertos e número de jogadas.
                            else{
                                cout << "------------------------------------------------------" << endl;
                                cout << "Você tem " << contadorBranco << " número(s) certo(s) em posição(ões) errada(s)." << endl;
                                cout << "Você tem " << contadorPreto << " número(s) certo(s) em posição(ões) certa(s)." << endl;
                                cout << "Você tem " << contadorJogadas << " jogadas restantes." << endl;
                                cout << "--------------------------------------";
                                contadorBranco = 0;
                                contadorPreto = 0;
                            }
                        }
                        dificuldade = 2;
                        break;
                    //Dificuldade 2 (Médio), 4 dígitos randômicos e 10 tentativas.
                    case 2:
                        cout << "Maneiras de Inserir os Números: " << endl <<
                         " - Informe um número de cada vez e aperte a tecla enter, esse processo será feito quatro vezes por jogada. " << endl <<
                         " - Informe os quatro números com espaçamento (Ex: 1 2 3 4) e aperte a tecla enter, esse processo será feito só uma vez por jogada." << endl;
                        system("pause");
                        system("cls");
                        contadorJogadas = 10;
                        cout << "--------------------"<< endl;
                        cout <<"  "<< "X" <<"  "<<"  "<< "X" <<"    "<< "X" <<"   " << "X" << endl;
                        cout << "--------------------" << endl;
                        cout << "Jogo iniciado com " << contadorJogadas << " jogadas restantes." << endl;
                        while (contadorJogadas !=0) {
                            cout<< "--------------------" << endl;
                            cout << "Informe quatro números: "<< endl;
                            for (nresposta = 0; nresposta <= 3; nresposta++){
                                if (nresposta == 0){
                                    cin >> resposta1;
                                    if (resposta1 == n1){
                                        contadorPreto += 1;
                                    }
                                    else if(resposta1 == n2 || resposta1 == n3 || resposta1 == n4){
                                        contadorBranco+=1;
                                    }
                                }
                                else{
                                    if (nresposta == 1){
                                        cin >> resposta2;
                                        if (resposta2 == n2){
                                            contadorPreto += 1;
                                        }
                                        else if(resposta2 == n1 || resposta2 == n3 || resposta2 == n4){
                                            contadorBranco+=1;
                                        }
                                    }
                                    else{
                                        if (nresposta == 2){
                                            cin>> resposta3;
                                            if (resposta3 == n3){
                                                contadorPreto += 1;
                                            }
                                            else if(resposta3 == n1 || resposta3 == n2 || resposta3 == n4){
                                                contadorBranco+=1;
                                            }
                                        }
                                        else{
                                            cin >> resposta4;
                                            if (resposta4 == n4){
                                                contadorPreto += 1;
                                            }
                                            else if(resposta4 == n1 || resposta4 == n2 || resposta4 == n3){
                                                contadorBranco+=1;
                                            }


                                        }
                                    }
                              }
                            }
                            contadorJogadas--;
                            if (contadorPreto == 4){
                                cout << "Você venceu!!!" << endl;
                                system("pause");
                                contadorBranco = 0;
                                contadorPreto = 0;
                                break;

                            }
                            else if(contadorJogadas == 0){
                                cout << endl <<"Você perdeu!!!" << endl << "A combinação correta era: " << n1 << " " << n2 << " " << n3 <<" "<< n4 << endl;
                                system("pause");
                                contadorBranco = 0;
                                contadorPreto = 0;

                            }
                            else{
                                cout << "----------------------------------------------------------" << endl;
                                cout << "Você tem " << contadorBranco << " número(s) certo(s) em posição(ões) errada(s)." << endl;
                                cout << "Você tem " << contadorPreto << " número(s) certo(s) em posição(ões) certa(s)." << endl;
                                cout << "Você tem " << contadorJogadas << " jogadas restantes." << endl;
                                cout << "--------------------------------------";
                                contadorBranco = 0;
                                contadorPreto = 0;
                            }
                        }
                        dificuldade = 2;
                        break;
                    //Dificuldade 3 (Difícil), 5 digitos randômicos e 12 tentativas.
                    case 3:
                        cout << "Maneiras de Inserir os Números: " << endl <<
                         " - Informe um número de cada vez e aperte a tecla enter, esse processo será feito cinco vezes por jogada. " << endl <<
                         " - Informe os cinco números com espaçamento (Ex: 1 2 3 4 5) e aperte a tecla enter, esse processo será feito só uma vez por jogada." << endl;
                        system("pause");
                        system("cls");
                        contadorJogadas = 12;
                        cout << "------------------------"<< endl;
                        cout <<"  "<< "X" <<"   "<< "X" <<"    "<< "X" <<"    " << "X" << "    " << "X" << endl;
                        cout << "------------------------" << endl;
                        cout << "Jogo iniciado com " << contadorJogadas << " jogadas restantes." << endl;
                        while (contadorJogadas !=0) {
                          cout<< "------------------------" << endl;
                          cout << "Informe cinco números: "<< endl;
                          for (nresposta = 0; nresposta <= 4; nresposta++){
                                if (nresposta == 0){
                                    cin >> resposta1;
                                    if (resposta1 == n1){
                                        contadorPreto += 1;
                                    }
                                    else if(resposta1 == n2 || resposta1 == n3 || resposta1 == n4 || resposta1 == n5){
                                        contadorBranco+=1;
                                    }
                                }
                                else{
                                    if (nresposta == 1){
                                        cin >> resposta2;
                                        if (resposta2 == n2){
                                            contadorPreto += 1;
                                        }
                                        else if(resposta2 == n1 || resposta2 == n3 || resposta2 == n4 || resposta2 == n5){
                                            contadorBranco+=1;
                                        }
                                    }
                                    else{
                                        if (nresposta == 2){
                                            cin >> resposta3;
                                            if (resposta3 == n3){
                                                contadorPreto += 1;
                                            }
                                            else if(resposta3 == n1 || resposta3 == n2 || resposta3 == n4 || resposta3 == n5){
                                                contadorBranco+=1;
                                            }
                                        }
                                        else{
                                            if(nresposta ==3 ){
                                                cin >> resposta4;
                                                if (resposta4 == n4){
                                                    contadorPreto += 1;
                                                }
                                                else if(resposta4 == n1 || resposta4 == n2 || resposta4 == n3 || resposta4 == n5){
                                                    contadorBranco+=1;
                                                }
                                            }
                                            else{
                                                cin >> resposta5;
                                                if (resposta5 == n5){
                                                    contadorPreto += 1;
                                                    }
                                                else if(resposta5 == n1 || resposta5 == n2 || resposta5 == n3 || resposta5 == n4){
                                                    contadorBranco+=1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            contadorJogadas--;
                            if (contadorPreto == 5){
                                cout << "Você venceu!!!" << endl;
                                system("pause");
                                contadorBranco = 0;
                                contadorPreto = 0;
                                break;

                            }
                            else if(contadorJogadas == 0){
                                cout << endl <<"Você perdeu!!!" << endl << "A combinação correta era: " << n1 << " " << n2 << " " << n3 <<" "<< n4 << " " << n5 << endl;
                                system("pause");
                                contadorBranco = 0;
                                contadorPreto = 0;

                            }
                            else{
                                cout << "----------------------------------------------------------" << endl;
                                cout << "Você tem " << contadorBranco << " número(s) certo(s) em posição(ões) errada(s)." << endl;
                                cout << "Você tem " << contadorPreto << " número(s) certo(s) em posição(ões) certa(s)." << endl;
                                cout << "Você tem " << contadorJogadas << " jogadas restantes." << endl;
                                cout << "----------------------------------";
                                contadorBranco = 0;
                                contadorPreto = 0;
                            }
                        }
                        dificuldade = 2;
                        break;
                }
                break;
            //Escolha do número 2 (dois) leva ao menu de dificuldades.
            case 2:
                while((voltardificuldade != 1) && (voltardificuldade != 2) && (voltardificuldade != 3)) {
                  system("cls");
                  cout << "-----------------------------------------------------------------" << endl <<
                        "Escolha uma Dificuldade:" <<endl<<
                        "  [1] Fácil: Sequência de 3 dígitos diferentes e 08 tentativas" << endl <<
                        "  [2] Médio: Sequência de 4 dígitos diferentes e 10 tentativas" << endl <<
                        "  [3] Difícil: Sequência de 5 dígitos diferentes e 12 tentativas" << endl <<
                        "-----------------------------------------------------------------";
                  cout<< "\nInforme a opção desejada: ";
                  cin >> dificuldade;
                  voltardificuldade = dificuldade;
                  system("cls");
                }
                voltardificuldade = 5;
                break;
            //Escolha do número 3 (três) mostra as informações sobre os criadores e jogo.
            case 3:
              cout << "-----------------------------------------------------------" <<endl<<
              "Informações gerais: " <<endl<<
              " - Equipe de Desenvolvimento: Pablo Augusto de Quadros,"<<endl <<
              "   Bernardo Henrique Gaya e Guilherme Victor Butzke." << endl <<
              " - Produzido em Abril de 2021." << endl <<
              " - Professor: Rafael Ballottin Martins." << endl <<
              " - Disciplina: Algoritmos e Progrmação." << endl <<
              "-----------------------------------------------------------"<< endl << endl << endl <<
              "-----------------------------------------------------------" << endl <<
              "Informações sobre o jogo / Como jogar:"<<endl<<
              "O jogo começará gerando números aleatórios conforme a"<<endl<<
              "dificuldade e o jogador precisará decifrar este código"<<endl<<
              "respeitando as seguintes regras:"<< endl<< endl<<
              "1 - Não haverá números repetidos no código."<<endl<<
              "2 - Os números gerados serão entre 1 e 6."<<endl<<
              "3 - Depois que algum código for digitado, o jogo informará: "<<endl<<
              "  · O número de jogadas restantes."<<endl<<
              "  · Quantos números estão digitados e posicionados "<<endl<<
              "    corretamentes."<<endl<<
              "  · Quantos números estão digitados corretamentes porém"<<endl<<
              "    posicionados incorretamente."<<endl<<
              "4 - O jogo acabará caso: O número de jogadas restantes"<<endl<<
              "chegue a 0 ou quando o jogador acertar todos os números"<<endl<<
              "na ordem correta."<< endl <<
              "-----------------------------------------------------------" << endl;
              system("pause");
              break;
            //Escolha do número 4 que encerra o jogo.
            case 4:
              system("cls");
              cout<< "Obrigado por jogar!";
              return 0;
        }

     }while(respostaMenu != 4);
}

