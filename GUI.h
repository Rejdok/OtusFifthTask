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
		//����� ��� ����������� ����, ��� �������� ����� ���� ������
	}
	void deletePrimitive(GraphicalPrimitive* primitive) {
		auto pr = selectPrimitive();
		//�� �������� �������� ��� ����������� ������ ����������� � ���������� �����������

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
		//��� ��� ���������� GUI
	}
private:
	Controller* controller;
};