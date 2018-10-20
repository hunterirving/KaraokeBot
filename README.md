# KaraokeBot

### _Look, we've all been there..._

You pick up an interesting toy at the thrift store, thinking to yourself ___"I could probably build a robot out of this",___ then one thing leads to another and before you know it you're 3D-printing a body for it and programming it to sing karaoke.

<br>

<img src="https://github.com/hunterirving/KaraokeBot/blob/master/robotsnip.PNG" width="62%">

It happens to me all the time.

## _Note-On... Note-Off..._

Since I was using a <a href="https://www.image-line.com/flstudio/">DAW</a> to program vocals, I thought I might as well keep things centralized and use MIDI signals to control my bot's facial movements.

<img src="https://github.com/hunterirving/KaraokeBot/blob/master/itlives2.gif" width="62%">

Using an Arduino as a MIDI output device, we can listen for MIDI Note On (<a href="https://www.midi.org/specifications-old/item/table-1-summary-of-midi-message">1001nnnn</a>) and Note Off (<a href="https://www.midi.org/specifications-old/item/table-1-summary-of-midi-message">1000nnnn</a>) Events and use them to control a 9g servo motor; _Note On_ to open the mouth, and _Note Off_ to close it.

Pitch and velocity were ignored for this project, but I could see them being useful for other applications.

## _KaraokeBot: The Making Of_

<a href="https://www.youtube.com/watch?v=IbHfiO7Sy8U">Click through</a> to a build/demonstration video on YouTube, wherein I take this thing out to a real life karaoke bar!

<a href="https://www.youtube.com/watch?v=IbHfiO7Sy8U
" target="_blank"><img src="http://img.youtube.com/vi/IbHfiO7Sy8U/0.jpg" width="240" height="180" border="10" /></a>

<br>

## _BONUS: KaraokeBot's Debut Album_

Streaming now on <a href="https://soundcloud.com/hunter-irving/sets/karaokebot">soundcloud</a>.
