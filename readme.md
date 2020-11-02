# An MVP example of consuming Boost via Meson subprojects

Tested to work on:

 - Linux with GCC
 - Windows with MSVC
 - macOS with Clang

To build:

 - start a VS dev shell (if on Windows)
 - `cd` into source root
 - `meson build`
 - `ninja -C build`
 - `build/boosttest`

## Caveats

 - Source code is checkouts of trunk at the time I did this, not any
   particular release.

 - Could be implemented without Wrap files, but they are used here to
   show the full work flow.

 - Libraries with code bits are not built, only headers are exposed.
 