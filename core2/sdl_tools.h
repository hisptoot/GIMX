/*
 Copyright (c) 2011 Mathieu Laurendeau <mat.lau@laposte.net>
 License: GPLv3
 */

#ifndef SDL_TOOLS_H_
#define SDL_TOOLS_H_

#include <SDL/SDL.h>

#define EVENT_BUFFER_SIZE 256

extern int merge_all_devices;

int sdl_initialize();
void sdl_grab_toggle();
void sdl_grab();
void sdl_release_unused();
void sdl_quit();
void sdl_free_mouse_keyboard_names();

inline char* sdl_get_mouse_name(int);
inline char* sdl_get_keyboard_name(int);
inline int sdl_get_mouse_virtual_id(int);
inline int sdl_get_keyboard_virtual_id(int);
inline int sdl_get_device_id(SDL_Event*);
inline char* sdl_get_joystick_name(int);
inline int sdl_get_joystick_virtual_id(int);
inline int sdl_preprocess_events(SDL_Event*, int);
int sdl_is_sixaxis(int);

inline void sdl_pump_events();
inline int sdl_peep_events(SDL_Event*, int, SDL_eventaction, Uint32);

#endif /* SDL_TOOLS_H_ */