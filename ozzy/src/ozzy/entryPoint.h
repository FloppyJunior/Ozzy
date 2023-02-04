#pragma once

// The entry point might change depending on platform
#ifdef OZ_PLATFORM_WINDOWS

extern ozzy::application* ozzy::createApplication(void);

int main(int argc, char** argv) {
	auto clientApplication = ozzy::createApplication();
	clientApplication->run();
	delete clientApplication;
}

#endif