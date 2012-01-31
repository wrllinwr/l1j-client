#ifndef __CHAT_WINDOW_H_
#define __CHAT_WINDOW_H_

#include "sdl_window.h"

class client;

class chat_window : public sdl_window
{
	public:
		chat_window(int x, int y, client *who);
		~chat_window();

		virtual void key_press(SDL_KeyboardEvent *button);
		void add_line(char *data);
	private:
		
		void resize();	//reconfigures the height of the chat window
		void submit_chat(const char *blabla, char type);
};

#endif