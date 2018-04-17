#include <iostream>

using namespace std;

void u_in(double* u,double x_min,double delta_x, int n){

  for (int i=0; i<n; i++){
    double x = x_min + i;
    if(x>0.75 && x<=1.25){
      u[i] = 1.0;
    }
    else{
      u[i] = 0;
    }
  }
}

void columnas(double* u,double x_min,double delta_x, int n){
  for (int i=0; i<n; i++){
    double x = x_min + i*delta_x;
    u_in(u,x_min, delta_x,n);
    cout<< x << "  "<< u[i] <<endl;
  }
}
int main(){
  double *u;
  double delta_x = 0.1, delta_t = 0.01;
  double x_min = 0.0, x_max = 2.0;
  double T = 1.0, c =1.0;

  int n = (x_max-x_min)/delta_x + 1;
  u = new double[n];
  u_in(u,x_min,delta_x, n);
  columnas(u,x_min,delta_x, n);
  return 0;
}
