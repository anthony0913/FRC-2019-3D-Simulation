#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>
#include <bits/stdc++.h>  
#include <cstdlib>
#include <time.h>

int step_i = 0; 
using namespace std;

//columns of input should be neurons, rows should represent different data sets

class util{
public:
	static double sig(double x){
		return 1/(1 + exp(-x));
	}
	static double ReLU(double x){
    	if(x>0) return x;
      	else return 0.181818*x;
    };
	static void multi(double **a, double **b, double **c,int ax, int ay, int bx){ 
    int cx = bx, cy=ay;
    for(int i=0;i<cy;i++){
        for (int j=0;j<cx;j++){
            for (int k=0;k<ax;k++){
                c[i][j]+=a[i][k] * b[k][j];
            }
        }
    }
    }
};
int main() {
    auto start = chrono::high_resolution_clock::now();
  	
  	
  	double 
    //Dynamic Storage
    **input,
    **hiddenState,
    **oldHiddenState,
    **output,

    //Memory Storage
    **output_gate,
    **input_gate,
    **inputMod_gate,
    **forget_gate,
    **memory_gate,

    //Weight Storage
    **wOutput_gate,
    **wInput_gate,
    **wInputMod_gate,
    **wForget_gate,

    **uOutput_gate,
    **uInput_gate,
    **uInputMod_gate,
    **uForget_gate,
    **w1,

    //Bias Storage
    **biasO,
    **biasI,
    **biasM,
    **biasF,
    **biasC,
    **biasY;
  	
  	int
  	inputX = 1,inputY = 20,
    
    hiddenStateX = 1,hiddenStateY = 10,
    oldHiddenStateX = 1,oldHiddenStateY = 10,
    
    outputX = 1,outputY = 2,
    wOutput_gateX = 20,wOutput_gateY = 10,
    wInput_gateX = 20,wInput_gateY = 10,
    wInputMod_gateX = 20,wInputMod_gateY = 10,
    wForget_gateX = 20,wForget_gateY = 10,
    
    uOutput_gateX = 10,uOutput_gateY = 10,
    uInput_gateX = 10,uInput_gateY = 10,
    uInputMod_gateX = 10,uInputMod_gateY = 10,
    uForget_gateX = 10,uForget_gateY = 10,
    
    w1X = 10,w1Y = 5,
    
    output_gateX = 1,output_gateY = 10,
    input_gateX = 1,input_gateY = 10,
    inputMod_gateX = 1,inputMod_gateY = 10,
    forget_gateX = 1,forget_gateY = 10,
    memory_gateX = 1,memory_gateY = 10,
    biasOX = 1,biasOY = 10,
    biasIX = 1,biasIY = 10,
    biasMX = 1,biasMY = 10,
    biasFX = 1,biasFY = 10,
    biasCX = 1,biasCY = 10,
    biasYX = 1,biasYY = 2;
  
  	input = new double*[inputY],
    hiddenState = new double*[hiddenStateY],
    oldHiddenState = new double*[oldHiddenStateY],
    output = new double*[outputY],
    wOutput_gate = new double*[wOutput_gateY],
    wInput_gate = new double*[wInput_gateY],
    wInputMod_gate = new double*[wInputMod_gateY],
    wForget_gate = new double*[wForget_gateY],
    uOutput_gate = new double*[uOutput_gateY],
    uInput_gate = new double*[uInput_gateY],
    uInputMod_gate = new double*[uInputMod_gateY],
    uForget_gate = new double*[uForget_gateY],
    w1 = new double*[w1Y],
    output_gate = new double*[output_gateY],
    input_gate = new double*[input_gateY],
    inputMod_gate = new double*[inputMod_gateY],
    forget_gate = new double*[forget_gateY],
    memory_gate = new double*[memory_gateY],
    biasO = new double*[biasOY],
    biasI = new double*[biasIY],
    biasM = new double*[biasMY],
    biasF = new double*[biasFY],
    biasC = new double*[biasCY],
    biasY = new double*[biasYY];
    wOutput_gate = new double*[wOutput_gateY];

    for(int i=0;i<2;i++){
        output[i]=new double[outputX];
    }
    for(int i=0;i<20;i++){
        input[i]=new double[inputX];
    }
    for(int i=0;i<5;i++){
        w1[i]=new double[w1X];
    }
    for(int i=0;i<10;i++){
        hiddenState[i]=new double[hiddenStateX];
        oldHiddenState[i]=new double[oldHiddenStateX];
        wOutput_gate[i]=new double[wOutput_gateX];
        wInput_gate[i]=new double[wInput_gateX];
        wInputMod_gate[i]=new double[wInputMod_gateX];
        wForget_gate[i]=new double[wForget_gateX];
        uOutput_gate[i]=new double[uOutput_gateX];
        uInput_gate[i]=new double[uInput_gateX];
        uInputMod_gate[i]=new double[uInputMod_gateX];
        uForget_gate[i]=new double[uForget_gateX];
        output_gate[i]=new double[output_gateX];
        input_gate[i]=new double[input_gateX];
        inputMod_gate[i]=new double[inputMod_gateX];
        forget_gate[i]=new double[forget_gateX];
        memory_gate[i]=new double[memory_gateX];
        biasO[i]=new double[biasOX];
        biasI[i]=new double[biasIX];
        biasM[i]=new double[biasMX];
        biasF[i]=new double[biasFX];
        biasC[i]=new double[biasCX];
        biasY[i]=new double[biasYX];
    }

    for(int i=0;i<wOutput_gateY;i++) wOutput_gate[i]=new double[wOutput_gateX];


    for(int i=0;i<wOutput_gateY;i++) {
        for (int j=0;j<wOutput_gateX;j++){
        wOutput_gate[i][j] = 50;
        //cout<<"k"<<endl;
        }
    }

    //gen random values

    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 20; j++) { 
            wOutput_gate[i][j] = rand() % 10-5;
            wInput_gate[i][j] = rand() % 10;
            wInputMod_gate[i][j] = rand() % 10;
            wForget_gate[i][j] = rand() % 10;
        } 
    } 
    
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 10; j++) { 
            uOutput_gate[i][j] = rand() % 10;
            uInput_gate[i][j] = rand() % 10;
            uInputMod_gate[i][j] = rand() % 10;
            uForget_gate[i][j] = rand() % 10; 
        } 
    } 
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 10; j++) { 
            w1[i][j] = rand() % 10; 
        } 
    } 
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 1; j++) { 
            biasO[i][j] = rand() % 10 -5;
            biasI[i][j] = rand() % 10 -5;
            biasM[i][j] = rand() % 10;
            biasF[i][j] = rand() % 10;
            biasC[i][j] = rand() % 10;
            biasY[i][j] = rand() % 10 -5; 
        } 
    }
  
  /*///print outputgate
	cout << endl << "Matrix A" << endl; 
    for (int i = 0; i < wOutput_gateY; i++) { 
        for (int j = 0; j < wOutput_gateX; j++){  
            cout <<wOutput_gate[i][j] << " "; }
        cout << endl;
    } 
    */
    /*//testers   
    double **a,**b,**c;
    int ax=30,ay=20,bx=20,by=30;
    int cx=bx,cy=ay;
    
    a = new double*[ay],b = new double*[by];
    for(int i=0;i<ay;i++) a[i]=new double[ax];

    for(int i=0;i<by;i++) b[i]=new double[bx];
 
    c = new double*[ay];
    for(int i=0;i<ay;i++) c[i]=new double[bx];
  //gen random values for a and b
  	for (int i = 0; i < ay; i++) { 
        for (int j = 0; j < ax; j++) { 
            a[i][j] = rand() % 10; 
        } 
    } 
  	for (int i = 0; i < by; i++) { 
        for (int j = 0; j < bx; j++) {
            b[i][j] = rand() % 10; 
        } 
    } 
  //print a and b
  	cout << endl << "Matrix A" << endl; 
    for (int i = 0; i < ay; i++) { 
        for (int j = 0; j < ax; j++)  
            cout << a[i][j] << " "; 
        cout << endl; 
    } 
  
  	cout << endl 
         << "Matrix B" << endl; 
    for (int i = 0; i < by; i++) { 
        for (int j = 0; j < bx; j++)  
            cout << b[i][j] << " ";         
        cout << endl; 
    } 
  
  	//multiply
  	util::multi(a,b,c,ax,ay,bx);
  	
  	cout << endl << "Multiplication of A and B" << endl; 
    for (int i = 0; i < cy; i++) { 
        for (int j = 0; j < cx; j++)  
            cout << c[i][j] << " ";         
        cout << endl; 
    } 
    */

  	auto stop = chrono::high_resolution_clock::now();	
  	auto duration = chrono::duration_cast<chrono::nanoseconds>(stop - start);
  	cout<<"This took "<<duration.count()<<" nanoseconds to complete"<<endl;
	return 0;
}

