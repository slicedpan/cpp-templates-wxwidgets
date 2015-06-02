#include "frame.h"

wxBEGIN_EVENT_TABLE(RootFrame, wxFrame)
    EVT_MENU(ID_Hello, RootFrame::OnHello)
    EVT_MENU(wxID_EXIT,  RootFrame::OnExit)
    EVT_MENU(wxID_ABOUT, RootFrame::OnAbout)
wxEND_EVENT_TABLE()

RootFrame::RootFrame() : 
    wxFrame(NULL, wxID_ANY, "Hello world", wxPoint(50, 50), wxSize(450, 340))
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                    "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    CreateStatusBar();
    SetStatusText( "Welcome to wxWidgets!" );
}

void RootFrame::OnAbout(wxCommandEvent& event) {

}

void RootFrame::OnExit(wxCommandEvent& event) {
    
}

void RootFrame::OnHello(wxCommandEvent& event) {
    
}