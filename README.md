# Use-Case

This is essentially a module, it extracts the current time from your computer as a timestamp, it then converts it into a bunch of variables and continues the flow of time using my clock/calendar logic.

I originally made this as a concept for fun, the idea was that it would be more efficient running in an isolated thread than it would be to constantly retrieve the time whenever it needed to log something.

I decided to actually use it and implement it into my program [UE4-Librarian](https://github.com/aeyth8/ue4-librarian)

And ironically right after I finished working on this, I ended up fixing the original problem that prompted me to make this module in the first place.

I'm now posting it as I'd rather the code being put to use than go to waste. *(I might even use parts of it or the entire module in the future)*

**Clock_P.h** is the "public" header file, you'll want to include this within your entry/main code to call the initial functions. 

I made this into an EXE to demonstrate the functionality of the code, feel free to download it and run it if you don't feel like compiling the solution to see.
