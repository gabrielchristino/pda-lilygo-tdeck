#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations



// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_APP_NAME = 0,
    FLOW_GLOBAL_VARIABLE_NOW_TIME = 1,
    FLOW_GLOBAL_VARIABLE_TODAY_DATE = 2,
    FLOW_GLOBAL_VARIABLE_SELECTED_YEAR = 3,
    FLOW_GLOBAL_VARIABLE_SELECTED_DAY = 4,
    FLOW_GLOBAL_VARIABLE_SELECTED_MONTH = 5,
    FLOW_GLOBAL_VARIABLE_EVENTS_LIST = 6,
    FLOW_GLOBAL_VARIABLE_EVENTS_LIST_FILTERED = 7
};

// Native global variables



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/