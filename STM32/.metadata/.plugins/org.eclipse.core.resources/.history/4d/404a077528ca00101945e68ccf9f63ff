/*
 * fsm_traffic_light.c
 *
 *  Created on: Nov 26, 2025
 *      Author: nguyen
 */

#include "fsm_traffic_light.h"

int mode = INIT;
int status = INIT;

void fsm() {
	switch (mode) {
		case INIT:
			mode = AUTO;
			status = MODE1;
			break;
		case AUTO:
			fsm_auto();
			break;
		default:
			break;
	}
}

void wtf() {
if (isButtonPressed(0) == 1) {
	status = MODE2;
}

if (isButtonPressed(1) == 1) {
	status = MODE6;
}

if (isButtonPressed(2) == 1) {
	status = MODE5;
}

}
