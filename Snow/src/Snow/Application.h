#pragma once
#include "Core.h"
namespace Snow {
	class SNOW_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}


