#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;

static void event_handler_cb_main_btn_calculator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 0, 0, e);
    }
}

static void event_handler_cb_main_btn_calendar(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 4, 0, e);
    }
}

static void event_handler_cb_main_btn_tasks(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 7, 0, e);
    }
}

static void event_handler_cb_main_btn_paint(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 12, 0, e);
    }
}

static void event_handler_cb_main_btn_weather(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 15, 0, e);
    }
}

static void event_handler_cb_main_btn_maps(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 18, 0, e);
    }
}

static void event_handler_cb_main_btn_config(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 21, 0, e);
    }
}

static void event_handler_cb_calculator_txt_calc(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            const char *value = lv_textarea_get_text(ta);
            assignStringProperty(flowState, 2, 3, value, "Failed to assign Text in Textarea widget");
        }
    }
}

static void event_handler_cb_calculator_obj9(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 3, 0, e);
    }
}

static void event_handler_cb_calculator_obj10(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 5, 0, e);
    }
}

static void event_handler_cb_calculator_obj11(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 7, 0, e);
    }
}

static void event_handler_cb_calculator_obj12(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 9, 0, e);
    }
}

static void event_handler_cb_calculator_obj13(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 11, 0, e);
    }
}

static void event_handler_cb_calculator_obj14(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 13, 0, e);
    }
}

static void event_handler_cb_calculator_obj15(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 15, 0, e);
    }
}

static void event_handler_cb_calculator_obj16(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 17, 0, e);
    }
}

static void event_handler_cb_calculator_obj17(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 19, 0, e);
    }
}

static void event_handler_cb_calculator_obj18(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 21, 0, e);
    }
}

static void event_handler_cb_calculator_obj19(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 23, 0, e);
    }
}

static void event_handler_cb_calculator_obj20(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 25, 0, e);
    }
}

static void event_handler_cb_calculator_obj21(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 27, 0, e);
    }
}

static void event_handler_cb_calculator_obj22(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 29, 0, e);
    }
}

static void event_handler_cb_calculator_obj23(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 31, 0, e);
    }
}

static void event_handler_cb_calculator_obj24(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 33, 0, e);
    }
}

static void event_handler_cb_calculator_obj25(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 34, 0, e);
    }
}

static void event_handler_cb_calculator_obj26(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 37, 0, e);
    }
}

static void event_handler_cb_calculator_obj27(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 39, 0, e);
    }
}

static void event_handler_cb_calculator_obj28(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 41, 0, e);
    }
}

static void event_handler_cb_calendar_calendar(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
}

static void event_handler_cb_calendar_obj29(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 4, 0, e);
    }
}

static void event_handler_cb_calendar_obj30(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 6, 0, e);
    }
}

static void event_handler_cb_calendar_new_event_txt_event_name(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            const char *value = lv_textarea_get_text(ta);
            assignStringProperty(flowState, 0, 3, value, "Failed to assign Text in Textarea widget");
        }
    }
}

static void event_handler_cb_calendar_new_event_start_hour(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_roller_get_selected(ta);
            assignIntegerProperty(flowState, 3, 3, value, "Failed to assign Selected in Roller widget");
        }
    }
}

static void event_handler_cb_calendar_new_event_start_minute(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_roller_get_selected(ta);
            assignIntegerProperty(flowState, 4, 3, value, "Failed to assign Selected in Roller widget");
        }
    }
}

static void event_handler_cb_calendar_new_event_end_hour(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_roller_get_selected(ta);
            assignIntegerProperty(flowState, 7, 3, value, "Failed to assign Selected in Roller widget");
        }
    }
}

static void event_handler_cb_calendar_new_event_end_minute(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_roller_get_selected(ta);
            assignIntegerProperty(flowState, 8, 3, value, "Failed to assign Selected in Roller widget");
        }
    }
}

static void event_handler_cb_calendar_new_event_btn_save(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 11, 0, e);
    }
}

static void event_handler_cb_calendar_events_list_calendar_events_list(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
}

static void event_handler_cb_calendar_events_list_obj102(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_roller_get_selected(ta);
            assignIntegerProperty(flowState, 2, 4, value, "Failed to assign Selected in Roller widget");
        }
    }
}

static void event_handler_cb_calendar_events_list_obj31(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 3, 0, e);
    }
}

static void event_handler_cb_calendar_events_list_obj32(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 5, 0, e);
    }
}

static void event_handler_cb_tasks_tasks(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
}

static void event_handler_cb_tasks_obj105(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_roller_get_selected(ta);
            assignIntegerProperty(flowState, 3, 4, value, "Failed to assign Selected in Roller widget");
        }
    }
}

static void event_handler_cb_tasks_obj33(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 4, 0, e);
    }
}

static void event_handler_cb_tasks_obj34(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 6, 0, e);
    }
}

static void event_handler_cb_tasks_txt_new_task(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            const char *value = lv_textarea_get_text(ta);
            assignStringProperty(flowState, 8, 3, value, "Failed to assign Text in Textarea widget");
        }
    }
}

static void event_handler_cb_tasks_obj35(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 9, 0, e);
    }
}

static void event_handler_cb_tasks_obj36(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 12, 0, e);
    }
}

static void event_handler_cb_config_config(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
}

static void event_handler_cb_config_obj112(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_roller_get_selected(ta);
            assignIntegerProperty(flowState, 4, 3, value, "Failed to assign Selected in Roller widget");
        }
    }
}

static void event_handler_cb_config_obj37(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 5, 0, e);
    }
}

static void event_handler_cb_config_obj113(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            const char *value = lv_textarea_get_text(ta);
            assignStringProperty(flowState, 9, 3, value, "Failed to assign Text in Textarea widget");
        }
    }
}

static void event_handler_cb_config_obj38(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 10, 0, e);
    }
}

static void event_handler_cb_config_obj39(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 12, 0, e);
    }
}

static void event_handler_cb_header_obj0(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 2, 0, e);
    }
}

void create_screen_main() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffeff6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xfffaf5ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // btn_calculator
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.btn_calculator = obj;
            lv_obj_set_pos(obj, 5, 100);
            lv_obj_set_size(obj, 100, 100);
            lv_obj_add_event_cb(obj, event_handler_cb_main_btn_calculator, LV_EVENT_ALL, flowState);
            lv_obj_add_state(obj, LV_STATE_FOCUSED|LV_STATE_FOCUS_KEY);
            add_style_home_btn(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, -13, -8);
                    lv_obj_set_size(obj, 100, 100);
                    lv_img_set_src(obj, &img_img_calculator);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 42);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Calculator");
                }
            }
        }
        {
            // btn_calendar
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.btn_calendar = obj;
            lv_obj_set_pos(obj, 110, 100);
            lv_obj_set_size(obj, 100, 100);
            lv_obj_add_event_cb(obj, event_handler_cb_main_btn_calendar, LV_EVENT_ALL, flowState);
            add_style_home_btn(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, -13, -8);
                    lv_obj_set_size(obj, 100, 100);
                    lv_img_set_src(obj, &img_img_calendar);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 42);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Calendar");
                }
            }
        }
        {
            // btn_tasks
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.btn_tasks = obj;
            lv_obj_set_pos(obj, 215, 100);
            lv_obj_set_size(obj, 100, 100);
            lv_obj_add_event_cb(obj, event_handler_cb_main_btn_tasks, LV_EVENT_ALL, flowState);
            add_style_home_btn(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, -13, -8);
                    lv_obj_set_size(obj, 100, 100);
                    lv_img_set_src(obj, &img_img_tasks);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 42);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Tasks");
                }
            }
        }
        {
            // lbl_main_clock
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lbl_main_clock = obj;
            lv_obj_set_pos(obj, 0, 5);
            lv_obj_set_size(obj, 320, 49);
            add_style_main_clock(obj);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            // lbl_main_date
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lbl_main_date = obj;
            lv_obj_set_pos(obj, 0, 54);
            lv_obj_set_size(obj, 320, LV_SIZE_CONTENT);
            add_style_main_date(obj);
            lv_label_set_text(obj, "");
        }
        {
            // btn_paint
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.btn_paint = obj;
            lv_obj_set_pos(obj, 5, 201);
            lv_obj_set_size(obj, 100, 100);
            lv_obj_add_event_cb(obj, event_handler_cb_main_btn_paint, LV_EVENT_ALL, flowState);
            add_style_home_btn(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, -13, -8);
                    lv_obj_set_size(obj, 100, 100);
                    lv_img_set_src(obj, &img_img_paint);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 42);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Paint");
                }
            }
        }
        {
            // btn_weather
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.btn_weather = obj;
            lv_obj_set_pos(obj, 110, 201);
            lv_obj_set_size(obj, 100, 100);
            lv_obj_add_event_cb(obj, event_handler_cb_main_btn_weather, LV_EVENT_ALL, flowState);
            add_style_home_btn(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, -13, -8);
                    lv_obj_set_size(obj, 100, 100);
                    lv_img_set_src(obj, &img_img_weather);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 42);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Weather");
                }
            }
        }
        {
            // btn_maps
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.btn_maps = obj;
            lv_obj_set_pos(obj, 215, 201);
            lv_obj_set_size(obj, 100, 100);
            lv_obj_add_event_cb(obj, event_handler_cb_main_btn_maps, LV_EVENT_ALL, flowState);
            add_style_home_btn(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, -13, -8);
                    lv_obj_set_size(obj, 100, 100);
                    lv_img_set_src(obj, &img_img_maps);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 42);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Maps");
                }
            }
        }
        {
            // btn_config
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.btn_config = obj;
            lv_obj_set_pos(obj, 6, 301);
            lv_obj_set_size(obj, 100, 100);
            lv_obj_add_event_cb(obj, event_handler_cb_main_btn_config, LV_EVENT_ALL, flowState);
            add_style_home_btn(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, -13, -8);
                    lv_obj_set_size(obj, 100, 100);
                    lv_img_set_src(obj, &img_img_config);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 42);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Config");
                }
            }
        }
    }
    
    tick_screen_main();
}

void tick_screen_main() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
    {
        const char *new_val = evalTextProperty(flowState, 10, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.lbl_main_clock);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.lbl_main_clock;
            lv_label_set_text(objects.lbl_main_clock, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 11, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.lbl_main_date);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.lbl_main_date;
            lv_label_set_text(objects.lbl_main_date, new_val);
            tick_value_change_obj = NULL;
        }
    }
}

void create_screen_calculator() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.calculator = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffff7ed), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xfffefce8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj0 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 0), 11);
        }
        {
            // txt_calc
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.txt_calc = obj;
            lv_obj_set_pos(obj, 10, 40);
            lv_obj_set_size(obj, 300, 36);
            lv_textarea_set_max_length(obj, 128);
            lv_textarea_set_one_line(obj, true);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_txt_calc, LV_EVENT_ALL, flowState);
            lv_obj_add_state(obj, LV_STATE_FOCUSED);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_SCROLLED);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_SCROLLED);
            lv_obj_set_style_bg_opa(obj, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj9 = obj;
            lv_obj_set_pos(obj, 87, 81);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj9, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffd4a3), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff374151), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj52 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj10 = obj;
            lv_obj_set_pos(obj, 10, 81);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj10, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffd4a3), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff374151), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "AC");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj11 = obj;
            lv_obj_set_pos(obj, 163, 81);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj11, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffa8dadc), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff374151), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "%");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj12 = obj;
            lv_obj_set_pos(obj, 240, 81);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj12, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffa8dadc), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff374151), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "÷");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj13 = obj;
            lv_obj_set_pos(obj, 87, 113);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj13, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj40 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "8");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj14 = obj;
            lv_obj_set_pos(obj, 10, 113);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj14, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj41 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "7");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj15 = obj;
            lv_obj_set_pos(obj, 163, 113);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj15, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj42 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "9");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj16 = obj;
            lv_obj_set_pos(obj, 240, 113);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj16, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffa8dadc), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff374151), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "×");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj17 = obj;
            lv_obj_set_pos(obj, 87, 146);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj17, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj43 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "5");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj18 = obj;
            lv_obj_set_pos(obj, 10, 146);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj18, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj44 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "4");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj19 = obj;
            lv_obj_set_pos(obj, 163, 146);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj19, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj45 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "6");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj20 = obj;
            lv_obj_set_pos(obj, 240, 146);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj20, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffa8dadc), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff374151), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "+");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj21 = obj;
            lv_obj_set_pos(obj, 87, 178);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj21, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj46 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "2");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj22 = obj;
            lv_obj_set_pos(obj, 10, 178);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj22, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj47 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "1");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj23 = obj;
            lv_obj_set_pos(obj, 163, 178);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj23, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj48 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "3");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj24 = obj;
            lv_obj_set_pos(obj, 240, 178);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj24, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffa8dadc), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff374151), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "-");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj25 = obj;
            lv_obj_set_pos(obj, 87, 210);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj25, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj49 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, ",");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj26 = obj;
            lv_obj_set_pos(obj, 10, 210);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj26, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj50 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "0");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj27 = obj;
            lv_obj_set_pos(obj, 163, 210);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj27, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffefefe), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj51 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff404040), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "±");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj28 = obj;
            lv_obj_set_pos(obj, 240, 210);
            lv_obj_set_size(obj, 70, 26);
            lv_obj_add_event_cb(obj, event_handler_cb_calculator_obj28, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc7f0c7), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff374151), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_body_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "=");
                }
            }
        }
    }
    
    tick_screen_calculator();
}

void tick_screen_calculator() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
    tick_user_widget_header(getFlowState(flowState, 0), 11);
    {
        const char *new_val = evalTextProperty(flowState, 2, 3, "Failed to evaluate Text in Textarea widget");
        const char *cur_val = lv_textarea_get_text(objects.txt_calc);
        uint32_t max_length = lv_textarea_get_max_length(objects.txt_calc);
        if (strncmp(new_val, cur_val, max_length) != 0) {
            tick_value_change_obj = objects.txt_calc;
            lv_textarea_set_text(objects.txt_calc, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 4, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj52);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj52;
            lv_label_set_text(objects.obj52, new_val);
            tick_value_change_obj = NULL;
        }
    }
}

void create_screen_calendar() {
    void *flowState = getFlowState(0, 2);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.calendar = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_add_event_cb(obj, event_handler_cb_calendar_calendar, LV_EVENT_ALL, flowState);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffaf5ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xffeff6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 0), 15);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj53 = obj;
            lv_obj_set_pos(obj, 5, 45);
            lv_obj_set_size(obj, 310, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff9e9e9e), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 127, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj54 = obj;
                    lv_obj_set_pos(obj, 55, 5);
                    lv_obj_set_size(obj, 200, 30);
                    lv_obj_set_style_text_font(obj, &ui_font_ubuntu_24, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
                {
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.obj29 = obj;
                    lv_obj_set_pos(obj, 270, 0);
                    lv_obj_set_size(obj, 40, 40);
                    lv_obj_add_event_cb(obj, event_handler_cb_calendar_obj29, LV_EVENT_ALL, flowState);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_shadow_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.obj69 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.obj30 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 40, 40);
                    lv_obj_add_event_cb(obj, event_handler_cb_calendar_obj30, LV_EVENT_ALL, flowState);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_shadow_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.obj70 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "");
                        }
                    }
                }
            }
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj55 = obj;
            lv_obj_set_pos(obj, 5, 90);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "SAT");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj56 = obj;
            lv_obj_set_pos(obj, 49, 90);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "SUN");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 93, 90);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "MON");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 137, 90);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "TUE");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 181, 90);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "WED");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 225, 90);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "THU");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 269, 90);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "FRI");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj57 = obj;
            lv_obj_set_pos(obj, 5, 114);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj58 = obj;
            lv_obj_set_pos(obj, 49, 114);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj71 = obj;
            lv_obj_set_pos(obj, 93, 114);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj72 = obj;
            lv_obj_set_pos(obj, 137, 114);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj73 = obj;
            lv_obj_set_pos(obj, 181, 114);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj74 = obj;
            lv_obj_set_pos(obj, 225, 114);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj75 = obj;
            lv_obj_set_pos(obj, 269, 114);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj59 = obj;
            lv_obj_set_pos(obj, 5, 134);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj60 = obj;
            lv_obj_set_pos(obj, 49, 134);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj76 = obj;
            lv_obj_set_pos(obj, 93, 134);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj77 = obj;
            lv_obj_set_pos(obj, 137, 134);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj78 = obj;
            lv_obj_set_pos(obj, 181, 134);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj79 = obj;
            lv_obj_set_pos(obj, 225, 134);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj80 = obj;
            lv_obj_set_pos(obj, 269, 134);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj61 = obj;
            lv_obj_set_pos(obj, 5, 154);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj62 = obj;
            lv_obj_set_pos(obj, 49, 154);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj81 = obj;
            lv_obj_set_pos(obj, 93, 154);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj82 = obj;
            lv_obj_set_pos(obj, 137, 154);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj83 = obj;
            lv_obj_set_pos(obj, 181, 154);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj84 = obj;
            lv_obj_set_pos(obj, 225, 154);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj85 = obj;
            lv_obj_set_pos(obj, 269, 154);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj63 = obj;
            lv_obj_set_pos(obj, 5, 174);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj64 = obj;
            lv_obj_set_pos(obj, 49, 174);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj86 = obj;
            lv_obj_set_pos(obj, 93, 174);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj87 = obj;
            lv_obj_set_pos(obj, 137, 174);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj88 = obj;
            lv_obj_set_pos(obj, 181, 174);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj89 = obj;
            lv_obj_set_pos(obj, 225, 174);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj90 = obj;
            lv_obj_set_pos(obj, 269, 174);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj65 = obj;
            lv_obj_set_pos(obj, 5, 194);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj66 = obj;
            lv_obj_set_pos(obj, 49, 194);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj91 = obj;
            lv_obj_set_pos(obj, 93, 194);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj92 = obj;
            lv_obj_set_pos(obj, 137, 194);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj93 = obj;
            lv_obj_set_pos(obj, 181, 194);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj94 = obj;
            lv_obj_set_pos(obj, 225, 194);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj95 = obj;
            lv_obj_set_pos(obj, 269, 194);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj67 = obj;
            lv_obj_set_pos(obj, 5, 215);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj68 = obj;
            lv_obj_set_pos(obj, 49, 215);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff8d0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj96 = obj;
            lv_obj_set_pos(obj, 93, 215);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj97 = obj;
            lv_obj_set_pos(obj, 137, 215);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj98 = obj;
            lv_obj_set_pos(obj, 181, 215);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj99 = obj;
            lv_obj_set_pos(obj, 225, 215);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj100 = obj;
            lv_obj_set_pos(obj, 269, 215);
            lv_obj_set_size(obj, 44, 20);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
    }
    
    tick_screen_calendar();
}

void tick_screen_calendar() {
    void *flowState = getFlowState(0, 2);
    (void)flowState;
    tick_user_widget_header(getFlowState(flowState, 0), 15);
    {
        const char *new_val = evalTextProperty(flowState, 3, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj54);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj54;
            lv_label_set_text(objects.obj54, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 5, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj69);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj69;
            lv_label_set_text(objects.obj69, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 7, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj70);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj70;
            lv_label_set_text(objects.obj70, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 15, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj57, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj57;
            if (new_val) lv_obj_add_flag(objects.obj57, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj57, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 15, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj57);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj57;
            lv_label_set_text(objects.obj57, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 16, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj58, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj58;
            if (new_val) lv_obj_add_flag(objects.obj58, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj58, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 16, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj58);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj58;
            lv_label_set_text(objects.obj58, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 17, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj71, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj71;
            if (new_val) lv_obj_add_flag(objects.obj71, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj71, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 17, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj71);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj71;
            lv_label_set_text(objects.obj71, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 18, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj72, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj72;
            if (new_val) lv_obj_add_flag(objects.obj72, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj72, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 18, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj72);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj72;
            lv_label_set_text(objects.obj72, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 19, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj73, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj73;
            if (new_val) lv_obj_add_flag(objects.obj73, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj73, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 19, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj73);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj73;
            lv_label_set_text(objects.obj73, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 20, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj74, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj74;
            if (new_val) lv_obj_add_flag(objects.obj74, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj74, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 20, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj74);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj74;
            lv_label_set_text(objects.obj74, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 21, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj75, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj75;
            if (new_val) lv_obj_add_flag(objects.obj75, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj75, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 21, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj75);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj75;
            lv_label_set_text(objects.obj75, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 22, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj59, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj59;
            if (new_val) lv_obj_add_flag(objects.obj59, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj59, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 22, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj59);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj59;
            lv_label_set_text(objects.obj59, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 23, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj60, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj60;
            if (new_val) lv_obj_add_flag(objects.obj60, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj60, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 23, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj60);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj60;
            lv_label_set_text(objects.obj60, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 24, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj76, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj76;
            if (new_val) lv_obj_add_flag(objects.obj76, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj76, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 24, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj76);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj76;
            lv_label_set_text(objects.obj76, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 25, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj77, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj77;
            if (new_val) lv_obj_add_flag(objects.obj77, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj77, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 25, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj77);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj77;
            lv_label_set_text(objects.obj77, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 26, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj78, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj78;
            if (new_val) lv_obj_add_flag(objects.obj78, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj78, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 26, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj78);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj78;
            lv_label_set_text(objects.obj78, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 27, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj79, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj79;
            if (new_val) lv_obj_add_flag(objects.obj79, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj79, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 27, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj79);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj79;
            lv_label_set_text(objects.obj79, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 28, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj80, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj80;
            if (new_val) lv_obj_add_flag(objects.obj80, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj80, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 28, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj80);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj80;
            lv_label_set_text(objects.obj80, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 29, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj61, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj61;
            if (new_val) lv_obj_add_flag(objects.obj61, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj61, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 29, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj61);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj61;
            lv_label_set_text(objects.obj61, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 30, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj62, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj62;
            if (new_val) lv_obj_add_flag(objects.obj62, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj62, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 30, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj62);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj62;
            lv_label_set_text(objects.obj62, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 31, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj81, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj81;
            if (new_val) lv_obj_add_flag(objects.obj81, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj81, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 31, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj81);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj81;
            lv_label_set_text(objects.obj81, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 32, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj82, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj82;
            if (new_val) lv_obj_add_flag(objects.obj82, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj82, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 32, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj82);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj82;
            lv_label_set_text(objects.obj82, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 33, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj83, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj83;
            if (new_val) lv_obj_add_flag(objects.obj83, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj83, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 33, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj83);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj83;
            lv_label_set_text(objects.obj83, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 34, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj84, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj84;
            if (new_val) lv_obj_add_flag(objects.obj84, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj84, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 34, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj84);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj84;
            lv_label_set_text(objects.obj84, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 36, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj85, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj85;
            if (new_val) lv_obj_add_flag(objects.obj85, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj85, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 36, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj85);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj85;
            lv_label_set_text(objects.obj85, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 35, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj63, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj63;
            if (new_val) lv_obj_add_flag(objects.obj63, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj63, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 35, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj63);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj63;
            lv_label_set_text(objects.obj63, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 37, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj64, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj64;
            if (new_val) lv_obj_add_flag(objects.obj64, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj64, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 37, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj64);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj64;
            lv_label_set_text(objects.obj64, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 38, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj86, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj86;
            if (new_val) lv_obj_add_flag(objects.obj86, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj86, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 38, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj86);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj86;
            lv_label_set_text(objects.obj86, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 39, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj87, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj87;
            if (new_val) lv_obj_add_flag(objects.obj87, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj87, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 39, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj87);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj87;
            lv_label_set_text(objects.obj87, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 40, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj88, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj88;
            if (new_val) lv_obj_add_flag(objects.obj88, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj88, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 40, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj88);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj88;
            lv_label_set_text(objects.obj88, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 41, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj89, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj89;
            if (new_val) lv_obj_add_flag(objects.obj89, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj89, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 41, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj89);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj89;
            lv_label_set_text(objects.obj89, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 42, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj90, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj90;
            if (new_val) lv_obj_add_flag(objects.obj90, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj90, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 42, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj90);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj90;
            lv_label_set_text(objects.obj90, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 43, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj65, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj65;
            if (new_val) lv_obj_add_flag(objects.obj65, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj65, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 43, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj65);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj65;
            lv_label_set_text(objects.obj65, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 44, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj66, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj66;
            if (new_val) lv_obj_add_flag(objects.obj66, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj66, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 44, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj66);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj66;
            lv_label_set_text(objects.obj66, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 45, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj91, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj91;
            if (new_val) lv_obj_add_flag(objects.obj91, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj91, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 45, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj91);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj91;
            lv_label_set_text(objects.obj91, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 46, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj92, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj92;
            if (new_val) lv_obj_add_flag(objects.obj92, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj92, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 46, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj92);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj92;
            lv_label_set_text(objects.obj92, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 47, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj93, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj93;
            if (new_val) lv_obj_add_flag(objects.obj93, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj93, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 47, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj93);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj93;
            lv_label_set_text(objects.obj93, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 48, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj94, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj94;
            if (new_val) lv_obj_add_flag(objects.obj94, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj94, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 48, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj94);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj94;
            lv_label_set_text(objects.obj94, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 49, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj95, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj95;
            if (new_val) lv_obj_add_flag(objects.obj95, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj95, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 49, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj95);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj95;
            lv_label_set_text(objects.obj95, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 50, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj67, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj67;
            if (new_val) lv_obj_add_flag(objects.obj67, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj67, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 50, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj67);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj67;
            lv_label_set_text(objects.obj67, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 51, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj68, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj68;
            if (new_val) lv_obj_add_flag(objects.obj68, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj68, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 51, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj68);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj68;
            lv_label_set_text(objects.obj68, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 52, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj96, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj96;
            if (new_val) lv_obj_add_flag(objects.obj96, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj96, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 52, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj96);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj96;
            lv_label_set_text(objects.obj96, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 53, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj97, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj97;
            if (new_val) lv_obj_add_flag(objects.obj97, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj97, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 53, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj97);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj97;
            lv_label_set_text(objects.obj97, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 54, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj98, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj98;
            if (new_val) lv_obj_add_flag(objects.obj98, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj98, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 54, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj98);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj98;
            lv_label_set_text(objects.obj98, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 55, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj99, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj99;
            if (new_val) lv_obj_add_flag(objects.obj99, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj99, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 55, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj99);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj99;
            lv_label_set_text(objects.obj99, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 56, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.obj100, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj100;
            if (new_val) lv_obj_add_flag(objects.obj100, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.obj100, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 56, 4, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj100);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj100;
            lv_label_set_text(objects.obj100, new_val);
            tick_value_change_obj = NULL;
        }
    }
}

void create_screen_calendar_new_event() {
    void *flowState = getFlowState(0, 3);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.calendar_new_event = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffaf5ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xffeff6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // txt_event_name
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.txt_event_name = obj;
            lv_obj_set_pos(obj, 8, 45);
            lv_obj_set_size(obj, 310, 36);
            lv_textarea_set_max_length(obj, 128);
            lv_textarea_set_placeholder_text(obj, "event name");
            lv_textarea_set_one_line(obj, true);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_new_event_txt_event_name, LV_EVENT_ALL, flowState);
            lv_obj_add_state(obj, LV_STATE_FOCUSED);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_opa(obj, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj2 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 2), 19);
        }
        {
            // start_hour
            lv_obj_t *obj = lv_roller_create(parent_obj);
            objects.start_hour = obj;
            lv_obj_set_pos(obj, 69, 122);
            lv_obj_set_size(obj, 40, 60);
            lv_roller_set_options(obj, "01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12", LV_ROLLER_MODE_INFINITE);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_new_event_start_hour, LV_EVENT_ALL, flowState);
        }
        {
            // start_minute
            lv_obj_t *obj = lv_roller_create(parent_obj);
            objects.start_minute = obj;
            lv_obj_set_pos(obj, 113, 122);
            lv_obj_set_size(obj, 40, 60);
            lv_roller_set_options(obj, "00\n05\n10\n15\n20\n30\n40\n50", LV_ROLLER_MODE_INFINITE);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_new_event_start_minute, LV_EVENT_ALL, flowState);
        }
        {
            // lbl_from
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lbl_from = obj;
            lv_obj_set_pos(obj, 69, 104);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_body_text(obj);
            lv_label_set_text(obj, "from");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 109, 143);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_body_text(obj);
            lv_label_set_text(obj, ":");
        }
        {
            // end_hour
            lv_obj_t *obj = lv_roller_create(parent_obj);
            objects.end_hour = obj;
            lv_obj_set_pos(obj, 168, 122);
            lv_obj_set_size(obj, 40, 60);
            lv_roller_set_options(obj, "01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12", LV_ROLLER_MODE_INFINITE);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_new_event_end_hour, LV_EVENT_ALL, flowState);
        }
        {
            // end_minute
            lv_obj_t *obj = lv_roller_create(parent_obj);
            objects.end_minute = obj;
            lv_obj_set_pos(obj, 212, 122);
            lv_obj_set_size(obj, 40, 60);
            lv_roller_set_options(obj, "00\n05\n10\n15\n20\n30\n40\n50", LV_ROLLER_MODE_INFINITE);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_new_event_end_minute, LV_EVENT_ALL, flowState);
        }
        {
            // lbl_to
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lbl_to = obj;
            lv_obj_set_pos(obj, 168, 104);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_body_text(obj);
            lv_label_set_text(obj, "to");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 208, 143);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_body_text(obj);
            lv_label_set_text(obj, ":");
        }
        {
            // btn_save
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.btn_save = obj;
            lv_obj_set_pos(obj, 112, 200);
            lv_obj_set_size(obj, 96, 32);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_new_event_btn_save, LV_EVENT_ALL, flowState);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj101 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
        {
            // keyboard
            lv_obj_t *obj = lv_keyboard_create(parent_obj);
            objects.keyboard = obj;
            lv_obj_set_pos(obj, 262, 104);
            lv_obj_set_size(obj, 163, 69);
            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // is_loading
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.is_loading = obj;
            lv_obj_set_pos(obj, 0, -300);
            lv_obj_set_size(obj, 320, 240);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_loading_screen(obj, getFlowState(flowState, 14), 23);
        }
    }
    lv_keyboard_set_textarea(objects.keyboard, objects.txt_event_name);
    
    tick_screen_calendar_new_event();
}

void tick_screen_calendar_new_event() {
    void *flowState = getFlowState(0, 3);
    (void)flowState;
    {
        const char *new_val = evalTextProperty(flowState, 0, 3, "Failed to evaluate Text in Textarea widget");
        const char *cur_val = lv_textarea_get_text(objects.txt_event_name);
        uint32_t max_length = lv_textarea_get_max_length(objects.txt_event_name);
        if (strncmp(new_val, cur_val, max_length) != 0) {
            tick_value_change_obj = objects.txt_event_name;
            lv_textarea_set_text(objects.txt_event_name, new_val);
            tick_value_change_obj = NULL;
        }
    }
    tick_user_widget_header(getFlowState(flowState, 2), 19);
    {
        if (!(lv_obj_get_state(objects.start_hour) & LV_STATE_EDITED)) {
            int32_t new_val = evalIntegerProperty(flowState, 3, 3, "Failed to evaluate Selected in Roller widget");
            int32_t cur_val = lv_roller_get_selected(objects.start_hour);
            if (new_val != cur_val) {
                tick_value_change_obj = objects.start_hour;
                lv_roller_set_selected(objects.start_hour, new_val, LV_ANIM_OFF);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        if (!(lv_obj_get_state(objects.start_minute) & LV_STATE_EDITED)) {
            int32_t new_val = evalIntegerProperty(flowState, 4, 3, "Failed to evaluate Selected in Roller widget");
            int32_t cur_val = lv_roller_get_selected(objects.start_minute);
            if (new_val != cur_val) {
                tick_value_change_obj = objects.start_minute;
                lv_roller_set_selected(objects.start_minute, new_val, LV_ANIM_OFF);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        if (!(lv_obj_get_state(objects.end_hour) & LV_STATE_EDITED)) {
            int32_t new_val = evalIntegerProperty(flowState, 7, 3, "Failed to evaluate Selected in Roller widget");
            int32_t cur_val = lv_roller_get_selected(objects.end_hour);
            if (new_val != cur_val) {
                tick_value_change_obj = objects.end_hour;
                lv_roller_set_selected(objects.end_hour, new_val, LV_ANIM_OFF);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        if (!(lv_obj_get_state(objects.end_minute) & LV_STATE_EDITED)) {
            int32_t new_val = evalIntegerProperty(flowState, 8, 3, "Failed to evaluate Selected in Roller widget");
            int32_t cur_val = lv_roller_get_selected(objects.end_minute);
            if (new_val != cur_val) {
                tick_value_change_obj = objects.end_minute;
                lv_roller_set_selected(objects.end_minute, new_val, LV_ANIM_OFF);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 12, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj101);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj101;
            lv_label_set_text(objects.obj101, new_val);
            tick_value_change_obj = NULL;
        }
    }
    tick_user_widget_loading_screen(getFlowState(flowState, 14), 23);
}

void create_screen_calendar_events_list() {
    void *flowState = getFlowState(0, 4);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.calendar_events_list = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_add_event_cb(obj, event_handler_cb_calendar_events_list_calendar_events_list, LV_EVENT_ALL, flowState);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffaf5ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xffeff6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj3 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 0), 25);
        }
        {
            lv_obj_t *obj = lv_roller_create(parent_obj);
            objects.obj102 = obj;
            lv_obj_set_pos(obj, 0, 40);
            lv_obj_set_size(obj, 320, 200);
            lv_roller_set_options(obj, "", LV_ROLLER_MODE_NORMAL);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_events_list_obj102, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 200, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 10, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_x(obj, 0, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 0, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff9e9e9e), LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 127, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_SELECTED | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj31 = obj;
            lv_obj_set_pos(obj, 280, 123);
            lv_obj_set_size(obj, 40, 37);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_events_list_obj31, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfff35921), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffe10000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj103 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj32 = obj;
            lv_obj_set_pos(obj, 280, 0);
            lv_obj_set_size(obj, 40, 40);
            lv_obj_add_event_cb(obj, event_handler_cb_calendar_events_list_obj32, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj104 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
        {
            // is_loading_3
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.is_loading_3 = obj;
            lv_obj_set_pos(obj, 0, -302);
            lv_obj_set_size(obj, 320, 240);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_loading_screen(obj, getFlowState(flowState, 7), 29);
        }
    }
    
    tick_screen_calendar_events_list();
}

void tick_screen_calendar_events_list() {
    void *flowState = getFlowState(0, 4);
    (void)flowState;
    tick_user_widget_header(getFlowState(flowState, 0), 25);
    {
        const char *new_val = evalStringArrayPropertyAndJoin(flowState, 2, 3, "Failed to evaluate Options in Roller widget", "\n");
        const char *cur_val = lv_roller_get_options(objects.obj102);
        if (compareRollerOptions((lv_roller_t *)objects.obj102, new_val, cur_val, LV_ROLLER_MODE_NORMAL) != 0) {
            tick_value_change_obj = objects.obj102;
            lv_roller_set_options(objects.obj102, new_val, LV_ROLLER_MODE_NORMAL);
            tick_value_change_obj = NULL;
        }
    }
    {
        if (!(lv_obj_get_state(objects.obj102) & LV_STATE_EDITED)) {
            int32_t new_val = evalIntegerProperty(flowState, 2, 4, "Failed to evaluate Selected in Roller widget");
            int32_t cur_val = lv_roller_get_selected(objects.obj102);
            if (new_val != cur_val) {
                tick_value_change_obj = objects.obj102;
                lv_roller_set_selected(objects.obj102, new_val, LV_ANIM_OFF);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 3, 3, "Failed to evaluate Disabled state");
        bool cur_val = lv_obj_has_state(objects.obj31, LV_STATE_DISABLED);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj31;
            if (new_val) lv_obj_add_state(objects.obj31, LV_STATE_DISABLED);
            else lv_obj_clear_state(objects.obj31, LV_STATE_DISABLED);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 4, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj103);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj103;
            lv_label_set_text(objects.obj103, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 6, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj104);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj104;
            lv_label_set_text(objects.obj104, new_val);
            tick_value_change_obj = NULL;
        }
    }
    tick_user_widget_loading_screen(getFlowState(flowState, 7), 29);
}

void create_screen_tasks() {
    void *flowState = getFlowState(0, 5);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.tasks = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_add_event_cb(obj, event_handler_cb_tasks_tasks, LV_EVENT_ALL, flowState);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfff0fdf4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xffeff6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // is_loading_1
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.is_loading_1 = obj;
            lv_obj_set_pos(obj, 0, -282);
            lv_obj_set_size(obj, 320, 240);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_loading_screen(obj, getFlowState(flowState, 0), 31);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj4 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 2), 33);
        }
        {
            lv_obj_t *obj = lv_roller_create(parent_obj);
            objects.obj105 = obj;
            lv_obj_set_pos(obj, 0, 40);
            lv_obj_set_size(obj, 320, 160);
            lv_roller_set_options(obj, "", LV_ROLLER_MODE_NORMAL);
            lv_obj_add_event_cb(obj, event_handler_cb_tasks_obj105, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 10, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_x(obj, 0, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 0, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff9e9e9e), LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 127, LV_PART_SELECTED | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 200, LV_PART_SELECTED | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj33 = obj;
            lv_obj_set_pos(obj, 279, 102);
            lv_obj_set_size(obj, 37, 37);
            lv_obj_add_event_cb(obj, event_handler_cb_tasks_obj33, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffe10000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj107 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj34 = obj;
            lv_obj_set_pos(obj, 242, 102);
            lv_obj_set_size(obj, 37, 37);
            lv_obj_add_event_cb(obj, event_handler_cb_tasks_obj34, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj108 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
        {
            // txt_new_task
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.txt_new_task = obj;
            lv_obj_set_pos(obj, 5, 200);
            lv_obj_set_size(obj, 310, 37);
            lv_textarea_set_max_length(obj, 128);
            lv_textarea_set_placeholder_text(obj, "new task");
            lv_textarea_set_one_line(obj, true);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_add_event_cb(obj, event_handler_cb_tasks_txt_new_task, LV_EVENT_ALL, flowState);
            lv_obj_add_state(obj, LV_STATE_FOCUSED);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj35 = obj;
            lv_obj_set_pos(obj, 279, 200);
            lv_obj_set_size(obj, 37, 37);
            lv_obj_add_event_cb(obj, event_handler_cb_tasks_obj35, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff86e100), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj109 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
        {
            lv_obj_t *obj = lv_keyboard_create(parent_obj);
            objects.obj106 = obj;
            lv_obj_set_pos(obj, 0, 40);
            lv_obj_set_size(obj, 128, 83);
            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj36 = obj;
            lv_obj_set_pos(obj, 242, 200);
            lv_obj_set_size(obj, 37, 37);
            lv_obj_add_event_cb(obj, event_handler_cb_tasks_obj36, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj110 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
        {
            // qr_share_txt
            lv_obj_t *obj = lv_qrcode_create(parent_obj, 160, lv_color_hex(0xff20429f), lv_color_hex(0xffe2f5fe));
            objects.qr_share_txt = obj;
            lv_obj_set_pos(obj, 81, 40);
            lv_obj_set_size(obj, 160, 160);
            lv_qrcode_update(obj, "", 0);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
        }
    }
    lv_keyboard_set_textarea(objects.obj106, objects.txt_new_task);
    
    tick_screen_tasks();
}

void tick_screen_tasks() {
    void *flowState = getFlowState(0, 5);
    (void)flowState;
    tick_user_widget_loading_screen(getFlowState(flowState, 0), 31);
    tick_user_widget_header(getFlowState(flowState, 2), 33);
    {
        const char *new_val = evalStringArrayPropertyAndJoin(flowState, 3, 3, "Failed to evaluate Options in Roller widget", "\n");
        const char *cur_val = lv_roller_get_options(objects.obj105);
        if (compareRollerOptions((lv_roller_t *)objects.obj105, new_val, cur_val, LV_ROLLER_MODE_NORMAL) != 0) {
            tick_value_change_obj = objects.obj105;
            lv_roller_set_options(objects.obj105, new_val, LV_ROLLER_MODE_NORMAL);
            tick_value_change_obj = NULL;
        }
    }
    {
        if (!(lv_obj_get_state(objects.obj105) & LV_STATE_EDITED)) {
            int32_t new_val = evalIntegerProperty(flowState, 3, 4, "Failed to evaluate Selected in Roller widget");
            int32_t cur_val = lv_roller_get_selected(objects.obj105);
            if (new_val != cur_val) {
                tick_value_change_obj = objects.obj105;
                lv_roller_set_selected(objects.obj105, new_val, LV_ANIM_OFF);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 4, 3, "Failed to evaluate Disabled state");
        bool cur_val = lv_obj_has_state(objects.obj33, LV_STATE_DISABLED);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj33;
            if (new_val) lv_obj_add_state(objects.obj33, LV_STATE_DISABLED);
            else lv_obj_clear_state(objects.obj33, LV_STATE_DISABLED);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 5, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj107);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj107;
            lv_label_set_text(objects.obj107, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 6, 3, "Failed to evaluate Disabled state");
        bool cur_val = lv_obj_has_state(objects.obj34, LV_STATE_DISABLED);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj34;
            if (new_val) lv_obj_add_state(objects.obj34, LV_STATE_DISABLED);
            else lv_obj_clear_state(objects.obj34, LV_STATE_DISABLED);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 7, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj108);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj108;
            lv_label_set_text(objects.obj108, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 8, 3, "Failed to evaluate Text in Textarea widget");
        const char *cur_val = lv_textarea_get_text(objects.txt_new_task);
        uint32_t max_length = lv_textarea_get_max_length(objects.txt_new_task);
        if (strncmp(new_val, cur_val, max_length) != 0) {
            tick_value_change_obj = objects.txt_new_task;
            lv_textarea_set_text(objects.txt_new_task, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 9, 3, "Failed to evaluate Disabled state");
        bool cur_val = lv_obj_has_state(objects.obj35, LV_STATE_DISABLED);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj35;
            if (new_val) lv_obj_add_state(objects.obj35, LV_STATE_DISABLED);
            else lv_obj_clear_state(objects.obj35, LV_STATE_DISABLED);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 10, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj109);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj109;
            lv_label_set_text(objects.obj109, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 12, 3, "Failed to evaluate Disabled state");
        bool cur_val = lv_obj_has_state(objects.obj36, LV_STATE_DISABLED);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.obj36;
            if (new_val) lv_obj_add_state(objects.obj36, LV_STATE_DISABLED);
            else lv_obj_clear_state(objects.obj36, LV_STATE_DISABLED);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 13, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj110);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj110;
            lv_label_set_text(objects.obj110, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = evalBooleanProperty(flowState, 14, 3, "Failed to evaluate Hidden flag");
        bool cur_val = lv_obj_has_flag(objects.qr_share_txt, LV_OBJ_FLAG_HIDDEN);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.qr_share_txt;
            if (new_val) lv_obj_add_flag(objects.qr_share_txt, LV_OBJ_FLAG_HIDDEN);
            else lv_obj_clear_flag(objects.qr_share_txt, LV_OBJ_FLAG_HIDDEN);
            tick_value_change_obj = NULL;
        }
    }
}

void create_screen_paint() {
    void *flowState = getFlowState(0, 6);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.paint = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffdf2f8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xfffaf5ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj5 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 0), 37);
        }
    }
    
    tick_screen_paint();
}

void tick_screen_paint() {
    void *flowState = getFlowState(0, 6);
    (void)flowState;
    tick_user_widget_header(getFlowState(flowState, 0), 37);
}

void create_screen_weather() {
    void *flowState = getFlowState(0, 7);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.weather = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffeff6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xffecfeff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj6 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 0), 41);
        }
        {
            lv_obj_t *obj = lv_img_create(parent_obj);
            lv_obj_set_pos(obj, 60, 55);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_img_set_src(obj, &img_lv_img_weather_unknown);
        }
        {
            // lbl_temperature
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lbl_temperature = obj;
            lv_obj_set_pos(obj, -4, 81);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_main_clock(obj);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_translate_x(obj, -10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj111 = obj;
            lv_obj_set_pos(obj, -4, 155);
            lv_obj_set_size(obj, 310, LV_SIZE_CONTENT);
            add_style_main_date(obj);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_translate_x(obj, -10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
    }
    
    tick_screen_weather();
}

void tick_screen_weather() {
    void *flowState = getFlowState(0, 7);
    (void)flowState;
    tick_user_widget_header(getFlowState(flowState, 0), 41);
    {
        const char *new_val = evalTextProperty(flowState, 3, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.lbl_temperature);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.lbl_temperature;
            lv_label_set_text(objects.lbl_temperature, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 4, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj111);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj111;
            lv_label_set_text(objects.obj111, new_val);
            tick_value_change_obj = NULL;
        }
    }
}

void create_screen_maps() {
    void *flowState = getFlowState(0, 8);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.maps = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffecfdf5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xffeff6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj7 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 0), 45);
        }
    }
    
    tick_screen_maps();
}

void tick_screen_maps() {
    void *flowState = getFlowState(0, 8);
    (void)flowState;
    tick_user_widget_header(getFlowState(flowState, 0), 45);
}

void create_screen_config() {
    void *flowState = getFlowState(0, 9);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.config = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_add_event_cb(obj, event_handler_cb_config_config, LV_EVENT_ALL, flowState);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfffaf5ff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xfffdf2f8), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj8 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 40);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_header(obj, getFlowState(flowState, 0), 49);
        }
        {
            lv_obj_t *obj = lv_tabview_create(parent_obj, LV_DIR_LEFT, 32);
            lv_obj_set_pos(obj, 0, 40);
            lv_obj_set_size(obj, 320, 200);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, " ");
                    objects.obj114 = obj;
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_roller_create(parent_obj);
                            objects.obj112 = obj;
                            lv_obj_set_pos(obj, -13, -13);
                            lv_obj_set_size(obj, 288, 155);
                            lv_roller_set_options(obj, "teste\nteste2\nteste3\nteste", LV_ROLLER_MODE_NORMAL);
                            lv_obj_add_event_cb(obj, event_handler_cb_config_obj112, LV_EVENT_ALL, flowState);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_SELECTED | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff9e9e9e), LV_PART_SELECTED | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_width(obj, 10, LV_PART_SELECTED | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_ofs_x(obj, 0, LV_PART_SELECTED | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_ofs_y(obj, 0, LV_PART_SELECTED | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_opa(obj, 127, LV_PART_SELECTED | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_SELECTED | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 200, LV_PART_SELECTED | LV_STATE_DEFAULT);
                        }
                        {
                            lv_obj_t *obj = lv_btn_create(parent_obj);
                            objects.obj37 = obj;
                            lv_obj_set_pos(obj, 63, 150);
                            lv_obj_set_size(obj, 136, 32);
                            lv_obj_add_event_cb(obj, event_handler_cb_config_obj37, LV_EVENT_ALL, flowState);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    objects.obj115 = obj;
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_label_set_text(obj, "");
                                }
                            }
                        }
                        {
                            // msgbox_pwd
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            objects.msgbox_pwd = obj;
                            lv_obj_set_pos(obj, -13, 187);
                            lv_obj_set_size(obj, 288, 200);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    objects.obj116 = obj;
                                    lv_obj_set_pos(obj, 15, 57);
                                    lv_obj_set_size(obj, 229, LV_SIZE_CONTENT);
                                    lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
                                    lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_label_set_text(obj, "");
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    objects.obj113 = obj;
                                    lv_obj_set_pos(obj, 15, 81);
                                    lv_obj_set_size(obj, 229, 36);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                    lv_obj_add_event_cb(obj, event_handler_cb_config_obj113, LV_EVENT_ALL, flowState);
                                    lv_obj_set_style_text_font(obj, &ui_font_ubuntu_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    lv_obj_t *obj = lv_btn_create(parent_obj);
                                    objects.obj38 = obj;
                                    lv_obj_set_pos(obj, 15, 132);
                                    lv_obj_set_size(obj, 229, 32);
                                    lv_obj_add_event_cb(obj, event_handler_cb_config_obj38, LV_EVENT_ALL, flowState);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.obj117 = obj;
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "");
                                        }
                                    }
                                }
                                {
                                    lv_obj_t *obj = lv_btn_create(parent_obj);
                                    objects.obj39 = obj;
                                    lv_obj_set_pos(obj, 226, -7);
                                    lv_obj_set_size(obj, 32, 32);
                                    lv_obj_add_event_cb(obj, event_handler_cb_config_obj39, LV_EVENT_ALL, flowState);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.obj118 = obj;
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, " ");
                    objects.obj119 = obj;
                }
                {
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, " ");
                    objects.obj120 = obj;
                }
            }
        }
    }
    
    tick_screen_config();
}

void tick_screen_config() {
    void *flowState = getFlowState(0, 9);
    (void)flowState;
    tick_user_widget_header(getFlowState(flowState, 0), 49);
    {
        const char *new_val = evalTextProperty(flowState, 3, 3, "Failed to evaluate Tab name in Tab widget");
        lv_obj_t *tabview = lv_obj_get_parent(lv_obj_get_parent(objects.obj114));
        const char *cur_val = ((lv_tabview_t *)tabview)->map[0];
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj114;
            lv_tabview_rename_tab(tabview, 0, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        if (!(lv_obj_get_state(objects.obj112) & LV_STATE_EDITED)) {
            int32_t new_val = evalIntegerProperty(flowState, 4, 3, "Failed to evaluate Selected in Roller widget");
            int32_t cur_val = lv_roller_get_selected(objects.obj112);
            if (new_val != cur_val) {
                tick_value_change_obj = objects.obj112;
                lv_roller_set_selected(objects.obj112, new_val, LV_ANIM_OFF);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 6, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj115);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj115;
            lv_label_set_text(objects.obj115, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 8, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj116);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj116;
            lv_label_set_text(objects.obj116, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 9, 3, "Failed to evaluate Text in Textarea widget");
        const char *cur_val = lv_textarea_get_text(objects.obj113);
        uint32_t max_length = lv_textarea_get_max_length(objects.obj113);
        if (strncmp(new_val, cur_val, max_length) != 0) {
            tick_value_change_obj = objects.obj113;
            lv_textarea_set_text(objects.obj113, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 11, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj117);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj117;
            lv_label_set_text(objects.obj117, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 13, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj118);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj118;
            lv_label_set_text(objects.obj118, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 14, 3, "Failed to evaluate Tab name in Tab widget");
        lv_obj_t *tabview = lv_obj_get_parent(lv_obj_get_parent(objects.obj119));
        const char *cur_val = ((lv_tabview_t *)tabview)->map[1];
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj119;
            lv_tabview_rename_tab(tabview, 1, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 15, 3, "Failed to evaluate Tab name in Tab widget");
        lv_obj_t *tabview = lv_obj_get_parent(lv_obj_get_parent(objects.obj120));
        const char *cur_val = ((lv_tabview_t *)tabview)->map[2];
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj120;
            lv_tabview_rename_tab(tabview, 2, new_val);
            tick_value_change_obj = NULL;
        }
    }
}

void create_user_widget_header(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    (void)flowState;
    (void)startWidgetIndex;
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 1] = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 36);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &ui_font_ubuntu_24, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff9e9e9e), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_opa(obj, 127, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "");
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 0] = obj;
            lv_obj_set_pos(obj, 4, 4);
            lv_obj_set_size(obj, 32, 32);
            lv_obj_add_event_cb(obj, event_handler_cb_header_obj0, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 2] = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff606060), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "");
                }
            }
        }
    }
}

void tick_user_widget_header(void *flowState, int startWidgetIndex) {
    (void)flowState;
    (void)startWidgetIndex;
    {
        const char *new_val = evalTextProperty(flowState, 0, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(((lv_obj_t **)&objects)[startWidgetIndex + 1]);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = ((lv_obj_t **)&objects)[startWidgetIndex + 1];
            lv_label_set_text(((lv_obj_t **)&objects)[startWidgetIndex + 1], new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 3, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(((lv_obj_t **)&objects)[startWidgetIndex + 2]);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = ((lv_obj_t **)&objects)[startWidgetIndex + 2];
            lv_label_set_text(((lv_obj_t **)&objects)[startWidgetIndex + 2], new_val);
            tick_value_change_obj = NULL;
        }
    }
}

void create_user_widget_loading_screen(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    (void)flowState;
    (void)startWidgetIndex;
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 0] = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 320, 240);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_spinner_create(parent_obj, 1000, 60);
            lv_obj_set_pos(obj, 120, 80);
            lv_obj_set_size(obj, 80, 80);
        }
    }
}

void tick_user_widget_loading_screen(void *flowState, int startWidgetIndex) {
    (void)flowState;
    (void)startWidgetIndex;
}


extern void add_style(lv_obj_t *obj, int32_t styleIndex);
extern void remove_style(lv_obj_t *obj, int32_t styleIndex);

static const char *screen_names[] = { "Main", "Calculator", "Calendar", "Calendar_NewEvent", "Calendar_EventsList", "Tasks", "Paint", "Weather", "Maps", "Config" };
static const char *object_names[] = { "main", "calculator", "calendar", "calendar_new_event", "calendar_events_list", "tasks", "paint", "weather", "maps", "config", "obj0", "obj0__obj0", "obj0__obj1", "obj0__obj2", "obj1", "obj1__obj0", "obj1__obj1", "obj1__obj2", "obj2", "obj2__obj0", "obj2__obj1", "obj2__obj2", "is_loading", "is_loading__obj3", "obj3", "obj3__obj0", "obj3__obj1", "obj3__obj2", "is_loading_3", "is_loading_3__obj3", "is_loading_1", "is_loading_1__obj3", "obj4", "obj4__obj0", "obj4__obj1", "obj4__obj2", "obj5", "obj5__obj0", "obj5__obj1", "obj5__obj2", "obj6", "obj6__obj0", "obj6__obj1", "obj6__obj2", "obj7", "obj7__obj0", "obj7__obj1", "obj7__obj2", "obj8", "obj8__obj0", "obj8__obj1", "obj8__obj2", "btn_calculator", "btn_calendar", "btn_tasks", "btn_paint", "btn_weather", "btn_maps", "btn_config", "obj9", "obj10", "obj11", "obj12", "obj13", "obj14", "obj15", "obj16", "obj17", "obj18", "obj19", "obj20", "obj21", "obj22", "obj23", "obj24", "obj25", "obj26", "obj27", "obj28", "obj29", "obj30", "btn_save", "obj31", "obj32", "obj33", "obj34", "obj35", "obj36", "obj37", "obj38", "obj39", "lbl_main_clock", "lbl_main_date", "txt_calc", "obj40", "obj41", "obj42", "obj43", "obj44", "obj45", "obj46", "obj47", "obj48", "obj49", "obj50", "obj51", "obj52", "obj53", "obj54", "obj55", "obj56", "obj57", "obj58", "obj59", "obj60", "obj61", "obj62", "obj63", "obj64", "obj65", "obj66", "obj67", "obj68", "obj69", "obj70", "obj71", "obj72", "obj73", "obj74", "obj75", "obj76", "obj77", "obj78", "obj79", "obj80", "obj81", "obj82", "obj83", "obj84", "obj85", "obj86", "obj87", "obj88", "obj89", "obj90", "obj91", "obj92", "obj93", "obj94", "obj95", "obj96", "obj97", "obj98", "obj99", "obj100", "txt_event_name", "start_hour", "start_minute", "lbl_from", "end_hour", "end_minute", "lbl_to", "keyboard", "obj101", "obj102", "obj103", "obj104", "obj105", "txt_new_task", "qr_share_txt", "obj106", "obj107", "obj108", "obj109", "obj110", "lbl_temperature", "obj111", "obj112", "msgbox_pwd", "obj113", "obj114", "obj115", "obj116", "obj117", "obj118", "obj119", "obj120" };
static const char *style_names[] = { "home_btn", "MainClock", "MainDate", "body_text" };


typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
    tick_screen_calculator,
    tick_screen_calendar,
    tick_screen_calendar_new_event,
    tick_screen_calendar_events_list,
    tick_screen_tasks,
    tick_screen_paint,
    tick_screen_weather,
    tick_screen_maps,
    tick_screen_config,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    eez_flow_init_styles(add_style, remove_style);
    
    eez_flow_init_screen_names(screen_names, sizeof(screen_names) / sizeof(const char *));
    eez_flow_init_object_names(object_names, sizeof(object_names) / sizeof(const char *));
    eez_flow_init_style_names(style_names, sizeof(style_names) / sizeof(const char *));
    
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main();
    create_screen_calculator();
    create_screen_calendar();
    create_screen_calendar_new_event();
    create_screen_calendar_events_list();
    create_screen_tasks();
    create_screen_paint();
    create_screen_weather();
    create_screen_maps();
    create_screen_config();
}
