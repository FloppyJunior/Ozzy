#pragma once

// The entry point might change depending on platform
#ifdef OZ_PLATFORM_WINDOWS

extern ozzy::application* ozzy::createApplication(void);

int main(int argc, char** argv) {
	ozzy::log::init();
	OZ_CORE_WARNING("Logger initialized !");
	int a = 5;
	OZ_APP_INFO("Client Logger initialized ! var={0}", a);

	auto clientApplication = ozzy::createApplication();
	clientApplication->run();
	delete clientApplication;
}

#endif