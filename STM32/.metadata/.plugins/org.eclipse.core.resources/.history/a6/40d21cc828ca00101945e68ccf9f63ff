#include "fsm_traffic_light.h"


void fsm_manual(){
	switch (status) {
		//MODE2
		case MODE5:
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);

			setTimer(3, 500);
			status = FLASH_AMBER;
		case FLASH_AMBER:
			clearLED();
			if (timer_flag[3] == 1){
				HAL_GPIO_TogglePin(A1_GPIO_Port, A1_Pin);
				HAL_GPIO_TogglePin(A2_GPIO_Port, A2_Pin);
				setTimer(3, 500);
			}
			if (isButtonPressed(0) == 1 || isButtonPressed(2) == 1){
				status = MODE1;
			}
			break;
		case MODE6:
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
			clearLED();
			manual_state = RED_GREEN;
			status = MANUAL;
		case MANUAL:
			if (isButtonPressed(1) == 1){
				switch(manual_state){
					case RED_GREEN:
						manual_state = RED_AMBER;
						HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
						HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
						HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
						HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
						HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
						HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
						HAL_Delay(500);
						HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
						HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
						break;

					case RED_AMBER:
						manual_state = RED_GREEN;
						HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
						HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
						HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
						HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
						HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
						HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
						HAL_Delay(500);
						HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
						HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
						break;
					}
				}

			if (isButtonPressed(2) == 1) {
				status = MODE1;
			}
		default:
			break;
	}
}

