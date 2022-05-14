#include <Tempura.h>

class Sandbox :public Tempura::Application {
public:
	Sandbox() {};
	~Sandbox() {};

};

Tempura::Application* Tempura::CreateApplication()
{
	return new Sandbox();
}