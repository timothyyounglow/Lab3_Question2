/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <assert.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"


// Function which extracts the last 2 digits of any number
int extractNum(int num){
	int num0 = 0;
	int num1 = 0;
	int num10 = 0;
	num1 = num%10;
	num0 = num/10;
	num10 = num0%10;
	num10 = num10*10;
	int finalNum = num10 + num1;
	return finalNum;
}

// Function which calls the extractNum() function, takes its return value, and finds the remainder when divided by 15
int calcModulus(int num){
	int mod = extractNum(num)%15;
	return mod;
}


void app_main()
{
	
	
	printf("Test case A\n");
	printf("Expected output: 13\n");
	printf("Actual output: %d\n\n", calcModulus(816007443));
	
	printf("Test case B\n");
	printf("Expected output: 8\n");
	printf("Actual output: %d\n\n", calcModulus(816225138));
	
	printf("Test case C\n");
	printf("Expected output: 6\n");
	printf("Actual output: %d\n\n", calcModulus(816338596));
	
	printf("Program successfully executed\n");
	fflush(stdout);
	
}
