//
// "$Id: Fl_Tile.H,v 1.1 2007-09-01 23:40:03 dcommander Exp $"
//
// Tile header file for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2005 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

#ifndef Fl_Tile_H
#define Fl_Tile_H

#include "Fl_Group.H"

class FL_EXPORT Fl_Tile : public Fl_Group {
public:
  int handle(int);
  Fl_Tile(int X,int Y,int W,int H,const char*l=0) : Fl_Group(X,Y,W,H,l) {}
  void resize(int, int, int, int);
  void position(int, int, int, int);
};

#endif

//
// End of "$Id: Fl_Tile.H,v 1.1 2007-09-01 23:40:03 dcommander Exp $".
//
