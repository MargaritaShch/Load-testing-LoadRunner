Action()
{

	 lr_start_transaction("UC6_NewUserRegistration");
	 /* HomePage */
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
	
    /* Registration */
    lr_start_transaction("Registration");
    
    web_reg_find("Fail=NotFound",
		"Text=Please choose a username and password",
		LAST)

    web_add_header("Origin", "http://localhost:1080");
    web_add_auto_header("Sec-Fetch-User", "?1");

    web_url("registration_form.pl", 
        "URL=http://localhost:1080/cgi-bin/registration_form.pl", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://localhost:1080/WebTours/home.html", 
        "Snapshot=t4.inf", 
        "Mode=HTTP", 
        LAST);

    lr_end_transaction("Registration", LR_AUTO);
    
    lr_think_time(5);

    /* Enter Data */
    lr_start_transaction("EnterData");

    web_submit_data("register.pl", 
        "Action=http://localhost:1080/cgi-bin/register.pl", 
        "Method=POST", 
        "RecContentType=text/html", 
        "Referer=http://localhost:1080/cgi-bin/registration_form.pl", 
        "Snapshot=t5.inf", 
        "Mode=HTTP", 
        ITEMDATA, 
        "Name=firstName", "Value=John", ENDITEM, 
        "Name=lastName", "Value=Doe", ENDITEM, 
        "Name=email", "Value=johndoe@example.com", ENDITEM, 
        "Name=password", "Value=12345", ENDITEM, 
        "Name=passwordConfirm", "Value=12345", ENDITEM, 
        LAST);

    lr_end_transaction("EnterData", LR_AUTO);
    
    lr_think_time(5);

    /* Personal Area */
    lr_start_transaction("PersonalArea");

    web_url("profile.pl", 
        "URL=http://localhost:1080/cgi-bin/profile.pl", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
        "Snapshot=t6.inf", 
        "Mode=HTTP", 
        LAST);

    lr_end_transaction("PersonalArea", LR_AUTO);
    
    lr_think_time(5);

    /* Logout */
    lr_start_transaction("Logout");
    
    web_reg_find("Fail=NotFound",
		"Text/IC=Welcome to the Web Tours site.",

    web_url("SignOff Button", 
        "URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
        "Snapshot=t7.inf", 
        "Mode=HTTP", 
        LAST);

    lr_end_transaction("Logout", LR_AUTO);
    
    lr_end_transaction("UC6_NewUserRegistration");

	return 0;
}