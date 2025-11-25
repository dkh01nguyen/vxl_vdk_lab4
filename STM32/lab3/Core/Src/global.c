#include "global.h"

int STATUS = INIT;

int RED = 5;
int AMBER = 2;
int GREEN = 3;

int t = 0;
int manual_state = 0;

void update() {
	if (RED != AMBER + GREEN) {
		RED = 5;
		GREEN = 3;
		AMBER = 2;
	}
}
