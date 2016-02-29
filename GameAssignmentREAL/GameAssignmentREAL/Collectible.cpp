#include "Collectible.h"
#include <stdlib.h>//for random numbers

//extern int g_time;

Collectible::Collectible( void ): Item() 
{
	//uses a random number seeded by time to create a random x position for the objects to spawn.
	//objects will always spawn above the screen rather than on the screen
	//srand( (unsigned) time(NULL)); 
	//m_xSpawnPos = (rand()%12 * 50) - 24;
	//m_ySpawnPos = -64;

	//spawnTimer controls how often a bitmap is drawn
	//spawnTimer = 3;
	

	/*m_speed = 2;
	//m_time = 0;
	m_season = 1;
	m_bell = NULL;
	m_snowflake = NULL;
	m_mochi = NULL;
	m_sakura = NULL;
	m_koibanner = NULL;
	m_fern = NULL;
	m_bamboo = NULL;
	m_iris = NULL;
	m_eel = NULL;
	m_maple = NULL;
	m_dango = NULL;
	m_chrysanthemum = NULL;


	if ( m_season == 1 )
	{
		m_bell = load_bitmap("./Images/bell.bmp",NULL);
		m_snowflake = load_bitmap("./Images/snowflake.bmp",NULL);
		m_mochi = load_bitmap("./Images/mochi.bmp",NULL);
	}

	if ( m_season == 2 )
	{
		m_sakura = load_bitmap("./Images/sakura.bmp", NULL);
		m_koibanner = load_bitmap("./Images/koibanner.bmp", NULL);
		m_fern = load_bitmap("./Images/fern.bmp", NULL);
	}

	if ( m_season == 3 )
	{
		m_bamboo = load_bitmap("./Images/bamboo.bmp", NULL);
		m_iris = load_bitmap("./Images/iris.bmp", NULL);
		m_eel = load_bitmap("./Images/eel.bmp", NULL);
	}

	if ( m_season == 4 )
	{
		m_maple = load_bitmap("./Images/maple.bmp", NULL);
		m_dango = load_bitmap("./Images/dango.bmp", NULL);
		m_chrysanthemum = load_bitmap("./Images/chrysanthemum.bmp", NULL);
	}*/
}

Collectible::~Collectible( void )
{
	/*if ( m_season == 1 )
	{
		destroy_bitmap(m_snowflake);
	}

	if ( m_season == 2 )
	{
		destroy_bitmap(m_sakura);
		destroy_bitmap(m_koibanner);
		destroy_bitmap(m_fern);
	}

	if ( m_season == 3 )
	{
		destroy_bitmap(m_bamboo);
		destroy_bitmap(m_iris);
		destroy_bitmap(m_eel);
	}

	if ( m_season == 4 )
	{
		destroy_bitmap(m_maple);
		destroy_bitmap(m_dango);
		destroy_bitmap(m_chrysanthemum);
	}*/
}

/*void Collectible::MoveItem( void )
{

	if( m_season == 1 )
	{
		m_ySpawnPos += m_speed;
	}

	if ( m_season == 2 )
	{
		m_speed = m_ySpawnPos += 15;
	}

	if ( m_season == 3 )
	{
		m_speed = m_ySpawnPos += 20;
	}

	if ( m_season == 4 )
	{
		m_speed = m_ySpawnPos += 25;
	}
}*/

/*void Collectible::DrawItem( BITMAP* buffer )
{
	if (m_season == 1) 
	{
		
		masked_blit (m_bell, buffer, 0, 0, m_xSpawnPos, m_ySpawnPos, m_bell->w, m_bell->h);
		
		masked_blit (m_snowflake, buffer, 0, 0, m_xSpawnPos, m_ySpawnPos, m_snowflake->w, m_snowflake->h);
		
		masked_blit (m_mochi, buffer, 0, 0, m_xSpawnPos, m_ySpawnPos, m_mochi->w, m_mochi->h);
		
	}

	/*if (m_season == 2) 
	{
	blit (m_springBkg, buffer, 0, 0, 0, 0, m_springBkg->w, m_springBkg->h);

	}

	if (m_season == 3)
	{
	blit (m_summerBkg, buffer, 0, 0, 0, 0, m_summerBkg->w, m_summerBkg->h);

	}

	if (m_season == 4) 
	{
	blit (m_autumnBkg, buffer, 0, 0, 0, 0, m_autumnBkg->w, m_autumnBkg->h);

	}
}*/