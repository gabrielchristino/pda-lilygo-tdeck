#include "styles.h"
#include "images.h"
#include "fonts.h"

#include "ui.h"
#include "screens.h"

//
// Style: home_btn
//

void init_style_home_btn_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_shadow_width(style, 0);
    lv_style_set_text_color(style, lv_color_hex(0xff484848));
};

lv_style_t *get_style_home_btn_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_home_btn_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_home_btn(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_home_btn_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_home_btn(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_home_btn_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: MainClock
//

void init_style_main_clock_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_align(style, LV_ALIGN_TOP_MID);
    lv_style_set_text_font(style, &ui_font_ubuntu_44);
    lv_style_set_text_align(style, LV_TEXT_ALIGN_CENTER);
};

lv_style_t *get_style_main_clock_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_main_clock_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_main_clock(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_main_clock_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_main_clock(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_main_clock_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: MainDate
//

void init_style_main_date_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_align(style, LV_ALIGN_TOP_MID);
    lv_style_set_text_font(style, &ui_font_ubuntu_24);
    lv_style_set_text_align(style, LV_TEXT_ALIGN_CENTER);
};

lv_style_t *get_style_main_date_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_main_date_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_main_date(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_main_date_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_main_date(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_main_date_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: body_text
//

void init_style_body_text_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_font(style, &ui_font_ubuntu_14);
};

lv_style_t *get_style_body_text_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_body_text_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_body_text(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_body_text_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_body_text(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_body_text_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: CurrentDay
//

void init_style_current_day_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_font(style, &ui_font_ubuntu_14);
    lv_style_set_text_align(style, LV_TEXT_ALIGN_CENTER);
    lv_style_set_bg_color(style, lv_color_hex(0xffa8dadc));
    lv_style_set_bg_opa(style, 200);
};

lv_style_t *get_style_current_day_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_current_day_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_current_day(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_current_day_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_current_day(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_current_day_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: tranparentButton
//

void init_style_tranparent_button_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_shadow_opa(style, 0);
    lv_style_set_bg_opa(style, 0);
    lv_style_set_radius(style, 0);
    lv_style_set_text_color(style, lv_color_hex(0xff212121));
    lv_style_set_text_font(style, &ui_font_ubuntu_14);
    lv_style_set_pad_top(style, 0);
    lv_style_set_pad_bottom(style, 0);
    lv_style_set_pad_left(style, 0);
    lv_style_set_pad_right(style, 0);
    lv_style_set_pad_row(style, 0);
    lv_style_set_pad_column(style, 0);
};

lv_style_t *get_style_tranparent_button_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_tranparent_button_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_tranparent_button(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_tranparent_button_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_tranparent_button(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_tranparent_button_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: SaveBtn
//

void init_style_save_btn_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_shadow_opa(style, 0);
    lv_style_set_text_color(style, lv_color_hex(0xff86e100));
};

lv_style_t *get_style_save_btn_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_save_btn_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_save_btn(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_save_btn_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_save_btn(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_save_btn_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: rollerList
//

void init_style_roller_list_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_text_color(style, lv_color_hex(0xff606060));
    lv_style_set_text_font(style, &ui_font_ubuntu_14);
    lv_style_set_border_width(style, 0);
};

lv_style_t *get_style_roller_list_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_roller_list_MAIN_DEFAULT(style);
    }
    return style;
};

void init_style_roller_list_SELECTED_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xffffffff));
    lv_style_set_text_color(style, lv_color_hex(0xff606060));
    lv_style_set_shadow_width(style, 10);
    lv_style_set_shadow_ofs_x(style, 0);
    lv_style_set_shadow_ofs_y(style, 0);
    lv_style_set_shadow_color(style, lv_color_hex(0xff9e9e9e));
    lv_style_set_shadow_opa(style, 127);
    lv_style_set_bg_opa(style, 200);
};

lv_style_t *get_style_roller_list_SELECTED_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_roller_list_SELECTED_DEFAULT(style);
    }
    return style;
};

void add_style_roller_list(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_roller_list_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_roller_list_SELECTED_DEFAULT(), LV_PART_SELECTED | LV_STATE_DEFAULT);
};

void remove_style_roller_list(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_roller_list_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_roller_list_SELECTED_DEFAULT(), LV_PART_SELECTED | LV_STATE_DEFAULT);
};

//
// Style: negativeBtn
//

void init_style_negative_btn_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xfff35921));
    lv_style_set_text_color(style, lv_color_hex(0xffe10000));
    lv_style_set_bg_opa(style, 0);
    lv_style_set_shadow_opa(style, 0);
};

lv_style_t *get_style_negative_btn_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_negative_btn_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_negative_btn(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_negative_btn_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_negative_btn(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_negative_btn_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
//
//

void add_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*AddStyleFunc)(lv_obj_t *obj);
    static const AddStyleFunc add_style_funcs[] = {
        add_style_home_btn,
        add_style_main_clock,
        add_style_main_date,
        add_style_body_text,
        add_style_current_day,
        add_style_tranparent_button,
        add_style_save_btn,
        add_style_roller_list,
        add_style_negative_btn,
    };
    add_style_funcs[styleIndex](obj);
}

void remove_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*RemoveStyleFunc)(lv_obj_t *obj);
    static const RemoveStyleFunc remove_style_funcs[] = {
        remove_style_home_btn,
        remove_style_main_clock,
        remove_style_main_date,
        remove_style_body_text,
        remove_style_current_day,
        remove_style_tranparent_button,
        remove_style_save_btn,
        remove_style_roller_list,
        remove_style_negative_btn,
    };
    remove_style_funcs[styleIndex](obj);
}

