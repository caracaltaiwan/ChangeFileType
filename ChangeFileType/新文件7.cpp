#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>


int main(){
	


    FILE *pFile;
	int i;
	
    char 
		*tempstr,
		*tmpstr;
	std::string 
		s="frame-",
		temp="",
		DD="";
	std::stringstream 
		ss;
	
	for(i=0;i<10;i++){
		
		
		/**https://stackoverflow.com/questions/2839592/equivalent-of-02d-with-stdstringstream**/
		temp.append(s);
		ss<< std::setfill('0') << std::setw(2) << i+1;
		temp.append(ss.str());
		temp.append(".gif");
		
		
		/**https://stackoverflow.com/questions/7352099/stdstring-to-char**/
		tempstr = &temp[0u];
		std::cout<<tempstr<<" ";
	    pFile = fopen( tempstr,"r" );
	
	    if( NULL == pFile ){
	
	        printf( "open failure" );
	
	        return 1;
	
	    }else{
		    //close file
			fclose(pFile);	
	    }
	    ss.str("");
	    
			    	
        temp = temp.substr(0,8);
        temp.append(".jpg");
        tmpstr = &temp[0u];
        std::cout<<tmpstr<<"\n";

		
	    
	    /*clear the pointer (1)*/
		/*ss.str("");
		temp="";
		tempstr="";
		tmpstr="";*/ 
		temp.append(s);
		ss<< std::setfill('0') << std::setw(2) << i+1;
		temp.append(ss.str());
		temp.append(".gif");
		temp="";
		ss.str("");
		
		

		
		/*rename  (2)*/
		std::cout<<tempstr<<" ";
		std::cout<<tmpstr<<"\n";
		//rename(tempstr,tmpstr);
	}



    fclose(pFile);
	getchar();
	
    return 0;

}

