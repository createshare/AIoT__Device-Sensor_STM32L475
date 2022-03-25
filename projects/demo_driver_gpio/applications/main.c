/*

 * Change Logs:
 * Date           Author       Notes
 * 2022-02-06     BlueS Lin    first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

#define DBG_TAG "main"
#define DBG_LVL         DBG_LOG
#include <rtdbg.h>

// BEEP && LED && KEY
#define PIN_BEEP        GET_PIN(B, 2)      // PB2 :  BEEP         --> BEEP
#define PIN_LED_R       GET_PIN(E, 7)      // PE7 :  LED_R        --> LED
#define PIN_LED_G       GET_PIN(E, 8)      // PE8 :  LED_B        --> LED
#define PIN_LED_B       GET_PIN(E, 9)      // PE9 :  LED_G        --> LED
#define PIN_KEY2        GET_PIN(D, 8)      // PD8 :  KEY2         --> KEY
#define PIN_KEY1        GET_PIN(D, 9)      // PD9 :  KEY1         --> KEY
#define PIN_KEY0        GET_PIN(D, 10)     // PD10:  KEY0         --> KEY
#define PIN_WK_UP       GET_PIN(C, 13)     // PC13:  WK_UP        --> KEY



/* defined the LED_RED pin: PE7 */
#define LED_PIN  	PIN_LED_R

int main(void)
{
    /* set LED0 pin mode to output */
    rt_pin_mode(LED_PIN, PIN_MODE_OUTPUT);

    while (1)
    {
        rt_pin_write(LED_PIN, PIN_HIGH);
		LOG_D("led off");
        rt_thread_mdelay(500);
        rt_pin_write(LED_PIN, PIN_LOW);
        LOG_D("led on");
        rt_thread_mdelay(500);
    }
    return 0;
}
