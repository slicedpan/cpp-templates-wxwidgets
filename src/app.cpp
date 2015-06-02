#include <iostream>
#include <cstdlib>
#include <cctype>
#include <exception>
#include <stdexcept>
#include <memory>
#include <log4cxx/logger.h>
#include <log4cxx/level.h>
#include <log4cxx/consoleappender.h>
#include <log4cxx/patternlayout.h>
#include "app.h"
#include "appinfo.h"
#include "frame.h"

bool App::OnInit() {
    RootFrame* frame = new RootFrame();
    frame->Show(true);
    return true;
}

wxIMPLEMENT_APP(App);