#include <iostream>

void lower_to_upper(char *str){
	int i = 0;
	while (str[i]){
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

void megaphone(int argc, char **argv){
	int i = 1;
	int j = 0;
	while (i < argc){ // for da kullanabilirsin bi dene soruştur
		lower_to_upper(argv[i]);
		i++;
	}	
	i = 1;
	while (i < argc){
		j = 0;
		while (argv[i][j]){
			std::cout << argv[i][j];
			j++;
		}
		i++;
	}
	std::cout << "\n";
}

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	megaphone(argc, argv);
	return 0;
}
