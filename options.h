#include <X11/Xlib.h>

// Direction of the lines in degrees, counterclockwise from the bottom of the
// screen
static double DIAGONATOR_LINE_DIRECTION = 30;

// Width of the lines, in pixels
static int DIAGONATOR_LINE_WIDTH = 5;

// Spacing between the lines, in pixels
static double DIAGONATOR_LINE_SPACING = 50.0;

// Style of the lines (LineSolid, LineOnOffDash, or LineDoubleDash)
static int DIAGONATOR_LINE_STYLE = LineSolid;

/* Configure the margins to make diagonator draw in a custom rectangular area
 * instead of your entire screen. For example, you could configure
 * DIAGONATOR_TOP_MARGIN if you don't want diagonator to draw over your status
 * bar.
 */

// Top margin, in pixels
static int DIAGONATOR_TOP_MARGIN = 0;

// Bottom margin, in pixels
static int DIAGONATOR_BOTTOM_MARGIN = 0;

// Left margin, in pixels
static int DIAGONATOR_LEFT_MARGIN = 0;

// Top margin, in pixels
static int DIAGONATOR_RIGHT_MARGIN = 0;
