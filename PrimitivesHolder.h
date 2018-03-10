#pragma once
#include <algorithm>
#include <vector>
#include <string>

#include "Primitives.h"

class PrimitivesHolder {
public:
	PrimitivesHolder();
	~PrimitivesHolder();
	template<typename T, typename... Args>
	void createPrimitive(T, Args...) {
		primitives.push_back(new T(Args...));
	}
	void deletePrimitive(GraphicalPrimitive* toDelete) {
		primitives.erase(std::find(primitives.begin(), primitives.end(), toDelete));
		delete toDelete;
	}

	void saveToFile(std::string &path ,FileFormats ff) {
		//some code to save,
	}
	void loadFromFile(std::string& path, FileFormats ff) {
		//some code to load
	}
	auto const& getPrimitives() {
		return primitives;
	}
private:
	std::vector<GraphicalPrimitive* > primitives;
};


