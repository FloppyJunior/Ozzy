#pragma once

#include "core.h"

namespace ozzy {
	class OZZY_API application
	{
	public:
		application(void);
		virtual ~application(void);

		void run(void);
	};

	// To be defined by client.
	application* createApplication(void);
}