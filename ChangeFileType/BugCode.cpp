#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>


int main(){
	


    FILE *pFile;
	int i;
	
    char 
		*OldName,
		*NewName;
	std::string 
		RuleName="frame-",
		TempOldName="",
		DD="";
	std::stringstream 
		RuleNum;
	
	for(i=0;i<10;i++){
		
		
		/**https://stackoverflow.com/questions/2839592/equivalent-of-02d-with-stdstringstream**/
		TempOldName.append(RuleName);
		RuleNum<< std::setfill('0') << std::setw(2) << i+1;
		TempOldName.append(RuleNum.str());
		TempOldName.append(".gif");
		
		
		/**https://stackoverflow.com/questions/7352099/stdstring-to-char**/
		OldName = &TempOldName[0u];
		std::cout<<OldName<<" ";
	    pFile = fopen( OldName,"r" );
	
	    if( NULL == pFile ){
	
	        printf( "open failure" );
	
	        return 1;
	
	    }else{
		    //close file
			fclose(pFile);	
	    }
	    RuleNum.str("");
	    
			    	
        TempOldName = TempOldName.substr(0,8);
        TempOldName.append(".jpg");
        NewName = &TempOldName[0u];
        std::cout<<NewName<<"\n";

		
	    
	    /*clear the pointer (1)*/
		/*RuleNum.str("");
		TempOldName="";
		OldName="";
		NewName="";*/ 
		TempOldName.append(RuleName);
		RuleNum<< std::setfill('0') << std::setw(2) << i+1;
		TempOldName.append(RuleNum.str());
		TempOldName.append(".gif");
		TempOldName="";
		RuleNum.str("");
		
		

		
		/*rename  (2)*/
		std::cout<<OldName<<" ";
		std::cout<<NewName<<"\n";
		//rename(OldName,NewName);
	}



    fclose(pFile);
	getchar();
	
    return 0;

}

