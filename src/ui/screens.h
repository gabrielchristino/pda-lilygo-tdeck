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
    lv_obj_t *calendar_new_event;
    lv_obj_t *calendar_events_list;
    lv_obj_t *tasks;
    lv_obj_t *obj0;
    lv_obj_t *obj0__obj0;
    lv_obj_t *obj0__obj1;
    lv_obj_t *obj0__obj2;
    lv_obj_t *obj1;
    lv_obj_t *obj1__obj0;
    lv_obj_t *obj1__obj1;
    lv_obj_t *obj1__obj2;
    lv_obj_t *obj2;
    lv_obj_t *obj2__obj0;
    lv_obj_t *obj2__obj1;
    lv_obj_t *obj2__obj2;
    lv_obj_t *is_loading;
    lv_obj_t *is_loading__obj3;
    lv_obj_t *obj3;
    lv_obj_t *obj3__obj0;
    lv_obj_t *obj3__obj1;
    lv_obj_t *obj3__obj2;
    lv_obj_t *obj4;
    lv_obj_t *obj4__obj3;
    lv_obj_t *obj5;
    lv_obj_t *obj5__obj0;
    lv_obj_t *obj5__obj1;
    lv_obj_t *obj5__obj2;
    lv_obj_t *btn_calculator;
    lv_obj_t *btn_calendar;
    lv_obj_t *btn_tasks;
    lv_obj_t *cal_calendar;
    lv_obj_t *btn_save;
    lv_obj_t *obj6;
    lv_obj_t *lbl_main_clock;
    lv_obj_t *lbl_main_date;
    lv_obj_t *txt_event_name;
    lv_obj_t *start_hour;
    lv_obj_t *start_minute;
    lv_obj_t *lbl_from;
    lv_obj_t *end_hour;
    lv_obj_t *end_minute;
    lv_obj_t *lbl_to;
    lv_obj_t *txt_event_date;
    lv_obj_t *keyboard;
    lv_obj_t *obj7;
    lv_obj_t *obj8;
    lv_obj_t *obj9;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_CALCULATOR = 2,
    SCREEN_ID_CALENDAR = 3,
    SCREEN_ID_CALENDAR_NEW_EVENT = 4,
    SCREEN_ID_CALENDAR_EVENTS_LIST = 5,
    SCREEN_ID_TASKS = 6,
};

void create_screen_main();
void tick_screen_main();

void create_screen_calculator();
void tick_screen_calculator();

void create_screen_calendar();
void tick_screen_calendar();

void create_screen_calendar_new_event();
void tick_screen_calendar_new_event();

void create_screen_calendar_events_list();
void tick_screen_calendar_events_list();

void create_screen_tasks();
void tick_screen_tasks();

void create_user_widget_header(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_header(void *flowState, int startWidgetIndex);

void create_user_widget_loading_screen(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_loading_screen(void *flowState, int startWidgetIndex);

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/