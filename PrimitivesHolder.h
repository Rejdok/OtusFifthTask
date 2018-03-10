#pragma once
#include <algorithm>
#include <vector>
#include <string>

#include "Primitives.h"

class PrimitivesHolder {
public:
	PrimitivesHolder();
	~PrimitivesHolder();
	template<typename... Args>
	void createPrimitive(PTypes PType, Args... args) {
		GraphicalPrimitive* newPrim=nullptr;
		switch(PType){
		case PTypes::Point:
			newPrim = new Point(args...);
			break;
		case PTypes::LineSegment:
			newPrim = new LineSegment(args...);
			break;
		case PTypes::Triangle:
			newPrim = new Triangle(args...);
			break;
		case PTypes::Rectangle:
			newPrim = new Rectangle(args...);
			break;
		}
		if(newPrim!=nullptr)
			primitives.push_back(newPrim);
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


