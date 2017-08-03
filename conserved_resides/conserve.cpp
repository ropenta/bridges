//
//  conserve.cpp
//  h+states
//
//  Created by Rohith Pentaparthy on 8/2/17.
//  Copyright © 2017 Rohith. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;
void get_conserved_residues(vector<int> &hxt36, vector<int> &xyle);

void get_conserved_residues(vector<int> &hxt36, vector<int> &xyle) {
	// hxt36 input
	freopen("/Users/rohith/Documents/MayesLab/h+states/color_data_hxt36.txt", "r", stdin);
	double input = 0;
	int res_num = 49;

// VERY BUGGY, I'm purposely reading in 1 less than the total number in
// the hxt36 file, because if I read the last number, then all of the
// xyle values become 0's for some reason
// I also can't make input an int...
	for (int i = 0; i < 483; ++i) {
		cin >> input;
		//cout << input << " ";
		if (input == 1) hxt36.push_back(res_num);
		res_num++;
	}
	//cout << "\n";
	fclose(stdin);
	
	// xyle input
	freopen("/Users/rohith/Documents/MayesLab/h+states/color_data_xyle.txt", "r", stdin);
	res_num = 5;
	for (int i = 0; i < 475; ++i) {
		cin >> input;
		//cout << input << " ";
		if (input == 1) xyle.push_back(res_num);
		res_num++;
	}
	//cout << "\n";
	fclose(stdin);
	return;
}



/*** MAIN ***/
int main() {
	// insert code here...
	// freopen needs to be commented out or pathway needs to be modified
	
	
	
	vector<int> hxt36;
	vector<int> xyle;
	get_conserved_residues(hxt36, xyle);
	
//	cout << "hxt36 conserved residues:\n";
//	for (size_t i = 0; i < hxt36.size(); ++i) {
//		cout << hxt36[i] << '\n';
//	}
//	cout << "\n\n";
//	
//	cout << "xyle conserved residues:\n";
//	for (size_t i = 0; i < xyle.size(); ++i) {
//		cout << xyle[i] << '\n';
//	}
//	cout << '\n';
	
	//make pairs
	vector<pair<int, int>> conserved_res;
	cout << "hxt36 xyle" << '\n';
	for (size_t i = 0; i < hxt36.size(); ++i) {
		conserved_res.push_back(make_pair(hxt36[i], xyle[i]));
//		conserved_res[i].first = hxt36[i];
//		conserved_res[i].second = xyle[i];
		cout << conserved_res[i].first << "    " << conserved_res[i].second << '\n';
	}
	
	return 0;
}
