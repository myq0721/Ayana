#pragma once

#include "Core.h"

namespace Ayana {

	class AYANA_API Application
	{
	public:
		Application();
		virtual~Application();

		void Run();
	};
	
	//应用程序创建应用程序qaq,被定义在客户端
	Application* CreateApplication();

}
