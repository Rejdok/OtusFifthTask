#pragma once

#include "GUI.h"
#include "Controller.h"
#include "PrimitivesHolder.h"

class GraphEd
{
public:
	GraphEd();
	~GraphEd();
private:
	GUI * gui;
	Controller * controller;
};

