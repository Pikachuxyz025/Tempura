#pragma once

#ifdef TA_PLATFORM_WINDOWS 

extern Tempura::Application* Tempura::CreateApplication();

int main(int argc, char** argv)
{
	printf("Tempura Engine\n");
	auto app = Tempura::CreateApplication();
	app->Run();
	delete app;
}

#endif // TA_PLATFORM_WINDOWS 
