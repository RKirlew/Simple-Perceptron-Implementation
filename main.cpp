#include <iostream>
#include <vector>
#include "Perceptron.h"  

int main(int argc, char** argv) {
    BNode input1(1.0f, 0.7f);
    BNode input2(0.5f, 0.4f);

    std::vector<BNode> inputVec = {input1, input2};

    Perceptron p(0.2f,inputVec,0.5f);  // bias,inputs, threshold 

    float result = p.calculate();
    std::cout << "Weighted Sum + Bias = " << result << std::endl;

    if (p.activate()) {
        std::cout << "Activated!" << std::endl;
    } else {
        std::cout << "Not activated." << std::endl;
    }

    return 0;
}

