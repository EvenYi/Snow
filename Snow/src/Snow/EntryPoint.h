#pragma once
#ifdef SNOW_PLATFORM_WINDOWS
extern Snow::Application* Snow::CreateApplication();
int main(int argc, char** argv) {
	printf("Hi~ Snow");
	auto app = Snow::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // SNOW_PLATFORM_WINDOWS
