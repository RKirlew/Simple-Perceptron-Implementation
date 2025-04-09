#include <vector>
#include <iostream>
#include "BNode.h"

class Perceptron{
	public:
		const float bias;
		int activate();
		float calculate();
		float weightedSum;
		float threshold;
		std::vector<BNode> nodes;
	
		Perceptron(float cBias,std::vector<BNode> cNodes,float cThresh):bias{cBias},nodes{cNodes},threshold{cThresh}{}	
	
};
