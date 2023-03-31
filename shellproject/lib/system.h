//system command in this file

void pwd(){
	std::string cwd("\0", FILENAME_MAX+1);
	std::cout<<"< " <<getcwd(&cwd[0],cwd.capacity())<<std::endl;
}

void ls(){
	
}

void grep(){

}

void awk(){
	//awk need two variable : action , file_name
	std::string option;
	std::string file_name; 
	
	std::cout<<"Operation: ";
	std::cin>>option;
	std::cout<<std::endl;
	
	if(option == "print"){

		std::cout<<"seperator: ";
		std::string seperator;
		std::cin<<seperator;
		std::cout<<std::endl<<"file name :";
		std::cin>>file_name;		
	}
	


}

void rm(){
	char filename[256];
	std::cout<<"remove file name :";
	std::cin>>filename;
	std::cout<<"removing..... ....... ....... ........ ........";
	std::cout<<std::endl;
	std::remove(filename);
	std::cout<<"remove successful"<<std::endl;
	
}
