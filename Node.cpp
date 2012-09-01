/*
    Copyright (c) 2012, <copyright holder> <email>
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
        * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
        * Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
        * Neither the name of the <organization> nor the
        names of its contributors may be used to endorse or promote products
        derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY <copyright holder> <email> ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL <copyright holder> <email> BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#include "Node.h"
#include "Math.h"

Node::Node(int inputNum) {
  this->inputNum = inputNum;
  last_output = 0;
  for(int i=0;i<inputNum;i++) {
    w_vector.push_back(fRand(-20, 20)); 
  }
  
  threshold = fRand(-20, 20);
  
}

double Node::activation(double a) {  
  if(a >= threshold) return 1;
  else               return 0;
}

double Node::summation(std::vector< double >& input) {
  double sum = 0;
  if(input.size() != inputNum) {
    std::cerr << "input vector is of wrong size!" << std::endl;
    throw;    
  }
  for(int i=0;i<inputNum;i++) {
   sum += input[i] * w_vector[i]; 
  }
  
  return 0;
}

double Node::input(std::vector< double >& input) {
  double a = summation(input);
  last_output = activation(a);
  return last_output;
}

Node::~Node() {

}

