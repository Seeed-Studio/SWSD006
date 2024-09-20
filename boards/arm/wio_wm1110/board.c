/*
 * Copyright (c) 2018 Aapo Vienamo
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/init.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/kernel.h>

static const struct gpio_dt_spec grove_vcc_gpio =
	GPIO_DT_SPEC_GET( DT_ALIAS( sensor_pwr ), gpios );

static int pwr_ctrl_init(void)
{
	int ret;

	if (!gpio_is_ready_dt(&grove_vcc_gpio)) {
		return -ENODEV;
	}
	
	ret = gpio_pin_configure_dt(&grove_vcc_gpio, GPIO_OUTPUT_HIGH);
	if (ret < 0) {
		return ret;
	}

	/* Wait for the rail to come up and stabilize */
#ifdef CONFIG_MULTITHREADING
	k_sleep( K_MSEC( 20 ));
#else
	k_busy_wait( 20000 );
#endif

	return 0;
}


SYS_INIT(pwr_ctrl_init, POST_KERNEL, 0);
