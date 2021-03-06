//
// Declaration of clip board class
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

#ifndef CLIPB_H
#define CLIPB_H 

#include "data.h"
#include "floatSpin.h"
#include "mainForm.h"
#include "parameterLimits.h"

#include <qcheckbox.h>
#include <qdialog.h>
#include <qgrid.h>
#include <qhbox.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qpushbutton.h>
#include <qsizepolicy.h>
#include <qwidget.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Clip board dialog widget
class ClipBoard: public QDialog
{
	Q_OBJECT
public:
	ClipBoard( QWidget * parent=0, const char * name=0 );

public slots:
	void setMainFormAddress( MainForm * );
	void setClip( viewParam );

private slots:
	void registerSettings();
	void autoClip();
	void bdone();
	void bapply();
	void bcancel();

private:
	MainForm * mainForm;
        QFSpinBox * clipNearSb, * clipFarSb;
        QLabel * clipNearL, * clipFarL;
	QCheckBox * autoNearCb, *autoFarCb;
};

#endif // CLIPB_H
