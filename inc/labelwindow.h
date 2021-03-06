/*
 * Copyright (c) 2011 Research In Motion Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LABELWINDOW_H_
#define LABELWINDOW_H_

#include <screen/screen.h>
#include "window.h"

class PNGReader;

class LabelWindow : public EmulationWindow
{
public:
	static LabelWindow *create(screen_context_t context, int width, int height);

	void draw(PNGReader &reader);
	void showAt(screen_window_t parent, int x, int y);
	void move(int x, int y);

protected:
	LabelWindow(screen_context_t screenContext, int width, int height)
		: EmulationWindow(screenContext, width, height)
	{}
};

#endif /* LABELWINDOW_H_ */
