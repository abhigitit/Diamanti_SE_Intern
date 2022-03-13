
/*
Task 1 : Write a simple REST API example in Golang/C/C++ and post to github
Created the CKRest object rest and established a connection. Based on the response, fetched the response ans diaplyed it.
*/
#include <CkRest.h>

void REST()
    {
        
    CkRest rest;
    bool b = true;
    int port = 80; //Enter port number
    bool Reconnect = true;
    bool success = rest.Connect(URL,port,b,Reconnect); // URL is the endpoint
    if (success != true) {
        std::cout << rest.lastErrorText() << "\r\n";
        return;
    }
    success = rest.AddQueryParam(queryparamater); //Add any query parameter

    const char *response = rest.fullRequestNoBody("GET","/query");
    if (rest.get_LastMethodSuccess() != true) {
        std::cout << rest.lastErrorText() << "\n";
        return;
    }

    std::cout << response << "\r\n";
  }
