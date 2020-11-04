#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    vector<string> cadena;//objeto cadena
    string op;

    while(true)
    {
        cout << "1) Agregar al final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente " << endl;
        cout << "5) Ultimo " << endl;
        cout << "6) Ordenar " << endl;
        cout << "7) Insertar " << endl;
        cout << "8) Eliminar " << endl;
        cout << "9) Eliminar ultimo " << endl;
        cout << "0) Salir" << endl;
        getline(cin,op);
        
        if(op =="1"){
            string nombre;

            cout << "Escribe un nombre: ";
            cin>>nombre; cin.ignore();

            cadena.push_back(nombre);
        }
        else if(op =="2"){
            for(size_t i(0); i < cadena.size(); i++){
                cout << cadena[i] << ", ";
            }
            cout << endl;
        }
        else if(op == "3"){
            size_t n;
            string otNombre;

            cout << "Tamano: ";
            cin>>n;
            cout << "Nombre: ";
            cin>>otNombre; cin.ignore();

            cadena = vector<string>(n,otNombre);
        }
        else if(op == "4")
        {
            if(cadena.empty()){
                cout << "Vector esta vacio." << endl;
            }
            else{
                cout << "El nombre en la primera posicion es: " << endl;
                cout << cadena.front() << endl;
            }
        }
        else if(op == "5"){
            if(cadena.empty()){
                cout << "Vector esta vacio." << endl;
            }
            else{
                cout << "El nombre en la ultima posicion es: " << endl;
                cout << cadena.back() << endl;
            }

        }
        else if(op == "6")
        {
            cout << "Vector ordenado: " << endl;
            sort(cadena.begin(), cadena.end());
            //sort(cadena.begin(), cadena.end(), greater<string>());
        }
        else if(op == "7")
        {
            size_t p;
            string otNombre;

            cout << "Posicion: ";
            cin >> p;
            cout << "Nuevo nombre: ";
            cin >> otNombre; cin.ignore();

            if(p >= cadena.size()){
                cout << "Posicion no valida. " << endl;
            }
            else{
               cadena.insert(cadena.begin()+p, otNombre);
            }
        }
        else if(op == "8")
        {
            size_t p;

            cout << "Posicion: ";
            cin >> p; cin.ignore();

            if(p >= cadena.size()){
                cout << "Posicion no valida. " << endl;
            }
            else{
                cadena.erase(cadena.begin()+p);
            }

        }
        else if(op == "9")
        {
            if( cadena.empty()){
                cout << "Vector vacio. " << endl;
            }
            else{
                cadena.pop_back();
            }
        }
        else if(op == "0"){
            break;
        }
        
    }
    return 0;
}
