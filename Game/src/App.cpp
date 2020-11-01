#include <Flare.h>

using namespace Flare;

int main(int argc, const char** argv)
{
	Engine* engine = new Engine();
	engine->Run();

	delete engine;

	return 0;
}