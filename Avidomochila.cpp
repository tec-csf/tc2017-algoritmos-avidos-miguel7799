#include <iostream>
using namespace std;

class Mochilaavida{
    public: 
        void insertarelem( float *elementos,float *solumochila, float cantidad, float Maxpeso ){//presentación
            int maxelem = 10; //maximo de elementos
            float pesoenaumento;//peso de la mochila que aumenta
            int i;
            for(int i = 1; i<maxelem; i++)
            {
                solumochila[i] = 0.0;
            }
            pesoenaumento = 0.0;
            i=1;
            while ((pesoenaumento<Maxpeso) && (i<=cantidad)){
                if((elementos[i]+pesoenaumento) <= Maxpeso){
                    solumochila[i] = 1.0;
                }else{
                    solumochila[i] = (Maxpeso-pesoenaumento)/elementos[i];
                }
                pesoenaumento = pesoenaumento + (solumochila[i] * elementos[i]);
                i++;
            }
            cout <<"peso max: "<<pesoenaumento<<endl;
            cout <<"maximo de elementos: "<<maxelem<<endl;
            
                for (int i = 1; i<maxelem; i++){
                    cout<<i<<" elememnto que entró: "<<solumochila[i]<<endl;
                }
                cout<<endl;
            


        }
        
};
int main(){
    Mochilaavida t;
    int temp;
    int maxelem = 10;
    float solumochila[maxelem];
    float Maxpeso = 15.0;
    float cantidad = 10;
    float elementos[maxelem] = {1.0,2.5,3.5,7.7,6.5,8.9};
    for(int i=maxelem-1; i>0;i--){
		for(int j=maxelem-1.; j>0; j--){
            if(elementos[j]<elementos[j-1]){
                temp=elementos[j];
                elementos[j]=elementos[j-1];
                elementos[j-1]=temp;
            }
        }
    }
    /*}for(int z=0;z<maxelem;z++){
        cout<<elementos[z]<<",";
    }
    cout<<endl;*/
    
    t.insertarelem(elementos,solumochila,cantidad,Maxpeso);
}
