#include "include.h"

struct{
	std::string username;
	std::string password;
}user_prop;

void cat(std::string filename){
	std::string mytext; 
	std::ifstream myreadfile(filename);
	while(getline(myreadfile,mytext)){
		if(!mytext.empty()){
			std::cout<<mytext;
			std::cout<<std::endl;
		}
	}
}


void grep(std::string filename){
	

}


void clear(){
	for(int i =0 ; i< 100 ;i++){
		std::cout<<std::endl;
	}

}

void shell_loop(){
	std::string user_input;
	while(true){
		if(user_input == "quit()" || user_input == "quit" ){
			break;
		}
		else if(user_input == "cat"){
			std::cout<<"> File Name:";
			std::cin>>user_input;
			cat(user_input);
			std::cout<<std::endl;
		}
		else if (user_input == "clear"){
			clear();
			std::cout<<"> ";
			std::cin>>user_input;
		}
		else if(user_input == "pwd"){
			std::cout<<"> ";
			std::cin>>user_input;
			ls();	
		}
		else{
			std::cout<<"> ";
			std::cin>>user_input;
		}
	}
}


int main(int argv , char ** argc){
	clear();
	shell_login();
	shell_loop();
	return 0;
}