#pragma once

#ifdef CH_PLATFORM_WINDOWS
extern Chanel::Application* Chanel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Chanel::CreateApplication();
	app->Run();
	delete app;
}
#endif // CH_PLATFORM_WINDOWS
