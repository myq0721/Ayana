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

//����ʵ��Ӧ�ó���
Ayana::Application* Ayana::CreateApplication()
{
	return new Sandbox();
}