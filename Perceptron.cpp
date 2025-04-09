#include <iostream>
#include <vector>
#include "Perceptron.h"

float Perceptron::calculate(){
		weightedSum=0.0f;
		
		for (const BNode& node:nodes){
			weightedSum+=(node.value)*(node.weight);
		}
		return weightedSum+bias;
	}
	
int Perceptron::activate() {
    float result = calculate();
    return result >= threshold ? 1 : 0;
}

