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




void clear(){
	for(int i =0 ; i< 100 ;i++){
		std::cout<<std::endl;
	}

}

std::string user_input_prompt(std::string username){
	std::string user_input;
	std::cout<<username<<"> ";
	std::cin>>user_input;
	return user_input;
}

void shell_loop(std::string username){
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
			user_input =user_input_prompt(username);
		}
		else if(user_input == "pwd"){
			pwd();
			std::cout<<username<<"> ";
			std::cin>>user_input;
		}
		else if (user_input == "rm"){
			rm();
			user_input = user_input_prompt(username);
		}
		else if (user_input == "awk"){
			awk();
			user_input = user_input_prompt(username);
		}
		else{
			std::cout<<username<<" > ";
			std::cin>>user_input;
		}
	}
}


int main(int argv , char ** argc){
	clear();
	std::string username = shell_login();
	user_prop.username = username;
	clear();
	shell_loop(username);
	return 0;
}
