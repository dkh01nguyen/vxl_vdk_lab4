#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT				0
#define MODE1				1
#define MODE2				2
#define MODE3				3
#define MODE4				4
#define MODE5				5
#define MODE6 				6

#define RED_GREEN			11
#define RED_AMBER			12
#define GREEN_RED			13
#define	AMBER_RED			14

#define AUTO_RED			21
#define AUTO_AMBER			31
#define AUTO_GREEN			41
#define FLASH_AMBER			51
#define MANUAL 				61
#define AUTO 				71
#define FMANUAL 			81
#define CONFIG				91

extern int status;

extern int RED;
extern int AMBER;
extern int GREEN;
extern int t;
extern int manual_state;
void update();

#endif /* INC_GLOBAL_H_ */
