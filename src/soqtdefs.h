/**************************************************************************
 *
 *  Copyright (C) 2000 by Systems in Motion.  All rights reserved.
 *
 *  This file is part of the Coin library.
 *
 *  This file may be distributed under the terms of the Q Public License
 *  as defined by Troll Tech AS of Norway and appearing in the file
 *  LICENSE.QPL included in the packaging of this file.
 *
 *  If you want to use Coin in applications not covered by licenses
 *  compatible with the QPL, you can contact SIM to aquire a
 *  Professional Edition license for Coin.
 *
 *  Systems in Motion AS, Prof. Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ sales@sim.no Voice: +47 22114160 Fax: +47 67172912
 *
 **************************************************************************/

#ifndef SOQT_INTERNALDEFS_H
#define SOQT_INTERNALDEFS_H

// *************************************************************************

#ifdef __FILE__
#define SOQT_STUB_FILE __FILE__
#else
#define SOQT_STUB_FILE ((char *)0L)
#endif

#ifdef __LINE__
#define SOQT_STUB_LINE __LINE__
#else
#define SOQT_STUB_LINE 0
#endif

#if HAVE_VAR___PRETTY_FUNCTION__
#define SOQT_STUB_FUNC __PRETTY_FUNCTION__
#else
#if HAVE_VAR___FUNCTION__
#define SOQT_STUB_FUNC __FUNCTION__
#else
#define SOQT_STUB_FUNC ((char *)0L)
#endif
#endif

// SOQT_STUB(): this is the method which prints out stub
// information. Used where there is functionality missing.

#include <stdio.h> // fprintf()

// This stupid thing is here to silence some compilers that complain on
// constant if-expressions.
inline int _not_null( const void * arg ) { return (arg != NULL) ? 1 : 0; }

#define SOQT_STUB() \
  do { \
    (void)fprintf(stderr, "STUB: functionality not yet completed"); \
    if ( _not_null(SOQT_STUB_FILE) ) { \
      (void)fprintf(stderr, " at %s", SOQT_STUB_FILE); \
      if ( _not_null((void *)SOQT_STUB_LINE) ) \
        (void)fprintf(stderr, ":line %u", SOQT_STUB_LINE); \
      if ( _not_null(SOQT_STUB_FUNC) ) \
        (void)fprintf(stderr, ":[%s]", SOQT_STUB_FUNC); \
    } \
    (void)fprintf(stderr, "\n"); \
  } while (0)

#define SOQT_STUB_ONCE() \
  do { \
    static int first = 1; \
    if ( first ) { \
      first = 0; \
      (void)fprintf(stderr, "STUB: functionality not yet completed (first and last warning)"); \
      if ( _not_null(SOQT_STUB_FILE) ) { \
        (void)fprintf(stderr, " at %s", SOQT_STUB_FILE); \
        if ( _not_null((void *)SOQT_STUB_LINE) ) \
          (void)fprintf(stderr, ":line %u", SOQT_STUB_LINE); \
        if ( _not_null(SOQT_STUB_FUNC) ) \
          (void)fprintf(stderr, ":[%s]", SOQT_STUB_FUNC); \
      } \
      (void)fprintf(stderr, "\n"); \
    } \
  } while (0)

// *************************************************************************

#endif // ! SOQT_INTERNALDEFS_H
