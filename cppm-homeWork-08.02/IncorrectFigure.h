#pragma once
#include <iostream>
#include "Figure.h"


class IncorrectFigure : public std::exception  {

public:
	IncorrectFigure(int error_number);

std::string Error_num() {

	if (error_number == 1) {
		return "����� ����� �� ����� 180 ��������!";
	}
	if (error_number == 2) {
		return "���� � �� ����� 90 ��������!";
	}
	// � ��. �� ���� �������

}

protected:
	int error_number;
};
