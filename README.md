## Born to be low level

This is a console app to print a text (Born to be low level.), in a funny way.

## Building

The requirements are:

* [xmake](https://xmake.io)
* A C++ compiler

Simply, configure the target you want to compile, in this case windows:

This will download dependencies and configure the project.

```bash
#       Platform   Arch   Mode
xmake f -p windows -a x64 -m Release -c -y
```

Then:

```bash
xmake
```

To build the project, to run do:

```bash
xmake run
```

Or search for the executable in the build directory
