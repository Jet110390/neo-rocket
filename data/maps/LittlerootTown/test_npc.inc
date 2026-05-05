TestNPC::
# 2 "data/maps/LittlerootTown/test_npc.pory"
	lock
# 3 "data/maps/LittlerootTown/test_npc.pory"
	faceplayer
# 5 "data/maps/LittlerootTown/test_npc.pory"
	msgbox TestNPC_Text_0, MSGBOX_YESNO
# 7 "data/maps/LittlerootTown/test_npc.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestNPC_2
# 10 "data/maps/LittlerootTown/test_npc.pory"
	msgbox TestNPC_Text_2
TestNPC_1:
# 13 "data/maps/LittlerootTown/test_npc.pory"
	release
	end

TestNPC_2:
# 8 "data/maps/LittlerootTown/test_npc.pory"
	msgbox TestNPC_Text_1
	goto TestNPC_1


TestNPC_Text_0:
# 5 "data/maps/LittlerootTown/test_npc.pory"
	.string "Do you want to join Neo Rocket?$"

TestNPC_Text_1:
# 8 "data/maps/LittlerootTown/test_npc.pory"
	.string "We're gonna change the world kid!$"

TestNPC_Text_2:
# 10 "data/maps/LittlerootTown/test_npc.pory"
	.string "Really? That's a bummer...$"
