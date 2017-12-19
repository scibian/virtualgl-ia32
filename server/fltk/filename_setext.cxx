//
// "$Id: filename_setext.cxx,v 1.1 2007-08-31 10:13:44 dcommander Exp $"
//
// Filename extension routines for the Fast Light Tool Kit (FLTK).
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

// Replace .ext with new extension
// If no . in name, append new extension
// If new extension is null, act like it is ""

#include <FL/filename.H>
#include "flstring.h"

char *fl_filename_setext(char *buf, int buflen, const char *ext) {
  char *q = (char *)fl_filename_ext(buf);
  if (ext) {
    strlcpy(q,ext,buflen - (q - buf));
  } else *q = 0;
  return(buf);
}


//
// End of "$Id: filename_setext.cxx,v 1.1 2007-08-31 10:13:44 dcommander Exp $".
//
