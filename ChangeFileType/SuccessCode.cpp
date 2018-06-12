#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
	
	int i;
	
    char 
		*OldName,
		*NewName;
	string 
		RuleName="frame-",//set rule name
		TempOldName="",
		TempNewName="";
	stringstream 
		RuleNum;//set rule number
	
	for(i=0;i<10;i++){
		
		
		/*Old File Name*/
		/**https://stackoverflow.com/questions/2839592/equivalent-of-02d-with-stdstringstream**/
		TempOldName.append(RuleName);
		RuleNum<< setfill('0') << setw(2) << i+1;
		TempOldName.append(RuleNum.str());
		TempOldName.append(".gif");
		/**https://stackoverflow.com/questions/7352099/stdstring-to-char**/
		OldName = &TempOldName[0u];
		cout<<OldName<<" ";
	    
		
		/*New File Name*/	    	
        TempNewName.append(RuleName);
		TempNewName.append(RuleNum.str());
        TempNewName.append(".jpg");
        NewName = &TempNewName[0u];
        cout<<NewName<<"\n";
        		
		

		
		/*rename*/
		cout<<OldName<<" ";
		cout<<NewName<<"\n";
		rename(OldName,NewName);

		
	    
	    /*clear the pointer*/
		RuleNum.str("");
		TempOldName="";
		TempNewName="";
		OldName=0;
		NewName=0; 

	}



	getchar();
	
    return 0;

}

