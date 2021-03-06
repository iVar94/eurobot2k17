#include <initialisation/gpio_config.h>

void gpio_config(void)
{

	/* GPIO setup for every timer */
	gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO8|GPIO15);
	gpio_mode_setup(GPIOB,
					GPIO_MODE_AF,
					GPIO_PUPD_NONE,
					GPIO4|GPIO5|GPIO7|GPIO8);
	gpio_mode_setup(GPIOE, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO5|GPIO6);
	/* Set alt function for TIM1 and TIM2 both CH1 */
	gpio_set_af(GPIOA, GPIO_AF1, GPIO8|GPIO15);
	/* Set alt function for TIM3 CH1 and CH2 */
	gpio_set_af(GPIOB, GPIO_AF2, GPIO4|GPIO5);
	/* Set alt function for TIM4 CH1 */
	gpio_set_af(GPIOB, GPIO_AF2, GPIO7);
	/* Set alt function for TIM9 CH1 and CH2 */
	gpio_set_af(GPIOE, GPIO_AF3, GPIO5|GPIO6);
	/* Set alt function for TIM10 CH1 */
	gpio_set_af(GPIOB, GPIO_AF3, GPIO8);

	/* Timer PWM GPIO output setup */
	gpio_set_output_options(GPIOA,
							GPIO_OTYPE_PP, GPIO_OSPEED_100MHZ,
							GPIO8|GPIO15);
	gpio_set_output_options(GPIOB,
							GPIO_OTYPE_PP,
							GPIO_OSPEED_100MHZ,
							GPIO4|GPIO5|GPIO7|GPIO8);
	gpio_set_output_options(GPIOE,
							GPIO_OTYPE_PP,
							GPIO_OSPEED_100MHZ,
							GPIO5|GPIO6);

	/* USART2 GPIO setup */
	gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO2);
	gpio_set_af(GPIOA, GPIO_AF7, GPIO2);

	/* USART3 GPIO setup */
	gpio_mode_setup(GPIOB, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO11);
	gpio_set_af(GPIOB, GPIO_AF7, GPIO11);
	gpio_mode_setup(GPIOD, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO8);
	gpio_set_af(GPIOD, GPIO_AF7, GPIO8);

	/* USART4 GPIO setup */
	gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO0|GPIO1);
	gpio_set_af(GPIOA, GPIO_AF8, GPIO0|GPIO1);


	/* ADC1 GPIO setup */
	gpio_mode_setup(GPIOA, GPIO_MODE_ANALOG, GPIO_PUPD_NONE, GPIO3);
}
