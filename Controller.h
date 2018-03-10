#pragma once

#include <string>
#include <utility>

#include "Primitives.h"
#include "PrimitivesHolder.h"

class Controller {
	friend class GraphEd;
public:
	Controller();
	~Controller();
	void saveToFile(std::string path, FileFormats ff) {
		ph.saveToFile(path, ff);
	}
	void loadFromFile(std::string path, FileFormats ff) {
		ph.loadFromFile(path, ff);
	}
	template<typename... Args>
	void createPrimitive(PTypes PType, Args... args) {
		ph.createPrimitive(PType, args...);
	}
	void deletePrimitive(GraphicalPrimitive* toDelete) {
		ph.deletePrimitive(toDelete);
	}
	auto const& gerPrimitives() {
		return ph.getPrimitives();
	}
private:
	PrimitivesHolder ph;
};