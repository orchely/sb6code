#include "sb6.h"
#include <math.h>

class my_application : public sb6::application
{
public:
	void render(double currentTime)
	{
		const GLfloat color[] = {
			(float)sin(currentTime) * 0.5f + 0.5f,
			(float)cos(currentTime) * 0.5f + 0.5f,
			0.0f, 1.0f
		};
		glClearBufferfv(GL_COLOR, 0, color);
	}
};

DECLARE_MAIN(my_application);