#include "Seasons.h"
#include "Player.h"

//extern int g_time;

Seasons::Seasons( void )
{
  
   m_season = 0;
   m_winterBkg = NULL;
   m_springBkg = NULL;
   m_summerBkg = NULL;
   m_autumnBkg = NULL;

 
   m_winterBkg = load_bitmap ("./Images/Winter.bmp", NULL);
   m_springBkg = load_bitmap ("./Images/Spring.bmp", NULL);
   m_summerBkg = load_bitmap ("./Images/Summer.bmp", NULL);
   m_autumnBkg = load_bitmap ("./Images/Autumn.bmp", NULL);

}

Seasons::~Seasons( void )
{
	destroy_bitmap(m_winterBkg);
	destroy_bitmap(m_springBkg);
	destroy_bitmap(m_summerBkg);
	destroy_bitmap(m_autumnBkg);
}

void Seasons::Draw( BITMAP* buffer ) 
{

	if (m_season == 1) 
	{
		
         blit (m_winterBkg, buffer, 0, 0, 0, 0, m_winterBkg->w, m_winterBkg->h);
		
	}

	if (m_season == 2) 
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
}

void Seasons::ChangeSeason( int _levelScore, int _playerLives )
{

		//if player's level score is less than 250 and player's lives is greater than 0 or time is 120 seconds
		
		if ( _levelScore < 250 && _playerLives > 0 )//|| g_time == 120 )
			{
				m_season++;
					if ( m_season > 4 )
						{
							m_season = 1;
						}
			}

		
}

int Seasons::GetSeason( void )
{
	m_season = 1;//just for testing, delete when you want levels to change
	return m_season;
}