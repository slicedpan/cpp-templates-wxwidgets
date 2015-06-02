// <Copyright Holder>. Copyright (C) <Copyright Year(s)>. <License>.
#ifndef HEADER_SRC_APP_H_INCLUDED
#define HEADER_SRC_APP_H_INCLUDED

#include <string>
#include <log4cxx/logger.h>
#include <boost/shared_ptr.hpp>
#include "wx_include.h"

class App : public wxApp {

    public:
        virtual bool OnInit();        
};

#endif
