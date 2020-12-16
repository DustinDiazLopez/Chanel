
#include "Chanel.h"

class Sandbox : public Chanel::Application 
{
public: 
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Chanel::Application* Chanel::CreateApplication()
{
	return new Sandbox();
}