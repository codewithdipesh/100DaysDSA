  #include <iostream>

  using namespace std;

    // Write your code her
	/*
	approach
	1.generate the possible beautiful string for the size of the input
	   (it will be two string one is 0 starting string and another one is 1 starting string) 
	2.now check the differences between the originial input to both of them
	3.return the minimum of two differences
	*/
string generate(int size,char start){

	string ans ="";
	int i = 0 ;

	if(start == '0'){
		ans = start;
		i++;

	}
	else{
		ans = '1';
		i++;
	}
	while(i<size){
		
		if(ans[ans.size() -1] == '0'){ //the last element is 0 or not
			ans += '1';
			i++;
		}
		else{
			ans+= '0';
			i++;
		}
	}
	return ans;

}


int diff(int n , string original, string generate){
	int cnt =0;
	for(int i = 0; i <= n ;i++){
		if(original[i] != generate[i]){
			cnt++;
		}
		
	}

	return cnt;


}



int makeBeautiful(string str) {
	
	int n = str.size();
	
	//generate 0 starting string
	string g1 = generate(n,'0');
	int d1 = diff(n,str,g1);

	//generate 1 starting string

	string g2 = generate(n,'1');
	int d2 = diff(n,str,g2);

	//return the minimum differeneced string 

    return min(d1,d2);


}