#pragma once
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

enum Figures { Cross = 2, Null = 1, Nothing = 0};

#include "ICommand.h"
#include "CommandSetX.h"
#include "CommandSetO.h"

#include "MacroCommand.h"

#include "ShowField.h"

#include "EnterCoords.h"

#include "Gameplay.h"