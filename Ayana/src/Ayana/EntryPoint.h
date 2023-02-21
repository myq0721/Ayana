#pragma once

#ifdef AY_PLATFORM_WINDOWS

//在客户机中创建应用程序
extern Ayana::Application* Ayana::CreateApplication();

//保留程序运行信息
int main(int argc,char** argv)
{
	auto app = Ayana::CreateApplication();
	app->Run();
	delete app;
}

#endif
