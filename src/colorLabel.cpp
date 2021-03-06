//
// Implementation of color label widget class
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

#include "colorLabel.h"

// Construct the color label
ColorLabel::ColorLabel( QWidget *parent, const char *name )
        : QWidget( parent, name )
{
	resize( SMALL_LABEL_WIDTH, LABEL_HEIGHT );
}


// Set the label color
void ColorLabel::setColor( float red, float green, float blue )
{
	int redi = (int)floor( (double)red*255.0 );
	int greeni = (int)floor( (double)green*255.0 );
	int bluei = (int)floor( (double)blue*255.0 );

	setPalette( QPalette( QColor( redi, greeni, bluei) ) );
}


// Set colors that indicate that the label is not active
void ColorLabel::switchOff( void )
{
	setPalette( QPalette( QColor( 255, 255, 255 ) ) );
}


// Color the label
void ColorLabel::paintEvent( QPaintEvent * )
{
	QPainter p( this );
}


// Set size of the label
QSizePolicy ColorLabel::sizePolicy() const
{
	return QSizePolicy( QSizePolicy::Expanding, QSizePolicy::Fixed);
}


// Set size of the label
QSize ColorLabel::minimumSizeHint() const
{
	return QSize( SMALL_LABEL_WIDTH, LABEL_HEIGHT );
}
