Delete_ALL_ticket()
{
	tName = "09.GoTo_page_Itinerary";
	lr_start_transaction(tName);
	
	lr_output_message("� ���� action2 - �������� ���� �������");
	
	web_reg_save_param_ex(
		"ParamName=flightID1",
		"LB=flightID\" value=\"",
		"RB=\"",
		"Ordinal=all",
		SEARCH_FILTERS,
		LAST);

	web_reg_find("Text=flightID",
		"SaveCount=Count",	             
		LAST);

	status=web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	end_transaction(tName, status); lr_think_time(5);

	tName = "10.Delete_ALL_tickets";
	lr_start_transaction(tName);

		lr_output_message("COUNT of Tickets for DELETE is: %s",lr_eval_string("{Count}"));
		lr_output_message("");
		
		status=web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value={flightID1_1}", ENDITEM,
		"Name=flightID", "Value={flightID1_2}", ENDITEM,
		"Name=flightID", "Value={flightID1_3}", ENDITEM, 
		"Name=flightID", "Value={flightID1_4}", ENDITEM,
		"Name=flightID", "Value={flightID1_5}", ENDITEM, 
		"Name=flightID", "Value={flightID1_6}", ENDITEM, 
		"Name=flightID", "Value={flightID1_7}", ENDITEM, 
		"Name=flightID", "Value={flightID1_8}", ENDITEM, 
		"Name=flightID", "Value={flightID1_9}", ENDITEM, 
		"Name=flightID", "Value={flightID1_10}", ENDITEM, 
		"Name=flightID", "Value={flightID1_11}", ENDITEM,
		"Name=flightID", "Value={flightID1_12}", ENDITEM,
		"Name=flightID", "Value={flightID1_13}", ENDITEM,
		"Name=flightID", "Value={flightID1_14}", ENDITEM,
		"Name=flightID", "Value={flightID1_15}", ENDITEM,
		"Name=flightID", "Value={flightID1_16}", ENDITEM,
		"Name=flightID", "Value={flightID1_17}", ENDITEM,
		"Name=flightID", "Value={flightID1_18}", ENDITEM,
		"Name=flightID", "Value={flightID1_19}", ENDITEM,
		"Name=flightID", "Value={flightID1_20}", ENDITEM,
		"Name=flightID", "Value={flightID1_21}", ENDITEM,
		"Name=flightID", "Value={flightID1_22}", ENDITEM,	
		"Name=flightID", "Value={flightID1_23}", ENDITEM,
		"Name=flightID", "Value={flightID1_24}", ENDITEM,
		"Name=flightID", "Value={flightID1_25}", ENDITEM,
		"Name=flightID", "Value={flightID1_26}", ENDITEM,	
		"Name=flightID", "Value={flightID1_27}", ENDITEM,
		"Name=flightID", "Value={flightID1_28}", ENDITEM,	
		"Name=flightID", "Value={flightID1_29}", ENDITEM,	
		"Name=flightID", "Value={flightID1_30}", ENDITEM,	
		"Name=flightID", "Value={flightID1_31}", ENDITEM,
		"Name=flightID", "Value={flightID1_32}", ENDITEM,	
		"Name=flightID", "Value={flightID1_33}", ENDITEM,	
		"Name=flightID", "Value={flightID1_34}", ENDITEM,	
		"Name=flightID", "Value={flightID1_35}", ENDITEM,
		"Name=flightID", "Value={flightID1_36}", ENDITEM,
		"Name=flightID", "Value={flightID1_37}", ENDITEM,
		"Name=flightID", "Value={flightID1_38}", ENDITEM,
		"Name=flightID", "Value={flightID1_39}", ENDITEM,
		"Name=flightID", "Value={flightID1_40}", ENDITEM,
		"Name=flightID", "Value={flightID1_41}", ENDITEM,
		"Name=flightID", "Value={flightID1_42}", ENDITEM,
		"Name=flightID", "Value={flightID1_43}", ENDITEM,
		"Name=flightID", "Value={flightID1_44}", ENDITEM,
		"Name=flightID", "Value={flightID1_45}", ENDITEM,
		"Name=flightID", "Value={flightID1_46}", ENDITEM,
		"Name=flightID", "Value={flightID1_47}", ENDITEM,
		"Name=flightID", "Value={flightID1_48}", ENDITEM,
		"Name=flightID", "Value={flightID1_49}", ENDITEM,
		"Name=flightID", "Value={flightID1_50}", ENDITEM,
		"Name=flightID", "Value={flightID1_51}", ENDITEM,
		"Name=flightID", "Value={flightID1_52}", ENDITEM,
		"Name=flightID", "Value={flightID1_53}", ENDITEM,
		"Name=flightID", "Value={flightID1_54}", ENDITEM,
		"Name=flightID", "Value={flightID1_55}", ENDITEM,	
		"Name=flightID", "Value={flightID1_56}", ENDITEM,
		"Name=flightID", "Value={flightID1_57}", ENDITEM,
		"Name=flightID", "Value={flightID1_58}", ENDITEM,	
		"Name=flightID", "Value={flightID1_59}", ENDITEM,
		"Name=flightID", "Value={flightID1_60}", ENDITEM,
		"Name=flightID", "Value={flightID1_61}", ENDITEM,
		"Name=flightID", "Value={flightID1_62}", ENDITEM,
		"Name=flightID", "Value={flightID1_63}", ENDITEM,
		"Name=flightID", "Value={flightID1_64}", ENDITEM,
		"Name=flightID", "Value={flightID1_65}", ENDITEM,
		"Name=flightID", "Value={flightID1_66}", ENDITEM,
		"Name=flightID", "Value={flightID1_67}", ENDITEM,
		"Name=flightID", "Value={flightID1_68}", ENDITEM,	
		"Name=flightID", "Value={flightID1_69}", ENDITEM,
		"Name=flightID", "Value={flightID1_70}", ENDITEM,
		"Name=flightID", "Value={flightID1_71}", ENDITEM,
		"Name=flightID", "Value={flightID1_72}", ENDITEM,
		"Name=flightID", "Value={flightID1_73}", ENDITEM,
		"Name=flightID", "Value={flightID1_74}", ENDITEM,
		"Name=flightID", "Value={flightID1_75}", ENDITEM,
		"Name=flightID", "Value={flightID1_76}", ENDITEM,
		"Name=flightID", "Value={flightID1_77}", ENDITEM,
		"Name=flightID", "Value={flightID1_78}", ENDITEM,
		"Name=flightID", "Value={flightID1_79}", ENDITEM,
		"Name=flightID", "Value={flightID1_80}", ENDITEM,
		"Name=flightID", "Value={flightID1_81}", ENDITEM,	
		"Name=flightID", "Value={flightID1_82}", ENDITEM,	
		"Name=flightID", "Value={flightID1_83}", ENDITEM,
		"Name=flightID", "Value={flightID1_84}", ENDITEM,
		"Name=flightID", "Value={flightID1_85}", ENDITEM,
		"Name=flightID", "Value={flightID1_86}", ENDITEM,	
		"Name=flightID", "Value={flightID1_87}", ENDITEM,	
		"Name=flightID", "Value={flightID1_88}", ENDITEM,	
		"Name=flightID", "Value={flightID1_89}", ENDITEM,	
		"Name=flightID", "Value={flightID1_90}", ENDITEM,
		"Name=flightID", "Value={flightID1_91}", ENDITEM,
		"Name=flightID", "Value={flightID1_92}", ENDITEM,
		"Name=flightID", "Value={flightID1_93}", ENDITEM,	
		"Name=flightID", "Value={flightID1_94}", ENDITEM,
		"Name=flightID", "Value={flightID1_95}", ENDITEM,
		"Name=flightID", "Value={flightID1_96}", ENDITEM,
		"Name=flightID", "Value={flightID1_97}", ENDITEM,
		"Name=flightID", "Value={flightID1_98}", ENDITEM,
		"Name=flightID", "Value={flightID1_99}", ENDITEM,
		"Name=flightID", "Value={flightID1_100}", ENDITEM,			
		"Name=removeAllFlights.x", "Value=49", ENDITEM, 
		"Name=removeAllFlights.y", "Value=11", ENDITEM, 
		LAST);
		
		end_transaction(tName, status); lr_think_time(5);
			
	return 0;
}
