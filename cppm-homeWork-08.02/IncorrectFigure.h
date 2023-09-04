#pragma once
#include <iostream>
#include "Figure.h"


class IncorrectFigure : public std::exception  {

public:
	IncorrectFigure(int error_number);

std::string Error_num() {

	if (error_number == 1) {
		return "Сумма углов не равна 180 градусов!";
	}
	if (error_number == 2) {
		return "Угол С не равен 90 градусам!";
	}
	// и тд. по всем ошибкам

}

protected:
	int error_number;
};
