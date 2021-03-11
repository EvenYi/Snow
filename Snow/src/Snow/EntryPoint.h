#pragma once
#ifdef SNOW_PLATFORM_WINDOWS
extern Snow::Application* Snow::CreateApplication();
int main(int argc, char** argv) {

	Snow::Log::Init();
	SNOW_CORE_INFO("Initial Core Log");
	SNOW_INFO("Initial App Log");
	int id = 5;
	SNOW_CORE_TRACE("Snow id={0}", id);
	auto app = Snow::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // SNOW_PLATFORM_WINDOWS
