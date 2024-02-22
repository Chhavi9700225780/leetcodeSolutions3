
bool isPalindrome(string &s)
{
	// Write your code here.
	int i=0;
	int j= s.size()-1;
	while(i<=j){
		if(s[i]!=s[j]){
			return 0;
		}
		else{
			i++;
			j--;
		}
	}
	return 1;
}