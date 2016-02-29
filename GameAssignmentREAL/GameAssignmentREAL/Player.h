#ifndef PLAYER_H
#define PLAYER_H
#include <allegro.h>


class Player
{

public:
	Player( int x, int y );
	~Player( void );

	int GetPlayerLives ( void );
	void SetPlayerLives ( int );

	int GetLevelScore ( void );
	void SetLevelScore ( int );

	int GetCraneW ( void );
	int GetCraneH ( void );

	void MovePlayer ( void );
	void DrawPlayer ( BITMAP* buffer );

private:

	BITMAP* m_crane;
	int m_craneW;
	int m_craneH;
	int m_xPos;
	int m_yPos;
	int m_moveSpeed;
	int m_playerLives;
	int m_levelScore;
	int m_totalScore;

};

#endif