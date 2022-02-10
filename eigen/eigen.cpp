// this file is about the create and the basic operation of matrix with eigen library

#include <iostream>
// /usr/include/eigen3/Eigen/Dense
#include "eigen3/Eigen/Dense"

int main(){


    // ************************************ create matrix ********************************************************//

    // define 3x3 matrix of floats and set its entries to zero -explicit declaration
    Eigen::Matrix <float, 3, 3> matrixA;
    matrixA.setZero();
    std::cout << matrixA << std::endl;

    // define 3x3 matrix of floats and set its entries to zero -explicit declaration
    // 3: 3x3 dimensions
    // f: floats
    Eigen::Matrix3f matrixA1;
    matrixA1.setZero();
    std::cout << "\n" << matrixA1 << std::endl;



    // define a uncertain dimensions matrix, explicit declaration
    //Eigen::Matrix <float, Dynamic, Dynamic> matrixB;

    // define a uncertain dimensions matrix, typedef declaration
    // X means: unknow size
    // f: float
    Eigen::MatrixXf matrixB1;



    // constructor, allocate memory, but do not initialize
    // X: unknown size
    // d: double
    Eigen::MatrixXd matrixC(10, 10);

    // assigning matrix entries
    Eigen::MatrixXd matrixC1(2, 2);
    matrixC1(0, 0) = 1;
    matrixC1(0, 1) = 2;
    matrixC1(1, 0) = 3;
    matrixC1(1, 1) = 4;
    std::cout << std::endl;
    std::cout << matrixC1 << std::endl;



    // fill-in the matrix entried using comma seperated values and printe the matrix
    // 4: 4x4 dimensions
    // f: floats
    Eigen::Matrix4f matrixD;
    matrixD << 1, 2, 3, 4,
               5, 6, 7, 8,
               9, 10, 11, 12,
               13, 14, 15, 16;
    std::cout << std::endl;
    std::cout << matrixD << std::endl;



    // setting matrix entries - two approaches
    int rowNumber = 5;
    int columnNumber = 5;

    // matrix of zeros
    // first approach
    Eigen::MatrixXf matrixzeros;
    matrixzeros = Eigen::MatrixXf::Zero(rowNumber, columnNumber);
    std::cout << std::endl;
    std::cout << matrixzeros << std::endl;
    // second approach
    Eigen::MatrixXf matrixzeros1;
    matrixzeros1.setZero(rowNumber, columnNumber);
    std::cout << std::endl;
    std::cout << matrixzeros1 << std::endl;

    // matrix of ones
    // first approach
    Eigen::MatrixXf matrixones;
    matrixones = Eigen::MatrixXf::Ones(rowNumber, columnNumber);
    std::cout << std::endl;
    std::cout << matrixones << std::endl;
    // second approach
    Eigen::MatrixXf matrixones1;
    matrixones1.setOnes(rowNumber, columnNumber);
    std::cout << std::endl;
    std::cout << matrixones1 << std::endl;

    // matrix of constants
    // first approach
    float value = 1.1;
    Eigen::MatrixXf matrixconst;
    matrixconst = Eigen::MatrixXf::Constant(rowNumber, columnNumber, value);
    std::cout << std::endl;
    std::cout << matrixconst << std::endl;
    // second approach
    Eigen::MatrixXf matrixconst1;
    matrixconst1.setConstant(rowNumber, columnNumber, value);
    std::cout << std::endl;
    std::cout << matrixconst1 << std::endl;



    // identity matrix, two approaches
    rowNumber = 10;
    columnNumber = 10;

    Eigen::MatrixXd matrixIdentity;
    matrixIdentity = Eigen::MatrixXd::Identity(rowNumber, columnNumber);
    std::cout << std::endl;
    std::cout << matrixIdentity << std::endl;

    Eigen::MatrixXd matrixIdentity1;
    matrixIdentity1.setIdentity(rowNumber, columnNumber);
    std::cout << std::endl;
    std::cout << matrixIdentity1 << std::endl;



    // accessing matrix blocks
    Eigen::MatrixXd matrixV(4, 4);
    matrixV << 101, 102, 103, 104,
               105, 106, 107, 108,
               109, 110, 111, 112, 
               113, 114, 115, 116;
    // access the matrix composed of smaller blocks
    Eigen::MatrixXd matrixVpartition = matrixV.block(0, 0, 2, 2);
    std::cout << std::endl;
    std::cout << matrixVpartition << std::endl;

    Eigen::MatrixXd matrixVpartition1 = matrixV.block(1, 1, 2, 2);
    std::cout << std::endl;
    std::cout << matrixVpartition1 << std::endl;



    // accessing colums and rows of a matrix
    std::cout << "\n" << "Row 1 of matrixV ist: \n" << matrixV.row(0);
    std::cout << "\n" << "Column 1 of matrixV ist: \n" << matrixV.col(0);



    // creata a diagonal matrix out of a vector
    Eigen::Matrix <double, 3, 1> vector1;
    vector1 << 1, 2, 3;
    Eigen::MatrixXd diagonalMatrix;
    diagonalMatrix = vector1.asDiagonal();
    std::cout << std::endl;
    std::cout << "Diagonal matrix is: \n" << diagonalMatrix << std::endl;
    


    //******************************************** basic matrix operations ********************************************//

    // matrix addition
    Eigen::MatrixXd A1(2, 2);
    Eigen::MatrixXd B1(2, 2);
    
    A1 << 1, 2,
          3, 4;
    B1 << 3, 4,
          5, 6;
    Eigen::MatrixXd C1_puls = A1 + B1;
    std::cout << "\n The sum of A1 and B1 is: \n" << C1_puls << std::endl;

    // matrix substract
    Eigen::MatrixXd C1_Minus = A1 - B1;
    std::cout << "\n The substract of A1 and B1 is: \n" << C1_Minus << std::endl;

    // matrix multiplication
    Eigen::MatrixXd D1 = A1 * B1;
    std::cout << "\n The product of A1 and B1 is: \n" << D1 << std::endl;

    // multiplication by a scalar
    int s1 = 2;
    Eigen::MatrixXd F1;
    F1 = s1 * A1;
    std::cout << "\n" << "The product of matrix A1 and scalar 2 is: \n" << F1 << std::endl;

    // matrix transpose
    Eigen::MatrixXd At;
    // we can obtain a tranpose of A1 as follows;
    At = A1.transpose();
    std::cout << "The original matrix A1 is : \n" << A1 << std::endl;
    std::cout << "The transpose of A1 is: \n" << At << std::endl;
    // the transpose oerator can be used in expressions
    Eigen::MatrixXd R1;
    R1 = A1.transpose() + B1;
    std::cout << "Matrix R1=A1^{T}+B1 is: \n" << R1 << std::endl;

    // here we should be careful, the operation .transpose() might lead to unexpected results in this scenarios
    // A1 = A1.transpose()
    // std::cout << "This should be a transpose of the matrix A1 \n" << A1 << std::endl
    // this usage should be avoided
    // but! The correct and sage way to do the matrix tranpose with the method above is the following:
    A1.transposeInPlace();
    std::cout << "This should be a tranpose of the matrix A1: \n" << A1 << std::endl;
    // restore A1 matrix to its original state
    A1.transposeInPlace();
    std::cout << "This should be the original matrix of A1: \n" << A1 << std::endl;

    // Matrix inverse
    Eigen::MatrixXd G1;
    G1 = A1.inverse();
    std::cout << "The inverse of the matrix A1 is: " << G1 << std::endl;
    std::cout << "Double check A1^{-1}*A1 = \n" << G1 * A1 << std::endl;

    

    


}