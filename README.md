diagonator is an X11 compositor that draws diagonal lines across your screen to make you take a break from your computer.

It is a fork of [xcompmgr](https://gitlab.freedesktop.org/xorg/app/xcompmgr), so it supports all of the special effects that xcompmgr can do.

## Build instructions

### Dependencies
diagonator depends on libX11, Xfixes, Xdamage, Xcomposite, Xrender, and Xext. These libraries might be included in your operating system's official repositories. For example, on Fedora, they can be installed with:

```
sudo dnf install libX11-devel libXfixes-devel libXdamage-devel libXcomposite-devel libXrender-devel libXext-devel
```

### Building
With the dependencies installed, diagonator can be built with:
```
make
```
This will produce an executable binary called `diagonator` in the same directory.

## Usage

To run diagonator with its default options, use
```
./diagonator
```
To view a list of supported options, run
```
./diagonator -h
```
