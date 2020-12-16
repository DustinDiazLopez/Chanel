#pragma once

#include "Core.h"

namespace Chanel {
	class CHANEL_API Application
	{

	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}
