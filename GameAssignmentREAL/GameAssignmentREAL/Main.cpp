#include <allegro.h>
#include <iostream>
#include <vector>
#include <cmath>
#include "Seasons.h"
#include "Player.h"
#include "Collectible.h"

using namespace std;

//int g_time = 60;

int SetUpAllegro ( void );
void Menu ( void );
void PlayGame ( void );

int main(void)
{

	SetUpAllegro(); //sets up allegro initializations
   

	Seasons *background = new Seasons; //creates new object of Seasons class
	Player *character = new Player(SCREEN_W/2,SCREEN_H/2); //creates new object of player class, with starting x and y positions passed into the player constructor
	Item *asset = new Item;//creates a new object of item class
	Collectible *winter = new Collectible();


	//create buffer
	BITMAP* buffer;
	buffer = create_bitmap( SCREEN_W, SCREEN_H );

	//the next 3 lines take variables from the player class and pass them into season so that it can use them
	int playerLives = character->GetPlayerLives();
	int levelScore = character->GetLevelScore();
	background->ChangeSeason( levelScore, playerLives );

	//pass which season is the current level background to the class Item
	int season = background->GetSeason();
	asset->WhichSeason ( season );

	//vector of items to be spawned
	vector<Item*>items;

	int spawnTimer = 0;


	while(!key[KEY_ESC])
	{

		// clear the frame
		clear_bitmap( buffer );
		//draw background 
		background->Draw( buffer );
		
		character->DrawPlayer( buffer ); 

		//move player
		character->MovePlayer();

		//decrement spawnTimer
		spawnTimer--;

		//fill vector with objects
		if( spawnTimer < 0 )
		{
			items.push_back(new Item);
			spawnTimer = 120;
		}

		//iterates through the vector using a for loop, deleting items that have gone off screen and moving items that have not
		///Original code by Pete

		for( auto cat = items.begin(); cat != items.end();)
		{
			if (( *cat )->OffScreen()) 
			{
				delete *cat;					
				cat = items.erase( cat );
			}
			else 
			{
				( *cat )->MoveItem();
				++cat;
			}
		}

		for( auto cat = items.begin(); cat != items.end(); ++cat )
		{
			( *cat )->DrawItem( buffer );
		}

	    //draw character to buffer
		character->DrawPlayer( buffer ); 

		// draw everything to screen
		blit( buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H );
		vsync();
		
	}

	readkey();

	delete background;
	delete character;

	return 0;
}
END_OF_MAIN()



int SetUpAllegro ( void )
{

	allegro_init();

	install_keyboard();
	install_mouse();
	install_timer();

	set_color_depth ( 32 );
	set_gfx_mode ( GFX_AUTODETECT_WINDOWED , 640, 480, 0, 0 );
	
	return 0;
}