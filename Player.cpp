#include "Player.h"

Player::Player()
{
	m_Speed = START_SPEED;
	m_Health = START_HEALTH;
	m_MaxHealth = START_HEALTH;
	m_Texture.loadFromFile("graphics/player.png");
	m_Sprite.setTexture(m_Texture);
	m_Sprite.setOrigin(25, 25);
}

void Player::spawn(sf::IntRect arena, sf::Vector2f resolution, int tileSize)
{
	m_Position.x	= resolution.x / 2.0f;
	m_Position.y	= resolution.y / 2.0f;
	m_Arena.left	= arena.left;
	m_Arena.top		= arena.top;
	m_Arena.width	= arena.width;
	m_Arena.height	= arena.height;
	m_TileSize		= tileSize;
	m_Resolution.x = resolution.x;
	m_Resolution.y = resolution.y;

}

void Player::resetPlayerStats()
{
	m_Speed = START_SPEED;
	m_Health = START_HEALTH;
	m_MaxHealth = START_HEALTH;
}

bool Player::hit(sf::Time timeHit)
{
	if (timeHit.asMilliseconds() - m_LastHit.asMilliseconds() > 200)
	{
		m_LastHit = timeHit;
		m_Health -= 10;
		return true;
	}
	else
	{
	return false;
	}
}

sf::Time Player::getLastHitTime()
{
	return m_LastHit;
}

sf::FloatRect Player::getPosition()
{
	return m_Sprite.getGlobalBounds();
}

sf::Vector2f Player::getCenter()
{
	return m_Position;
}

float Player::getRotation()
{
	return m_Sprite.getRotation();
}

sf::Sprite Player::getSprite()
{
	return m_Sprite;
}

void Player::moveLeft()
{
	m_LeftPressed = true;
}

void Player::moveRight()
{
	m_RightPressed = true;
}

void Player::moveUp()
{
	m_UpPressed = true;
}

void Player::moveDown()
{
	m_DownPressed = true;
}

void Player::stopLeft()
{
	m_LeftPressed = false;
}

void Player::stopRight()
{
	m_RightPressed = false;
}

void Player::stopUp()
{
	m_UpPressed = false;
}

void Player::stopDown()
{
	m_DownPressed = false;
}

void Player::update(float elapsedTime, sf::Vector2f mousePosition)
{
}

void Player::upgradeSpeed()
{
}

void Player::upgradeHealth()
{
}

void Player::increaseHealthLevel(int amaount)
{
}

int Player::getHealth()
{
	return m_Health;
}
