#include <Ayana.h>

class Sandbox : public Ayana::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

//构建实际应用程序
Ayana::Application* Ayana::CreateApplication()
{
	return new Sandbox();
}