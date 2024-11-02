/************************************************
* @file    main.c 
* @author  APBashara
* @date    10/2024
* 
* @brief   Main Code to run Tasks and Setup Peripherals
***********************************************/

#include "main.h"

void main() {
    // Configure System
    Sysclock_48();
    CAN_Init();
    CAN_Filters_Init();
    CAN_Start();

    CAN_Status CANstatus;
    volatile CAN_Frame rFrame;
    
    // Main Loop
    while(1) {
        CAN_Transmit(&rFrame);
        if (CAN_Receive(&rFrame) == CAN_OK) {
            // Process Charger Frame
        }
    }
}