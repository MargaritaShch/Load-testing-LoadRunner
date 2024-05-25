Action()
{
	lr_start_transaction("UC5_ExistingReservationDelition");
	/* Home Page */
	lr_start_transaction("HomePage");

    web_set_sockets_option("SSL_VERSION", "AUTO");
    web_add_auto_header("Sec-Fetch-Dest", "frame");
    web_add_auto_header("Sec-Fetch-Mode", "navigate");
    web_add_auto_header("Sec-Fetch-Site", "same-origin");
    web_add_auto_header("Upgrade-Insecure-Requests", "1");
    web_add_auto_header("sec-ch-ua", "\"Google Chrome\";v=\"123\", \"Not:A-Brand\";v=\"8\", \"Chromium\";v=\"123\"");
    web_add_auto_header("sec-ch-ua-mobile", "?0");
    web_add_auto_header("sec-ch-ua-platform", "\"Windows\"");
    
  /*проверка вхождения слов в ответе*/
    web_reg_find("Fail=NotFound",
		"Text/IC=Welcome to the Web Tours site.",
		LAST);

    web_url("welcome.pl", "URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/WebTours/", "Snapshot=t1.inf", "Mode=HTTP", LAST);
    web_url("nav.pl", "URL=http://localhost:1080/cgi-bin/nav.pl?in=home", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", "Snapshot=t2.inf", "Mode=HTTP", LAST);

    lr_end_transaction("HomePage", LR_AUTO);
    
    lr_think_time(5);

    /* Login */
    lr_start_transaction("Login");
    
     web_reg_find("Fail=NotFound",
		"Text/IC=Welcome, <b>{Login}</b>, to the Web Tours reservation pages.",
		LAST);
    
    web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);
	

    web_submit_data("login.pl", 
                    "Action=http://localhost:1080/cgi-bin/login.pl", 
                    "Method=POST", 
                    "RecContentType=text/html", 
                    "Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
                    "Snapshot=t3.inf", "Mode=HTTP", ITEMDATA, 
                    "Name=userSession", "Value={userSession}", ENDITEM, 
                    "Name=username", "Value={Login}", ENDITEM, 
                    "Name=password", "Value={Password}", ENDITEM, 
                    "Name=login.x", "Value=61", ENDITEM,
                    "Name=login.y", "Value=4", ENDITEM, 
                    "Name=JSFormSubmit", "Value=off", ENDITEM, LAST);

    lr_end_transaction("Login", LR_AUTO);
    
    lr_think_time(5);

    /* Ticket List */
    lr_start_transaction("Ticket_List");

    web_url("Itinerary Button", "URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", "Snapshot=t6.inf", "Mode=HTTP", LAST);
    web_url("itinerary.pl", "URL=http://localhost:1080/cgi-bin/itinerary.pl", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", "Snapshot=t7.inf", "Mode=HTTP", LAST);

    lr_end_transaction("Ticket_List", LR_AUTO);
    
    lr_think_time(5);

    /* Delete Ticket */
    lr_start_transaction("Delete_Ticket");
    
    web_reg_save_param("flightID",
		"LB/IC=flightID\" value=\"",
		"RB/IC=\"",
		LAST);

    web_submit_data("itinerary.pl_2", 
                    "Action=http://localhost:1080/cgi-bin/itinerary.pl", 
                    "Method=POST", "RecContentType=text/html", 
                    "Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
                    "Snapshot=t9.inf", "Mode=HTTP", ITEMDATA, 
                    "Name=1", "Value=on", ENDITEM, 
                    "Name=flightID", "Value={flightID}", ENDITEM, 
                    "Name=flightID", "Value={flightID}", ENDITEM, 
                    "Name=flightID", "Value= {flightID}", ENDITEM, 
                    "Name=removeFlights.x", "Value=78", ENDITEM, 
                    "Name=removeFlights.y", "Value=9", ENDITEM, 
                    "Name=.cgifields", "Value=1", ENDITEM, 
                    "Name=.cgifields", "Value=3", ENDITEM, 
                    "Name=.cgifields", "Value=2", ENDITEM, LAST);
    
    web_reg_save_param("flightID",
		"LB/IC=flightID\" value=\"",
		"RB/IC=\"",
		LAST);

    lr_end_transaction("Delete_Ticket", LR_AUTO);
    
    lr_think_time(5);

    /* Logout */
    lr_start_transaction("Logout");
    
    web_reg_find("Fail=NotFound",
		"Text/IC=Welcome to the Web Tours site.",

    web_url("SignOff Button", "URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", "Snapshot=t10.inf", "Mode=HTTP", LAST);
    web_url("nav.pl_4", "URL=http://localhost:1080/cgi-bin/nav.pl?in=home", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", "Snapshot=t11.inf", "Mode=HTTP", LAST);

    lr_end_transaction("Logout", LR_AUTO);
    
    lr_end_transaction("UC5_ExistingReservationDelition");

	return 0;
}