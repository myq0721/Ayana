#pragma once

#ifdef AY_PLATFORM_WINDOWS

//�ڿͻ����д���Ӧ�ó���
extern Ayana::Application* Ayana::CreateApplication();

//��������������Ϣ
int main(int argc,char** argv)
{
	auto app = Ayana::CreateApplication();
	app->Run();
	delete app;
}

#endif
