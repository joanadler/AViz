//
// Declaration of color label class
//

/**********************************************************************
Copyright (C) 2001 - 2003  Geri Wagner

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA

Contact address: Computational Physics Group, Dept. of Physics,
                 Technion. 32000 Haifa Israel
                 gery@tx.technion.ac.il
***********************************************************************/

#ifndef COLORL_H
#define COLORL_H 

#include "defaults.h"
 
#include <qhbox.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qpainter.h>
#include <qslider.h>
#include <qwidget.h>

#include <stdio.h>
#include <math.h>

// Color label class definition
class ColorLabel: public QWidget
{
    Q_OBJECT
public:
	ColorLabel( QWidget *parent=0, const char *name=0 );
        QSizePolicy sizePolicy() const;
        QSize minimumSizeHint() const;

public slots:
	void setColor( float, float, float );
	void switchOff( void );

protected:
	void paintEvent( QPaintEvent * );
};


#endif // COLORL_H
