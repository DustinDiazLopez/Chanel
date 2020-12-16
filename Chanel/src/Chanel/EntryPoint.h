#pragma once

#ifdef CH_PLATFORM_WINDOWS
extern Chanel::Application* Chanel::CreateApplication();

int main(int argc, char** argv)
{

	Chanel::Log::Init();
	CH_CORE_WARN("Logger initialized");
	int a = 5;
	CH_INFO("Hello, {0}", a);

	auto app = Chanel::CreateApplication();
	app->Run();
	delete app;
}
#endif // CH_PLATFORM_WINDOWS
