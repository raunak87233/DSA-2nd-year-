//https://ideone.com/YM3YD1



/*

	Count Sort Algorithm	**Time Complexity: O(n)

	**Space Complexity: O(max_number-min_number)

*/

#include <bits/stdc++.h>

using namespace std;

//a function that will print the vector passed to it, elements seprated by space

void printVector(vector<int>A)

{

	//traverse all the element and print them

	for(int i=0;i<A.size();i++)

	{

		cout<<A[i]<<" ";	

	}

	cout<<"\n";

}

//the vector A will be sorted inplace and that's why passed with refrence

void sort(vector<int>&A)

{

	//write the code for count sort

    int n = A.size();

    int max_num = *max_element(A.begin(), A.end());

    int min_num = *min_element(A.begin(), A.end());

    vector<int> count(max_num - min_num + 1, 0);

    // Store count of each element in count[]

    for (int i = 0; i < n; i++) {

        count[A[i] - min_num]++;

    }

    int j = 0;

    for (int i = min_num; i <= max_num; i++) {

        while (count[i - min_num] > 0) {

            A[j++] = i;

            count[i - min_num]--;

        }

    }

}

int main() {

	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};

	// your code goes here

	sort(A);

	cout<<"sorted vector: ";

	printVector(A);

	

	return 0;

}
