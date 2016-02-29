#ifndef COLLECTIBLE_H
#define COLLECTIBLE_H

#include "Item.h"

class Collectible: public Item
{

public: 

	Collectible ( void );
	~Collectible ( void );

	//virtual int WhichSeason( int _season );

	//movement
	//virtual void MoveItem( void );

	//draw
	//virtual void DrawItem( BITMAP* buffer );

	//collision test
	//virtual bool Collision ( void ) override;

private:

	int spawnTimer;
	BITMAP* m_bell;
	BITMAP* m_snowflake;
	BITMAP* m_mochi;
	BITMAP* m_sakura;
	BITMAP* m_koibanner;
	BITMAP* m_fern;
	BITMAP* m_bamboo;
	BITMAP* m_iris;
	BITMAP* m_eel;
	BITMAP* m_maple;
	BITMAP* m_dango;
	BITMAP* m_chrysanthemum;


};


#endif