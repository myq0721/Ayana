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
	
	//Ӧ�ó��򴴽�Ӧ�ó���qaq,�������ڿͻ���
	Application* CreateApplication();

}
