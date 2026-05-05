EventScript_TestNPC::
	lock
	faceplayer
	msgbox Text_Intro, MSGBOX_YESNO
    compare VAR_RESULT, YES
	goto_if_eq EventScript_Yes
	goto_if_ne EventScript_No
	release
	end

EventScript_Yes:
	msgbox Text_Yes, MSGBOX_DEFAULT
	release
	end

EventScript_No:
	msgbox Text_No, MSGBOX_DEFAULT
	release
	end

Text_Intro:
	.string "Do you want to join Neo Rocket?$"

Text_Yes:
	.string "Good choice.$"

Text_No:
	.string "You'll regret that.$"