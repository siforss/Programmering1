GUICreate("ELBOTTO", 500, 400)
GUISetState()
GUICtrlCreateLabel("Welcome to the botting service ELBOTTO!", 150, 25)
GUICtrlCreateLabel ("The bot is currently running   PRESS F1 TO STOP", 195, 75, 135, 30)
GuiSetState (@SW_SHOW)
GUICtrlCreateLabel("THIS BOT SHOULD ONLY BE USED IN FAIR ADVANTAGES" & @crlf & "WE TAKE NO RESPONSIBIITY IN YOUR ACTIONS!", 95, 355, 310, 30)
GUICtrlCreatePic('C:\Users\18Sifors\Pictures\FinishedPictures\1546940373726.jpg', 0, 0, 500, 400)
ProgressOn("Initialising...", "Preparing the bots", "Loading...")

 For $i = 0 To 100
 	ProgressSet($i)
 	Sleep(10)
 Next

 ProgressSet(100, "Done!")
 Sleep(1000)
 ProgressOff()

 ; Functions

; ON/OFF, F5/F1
Func myExit()
   Exit
EndFunc

; BOT ON/OFF
Func BotON()
   msgbox (0, "re", "re")
EndFunc


 ; CODE

$x = WinActivate("League of Legends")

HotKeySet("{f1}","myExit")

; Client - Queue Bots 3v3

MouseClick("left", 543, 264, 1, 2)
Sleep(4000)
MouseClick("left", 564, 311, 1, 2)
Sleep(2000)
MouseClick("left", 948, 420, 1, 2)
Sleep(2000)
MouseClick("left", 914, 629, 1, 2)
Sleep(2000)
MouseClick("left", 879, 780, 1, 2)
Sleep(4000)
MouseClick("left", 879, 780, 1, 2)
Sleep(2000)

; The infamous infinite loop
$botON = True
While ($botON = True)

   ; Queue Accept
   $queuepop = False
   $queuedodge = True
   $client = True
   $pickchamp = True
   While ($client = True)
	  While ($queuedodge = True)
		 While ($queuepop = False)

			$queuepop = False
			$queuedodge = False

			$accept = PixelSearch(851, 609, 861, 619, 0x080F13, 1)
			If Not(@error) Then
			   Sleep(5000)

			ElseIf(@error) Then
			   MouseClick("left", 958, 678, 1, 2)
			   $queuepop = True
			   $pickchamp = True
			   Sleep(15000)
			Else
			   Sleep
			EndIf

		 WEnd

		 $queuedodge = PixelSearch(586, 760, 596, 770, 0x3E3501, 1)
		 If (@error) Then
			$queuedodge = True
			$queuepop = False
		 EndIf

		 $queuedodge = PixelSearch(586, 760, 596, 770, 0x3E3501, 1)
		 If Not (@error) Then
			$queuedodge = False
		 EndIf

	  WEnd

	  ; Champion Select
	  If ($pickchamp = True) Then
		 Sleep(3000)
		 MouseClick("left", 1073, 315, 1, 2)
		 Sleep(3000)
		 Send("sivir")
		 sleep(3000)
		 MouseClick("left", 748, 366, 1, 2)
		 Sleep(3000)
		 MouseClick("left", 961, 718, 1, 2)
		 Sleep(3000)

		 $pickchamp = False
	  EndIf

	  $preload = True

	  While ($preload = True)
		 ; PixelSearch = Gröna Ping pricken i loading screen
		 $client = PixelSearch(24, 14, 34, 24, 0x124F38, 1)
			If Not (@error) Then
			   $client = False
			   $preload = False
			   Sleep(10000)

			ElseIf (@error) Then
			   Sleep(5000)
			EndIf
	  WEnd
   WEnd

   ; Loading Screen
   $load = True

   While ($load = True)
	  $load = PixelSearch(24, 14, 34, 24, 0x124F38, 1)
		 If Not(@error) Then
			Sleep(5000)

		 ElseIf(@error) Then
			$load = False

		 Else
			Sleep
		 EndIf
   WEnd

   ; Ingame

   ; First buy - Open Shop
   Sleep(3000)
   Send("p")
   Sleep(300)
   MouseClick("left", 492, 112, 1, 1)
   Sleep(1000)

   ; Boots of Speed
   MouseClick("left", 405, 248, 1, 1)
   Sleep(300)
   MouseClick("left", 1514, 614, 1, 1)
   Sleep(300)

   ; Dorans Blade
   MouseClick("left", 471, 248, 1, 1)
   Sleep(100)
   MouseClick("left", 1514, 614, 1, 1)
   Sleep(300)

   ; Shop Close
   Send("p")
   Sleep(300)

   ; Camera lock
   Send("y")

   ; Walk to botlane
   MouseClick("right", 1772, 985, 1, 1)
   Sleep(20000)


   $ingame = True

   While $ingame = True

	  ; Buy items
	  $buy = PixelSearch(880, 1050, 886, 1056, 0x006908 , 1)
	  If (@error) Then
		 MouseClick("right", 44, 520, 1, 1)
		 Sleep(5000)
		 Send("b")
		 Sleep(8500)
		 Send("p")
		 MouseClick("left", 383, 87, 1, 1)
		 Sleep(100)
		 MouseClick("left", 382, 374, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 595, 231, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 Send("p")
		 Sleep(100)
		 MouseClick("right", 1772, 985, 1, 1)
		 Sleep(15000)
	  EndIf

	  ; Checks if dead - respawn
	  $alive = True
	  $alive = PixelSearch(712, 1012, 712, 1012, 0x4B4B4B , 1)
	  If Not (@error) Then
		 Send("p")
		 MouseClick("left", 383, 87, 1, 1)
		 Sleep(100)
		 MouseClick("left", 382, 374, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 595, 231, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 MouseClick("left", 1406, 589, 1, 1)
		 Sleep(100)
		 Send("p")
		 Sleep(100)
		 MouseClick("right", 1772, 985, 1, 1)
		 Sleep(15000)
	  EndIf
	  While ($alive = False)
		 Sleep(1000)
		 PixelSearch(712, 1012, 712, 1012, 0x4B4B4B , 1)
		 If (@error) Then
			MouseClick("right", 1772, 985, 1, 1)
			Sleep(20000)
			$alive = True
		 EndIf
	  WEnd

	  ; Auto Spell Leveler - Q
	  $level = PixelSearch(821, 969, 828, 975, 0xFCED56 , 1)
	  If Not (@error) Then
		 MouseClick("left", 826, 973, 1, 1)
	  EndIf

	  ; Summoner Spells

	  ; Ghost
	  $ghost = PixelSearch(997, 1003, 1003, 1007, 0x289AB7 , 1)
	  If Not (@error) Then
		 Send("d")
	  EndIf

	  ; Heal
	  $heal = PixelSearch(1038, 1000, 1049, 1012, 0x91EB61 , 1)
	  If Not (@error) Then
		 $health = PixelSearch(940, 1041, 956, 1061, 0x00B30A , 1)
		 If (@error) Then
			Send("f")
		 EndIf
	  EndIf

	  ; Walk1
	     $ally = PixelSearch (569, 326, 1849, 766, 0x00FFFF, 1)
			If Not (@error) Then
			   MouseClick("right", $ally[0] + 150, $ally[1] + 75, 1, 1)
			   Sleep(2000)
			   $enemy = PixelSearch (569, 326, 1849, 766, 0x00FFFF, 1)
			ElseIf (@error) Then
			   MouseClick("right", 764, 596, 1, 1)
			   Sleep(3000)
			EndIf


	  ; End of game checker
	  $pixels = PixelSearch(960, 226, 970, 236, 0xBC3131 , 1)
	  If Not (@error) Then
		 $ingame = False
		 Sleep(15000)
	  EndIf
   WEnd

   ; End of game (honor)
   MouseClick("left", 960, 751, 1, 1)
   Sleep(5000)

   ; Play again button
   MouseClick("left", 873, 780, 1, 1)
   Sleep(5000)

   ; Queue up
   MouseClick("left", 873, 780, 1, 1)
   Sleep(3000)

WEnd
