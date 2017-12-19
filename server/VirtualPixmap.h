/* Copyright (C)2011, 2013-2014 D. R. Commander
 *
 * This library is free software and may be redistributed and/or modified under
 * the terms of the wxWindows Library License, Version 3.1 or (at your option)
 * any later version.  The full license is in the LICENSE.txt file included
 * with this distribution.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * wxWindows Library License for more details.
 */

#ifndef __VIRTUALPIXMAP_H__

#include "VirtualDrawable.h"
#include "Frame.h"


namespace vglserver
{
	class VirtualPixmap : public VirtualDrawable
	{
		public:

			VirtualPixmap(Display *dpy, XVisualInfo *vis, Pixmap pm);
			~VirtualPixmap();
			int init(int width, int height, int depth, GLXFBConfig config,
				const int *attribs);
			void readback(void);
			Pixmap get3DX11Pixmap(void);

			XVisualInfo *getVisual(void)
			{
				return oglDraw ? oglDraw->getVisual() : NULL;
			}

		private:

			vglcommon::Profiler profPMBlit;
			vglcommon::FBXFrame *frame;
	};
}

#endif // __VIRTUALPIXMAP_H__
