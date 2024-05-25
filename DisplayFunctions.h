/*! \file DisplayFunctions.h
	\brief Declaration of the functions used in main_display.cpp

	Details.
*/


#ifndef DFUNCTIONS_H
#define DFUNCTIONS_H

#include<iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"
#include "CRhombus.h"

/// @name Shapes array declaration
/// @{
extern Quadrilateral* ShapeList[50];
/// @}

/// @name Functions used in main_display.cpp
/// @{
void menu(void);
void ShowAll();
void AddShape();
void RemoveShape();
void RemoveAll();
Color ShapeColor(int n);
/// @}

#endif