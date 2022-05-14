#pragma once

#include "Core.h"
namespace Tempura
{
	class TEMPURA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To Be Defined In Client
	Application* CreateApplication();
}

