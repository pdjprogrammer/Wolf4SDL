#ifndef __FOREIGN_H_
#define __FOREIGN_H_

#define QUITSUR "Are you sure you want\n" \
				"to quit this great game?"

#define CURGAME "You are currently in\n"    \
				"a game. Continuing will\n" \
				"erase old game. Ok?"

#define GAMESVD "There's already a game\n"  \
				"saved at this position.\n" \
				"      Overwrite?"

#define ENDGAMESTR "Are you sure you want\n" \
				   "to end the game you\n"   \
				   "are playing? (Y or N):"

#define STR_NG "New Game"
#define STR_SD "Sound"
#define STR_CL "Control"
#define STR_LG "Load Game"
#define STR_SG "Save Game"
#ifndef USE_MODERN_OPTIONS
#define STR_CV "Change View"
#else
#define STR_CV "View Size"

#endif
#define STR_VS "View Scores"
#define STR_EG "End Game"
#define STR_BD "Back to Demo"
#define STR_QT "Quit"

#define STR_LOADING "Loading"
#define STR_SAVING "Saving"

#define STR_GAME "Game"
#define STR_DEMO "Demo"
#define STR_LGC "Load Game called\n\""
#define STR_EMPTY "empty"
#define STR_CALIB "Calibrate"
#define STR_JOYST "Joystick"
#define STR_MOVEJOY "Move joystick to\nupper left and\npress button 0\n"
#define STR_MOVEJOY2 "Move joystick to\nlower right and\npress button 1\n"
#define STR_ESCEXIT "ESC to exit"

#define STR_OP_SND "Sound Options"
#define STR_OP_CTL "Control Options"
#define STR_CUSTOM "Customize controls"

#define STR_NONE "None"
#define STR_PC "PC Speaker"
#define STR_ALSB "AdLib/Sound Blaster"
#define STR_DISNEY "Disney Sound Source"
#define STR_SB "Sound Blaster"

#define STR_SENS "Mouse Sensitivity"
#define STR_MOUSEEN "Mouse Enabled"
#define STR_JOYEN "Joystick Enabled"
#define STR_PORT2 "Use joystick port 2"
#define STR_GAMEPAD "Gravis GamePad Enabled"
#define STR_DADDY "Can I play, Daddy?"
#define STR_HURTME "Don't hurt me."
#define STR_BRINGEM "Bring 'em on!"
#define STR_DEATH "I am Death incarnate!"

#define STR_MOUSEADJ "Adjust Mouse Sensitivity"
#define STR_SLOW "Slow"
#define STR_FAST "Fast"

#define STR_CRUN "Run"
#define STR_COPEN "Open"
#define STR_CFIRE "Fire"
#define STR_CSTRAFE "Strafe"

#define STR_LEFT "Left"	  //Todo DemolitionDerby - revert to original string
#define STR_RIGHT "Right" //Todo DemolitionDerby - revert to original string
#define STR_FRWD "Frwd"	  //Todo DemolitionDerby - revert to original string
#define STR_BKWD "Bkwrd"  //Todo DemolitionDerby - revert to original string

#define STR_THINK "Thinking"

#define STR_SIZE1 "Use arrows to size"
#define STR_SIZE2 "ENTER to accept"
#define STR_SIZE3 "ESC to cancel"

#define STR_YOUWIN "you win!"

#define STR_TOTALTIME "total time"

#define STR_RATKILL "kill    %"
#define STR_RATSECRET "secret    %"
#define STR_RATTREASURE "treasure    %"

#define STR_BONUS "bonus"
#define STR_TIME "time"
#define STR_PAR " par"

#define STR_RAT2KILL "kill ratio    %"
#define STR_RAT2SECRET "secret ratio    %"
#define STR_RAT2TREASURE "treasure ratio    %"

#define STR_DEFEATED "defeated!"

#define STR_CHEATER1 "You now have 100% Health,"
#define STR_CHEATER2 "99 Ammo and both Keys!"
#define STR_CHEATER3 "Note that you have basically"
#define STR_CHEATER4 "eliminated your chances of"
#define STR_CHEATER5 "getting a high score!"

#define STR_NOSPACE1 "There is not enough space"
#define STR_NOSPACE2 "on your disk to Save Game!"

#define STR_SAVECHT1 "Your Save Game file is,"
#define STR_SAVECHT2 "shall we say, \"corrupted\"."
#define STR_SAVECHT3 "But I'll let you go on and"
#define STR_SAVECHT4 "play anyway...."

#define STR_SEEAGAIN "Let's see that again!"

#ifdef USE_MODERN_OPTIONS
#define STR_OP "Options"
#define STR_OP_GAME "Game Options"

#define STR_OP_MOUSE "Mouse Controls"
#define STR_OP_KEYBOARD "Keyboard Controls"
#define STR_OP_JOYSTICK "Joystick Controls"

#define STR_ALWAYS_RUN "Always Run"

#define STR_MOUSEMOVEMENT "Enable Mouse Y Axis"

#define STR_ACTION_KEYS "Action Keys"
#define STR_MOVEMENT_KEYS "Movement Keys"

#define STR_STF_LEFT "Strafe L"
#define STR_STF_RIGHT "Strafe R"

#define STR_WPN_1 "Wpn 1"
#define STR_WPN_2 "Wpn 2"
#define STR_WPN_3 "Wpn 3"
#define STR_WPN_4 "Wpn 4"
#define STR_PREV_WPN "Prev Wpn"
#define STR_NEXT_WPN "Next Wpn"
#define STR_AUTOMAP "Automap"


#ifdef SHOW_CUSTOM_CONTROLS
#define STR_CUS_CONTROLS "Custom Controls"

#define STR_CUS_CTL_1 "Cus Ctl 1"
#define STR_CUS_CTL_2 "Cus Ctl 2"
#define STR_CUS_CTL_3 "Cus Ctl 3"
#define STR_CUS_CTL_4 "Cus Ctl 4"
#define STR_CUS_CTL_5 "Cus Ctl 5"
#define STR_CUS_CTL_6 "Cus Ctl 6"
#define STR_CUS_CTL_7 "Cus Ctl 7"
#define STR_CUS_CTL_8 "Cus Ctl 8"
#define STR_CUS_CTL_9 "Cus Ctl 9"
#define STR_CUS_CTL_10 "Cus Ctl 10"
#endif
#endif

#ifdef SPEAR
#define ENDSTR1 "Heroes don't quit, but\ngo ahead and press " YESBUTTONNAME "\nif you aren't one."
#define ENDSTR2 "Press " YESBUTTONNAME " to quit,\nor press " NOBUTTONNAME " to enjoy\nmore violent diversion."
#define ENDSTR3 "Depressing the " YESBUTTONNAME " key means\nyou must return to the\nhumdrum workday world."
#define ENDSTR4 "Hey, quit or play,\n" YESBUTTONNAME " or " NOBUTTONNAME ":\nit's your choice."
#define ENDSTR5 "Sure you don't want to\nwaste a few more\nproductive hours?"
#define ENDSTR6 "I think you had better\nplay some more. Please\npress " NOBUTTONNAME "...please?"
#define ENDSTR7 "If you are tough, press " NOBUTTONNAME ".\nIf not, press " YESBUTTONNAME " daintily."
#define ENDSTR8 "I'm thinkin' that\nyou might wanna press " NOBUTTONNAME "\nto play more. You do it."
#define ENDSTR9 "Sure. Fine. Quit.\nSee if we care.\nGet it over with.\nPress " YESBUTTONNAME "."
#else
#define ENDSTR1 "Dost thou wish to\nleave with such hasty\nabandon?"
#define ENDSTR2 "Chickening out...\nalready?"
#define ENDSTR3 "Press " NOBUTTONNAME " for more carnage.\nPress " YESBUTTONNAME " to be a weenie."
#define ENDSTR4 "So, you think you can\nquit this easily, huh?"
#define ENDSTR5 "Press " NOBUTTONNAME " to save the world.\nPress " YESBUTTONNAME " to abandon it in\nits hour of need."
#define ENDSTR6 "Press " NOBUTTONNAME " if you are brave.\nPress " YESBUTTONNAME " to cower in shame."
#define ENDSTR7 "Heroes, press " NOBUTTONNAME ".\nWimps, press " YESBUTTONNAME "."
#define ENDSTR8 "You are at an intersection.\nA sign says, 'Press " YESBUTTONNAME " to quit.'\n>"
#define ENDSTR9 "For guns and glory, press " NOBUTTONNAME ".\nFor work and worry, press " YESBUTTONNAME "."
#endif

#endif
