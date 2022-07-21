diagonator is an X11 compositor that draws diagonal lines across your screen to make you take a break from your computer.

![diagonator running on a Qtile desktop](screenshot.png)

diagonator is a fork of [xcompmgr](https://gitlab.freedesktop.org/xorg/app/xcompmgr), so in addition to diagonal lines, it supports the same special effects as xcompmgr.

## Build instructions

### Dependencies

diagonator depends on libX11, Xfixes, Xdamage, Xcomposite, Xrender, and Xext. These libraries might be included in your operating system's official repositories. For example, on Fedora, they can be installed with

```
sudo dnf install libX11-devel libXfixes-devel libXdamage-devel libXcomposite-devel libXrender-devel libXext-devel
```

### Building

With the dependencies installed, diagonator can be built with

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

### Diagonal line customization

To customize the appearance of the diagonal lines, modify the values in the header file [`options.h`](options.h) and then rebuild the project.
