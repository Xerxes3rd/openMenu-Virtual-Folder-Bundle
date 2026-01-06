/*
 * File: ui_folders.h
 * Project: openmenu
 * File Created: 2025-12-31
 * Author: Derek Pascarella (ateam)
 * -----
 * Copyright (c) 2025
 * License: BSD 3-clause "New" or "Revised" License, http://www.opensource.org/licenses/BSD-3-Clause
 */

#pragma once

#define UI_NAME                      FOLDERS

#define MAKE_FN(name, func)          void name##_##func(void)
#define FUNCTION(signal, func)       MAKE_FN(signal, func)

#define MAKE_FN_INPUT(name, func)    void name##_##func(unsigned int button)
#define FUNCTION_INPUT(signal, func) MAKE_FN_INPUT(signal, func)

/* Called once on boot */
FUNCTION(UI_NAME, init);
/* Called when UI mode is selected/switched to */
FUNCTION(UI_NAME, setup);
/* Handles incoming input each frame */
FUNCTION_INPUT(UI_NAME, handle_input);
/* Called per frame to draw opaque polygons */
FUNCTION(UI_NAME, drawOP);
/* Called per frame to draw transparent polygons */
FUNCTION(UI_NAME, drawTR);
