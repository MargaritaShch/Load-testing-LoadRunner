Action()
{
	lr_start_transaction("UC2_TicketSearchWithoutPayment");
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
    
    web_add_header("Origin", "http://localhost:1080");
    web_add_auto_header("Sec-Fetch-User", "?1");
    web_submit_data("login.pl", 
                    "Action=http://localhost:1080/cgi-bin/login.pl", 
                    "Method=POST", 
                    "RecContentType=text/html", 
                    "Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
                    "Snapshot=t3.inf", "Mode=HTTP", ITEMDATA, 
                    "Name=userSession", "Value=138768.088780883HVDHiiDpfzzzzzzHtcicHpDAVt", ENDITEM, 
                    "Name=username", "Value={Login}", 
    				"Name=password", "Value={Password}"
                    "Name=login.x", "Value=81", ENDITEM, 
                    "Name=login.y", "Value=1", ENDITEM, "Name=JSFormSubmit", "Value=off", ENDITEM, LAST);
    
    lr_end_transaction("Login", LR_AUTO);
    
    lr_think_time(5);

    /* Search for Ticket */
    lr_start_transaction("SearchTicket");
    
    web_url("Search Flights Button", 
            "URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
            "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
            "Snapshot=t6.inf", "Mode=HTTP", LAST);
    
    lr_end_transaction("SearchTicket", LR_AUTO);
    
    lr_think_time(5);

    /* Enter Dates */
    lr_start_transaction("EnterDates");
    lr_save_datetime("%m/%d/%Y", DATE_NOW, "departDate");
   	lr_save_datetime("%m/%d/%Y", DATE_NOW + ONE_DAY*1, "returnDate");
    
    web_url("nav.pl_3", "URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", "Snapshot=t7.inf", "Mode=HTTP", LAST);
    web_url("reservations.pl", "URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", "Snapshot=t8.inf", "Mode=HTTP", LAST);
    
    lr_end_transaction("EnterDates", LR_AUTO);
    
    lr_think_time(5);

    /* Select Time */
    lr_start_transaction("SelectTime");
    
    
    
    web_add_auto_header("Origin", "http://localhost:1080");
    web_submit_data("reservations.pl_2", 
                    "Action=http://localhost:1080/cgi-bin/reservations.pl", 
                    "Method=POST", 
                    "RecContentType=text/html",
                    "Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
                    "Snapshot=t9.inf", 
                    "Mode=HTTP", 
                    ITEMDATA,
                    "Name=advanceDiscount", "Value=0", ENDITEM, 
                    "Name=depart", "Value={depart}", ENDITEM,
                    "Name=departDate", "Value={departDate}", ENDITEM, 
                    "Name=arrive", "Value={arrive}", ENDITEM, 
                    "Name=returnDate", "Value={returnDate}", ENDITEM,
                    "Name=numPassengers", "Value=1", ENDITEM, 
                    "Name=seatPref", "Value={seatPref}", ENDITEM,
                    "Name=seatType", "Value={seatType}", ENDITEM, 
                    "Name=findFlights.x", "Value=40", ENDITEM,
                    "Name=findFlights.y", "Value=7", ENDITEM, 
                    "Name=.cgifields", "Value=roundtrip", ENDITEM,
                    "Name=.cgifields", "Value={seatType}", ENDITEM, 
                    "Name=.cgifields", "Value={seatPref}", ENDITEM, LAST);
    
    lr_end_transaction("SelectTime", LR_AUTO);
    
    lr_think_time(5);

    /* Logout */
    lr_start_transaction("Logout");
    
    web_reg_find("Fail=NotFound",
		"Text/IC=Welcome to the Web Tours site.",
		LAST);
    
    web_revert_auto_header("Origin");
    lr_think_time(4);
    web_url("SignOff Button", "URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", "Snapshot=t11.inf", "Mode=HTTP", LAST);
    web_url("nav.pl_4", "URL=http://localhost:1080/cgi-bin/nav.pl?in=home", "Resource=0", "RecContentType=text/html", "Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", "Snapshot=t12.inf", "Mode=HTTP", LAST);
    
    lr_end_transaction("Logout", LR_AUTO);
	
	lr_end_transaction("UC2_TicketSearchWithoutPayment");

	return 0;
}