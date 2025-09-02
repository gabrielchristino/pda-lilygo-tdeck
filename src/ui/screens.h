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
    lv_obj_t *tasks_new_tasks;
    lv_obj_t *paint;
    lv_obj_t *weather;
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
    lv_obj_t *is_loading_3;
    lv_obj_t *is_loading_3__obj3;
    lv_obj_t *obj4;
    lv_obj_t *obj4__obj0;
    lv_obj_t *obj4__obj1;
    lv_obj_t *obj4__obj2;
    lv_obj_t *is_loading_1;
    lv_obj_t *is_loading_1__obj3;
    lv_obj_t *obj5;
    lv_obj_t *obj5__obj0;
    lv_obj_t *obj5__obj1;
    lv_obj_t *obj5__obj2;
    lv_obj_t *is_loading_2;
    lv_obj_t *is_loading_2__obj3;
    lv_obj_t *obj6;
    lv_obj_t *obj6__obj0;
    lv_obj_t *obj6__obj1;
    lv_obj_t *obj6__obj2;
    lv_obj_t *obj7;
    lv_obj_t *obj7__obj0;
    lv_obj_t *obj7__obj1;
    lv_obj_t *obj7__obj2;
    lv_obj_t *btn_calculator;
    lv_obj_t *btn_calendar;
    lv_obj_t *btn_tasks;
    lv_obj_t *btn_paint;
    lv_obj_t *btn_weather;
    lv_obj_t *obj8;
    lv_obj_t *obj9;
    lv_obj_t *obj10;
    lv_obj_t *obj11;
    lv_obj_t *obj12;
    lv_obj_t *obj13;
    lv_obj_t *obj14;
    lv_obj_t *obj15;
    lv_obj_t *obj16;
    lv_obj_t *obj17;
    lv_obj_t *obj18;
    lv_obj_t *obj19;
    lv_obj_t *obj20;
    lv_obj_t *obj21;
    lv_obj_t *obj22;
    lv_obj_t *obj23;
    lv_obj_t *obj24;
    lv_obj_t *obj25;
    lv_obj_t *obj26;
    lv_obj_t *obj27;
    lv_obj_t *cal_calendar;
    lv_obj_t *btn_save;
    lv_obj_t *obj28;
    lv_obj_t *obj29;
    lv_obj_t *obj30;
    lv_obj_t *obj31;
    lv_obj_t *obj32;
    lv_obj_t *obj33;
    lv_obj_t *obj34;
    lv_obj_t *txt_task_description;
    lv_obj_t *btn_save_1;
    lv_obj_t *lbl_main_clock;
    lv_obj_t *lbl_main_date;
    lv_obj_t *txt_calc;
    lv_obj_t *obj35;
    lv_obj_t *obj36;
    lv_obj_t *obj37;
    lv_obj_t *obj38;
    lv_obj_t *obj39;
    lv_obj_t *txt_event_name;
    lv_obj_t *start_hour;
    lv_obj_t *start_minute;
    lv_obj_t *lbl_from;
    lv_obj_t *end_hour;
    lv_obj_t *end_minute;
    lv_obj_t *lbl_to;
    lv_obj_t *keyboard;
    lv_obj_t *obj40;
    lv_obj_t *obj41;
    lv_obj_t *msgbox_noevents;
    lv_obj_t *obj42;
    lv_obj_t *obj43;
    lv_obj_t *obj44;
    lv_obj_t *obj45;
    lv_obj_t *obj46;
    lv_obj_t *obj47;
    lv_obj_t *obj48;
    lv_obj_t *obj49;
    lv_obj_t *obj50;
    lv_obj_t *obj51;
    lv_obj_t *lbl_temperature;
    lv_obj_t *obj52;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_CALCULATOR = 2,
    SCREEN_ID_CALENDAR = 3,
    SCREEN_ID_CALENDAR_NEW_EVENT = 4,
    SCREEN_ID_CALENDAR_EVENTS_LIST = 5,
    SCREEN_ID_TASKS = 6,
    SCREEN_ID_TASKS_NEW_TASKS = 7,
    SCREEN_ID_PAINT = 8,
    SCREEN_ID_WEATHER = 9,
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

void create_screen_tasks_new_tasks();
void tick_screen_tasks_new_tasks();

void create_screen_paint();
void tick_screen_paint();

void create_screen_weather();
void tick_screen_weather();

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