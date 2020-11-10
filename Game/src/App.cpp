#include <Flare.h>

int main(int argc, const char** argv)
{
	Flare::Engine* engine = new Flare::Engine();
	engine->Run();

	delete engine;

	return 0;
}