#include "Player.h"


Player::Player(int x, int y)
{
	m_xPos = x;
	m_yPos = y;
	m_moveSpeed = 3;
	m_playerLives = 0;
	m_levelScore = 0;
	m_totalScore = 0;
	m_crane = NULL;

	m_crane = load_bitmap("./Images/crane.bmp", NULL);
	m_craneW = m_crane->w;
	m_craneH = m_crane->h;
}

Player::~Player(void)
{
	destroy_bitmap(m_crane);
	
}

int Player::GetPlayerLives( void )
{
	m_playerLives = 3;
	return m_playerLives;
}

void Player::SetPlayerLives( int _playerLives )
{
	m_playerLives = _playerLives;
}

int Player::GetLevelScore( void )
{
	m_levelScore = 100;
	return m_levelScore;
}

void Player::SetLevelScore( int _levelScore )
{
	m_levelScore = _levelScore;
}

void Player::DrawPlayer( BITMAP* buffer )
{

	masked_blit (m_crane, buffer , 0, 0, m_xPos, m_yPos, m_crane->w, m_crane->h);
	
}

void Player::MovePlayer( void )
{
	if (key[KEY_UP])
	{
		m_yPos -= m_moveSpeed;
	}

	if (key[KEY_DOWN])
	{
		m_yPos += m_moveSpeed;
	}

	if (key[KEY_LEFT])
	{
		m_xPos -= m_moveSpeed;
	}

	if (key[KEY_RIGHT])
	{
		m_xPos += m_moveSpeed;
	}

	if (m_yPos > SCREEN_H - m_crane->h)
	{
		m_yPos = SCREEN_H - m_crane->h;
	}

	if (m_yPos < 0)
	{
		m_yPos = 0;
	}

	if (m_xPos > SCREEN_W - m_crane->w)
	{
		m_xPos = SCREEN_W - m_crane->w;
	}

	if (m_xPos < 0)
	{
		m_xPos = 0;
	}
}

int Player::GetCraneW ( void )
{

	return m_craneW;

}

int Player::GetCraneH ( void )
{

	return m_craneH;

}