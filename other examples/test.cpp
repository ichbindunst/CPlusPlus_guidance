#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    Eigen::VectorXf vector_test(7);
    vector_test << 1, 2, 3, 4, 5, 6, 7;
    std::cout << vector_test << std::endl;
    std::cout << std::endl;

    Eigen::MatrixXf matrixones;
    matrixones.setOnes(6, 7);
    std::cout << "matrixones is: \n" << matrixones << std::endl;

    
    Eigen::MatrixXf joint_speed(7, 1);
    joint_speed << 1, 2, 3, 4, 5, 6, 7;
    std::cout << std::endl;
    std::cout << "matrix joint_speed is: \n" << joint_speed << std::endl;

    
    Eigen::MatrixXf actuell_speed_matrix(6, 1);
    actuell_speed_matrix = matrixones * joint_speed;
    std::cout << std::endl;
    std::cout << "matrix actuell_speed_matrix is: \n" << actuell_speed_matrix << std::endl;
    

}