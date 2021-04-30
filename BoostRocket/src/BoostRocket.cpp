#define VICTORIA_ENTRYPOINT
#include <Victoria.h>

#include "GameLayer.h"

class BoostRocket : public Victoria::Application
{
public:
	BoostRocket()
	{
		PushLayer(new GameLayer());
		
	}

	~BoostRocket()
	{

	}

};

Victoria::Application* Victoria::CreateApplication()
{
	return new BoostRocket();
}
