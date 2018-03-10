
#include "GraphEd.h"


GraphEd::GraphEd()
{
	gui = new GUI;
	controller = new Controller;
	gui->controller = controller;
}


GraphEd::~GraphEd()
{
	delete gui;
	delete controller;
}
