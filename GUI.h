#pragma once

#include <string>

#include "Primitives.h"
#include "Controller.h"

class GUI {
	friend class GraphEd;
public:
	GUI();
	~GUI();
	template<typename T, typename... Args>
	void AddNewPrimitive(T, Args...) {
		controller->createPrimitive(T, Args...);
	}
	GraphicalPrimitive* selectPrimitive() {
		//чисто для демострации того, что примитив может быть выбран
	}
	void deletePrimitive(GraphicalPrimitive* primitive) {
		auto pr = selectPrimitive();
		//по хорошему действия над примитивами должны происходить с выбранными примитивами

		controller->deletePrimitive(pr);
	}
	void saveToFile(std::string& path, FileFormats ff) {
		controller->saveToFile(path, ff);
	}
	void loadFromFile(std::string& path, FileFormats ff) {
		controller->loadFromFile(path, ff);
	}
	void updateGraphics() {
		auto const& prim = controller->gerPrimitives();
		//код для обновления GUI
	}
private:
	Controller* controller;
};