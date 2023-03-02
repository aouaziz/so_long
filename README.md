so_long

<p align="center">
  <img src="https://github.com/aouaziz/so_long/assets/so_long.png" alt="so_long 2D game"/>
</p>

 <!-- Project Name -->
  <h1>so_long  Project</h1>

<p align="center">
    <img src="https://img.shields.io/badge/OS-Linux-blue" alt="OS">
    <img src="https://img.shields.io/badge/Language-C%20%7C%20C%2B%2B-blue.svg" alt="Language">
    <img src="https://img.shields.io/badge/Grade-125%2F100-brightgreen.svg" alt="Grade">
    <img src="https://img.shields.io/badge/Status-Completed-brightgreen.svg" alt="Status">
</p>

###  Screenshot:
<img src="https://github.com/aouaziz/so_long/assets/map.png"/>

### Installing and running the project:

1- Installing mlx dependencies

	sudo apt-get install make xorg libxext-dev zlib1g-dev libbsd-dev

2- Clone this repository

	git clone https://github.com/Kuninoto/42_so_long
3- Navigate to _lvl_2_so_long_ and run `make`

	cd 42_so_long/lvl_2_so_long
   	make
4- `make clean` so that you don't keep those object files that you won't need anymore

	make clean
5- Run your new, extremely sexy, game, with a map of your choice!

	./so_long maps/[which_ever_map_you_want].ber

### Creating new maps:

	'0' - Free space;
	'1' - Wall;
	'C' - Collectible;
	'E' - Exit;
	'P' - Player's starting position;
	'M' - monster;
	To be valid a map must respect the following:
		- Be in .ber format;
		- Be closed by walls;
		- Be retangular;
		- Contain only one P;
		- Contain only one E;
		- Contain at least one C;
		- All elements must be accessible (not closed by walls);
		- Be composed only by valid characters i.e 0, 1, C, E, P;
	(You can check examples of valid maps on maps folder);

###  Subject: [so_long en_subject](./extras/en.subject_so_long.pdf)

#### Makefile Available Targets:
`make` or `make all` - compiles so_long
`make bonus` - same as `all` (added for subject purposes)
`make clean` - wipes all object files
`make fclean` - deletes so_long and all object files
`make re` - fclean  + all

### Useful links:
- https://harm-smits.github.io/42docs/libs/minilibx/introduction.html
- https://itch.io/
- https://opengameart.org/  