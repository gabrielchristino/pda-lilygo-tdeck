#include "images.h"

const ext_img_desc_t images[17] = {
    { "img_calculator", &img_img_calculator },
    { "img_calendar", &img_img_calendar },
    { "img_tasks", &img_img_tasks },
    { "img_paint", &img_img_paint },
    { "img_weather", &img_img_weather },
    { "lv_img_weather_unknown", &img_lv_img_weather_unknown },
    { "lv_img_weather_thunderstorm", &img_lv_img_weather_thunderstorm },
    { "lv_img_weather_sun", &img_lv_img_weather_sun },
    { "lv_img_weather_snow", &img_lv_img_weather_snow },
    { "lv_img_weather_rain", &img_lv_img_weather_rain },
    { "lv_img_weather_moon", &img_lv_img_weather_moon },
    { "lv_img_weather_mist", &img_lv_img_weather_mist },
    { "lv_img_weather_cloud_sun", &img_lv_img_weather_cloud_sun },
    { "lv_img_weather_cloud_moon", &img_lv_img_weather_cloud_moon },
    { "lv_img_weather_cloud", &img_lv_img_weather_cloud },
    { "img_maps", &img_img_maps },
    { "img_config", &img_img_config },
};
