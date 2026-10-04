#include <iostream>
#include <algorithm> 
#include <map> 
#include <string> 
#include <vector>
#include <iomanip>
#include <set> 
#include <list> 
#include <numeric>
using namespace std;

 
 
  int sort_descending2(string a, string b) {
          return a > b;
          } 
          
              int total_even(int accumulator, int current_val) {
              
          if (current_val % 2 == 0) 
                  accumulator += current_val; 
          return accumulator;
          } 
  

 void display(string value) 
 {
 cout << value << ' '<< "\n";
 }


 bool sort_descending(int a, int b) {
            return a > b;
            } 

             int sort_by_length(string a, string b) {
                 return b.size() > a.size();
         } 


int main() 
{
vector<int> nums { 5, 7, 34, 6, 1, 890, 17 };

sort(nums.begin(), nums.end()); 


int c = count(nums.begin(), nums.end(), 6); 

int b = count(nums.begin() + 3, nums.end(), 6);

auto iter = find(nums.begin(), nums.end(), 6); 
	if (iter == nums.end()){
	cout << "Value not found. \n"; 
	} else {
		cout << "value found.\n";
	}

	for(int  num : nums) {
	cout << num << "\n";
	}	 

	sort(nums.begin(), nums.end(), sort_descending);

	vector<double> nums2 { 6.0, 4.5, 34.1, 6.7, 6 }; 
	int counts = count(nums.begin(), nums.end(), 6);
	
	set<string> states { "OR", "WA", "CA", "AK", "HI" }; 
	for_each(states.begin(), states.end(), display);
	
	
	list<int> target { 1, 2, 3, 4, 5 }; 
	auto iterTarget = find(target.begin(), target.end(), 3); 
	if (iterTarget == target.end()) {
	cout << "not found!\n";
	} 

	vector<int> target4 { 1, 2, 3, 4, 5 }; 
	set<int> to_find { 3, 4, 5, 6, }; 
	auto iterTarget2 = search(target4.begin(), target4.end(), to_find.begin(), to_find.end()); 
	if (iterTarget2 == target4.end()) {
	cout << "Not Found!\n";
	}

	string cc_number = "4012-881022-88810"; 
	replace(cc_number.begin(), cc_number.end(), '-', ' '); 
	cout << cc_number << "\n" << endl; 

	vector<int> scores { 89, 34, 78, 100, 45, 68, 92}; 
	fill(scores.begin(), scores.end(), 0); 
	  for (int score : scores ) {
		cout << score << "\n";
	  }

	list<int> nums3 { 1, 4, 5, 2, 3, 1 }; 
	vector<int> numbers(nums3.size()); 
	copy(nums3.begin(), nums3.end(), numbers.begin()); 
	for (int Nums3 : nums3) {
		cout << Nums3 << "\n";
	}
	vector<int> times { 1800, 1845, 0 , 2000, 1746, 1600 }; 
	auto iterTimes = remove(times.begin(), times.end(), 0); 
	times.erase(iterTimes, times.end()); 
	 

	vector<int> times2 { 1800, 1845, 0, 2000, 0, 1745, 1600, 0, 1530 }; 
	times2.erase(remove(times2.begin(), times2.end(), 0), times2.end()); 

	vector<int> LowNum {89, 34, 78, 100, 45, 68 }; 	
	auto min_iter = min_element(LowNum.begin(), LowNum.end()); 
	cout << "min is " << *min_iter << endl; 

	auto max_iter = max_element(LowNum.begin(), LowNum.end()); 
	cout << "Max is " << *max_iter << endl; 

	int index = max_iter - LowNum.begin(); 

	iota(nums.begin(), nums.end(), 5); 

	auto total = accumulate(nums.begin(), nums.end(), 0); 

 

	total = accumulate(nums.begin(), nums.end(), 0, total_even); 

	vector<string> names { "grace", "bjarne", "steve", "ada", "katherine" }; 
	sort(names.begin(), names.end()); 

	sort(names.begin(), names.end(), sort_descending2);  


	sort(names.begin(), names.end(), sort_by_length); 

	list<double> prices {9.99, 5.78, 34.25, 4.99, 125, 77.99, 15.20 }; 
	prices.sort(); 
	
	bool is_found = binary_search(prices.begin(), prices.end(), 15.20);
	
	
 
          

 
 
	
}


