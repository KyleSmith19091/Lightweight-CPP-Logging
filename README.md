<div align="center">
  <h1>💸 Rich Text Logging </h1>
</div>

<div align="center">
  <h2>👋 Welcome to the future of your terminal *logging* experience</h2>
</div>

Lightweight CPP Logging is a **single** header file implementation to provide a rich text logging experience and also a nifty progress bar.
This library brings color to what many would say is a dull workspace ***ahem*** the terminal.

<div align="center">
  <h2>🌱 See for yourself</h2>
</div>

![demo](https://user-images.githubusercontent.com/29174023/129370577-7f82f78c-def4-40cb-bcb8-eaa41a60f074.gif)

<div align="center">
  <h2>🎉 Usage</h2>
</div>

All functionality is implemented under the log namespace, this namespace has the following classes within it

- Clock
- ProgressBar
- Debug
- Info
- Warning
- Error
- Critical

<h3>Progress Bar</h3>

→ Method Signature 
```c++
            static void displayProgressBar(std::ostream &os, unsigned int width,
                                         const std::string &msg = "Loading",
                                          const bool& useColor = true,
                                          const unsigned int &waitAmount = 100,
                                          const std::string &loadingSymbol = "-");
```
- Width: Can be seen as either how far the progress bar stretches or the countdown time
- msg: The message that is displayed before the progress bar
- useColor: Specifies whether or not ANSI colors should be used to highlight the text
- waitAmount: This is the time to wait between each increment of the progress bar
- loadingSymbol: This is the symbol that is used in the progress bar

**Example**
```c++
Log::Progressbar::createProgressBar(std::cout);
```

<h3>Rich Logging</h3>
Logging can be done using a level system of either

- Debug
- Info
- Warning
- Error
- Critical

<h4>Output Format</h4>

```console
{time} [LEVEL] {filename} Message
```

**Example**
```c++
// Standard Output
std::cout << DEBUG << "Debug Message\n";
std::cout << INFO << "Info Message\n";

// Standard Output alternative syntax
std::cout << Log::Debug() << "Debug Message\n";

// Example with file output => Needs to use alternative syntax
outFile << Log::Critical() << "Critical message into file\n";
```


