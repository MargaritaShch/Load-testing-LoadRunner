Action()
{
	lr_start_transaction("UC4_TravelItineraryListView");
	
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
	
	web_url("welcome.pl", 
	    "URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
	    "Resource=0", 
	    "RecContentType=text/html", 
	    "Referer=http://localhost:1080/WebTours/", 
	    "Snapshot=t1.inf", 
	    "Mode=HTTP", 
	    LAST);
	
	web_url("nav.pl", 
	    "URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
	    "Resource=0", 
	    "RecContentType=text/html", 
	    "Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
	    "Snapshot=t3.inf", 
	    "Mode=HTTP", 
	    LAST);
	
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
	    "Snapshot=t5.inf", 
	    "Mode=HTTP", 
	    ITEMDATA, 
	    "Name=userSession", "Value={userSession}", ENDITEM, 
	    "Name=username", "Value={Login}", ENDITEM, 
	    "Name=password", "Value={Password}", ENDITEM, 
	    "Name=login.x", "Value=51", ENDITEM, 
	    "Name=login.y", "Value=10", ENDITEM, 
	    "Name=JSFormSubmit", "Value=off", ENDITEM, 
	    LAST);
	
	lr_end_transaction("Login", LR_AUTO);
	
	lr_think_time(5);
	
	/* Search Ticket */
	lr_start_transaction("SearchTicket");
	
	web_url("Search Flights Button", 
	    "URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
	    "Resource=0", 
	    "RecContentType=text/html", 
	    "Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
	    "Snapshot=t8.inf", 
	    "Mode=HTTP", 
	    LAST);
	
	lr_end_transaction("SearchTicket", LR_AUTO);
	
	lr_end_transaction("UC4_TravelItineraryListView");

	return 0;
}