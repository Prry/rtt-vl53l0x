
#ifndef _VL53L0X_H_
#define _VL53L0X_H_

#include <rtthread.h>
#include <rtdevice.h>

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

extern int rt_hw_vl53l0x_init(const char *name, struct rt_sensor_config *cfg, rt_base_t xsht_pin);

#endif