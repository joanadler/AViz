//
// Declaration of size box class used in atom board etc.
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

#ifndef SIZEBO_H
#define SIZEBO_H 

#include "data.h"

#include <qbuttongroup.h>
#include <qhbox.h>
#include <qlabel.h>
#include <qradiobutton.h>
#include <qwidget.h>

#include <stdio.h>

// Size box widget
class SizeBox: public QHBox
{
	Q_OBJECT
public:
	SizeBox( QWidget * parent=0, const char * name=0 );

public slots:
	void setParticle( particleData *, int );
	void readToggles( particleData *, int );
	void setDisabled( bool );

private slots:

private:
	QLabel * sizeL;
	QButtonGroup * rSize;
        QRadioButton * rSize0;
        QRadioButton * rSize1;
        QRadioButton * rSize2;
        QRadioButton * rSize3;
        QRadioButton * rSize4;
};

#endif // SIZEBO_H
