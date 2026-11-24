#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "timer.h"
#include "PWM.h"
#include "adc.h"

int main (void){
    
    //Initialisation oscillateur

    InitOscillator();
    InitIO();
    InitTimer23();
    InitTimer1();
    // Initialisation PWM   
    InitPWM();
    // Initialisation de ADC
    InitADC1();
    
    LED_BLANCHE_1 = 1;
    LED_BLEUE_1 = 1;
    LED_ORANGE_1 = 1;
    LED_ROUGE_1 = 1;
    LED_VERTE_1 = 1;
    
    LED_BLANCHE_2 = 1;
    LED_BLEUE_2 = 1;
    LED_ORANGE_2 = 1;
    LED_ROUGE_2 = 1;
    LED_VERTE_2 = 1;
    
    PWM_EN = 1;
    
      
    unsigned int ADCValue0, ADCValue1, ADCValue2;
    unsigned int d30 = 0000010001110101;
    // Boucle Principale
    while(1)
    {  
        if( ADCIsConversionFinished() == 1)
        {
            ADCClearConversionFinishedFlag();
            unsigned int * result = ADCGetResult();
            
            
            // a faire la prochaine fois
            
            //float volts = ((float) result [0])* 3.3 / 4096;
            // robotState.distanceTelemetreGauche = 34 / volts - 5;
            //volts = ((float) result [1])* 3.3 / 4096;
            //robotState.distanceTelemetreCentre = 34 / volts - 5;
            //volts = ((float) result [2])* 3.3 / 4096;
            //robotState.distanceTelemetreDroit = 34 / volts - 5;

            ADCValue0 = result[0];
            ADCValue1 = result[1];
            ADCValue2 = result[2];
        }
       
    } // fin main
}
