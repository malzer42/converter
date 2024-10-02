/**
 * File: menu.h
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date of creation (modification): 20240923 (20240923)
 * Description: Interface of the menu.c
 */

#ifndef MENU_H
#define MENU_H
#include <stdio.h>
#include <stdlib.h>
#include "currency.h"
#include "length.h"
#include "weight.h"
#include "volume.h"
#include "area.h"
#include "temperature.h"


enum Choice
{
    ZERO,
    AREA,
    CURRENCY,
    LENGTH,
    TEMPERATURE,
    VOLUME,
    WEIGHT
};

void menu(void);

#endif
