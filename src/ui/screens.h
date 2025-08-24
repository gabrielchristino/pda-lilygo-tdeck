#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *calculator;
    lv_obj_t *calendar;
    lv_obj_t *tasks;
    lv_obj_t *obj0;
    lv_obj_t *obj0__obj0;
    lv_obj_t *obj0__obj1;
    lv_obj_t *obj1;
    lv_obj_t *obj1__obj0;
    lv_obj_t *obj1__obj1;
    lv_obj_t *obj2;
    lv_obj_t *obj2__obj0;
    lv_obj_t *obj2__obj1;
    lv_obj_t *btn_calculator;
    lv_obj_t *btn_calendar;
    lv_obj_t *btn_tasks;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_CALCULATOR = 2,
    SCREEN_ID_CALENDAR = 3,
    SCREEN_ID_TASKS = 4,
};

void create_screen_main();
void tick_screen_main();

void create_screen_calculator();
void tick_screen_calculator();

void create_screen_calendar();
void tick_screen_calendar();

void create_screen_tasks();
void tick_screen_tasks();

void create_user_widget_header(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_header(void *flowState, int startWidgetIndex);

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/