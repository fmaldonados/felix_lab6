#include <iostream>
#include "user.h"
#include "game.h"
#include <vector>

using std::cout;;
using std::endl;
using std::cin;
using std::vector;
int main(int argc, char*argv[]){
	int opcion;
	bool terminar_juego=false;
	vector<user>lista_usuarios;
	vector<game>lista_juegos;
	while(!terminar_juego){
		cout<<"---------------------------------------------------------------"<<endl
		<<"1-Agregar un usuario"<<endl 
		<< "2-Modificar  un  usuario"<<endl
		<<"3-Eliminar Usuario"<<endl
		<<"4-Agregar Juego"<<endl
		<<"5-Eliminar Juego"<<endl
		<<"6-Listar Usuarios"<<endl
		<<"7-Listar Juegos"<<endl
		<<"8-SALIR"<<endl
		<<"INGRESE OPCION: ";
		cin>>opcion;
		cout<< "------------------------------------------------------------------------"<<endl;

		if(opcion==1){
			string nuevo_username,nuevo_password;
			cout<< "INGRESE EL NOMBRE DEL USUARIO: ";
			cin>> nuevo_username;
			cout<< "INGRESE LA PASSWORD: ";
			cin >> nuevo_password;
			bool puede_ingresar_usuario=true;
			for(int i=0; i<lista_usuarios.size();i++){
				if(lista_usuarios[i].getUsername() == nuevo_username)
					puede_ingresar_usuario=false;
			}		

			if(puede_ingresar_usuario){
				user nuevo_usuario(nuevo_username,nuevo_password);
				lista_usuarios.push_back(nuevo_usuario);
			}else{
				cout<< "ESE USUARIO YA FUE CREADO!"<<endl;	
			}
		}else{
			if(opcion==2){
				bool verificar_usuario=false;
				bool verificar_password=false;
				string usuario_login,pass_login;
				int index;
				
				cout<< "Introduzca su usuario: ";
				cin>> usuario_login;
				cout<< "Introduza su password: ";
				cin>>pass_login;
				for(int i=0;i<lista_usuarios.size();i++){
					if(lista_usuarios.getUsername()== usuario_login){
						index=i;
						verificar_usuario=true;
					}
				}
				if(verificar_usuario){

				}else{
					cout<< "Ese usuario no existe";
				}				

				int opcion2;
				cout<<endl<< "1-Agregar Juego"<<endl
				<<"2-Eliminar juego"<<endl
				<<"3-Cambiar contraseña"<<endl
				<<"INGRESE OPCION: ";
				cin>>opcion2;
				if(opcion2==1){
							
				}else{
					if(opcion2==2){

					}else{
						if(opcion2==3){
					
						}else{
							cout<< endl<<"OPCION NO VALIDA"<<endl;
						}
					}
				}
			}else{
				if(opcion==3){
					 int remover;
                                         for(int i=0;i<lista_usuarios.size();i++)
                                         	cout<< i+1<< "- "<<lista_usuarios[i].toString()<<endl;

                                         cout<<endl<<"ELIGA EL USUARIO QUE DESEA ELIMINAR: ";
                                         cin>>remover;
                                         remover -=1;
                                         if(remover<lista_usuarios.size() && remover>=0){
                                         	lista_usuarios.erase(lista_usuarios.begin()+remover);
                                         }else{
                                                cout<< "ERROR! Opcion Fuera de Rango"<<endl;
                                         }

				}else{
					if(opcion==4){
						int id_juego,year_juego;
						string name_juego,developers_juego,genre_juego;
						
						cout<<"Ingrese el id del juego: ";
						cin>> id_juego;
						cout<<"Ingrese el nombre del juego: ";
                                                cin>> name_juego;
						cout<<"Ingrese el year del juego: ";
                                                cin>> year_juego;
						cout<<"Ingrese los developers del juego: ";
                                                cin>> developers_juego;
						cout<< "Ingrese el genre del juego: ";
						cin>>genre_juego;
						
						bool puede_ingresar_juego=true;
                        			for(int i=0; i<lista_juegos.size();i++){
                                			if(lista_juegos[i].getId() == id_juego)
                                        			puede_ingresar_juego=false;
                        			}

                        			if(puede_ingresar_juego){
                                			game nuevo_juego(id_juego,name_juego,year_juego,developers_juego,genre_juego);
                                			lista_juegos.push_back(nuevo_juego);
                        			}else{
                                			cout<< "ESE USUARIO YA FUE CREADO!"<<endl;
                        			}



					}else{
						if(opcion==5){
							int remover;
                                         		for(int i=0;i<lista_juegos.size();i++)
                                                		cout<< i+1<< "- "<<lista_juegos[i].toString()<<endl;

                                         		cout<<endl<<"ELIGA EL JUEGO QUE DESEA ELIMINAR: ";
                                         		cin>>remover;
                                         		remover -=1;
                                         		if(remover<lista_juegos.size() && remover>=0){
                                                		lista_juegos.erase(lista_juegos.begin()+remover);
                                         		}else{
                                                		cout<< "ERROR! Opcion Fuera de Rango"<<endl;
                                         		}
		
						}else{
							if(opcion==6){
								for(int i=0;i<lista_usuarios.size();i++)
									cout<< i+1<< "- "<<lista_usuarios[i].toString()<<endl<<endl;
							}else{
								if(opcion==7){
									for(int i=0;i<lista_juegos.size();i++)
                                                                        	cout<< i+1<< "- "<<lista_juegos[i].toString()<<endl<<endl;
									
								}else{
									if(opcion== 8)
										cout<< "Gracias por utilizar el programa";
									else
										cout<<endl<< "OPCION NO VALIDA"<<endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
