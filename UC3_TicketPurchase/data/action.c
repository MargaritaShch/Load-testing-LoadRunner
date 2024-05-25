Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"123\", \"Not:A-Brand\";v=\"8\", \"Chromium\";v=\"123\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=123", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"123\", \"Not:A-Brand\";v=\"8\", \"Chromium\";v=\"123\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("OTZ=7478690_44_44_123780_40_436260; DOMAIN=accounts.google.com");

	web_add_cookie("SID=g.a000hwjQQS7XdT-OHa6ShTBD-_l9lYH8X_hQto5JYyyQqQ7gKnEJ4TPGBKGP8F9jgH2IYpaOfQACgYKAUoSAQASFQHGX2MiQP5D1YSENewnBbrFtoByUBoVAUF8yKo_AtIfBuXyU_jCj43AMOVc0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=g.a000hwjQQS7XdT-OHa6ShTBD-_l9lYH8X_hQto5JYyyQqQ7gKnEJ0EjuY06xqSAQIzzhcjw-0QACgYKAX8SAQASFQHGX2MideLkOkjYKcPGgMIiPoeyAhoVAUF8yKqXctpQQ9wr07vliuVMaaIi0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=g.a000hwjQQS7XdT-OHa6ShTBD-_l9lYH8X_hQto5JYyyQqQ7gKnEJPUxN-pvW6jDrAmwBcEbSWgACgYKAfISAQASFQHGX2MijMeWCUJGz-q6dDFmajxlBRoVAUF8yKqFblYhwC9mhPRnIclEhohB0076; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=A-zCTuLalkC5-R4W7; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AdndOkaPmTwQVwT1J; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=OJ3MjMp4pu7Rc-du/AdcIqb5qUuMiM8dKB; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=bIt0w1W8fwulZ7Mq/ArSB9V1O-uBfTnYoc; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PAPISID=bIt0w1W8fwulZ7Mq/ArSB9V1O-uBfTnYoc; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=bIt0w1W8fwulZ7Mq/ArSB9V1O-uBfTnYoc; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI7LpBfj-lLf1UeqIPHEzZDeRl3Nc8-_hUbWk5W5G8LhHpjhxpnIYYc61mfkcp9SAFKaEDdoSfZurT4kh9mYyJ14xPBRcpGHRMAXfYA09r4tKi6-7OfkWn2EZoGDn25OpbySA7MjTmJCCZGerd_0KLp_47Dv5A; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI25oB; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.mail.google.com|o.meet.google.com|o.play.google.com|s.GE|s.RU|s.youtube:g.a000hwjQQUTSfM6srbdIuyG2b2Dw_Cb2m4XUkSrw4mNSIZnsQCj-c1wPErMi6z-Jto5iiPB_WAACgYKAWQSAQASFQHGX2MilR5VPcBbq9ccFyFlz61alxoVAUF8yKoOniJ3SFWjBtmXcvywsDnP0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-1PLSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.mail.google.com|o.meet.google.com|o.play.google.com|s.GE|s.RU|s.youtube:g.a000hwjQQUTSfM6srbdIuyG2b2Dw_Cb2m4XUkSrw4mNSIZnsQCj-UWgMs5hx4D3EJEN3ZWaCeQACgYKAb8SAQASFQHGX2MiSZRwhBd6QqgGlPg8AbwxgxoVAUF8yKq37XA57hZNodoffgRPCZNz0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.mail.google.com|o.meet.google.com|o.play.google.com|s.GE|s.RU|s.youtube:g.a000hwjQQUTSfM6srbdIuyG2b2Dw_Cb2m4XUkSrw4mNSIZnsQCj-KQKOisftsi_PiVORu5aEmQACgYKAZUSAQASFQHGX2Miw9M3eXBuwlMV3c9mCFdE6xoVAUF8yKpQCdDE-pJ2TNVNz0SXqUeA0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:ScIHJF2QTBELDu1fIs0oIVCh6dxqXX5Y3AL7UqUeoaYETyurf4hXSF_taQlZ2isjizuHxDIRx2eVTvQZkFwNqKAfi6V9qA:uEbUadDsCbpH9jCb; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AQTF6Hw6XjiBxn5Kkfd9Bi0OJXsoZhHbVgMtrLmW4ZgVTB51tWSS55W39tk; DOMAIN=accounts.google.com");

	web_add_cookie("NID=513=l9ztYenoWAexyeQosaXFbCg1VFrgnPgxzz31sQqzF4Sob_fj1irGMKSjcmpIBt1T0RzxqB01Av8QLM3QutxTNh03hz7mga_B3vrnKgC6I6oSPG5LmLqDYx66l8XauckKcLGX4wldDwCm00XZJm0Pk7HBGdY1oVflxqVVR2UrIzQjl_m1EKOEK80DYQvl3QD0ewUS_u51BPrbayxYyV3fRte79jvN0yFOqrpJQrFJgJ3Y2R7JagFdGgpemvDSYfYnYbyWg8JmANVmjB1kok9g9phFQ-51jR_ds49Vv50t2LNahobU9uswDdTIOuZ0Q4Xg3EBi8EkZwhb2; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDTS=sidts-CjIB7F1E_LmRDlWiqvCWyApzjl0sMuUmZDIemf7_2cv0hJFezQ7bEg1Sn0SfMn0DAb7mfRAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDTS=sidts-CjIB7F1E_LmRDlWiqvCWyApzjl0sMuUmZDIemf7_2cv0hJFezQ7bEg1Sn0SfMn0DAb7mfRAA; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2024-04-14-10; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AKEyXzUmwhNwdjB69qpbi2Qlp3npMvmX6kjAtPK8-39Hh7bdeb4y8B38CHsJlCmcjbP7tzekaH4B; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=AKEyXzUzjhWnDSPPU3U6Ni1KUpRnjdl_J_nNZzrRC4AD235Adm-cvoHjTz_k-Rk3E-W6nbYWka4; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AKEyXzUcKGIxjGBbb4734uF-WmdLAKxP7_9XgsXk-222yWkhYXPbaymujfHiTFtOregDJqyVJG8; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"123\", \"Not:A-Brand\";v=\"8\", \"Chromium\";v=\"123\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(16);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=userSession", "Value=138768.230700689HVDHiQApizzzzzzHtcicHpDtfc", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=51", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_url("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	lr_think_time(21);

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=04/15/2024", ENDITEM, 
		"Name=arrive", "Value=Portland", ENDITEM, 
		"Name=returnDate", "Value=04/16/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=46", ENDITEM, 
		"Name=findFlights.y", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=051;245;04/15/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=37", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,obedbbhbpmojnkanicioggnmelmoomoc,niikhdgajlphfehepabhhblakbdgeefj,lmelglejhemejginpboagddgdfbepgmp,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,oimompecagnajdejgnnjijobebaeigek,hfnkpimlhhgieaddgfemjhofmfblmnib,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,efniojlnjndmcbiieegkicadnoecjjef,"
		"jamhcnnkihinmdlkakkaopbjbbcngflc,ggkkehgbnfjpeggfpleeakpidbkibbmn,gcmjkmgdlgnkkcocmoeiminaijmmjnii,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflhchccmppkfebkiaminageehmchikm,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-123.0.6312.107");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:ylbMFbVFNMTX3wr-VcUFJsgRotqxGs7uRvfu4SptOig&cup2hreq=82ac6412f63e550b21d95f10445472b64bfd2b18fe5b4615dce1aeafb1c7a638", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{06cf637e-19fd-49b7-ac17-d0b873fe00c8}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"1.3.36.141"
		"\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5826,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{d5921484-b90b-4e1b-9387-49cf0641d0df}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"accept_locale\":\"RU500000\""
		",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{0cf9037e-a1cd-4a39-8a5a-599b5fdb8f9c}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6136,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.317672878e66fe3117c5c27c1c7b2bacc00f60863e1a6bebf0a7ffe43353b08b\"}]},\"ping\":{\"ping_freshness\":\"{81b58b02-a65d-43ae-93f2-f4117b6d1046}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"2024.4.10.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0312d42f5f3877a12e6f5da85001549cd9dd435debf72aee5652d1f6a550d351\"}]},\"ping\":{\"ping_freshness\":\"{e0c53972-494c-4c96-b570-ec2f8e648c3d}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"442\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6064,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{21f2df26-42c3-4675-81a4-b1f31d06cd3e}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\""
		"ping_freshness\":\"{02d1582f-653f-4862-aed3-ccf2d9a59976}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{a9c31fe9-8540-464b-a6ac-e9742c63f489}\",\"rd\":6313},\"updatecheck\":{},\""
		"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{a5551133-1b96-40e0-8e55-7ecdf07ead14}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for "
		"Chrome 95+\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{d3c4a7f2-e2c0-4eab-adde-1a9b83f51e0a}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.ae0fc06ab2ef35e8c5dbc14c137014c6a11be043595e373bfa2b23d87dedb640\"}]},\"ping\":{\"ping_freshness\":\"{f355db9d-625e-4314-af49-389cd346fc17}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"8669\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{e156ab47-3b15-4949-ba92-f623532a5977}\",\"rd\":6313},\"updatecheck\":{},\"version\":\""
		"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{291c2218-af91-4cd5-92e1-533e7183c80f}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{68e657eb-d0e5-4c7d-9823-a805c664b422}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\""
		"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.ccf35420925e20b0e6db8104eb982322ba27f500008f96049781785470937584\"}]},\"ping\":{\"ping_freshness\":\"{b86ac2f8-9801-4a83-9053-66395f6712b6}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"927\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{6cbf7759-5a38-4f26-89f8-6e8940e6b86c}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{916a6d12-c523-46dd-b87b-3caf0780fada}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\""
		":{\"ping_freshness\":\"{abb7700f-c679-4ea6-91a3-4a1b1e216061}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{929f53ff-730a-485f-a0dc-b677084fd92c}\",\"rd\":6313},\""
		"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f168f6c004acb003438a0db281680eb5c57164b00f5190e7f087c9482582533e\"}]},\"ping\":{\"ping_freshness\":\"{d6cfa630-d1d2-4c7c-b11b-e9bf1a1c43fd}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"2024.4.12.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{6103be45-59ff-48a4-b4a9-2136961e0cf1}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\"ping_freshness\":\"{e5dba5de-8a70-4447-86cf-9802df40ace9}\",\"rd\":6313},\"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":10,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":false,"
		"\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22621.3447\"},\"prodversion\":\"123.0.6312.107\",\"protocol\":\"3.1\",\"requestid\":\"{88ac5133-36ef-46f3-ac23-7bc98032c7eb}\",\"sessionid\":\"{acb12752-6e1b-4478-9add-4aabf83741c1}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":false,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"125.0.6386.0\"},\"updaterversion\":\"123.0.6312.107\"}}", 
		LAST);

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"123\", \"Not:A-Brand\";v=\"8\", \"Chromium\";v=\"123\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(71);

	web_submit_data("reservations.pl_4", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=First street", ENDITEM, 
		"Name=address2", "Value=Liberty", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=9999888822221111", ENDITEM, 
		"Name=expDate", "Value=01/25", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=051;245;04/15/2024", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=58", ENDITEM, 
		"Name=buyFlights.y", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}