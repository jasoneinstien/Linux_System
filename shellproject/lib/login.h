bool password(){
	std::string password;
	std::cout<<"password :";
	std::cin>>password;
	while(true){
	if(password == "admin"){
		return true;
	}else{
		std::cout<<"wrong password"<<std::endl;
		std::cout<<"password :";
		std::cin>>password;
	}
	}
}

std::string shell_login(){
	std::cout<<"> User_name: ";
	std::string username; 
	std::cin>>username; 
	std::string* usernamept= &username;
	password();
	return *usernamept;

}
