#ifndef SEASONS_H
#define SEASONS_H
#include <allegro.h>

class Seasons
{

public:
	Seasons( void );
   ~Seasons( void );

    int GetSeason ( void );
	void SetSeason ( int );

	void ChangeSeason( int _playerLives, int _playerLevelScore );

	void Draw( BITMAP* buffer );
	
protected:

	BITMAP* m_winterBkg;
	BITMAP* m_springBkg;
	BITMAP* m_summerBkg;
	BITMAP* m_autumnBkg;

	int m_season;

	
};

#endif