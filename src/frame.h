#ifndef HEADER_SRC_FRAME_INCLUDED
#define HEADER_SRC_FRAME_INCLUDED

#include "wx_include.h"

class RootFrame : public wxFrame {
	public:
		RootFrame();
	private:
		void OnHello(wxCommandEvent& event);
		void OnExit(wxCommandEvent& event);
		void OnAbout(wxCommandEvent& event);

		wxDECLARE_EVENT_TABLE();	
};

enum {
	ID_Hello
};

#endif