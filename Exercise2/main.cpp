#include <iostream>
#include <iomanip>
#include "Eigen/Eigen"
#include <Eigen/LU>


using namespace std;
using namespace Eigen;


int main()
{
	// sistema 1
	Matrix2d A1 {
		{5.547001962252291e-01, -3.770900990025203e-02},
		{8.320502943378437e-01, -9.992887623566787e-01},
	};
	Vector2d b1 {
		{-5.169911863249772e-01, 1.672384680188350e-01}
	};
	
	FullPivLU<Matrix2d> lu1(A1);
	Vector2d x1 = lu1.solve(b1);
	
	cout << scientific << "x1 = " << x1 << endl;
	
	cout << "---------------------------------" << endl;
	
	// sistema 2
	Matrix2d A2 {
		{5.547001962252291e-01, -5.540607316466765e-01},
		{8.320502943378437e-01, -8.324762492991313e-01},
	};
	Vector2d b2 {
		{-6.394645785530173e-04, 4.259549612877223e-04}
	};
	
	FullPivLU<Matrix2d> lu2(A2);
	Vector2d x2 = lu2.solve(b2);
	
	cout << scientific << "x2 = " << x2 << endl;
	
	cout << "---------------------------------" << endl;
	
	// sistema 3
	Matrix2d A3 {
		{5.547001962252291e-01, -5.547001955851905e-01},
		{8.320502943378437e-01, -8.320502947645361e-01},
	};
	Vector2d b3 {
		{-6.400391328043042e-10, 4.266924591433963e-10}
	};
	
	FullPivLU<Matrix2d> lu3(A3);
	Vector2d x3 = lu3.solve(b3);
	
	cout << scientific << "x3 = " << x3 << endl;
	
    return 0;
}
