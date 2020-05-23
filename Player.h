#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:
	Player();
	void spawn(sf::IntRect arena, sf::Vector2f resolution, int tileSize);
	void resetPlayerStats();
	bool hit(sf::Time timeHit);
	sf::Time getLastHitTime();
	sf::FloatRect getPosition();
	sf::Vector2f getCenter();
	float getRotation();
	sf::Sprite getSprite();
	
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	void stopLeft();
	void stopRight();
	void stopUp();
	void stopDown();

	//get called every frame
	void update(float elapsedTime, sf::Vector2i mousePosition);
	void upgradeSpeed();
	void upgradeHealth();
	void increaseHealthLevel(int amaount);
	int getHealth();



//				Member Variables
private:
	const float START_SPEED = 200.0f;
	const float START_HEALTH = 100.0F;
	sf::Vector2f	m_Position;
	sf::Vector2f	m_Resolution;
	sf::Sprite		m_Sprite;
	sf::Texture		m_Texture;
	sf::IntRect		m_Arena;		// size of current arena
	int				m_TileSize;		// size of each tile making up the arena
	bool			m_UpPressed;
	bool			m_DownPressed;
	bool			m_LeftPressed;
	bool			m_RightPressed;
	int				m_Health;
	int				m_MaxHealth;
	sf::Time		m_LastHit;
	float			m_Speed;
};