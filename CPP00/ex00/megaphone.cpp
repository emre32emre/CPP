#include <iostream>
int main(int ac, char **argv){
	int i,j;
	if(ac <= 1) std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...";
	else{
		for(i=1;argv[i];i++){
			for(j=0;argv[i][j];j++){
				std::cout << (char)std::toupper(argv[i][j]);
			}
		}
	}
	std::cout << std::endl;
}