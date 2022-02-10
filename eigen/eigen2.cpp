// the introduction of vector using eigen library

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){

    // ************************************ create vectors ***************************************//

    // get the first n elements of the vector
    // vector.head(n);

    // get the last n elements of the vector
    // vector.tail(n);

    // get the elements from i to n of the vector
    // vector.segment(i,n);
    
    // create vector with certain dimensions
    // 3: 3 dimensions
    // d: double
    Eigen::Vector2d vec2d(1.0, 2.0);
    Eigen::Vector3d vec3d(1.0, 2.0, 3.0);
    Eigen::Vector4d vec4d(1.0, 2.0, 3.0, 4.0);
    std::cout << "vec2d is: \n" << vec2d << "\n" << std::endl;
    std::cout << "vec3d is: \n" << vec3d << "\n" << std::endl;
    std::cout << "vec4d is: \n" << vec4d << "\n" << std::endl;

    // 1x3 float vector
    Eigen::RowVector3d row_vector_3d(1.0, 2.0, 3.0);
    std::cout << "row_vector_3d is: " << row_vector_3d << std::endl;
    std::cout << std::endl;
    std::cout << "tranpose from row_vector_3d is : \n" << row_vector_3d.transpose() << std::endl;
    std::cout << std::endl;
    // 3x1 float vector
    Eigen::Vector3d vector_3d(1.0, 2.0, 3.0);
    std::cout << "row_vector_3d * vector_3d is: " << row_vector_3d * vector_3d << std::endl;
    std::cout << std::endl;

    

    // creator vector with uncertain dimentsions
    // X: uncertain dimensions
    // d: double
    Eigen::VectorXd v(3);
    v << 1.0, 2.0, 3.0;
    std::cout << "v is: \n" << v  << std::endl;



    // get the certain element of vector
    Eigen::VectorXd vector_element(2);
    vector_element(0) = 2;
    vector_element(1) = vector_element(0) - 4;
    std::cout << "vector_element is: \n" << vector_element << "\n" << std::endl;







    // ******************************* vector operations ***************************************//

    // basic operations of vectors
    // add, sub, scarlar multi
    Eigen::VectorXd vector1(3);
    vector1 << 1.0, 2.0, 3.0;
    std::cout << vector1 << std::endl;
    std::cout << std::endl;
    // Eigen::Vector3d vector1(1.0, 2.0, 3.0);
    Eigen::VectorXd vector2(3);
    vector2 << 4.0, 5.0, 6.0;
    
    Eigen::VectorXd vector_sum = vector1 + vector2;
    std::cout << "vector_sum is : \n" << vector_sum << std::endl;
    std::cout << std::endl;

    Eigen::VectorXd vector_sub = vector1 - vector2;
    std::cout << "vector_sub is : \n" << vector_sub << std::endl;
    std::cout << std::endl;

    int s = 3;
    Eigen::VectorXd vector_scalar_multi;
    vector_scalar_multi = s * vector1;
    std::cout << "vector_scarlar_multi is: \n" << vector_scalar_multi << std::endl;
    std::cout << std::endl;



    // vector transpose
    Eigen::Vector2d u_trans(-1.0, 1), v_trans(2.0, 0.0);
    std::cout << "u_trans_after is: \n" << u_trans.transpose() << std::endl;
    std::cout << std::endl;




    // vector multi



    // multiplication of matrix and vector
    Eigen::MatrixXd matrix(3, 3);
    matrix  << 1, 2, 3,
               4, 5, 6,
               7, 8, 9;
    Eigen::MatrixXd product;
    product = matrix * vec3d;
    std::cout <<"the product of matrix and vec3d is: \n" << product << "\n" << std::endl;




    
}