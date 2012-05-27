/*
 * mldefs.h
 * QEmailScrapper: Utility for scrapping a file in search of emails
 * Copyright (C) 2012  Daniel Ripoll <info@danielripoll.es>
 * http://danielripoll.es 
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef MLAPPLICATION_H
#define MLAPPLICATION_H

#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include "mldefs.h"


class ML_EXPORT MlApplication : public QApplication
{
    Q_OBJECT

private:
    QMainWindow *m_mainWindow;

public:
    MlApplication ( int &argc, char **argv );
    ~MlApplication();
    
#if CONFIG_DEBUG == TRUE
    virtual bool notify ( QObject *object, QEvent *event );
#endif

};


/// We declare g_theApp as extern to work in multilibraries
extern ML_EXPORT MlApplication *g_theApp;


#endif // MLAPPLICATION_H

