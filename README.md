# LRL
Low Rim League basketball

The LRL is a low rim basketball league consisting of 3 players on each team with a game played to 50 in a half court set on 9ft rims. 

LRLsim.c is a C file that simulates games between teams in the league. Each team has a rebound rate, offensive efficiency, defensive efficiency, and the three players. Each player has a shot tendency, a two point tendecy, 2pt %, and 3pt %.

The algorithm takes two teams and simulates 10,000 games. A random number generator is used to decide which player shoots, then the type of shot (2 vs 3), then a make or a miss. If a shot is made, the other team gets the ball; if the shot is missed, a rebound function is called. This process is repeated for the entire game. 
