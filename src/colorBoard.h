//
// Declaration of color board class
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

#ifndef COLORB_H
#define COLORB_H 

#include "colorLabel.h"
#include "data.h"
#include "defaults.h"
#include "defaultParticles.h"
#include "fileFunctions.h"
#include "memoryFunctions.h"

#include <qcombobox.h>
#include <qdialog.h>
#include <qframe.h>
#include <qhbox.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qpainter.h>
#include <qpushbutton.h>
#include <qsizepolicy.h>
#include <qslider.h>
#include <qvbox.h>
#include <qwidget.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/stat.h>
#include <unistd.h>

// Note: Pointers to composite widgets are defined in 
// mainForm.cpp and not here -- it causes problems 
// regarding the mutual inclusion of  header files 

// Color board dialog widget
class ColorBoard: public QDialog
{
	Q_OBJECT
public:
	ColorBoard( QWidget * parent=0, const char * name=0 );

public slots:
	void buildLayout( char );
	void setAtomBoardAddress( char * );
	void setSpinBoardAddress( char * );
	void setLcBoardAddress( char * );
	void setPolymerBoardAddress( char * );
	void setPoreBoardAddress( char * );
	void setColor( float, float, float );
	void setColor( float, float, float, float, float, float );
	void setColor( float, float, float, float, float, float, float, float, float );
	void setLabel( char * );
	void setLabel( char *, char * );
	void setLabel( char *, char *, char * );

private slots:
	void adjustColor0();
	void adjustColor1();
	void adjustColor2();
	void bdone();
	void bapply();
	void bcancel();

private:
	QWidget * ab;
	QWidget * sb;
	QWidget * lcb;
	QWidget * pob;
	QWidget * pb;
	QGridLayout * colorBox;
	QHBox * hb0, * hb1, * hb2, *hb9;
	QLabel *atomL; 
	QLabel * topL, * centerL, * bottomL;
	ColorLabel * colorLabel0;
	ColorLabel * colorLabel1;
	ColorLabel * colorLabel2;
	QComboBox * atomSpinCob;
	QSlider * redS0, * greenS0, * blueS0;
	QSlider * redS1, * greenS1, * blueS1;
	QSlider * redS2, * greenS2, * blueS2;
	float red0, red1, red2; 
	float green0, green1, green2; 
	float blue0, blue1, blue2;	
	float red0Org, red1Org, red2Org;
	float green0Org, green1Org, green2Org;
	float blue0Org, blue1Org, blue2Org;	
	int numRows;
	int numCols;
	int canvCol;
};

#endif // COLORB_H
