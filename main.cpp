#include<fstream>
#include<vector>
#include<string>
#include<random>
#include<iostream>
#include <chrono>

int randomNumber100_1000() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(100, 1000);
	return dis(gen);
}

int randomposition_of_vector(std::vector<std::string> vector) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, vector.size() - 1);
	return dis(gen);
	
}


int main() {


	std::cout << "Welche Website? " << std::endl;
	std::string input = "";
	std::cin >> input;
	
	//create a new file at path E:\Desk\Shit\PWs
	std::string path = "E:\\Desk\\Shit\\PWs\\" + input + ".txt";
	std::ofstream writer(path);
	

	//random password generator
	std::string password;
	std::string alphabet = "abcdefghijklmnopqrstuvwxyzQWERTZUIOPASDFGHJKLYXCVBNM";
	
	std::string numbers = "0123456789";
	std::string special = "!@#$%^&*()_+~`|}{[]\:;?><,./-=";
	//create random passwort from alphabet, numbers, and special characters
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, alphabet.size() - 1);
	std::uniform_int_distribution<> dis2(0, numbers.size() - 1);
	std::uniform_int_distribution<> dis3(0, special.size() - 1);
	for (int i = 0; i < 8; i++) {
		password += alphabet[dis(gen)];
		password += numbers[dis2(gen)];
		password += special[dis3(gen)];
	}
	std::cout << "Your password is: " << password << std::endl;
	
	std::vector<std::string> attributes;
	std::vector<std::string> names;
	
	attributes.push_back("Cool");
	attributes.push_back("Awesome");
	attributes.push_back("Funny");
	attributes.push_back("Lame");
	attributes.push_back("Smart");
	attributes.push_back("Dumb");
	attributes.push_back("Stupid");
	attributes.push_back("Strong");
	attributes.push_back("Weak");
	attributes.push_back("Gamer");
	attributes.push_back("Loser");
	attributes.push_back("Lazy");
	attributes.push_back("Sleepy");
	attributes.push_back("Hungry");
	attributes.push_back("Thirsty");
	attributes.push_back("Tired");
	attributes.push_back("Fat");
	attributes.push_back("Slim");
	attributes.push_back("Skinny");
	attributes.push_back("Short");
	attributes.push_back("Tall");
	attributes.push_back("Mystic");
	attributes.push_back("Sly");

	names.push_back("Knight");
	names.push_back("Wizard");
	names.push_back("Warrior");
	names.push_back("Mage");
	names.push_back("Thief");
	names.push_back("Priest");
	names.push_back("Sorcerer");
	names.push_back("Ninja");
	names.push_back("Samurai");
	names.push_back("Monk");
	names.push_back("Bard");
	names.push_back("Druid");
	names.push_back("Paladin");
	names.push_back("Ranger");
	names.push_back("Berserker");
	names.push_back("Assassin");
	names.push_back("Necromancer");
	names.push_back("Warlock");
	names.push_back("Witch");
	names.push_back("Retard");
	names.push_back("Gamer");
	names.push_back("Guy");
	
	//random number generator from 100 to 1000 with time seed
	
	

	int randomPosition1 = randomposition_of_vector(attributes);
	int randomPosition2 = randomposition_of_vector(names);
	

	int number = randomNumber100_1000();
	

	std::string name = (attributes[randomPosition1] + names[randomPosition2] + std::to_string(number));
	
	std::cout << name << std::endl;
	
	std::string email = name + "@otpku.com";
	
	std::cout << email << std::endl;

	writer << "Username: \n" << name << std::endl;
	writer << "Passwort:\n" << password << std::endl;
	writer << "E-Mail:\n" << email << std::endl;
	writer << "E-Mail Link:\n" << "https://generator.email/" + email;

	
}

	
