#ifndef EEZ_LVGL_UI_STYLES_H
#define EEZ_LVGL_UI_STYLES_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Style: home_btn
lv_style_t *get_style_home_btn_MAIN_DEFAULT();
void add_style_home_btn(lv_obj_t *obj);
void remove_style_home_btn(lv_obj_t *obj);

// Style: MainClock
lv_style_t *get_style_main_clock_MAIN_DEFAULT();
void add_style_main_clock(lv_obj_t *obj);
void remove_style_main_clock(lv_obj_t *obj);

// Style: MainDate
lv_style_t *get_style_main_date_MAIN_DEFAULT();
void add_style_main_date(lv_obj_t *obj);
void remove_style_main_date(lv_obj_t *obj);

// Style: body_text
lv_style_t *get_style_body_text_MAIN_DEFAULT();
void add_style_body_text(lv_obj_t *obj);
void remove_style_body_text(lv_obj_t *obj);

// Style: CurrentDay
lv_style_t *get_style_current_day_MAIN_DEFAULT();
void add_style_current_day(lv_obj_t *obj);
void remove_style_current_day(lv_obj_t *obj);

// Style: tranparentButton
lv_style_t *get_style_tranparent_button_MAIN_DEFAULT();
void add_style_tranparent_button(lv_obj_t *obj);
void remove_style_tranparent_button(lv_obj_t *obj);

// Style: SaveBtn
lv_style_t *get_style_save_btn_MAIN_DEFAULT();
void add_style_save_btn(lv_obj_t *obj);
void remove_style_save_btn(lv_obj_t *obj);

// Style: rollerList
lv_style_t *get_style_roller_list_MAIN_DEFAULT();
lv_style_t *get_style_roller_list_SELECTED_DEFAULT();
void add_style_roller_list(lv_obj_t *obj);
void remove_style_roller_list(lv_obj_t *obj);

// Style: negativeBtn
lv_style_t *get_style_negative_btn_MAIN_DEFAULT();
void add_style_negative_btn(lv_obj_t *obj);
void remove_style_negative_btn(lv_obj_t *obj);



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_STYLES_H*/