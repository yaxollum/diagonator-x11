all:
	gcc -o diagonator xcompmgr.c -lX11 -lXfixes -lXdamage -lXcomposite -lXrender -lXext -lm
