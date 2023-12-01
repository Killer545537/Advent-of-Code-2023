//
//  main.cpp
//  Advent of Code
//
//  Created by Srijan Mahajan on 1/12/23.
//

#include <bits/stdc++.h>
#include "tl/to.hpp"
#include "tl/getlines.hpp"
#include "tl/fold.hpp"
#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/color.h"

int solve(std::string& input){
	auto ran = input | std::views::filter([](char x){return std::isdigit(x);});
	return std::stoi(std::string(1,*ran.begin())+std::string(1,*(--ran.end())));
}


int main(){
	std::ifstream in{"Input.txt"};
	
	auto lines = tl::views::getlines(in)
	| std::views::transform([](std::string s){return solve(s);})
	| tl::to<std::vector>();
	std::cout<< std::accumulate(lines.begin(), lines.end(), 0);
}
