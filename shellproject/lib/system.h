
void cd(){
	char s[1024];
	getcwd(s,1024);
	char p[1024];
	std::cin>>p;
	std::cout<<std::endl;
	if(p [0] == '.' && p[1] == '.'){
		chdir("..");
	}else{
		char a[0];
		a[0] = '/';
		strcat(s,a);
		chdir(s);
	}
}


void pwd(){
	std::string cwd("\0", FILENAME_MAX+1);
	std::cout<<"< " <<getcwd(&cwd[0],cwd.capacity())<<std::endl;
}

void ls(){
	struct dirent *d; 
	DIR *dr;
	dr = opendir(".");
	if(dr!=NULL){
		for(d = readdir(dr); d!=NULL; d = readdir(dr)){
			std::cout<<d->d_name<<'\t';
		}
		closedir(dr);
	}else{
		std::cout<<std::endl<<"Error Occur";
	}
	std::cout<<std::endl;
}

void mkdir(){
	std::string *path;
	std::cout<<"Path name:";
	std::cin>>*path;
	
	ls();


}

void grep(){

}

void touch(){
	std::cout<<"Creact File Name: ";
	std:: string filename; 
	std::cin>>filename;
	std::cout<<std::endl<<"... ... .... creating ... .... ....";
	std::ofstream myfile(filename);
	myfile.close();
	std::cout<<std::endl<<"Created File"<<std::endl;
}


//move to awk file:: ---> consider awk as a complier:: 
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
		std::cin>>seperator;
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
