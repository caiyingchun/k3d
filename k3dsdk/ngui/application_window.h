#ifndef K3DSDK_NGUI_APPLICATION_WINDOW_H
#define K3DSDK_NGUI_APPLICATION_WINDOW_H

// K-3D
// Copyright (c) 1995-2004, Timothy M. Shead
//
// Contact: tshead@k-3d.com
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public
// License along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

/** \file
		\author Tim Shead (tshead@k-3d.com)
*/

#include "ui_component.h"

#include <gtkmm/window.h>

namespace k3d
{

namespace ngui
{

/////////////////////////////////////////////////////////////////////////////
// application_window

/// Provides a standard top-level window that will be closed automatically if the application is closed
class application_window :
        public Gtk::Window,
	public ui_component
{
	typedef Gtk::Window base;

public:
	application_window();
	virtual ~application_window() {}

	bool on_key_press_event(GdkEventKey* event);
	bool on_delete_event(GdkEventAny* event);

	/// Closes the window
	void close();

private:
	/// Override in derived classes to handle cleanup when the window is closed
	virtual void on_close();
};

} // namespace ngui

} // namespace k3d

#endif // !K3DSDK_NGUI_APPLICATION_WINDOW_H

