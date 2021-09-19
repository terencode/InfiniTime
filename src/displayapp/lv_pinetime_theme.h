/**
 * @file lv_pinetime_theme.h
 *
 */

#ifndef LV_PINETIME_THEME_H
#define LV_PINETIME_THEME_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include <lvgl/lvgl.h>

/*********************
 *      DEFINES
 *********************/
#define LV_IT_COLOR_BUTTON LV_COLOR_MAKE(0x2f, 0x35, 0x40)
#define LV_IT_COLOR_BUTTON_DISABLED LV_COLOR_MAKE(0x08, 0x08, 0x08)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the default
 * @param color_primary the primary color of the theme
 * @param color_secondary the secondary color for the theme
 * @param flags ORed flags starting with `LV_THEME_DEF_FLAG_...`
 * @param font_small pointer to a small font
 * @param font_normal pointer to a normal font
 * @param font_subtitle pointer to a large font
 * @param font_title pointer to a extra large font
 * @return a pointer to reference this theme later
 */
lv_theme_t* lv_pinetime_theme_init(lv_color_t color_primary,
                                   lv_color_t color_secondary,
                                   uint32_t flags,
                                   const lv_font_t* font_small,
                                   const lv_font_t* font_normal,
                                   const lv_font_t* font_subtitle,
                                   const lv_font_t* font_title);
/**********************
 *      MACROS
 **********************/

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
