//
// Declaration of annotation board class
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

#ifndef ANNOTB_H
#define ANNOTB_H 

#include "data.h"
#include "mainForm.h"

#include <qcheckbox.h>
#include <qdialog.h>
#include <qgrid.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qspinbox.h>
#include <qvbox.h>
#include <qwidget.h>


// Annotation board dialog widget
class AnnotationBoard: public QDialog
{
	Q_OBJECT
public:
	AnnotationBoard( QWidget * parent=0, const char * name=0 );

public slots:
	void setMainFormAddress( MainForm * );
	void setAnnotation( viewParam );

private slots:
	void registerSettings();
	void bdone();
	void bapply();
	void bcancel();

private:
	MainForm * mainForm;
	QCheckBox * showAnnotationCb;
	QLineEdit * annotationTextLe;
	QSpinBox * annotationXSb;
	QSpinBox * annotationYSb;
	QSpinBox * annotationSizeSb;
};

#endif // ANNOTB_H
