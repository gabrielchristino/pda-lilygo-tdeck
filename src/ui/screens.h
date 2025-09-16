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
    lv_obj_t *paint;
    lv_obj_t *weather;
    lv_obj_t *maps;
    lv_obj_t *config;
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
    lv_obj_t *is_loading_1;
    lv_obj_t *is_loading_1__obj3;
    lv_obj_t *obj4;
    lv_obj_t *obj4__obj0;
    lv_obj_t *obj4__obj1;
    lv_obj_t *obj4__obj2;
    lv_obj_t *obj5;
    lv_obj_t *obj5__obj0;
    lv_obj_t *obj5__obj1;
    lv_obj_t *obj5__obj2;
    lv_obj_t *obj6;
    lv_obj_t *obj6__obj0;
    lv_obj_t *obj6__obj1;
    lv_obj_t *obj6__obj2;
    lv_obj_t *obj7;
    lv_obj_t *obj7__obj0;
    lv_obj_t *obj7__obj1;
    lv_obj_t *obj7__obj2;
    lv_obj_t *obj8;
    lv_obj_t *obj8__obj0;
    lv_obj_t *obj8__obj1;
    lv_obj_t *obj8__obj2;
    lv_obj_t *btn_calculator;
    lv_obj_t *btn_calendar;
    lv_obj_t *btn_tasks;
    lv_obj_t *btn_paint;
    lv_obj_t *btn_weather;
    lv_obj_t *btn_maps;
    lv_obj_t *btn_config;
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
    lv_obj_t *obj28;
    lv_obj_t *obj29;
    lv_obj_t *obj30;
    lv_obj_t *btn_cal_0;
    lv_obj_t *obj31;
    lv_obj_t *obj32;
    lv_obj_t *obj33;
    lv_obj_t *obj34;
    lv_obj_t *obj35;
    lv_obj_t *obj36;
    lv_obj_t *obj37;
    lv_obj_t *obj38;
    lv_obj_t *obj39;
    lv_obj_t *obj40;
    lv_obj_t *obj41;
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
    lv_obj_t *obj52;
    lv_obj_t *obj53;
    lv_obj_t *obj54;
    lv_obj_t *obj55;
    lv_obj_t *obj56;
    lv_obj_t *obj57;
    lv_obj_t *obj58;
    lv_obj_t *obj59;
    lv_obj_t *obj60;
    lv_obj_t *obj61;
    lv_obj_t *obj62;
    lv_obj_t *obj63;
    lv_obj_t *obj64;
    lv_obj_t *obj65;
    lv_obj_t *obj66;
    lv_obj_t *obj67;
    lv_obj_t *obj68;
    lv_obj_t *obj69;
    lv_obj_t *obj70;
    lv_obj_t *obj71;
    lv_obj_t *btn_save;
    lv_obj_t *obj72;
    lv_obj_t *obj73;
    lv_obj_t *obj74;
    lv_obj_t *obj75;
    lv_obj_t *obj76;
    lv_obj_t *obj77;
    lv_obj_t *obj78;
    lv_obj_t *obj79;
    lv_obj_t *obj80;
    lv_obj_t *lbl_main_clock;
    lv_obj_t *lbl_main_date;
    lv_obj_t *txt_calc;
    lv_obj_t *obj81;
    lv_obj_t *obj82;
    lv_obj_t *obj83;
    lv_obj_t *obj84;
    lv_obj_t *obj85;
    lv_obj_t *obj86;
    lv_obj_t *obj87;
    lv_obj_t *obj88;
    lv_obj_t *obj89;
    lv_obj_t *obj90;
    lv_obj_t *obj91;
    lv_obj_t *obj92;
    lv_obj_t *obj93;
    lv_obj_t *obj94;
    lv_obj_t *obj95;
    lv_obj_t *obj96;
    lv_obj_t *obj97;
    lv_obj_t *obj98;
    lv_obj_t *lbl_cal_day_0;
    lv_obj_t *lbl_cal_day_1;
    lv_obj_t *lbl_cal_day_2;
    lv_obj_t *lbl_cal_day_3;
    lv_obj_t *lbl_cal_day_4;
    lv_obj_t *lbl_cal_day_5;
    lv_obj_t *lbl_cal_day_6;
    lv_obj_t *lbl_cal_day_7;
    lv_obj_t *lbl_cal_day_8;
    lv_obj_t *lbl_cal_day_9;
    lv_obj_t *lbl_cal_day_10;
    lv_obj_t *lbl_cal_day_11;
    lv_obj_t *lbl_cal_day_12;
    lv_obj_t *lbl_cal_day_13;
    lv_obj_t *lbl_cal_day_14;
    lv_obj_t *lbl_cal_day_15;
    lv_obj_t *lbl_cal_day_16;
    lv_obj_t *lbl_cal_day_17;
    lv_obj_t *lbl_cal_day_18;
    lv_obj_t *lbl_cal_day_19;
    lv_obj_t *lbl_cal_day_20;
    lv_obj_t *lbl_cal_day_21;
    lv_obj_t *lbl_cal_day_22;
    lv_obj_t *lbl_cal_day_23;
    lv_obj_t *lbl_cal_day_24;
    lv_obj_t *lbl_cal_day_25;
    lv_obj_t *lbl_cal_day_26;
    lv_obj_t *lbl_cal_day_27;
    lv_obj_t *lbl_cal_day_28;
    lv_obj_t *lbl_cal_day_29;
    lv_obj_t *lbl_cal_day_30;
    lv_obj_t *lbl_cal_day_31;
    lv_obj_t *lbl_cal_day_32;
    lv_obj_t *lbl_cal_day_33;
    lv_obj_t *lbl_cal_day_34;
    lv_obj_t *lbl_cal_day_35;
    lv_obj_t *lbl_cal_day_36;
    lv_obj_t *lbl_cal_day_37;
    lv_obj_t *lbl_cal_day_38;
    lv_obj_t *lbl_cal_day_39;
    lv_obj_t *lbl_cal_day_40;
    lv_obj_t *lbl_cal_day_41;
    lv_obj_t *obj99;
    lv_obj_t *obj100;
    lv_obj_t *txt_event_name;
    lv_obj_t *start_hour;
    lv_obj_t *start_minute;
    lv_obj_t *lbl_from;
    lv_obj_t *end_hour;
    lv_obj_t *end_minute;
    lv_obj_t *lbl_to;
    lv_obj_t *keyboard;
    lv_obj_t *obj101;
    lv_obj_t *obj102;
    lv_obj_t *obj103;
    lv_obj_t *obj104;
    lv_obj_t *obj105;
    lv_obj_t *txt_new_task;
    lv_obj_t *qr_share_txt;
    lv_obj_t *obj106;
    lv_obj_t *obj107;
    lv_obj_t *obj108;
    lv_obj_t *obj109;
    lv_obj_t *obj110;
    lv_obj_t *lbl_temperature;
    lv_obj_t *obj111;
    lv_obj_t *obj112;
    lv_obj_t *msgbox_pwd;
    lv_obj_t *obj113;
    lv_obj_t *obj114;
    lv_obj_t *obj115;
    lv_obj_t *obj116;
    lv_obj_t *obj117;
    lv_obj_t *obj118;
    lv_obj_t *obj119;
    lv_obj_t *obj120;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_CALCULATOR = 2,
    SCREEN_ID_CALENDAR = 3,
    SCREEN_ID_CALENDAR_NEW_EVENT = 4,
    SCREEN_ID_CALENDAR_EVENTS_LIST = 5,
    SCREEN_ID_TASKS = 6,
    SCREEN_ID_PAINT = 7,
    SCREEN_ID_WEATHER = 8,
    SCREEN_ID_MAPS = 9,
    SCREEN_ID_CONFIG = 10,
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

void create_screen_paint();
void tick_screen_paint();

void create_screen_weather();
void tick_screen_weather();

void create_screen_maps();
void tick_screen_maps();

void create_screen_config();
void tick_screen_config();

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