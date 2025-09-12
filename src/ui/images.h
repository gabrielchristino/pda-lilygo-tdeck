#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const lv_img_dsc_t img_img_calculator;
extern const lv_img_dsc_t img_img_calendar;
extern const lv_img_dsc_t img_img_tasks;
extern const lv_img_dsc_t img_img_paint;
extern const lv_img_dsc_t img_img_weather;
extern const lv_img_dsc_t img_lv_img_weather_unknown;
extern const lv_img_dsc_t img_lv_img_weather_thunderstorm;
extern const lv_img_dsc_t img_lv_img_weather_sun;
extern const lv_img_dsc_t img_lv_img_weather_snow;
extern const lv_img_dsc_t img_lv_img_weather_rain;
extern const lv_img_dsc_t img_lv_img_weather_moon;
extern const lv_img_dsc_t img_lv_img_weather_mist;
extern const lv_img_dsc_t img_lv_img_weather_cloud_sun;
extern const lv_img_dsc_t img_lv_img_weather_cloud_moon;
extern const lv_img_dsc_t img_lv_img_weather_cloud;
extern const lv_img_dsc_t img_img_maps;
extern const lv_img_dsc_t img_img_config;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[17];


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_IMAGES_H*/