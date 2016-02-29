#ifndef ITEM_H
#define ITEM_H
#include <allegro.h>

class Item
{

public:
	Item( void );
	~Item( void );

	//pass season from main to Item
	void WhichSeason ( int _season );

	//movement of all Items
	virtual void MoveItem ( void );

	//draw bitmap of any Item
	virtual void DrawItem ( BITMAP* buffer );

	//check to see if item is still on screen
	virtual bool OffScreen ( void );

protected:

	int m_xSpawnPos;
	int m_ySpawnPos;
	int m_speed;
	//int m_time;
	int m_season;
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