#include <iostream>

#include "Core/Logger.h"

int main()
{
	Project::Logger::Init();
	LOGGER_INFO("TESTER");
}
