#include <ozzy.h>

class SandboxApp : public ozzy::application {
public: 
	SandboxApp(void) {

	}

	~SandboxApp(void) {

	}
};

ozzy::application* ozzy::createApplication(void) {
	return new SandboxApp();
}