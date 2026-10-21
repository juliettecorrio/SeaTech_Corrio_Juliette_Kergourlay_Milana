#ifndef PWM_H
#define	PWM_H

#define MOTEUR_DROIT 0
#define MOTEUR_GAUCHE 1


// prototype des fonctions 
void InitPWM();
// void PWMSetSpeed(float, int);
void PWMUpdateSpeed();
void PWMSetSpeedConsigne(float, char);

#endif	/* PWM_H */

