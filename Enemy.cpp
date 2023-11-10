#include "Enemy.h"
#include <stdio.h>

void Enemy::Update() {
	(this->*pfunc[PROXIMITY])();

	(this->*pfunc[FIRE])();

	(this->*pfunc[LEAVE])();
}

void Enemy::Proximity() {
	printf("近接\n");
}

void Enemy::Fire() {
	printf("射撃\n");
}

void Enemy::Leave() {
	printf("離脱\n");
}

void (Enemy::* Enemy::pfunc[])() = {
	&Enemy::Proximity,
	&Enemy::Fire,
	&Enemy::Leave
};