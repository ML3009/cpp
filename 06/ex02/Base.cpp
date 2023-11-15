#include "Base.hpp"

A::A(){
	std::cout << "A constructor" << std::endl;
}

B::B(){
	std::cout << "B constructor" << std::endl;
}

C::C(){
	std::cout << "C constructor" << std::endl;
}

Base::~Base() {}

Base*	generate(void){
	std::srand(std::time(0));
	int random = std::rand() % 3;
	if (random == 0)
		return new A();
	if (random == 1)
		return new B();
	if (random == 2)
		return new C();
	return NULL;
}

void	identify(Base* p){

	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base& p){
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	} catch (std::exception& e) {
		std::cout << e.what() << ": A failed" << std::endl;
	}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	} catch (std::exception& e){
		std::cout << e.what() << ": B failed" << std::endl;
	}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	} catch (std::exception& e){
		std::cout << e.what() << ": C failed" << std::endl;
	}
}