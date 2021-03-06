#include "solution.h"

vector<int> Solution::RemDupli(vector<int> &input) {
  sort(input.begin(),input.end());
  input.erase(unique(input.begin(), input.end()), input.end());

  for(int i = 0; i< input.size(); i++){
    cout<< input[i] <<endl;
  }
}


vector<int> Solution::RemDupliSet(vector<int> b){
    vector<int> a;
    set<int> st;

    for (int i = 0; i < b.size(); i++){
        a.push_back(b[i]);
        st.insert(b[i]);
    }
    // for (int i = 0; i < a.size(); i++)
    //     cout << a[i] << " ";
    // cout << endl;

    // for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
    //     cout << *it << " ";
    // cout << a.size() << endl;

    vector<int> temp(b.begin(), b.end());

    int idx = 0;
    for (int i = 0; i < temp.size(); i++){
        if (st.find(temp[i]) != st.end()) {
            st.erase(temp[i]);
            temp[idx++] = temp[i];
        }
    }
    temp.erase(temp.begin()+idx, temp.end());

    for (int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";
    cout << endl;

    // for (set<int>::iterator it = st.begin(); it != st.end(); it++)
    //     cout << *it << " ";
    // cout << st.size() << endl;

     return b;
}



void Solution::final_vector(vector<int> vct){
    if(vct.size()>0){
        cout<<"{";
        for(int i=0;i<int(vct.size());i++){
            cout<<vct[i]<<",";  
        }
        cout<<"\b}";
    }
    else{
        cout<<"{}";
    }
    cout<<endl;
}


vector<int> Solution::ReversedVec(vector<int> &input){

  reverse(input.begin(), input.end());
  vector<int>:: iterator it;
  for (int i=0; i < input.size(); i++) {
    cout << input[i] << " ";
  }
  return input; 
}


vector<int> Solution::RemoveOdd(vector<int> &input1){

	vector<int> input2;
    vector<int>::iterator iterEnd = input1.end();
    for(vector<int>::iterator iter = input1.begin();iter!=iterEnd;++iter)
    {
        if( ((*iter) % 2) == 0)
            input2.push_back(*iter);
    }
    input1.swap(input2);
    return input1;
}

vector<int> Solution::Concatenating(vector<int> &input1, vector<int> &input2){
  vector<int> input3;
  input3.insert(input3.end(),input1.begin(),input1.end());
  input3.insert(input3.end(),input2.begin(),input2.end());
  return input3;
}

vector<int> Solution::VctUnion(vector<int> &input1,vector<int> &input2){
	vector<int> input3; 
	sort(input1.begin(),input1.end());
	sort(input2.begin(),input2.end());
	set_intersection(input1.begin(),input1.end(),input2.begin(),input2.end(),std::back_inserter(input3));
	return input3;
}

