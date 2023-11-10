#pragma once

class Enemy
{
public:
	void Update();
	//近接
	void Proximity();
	//射撃
	void Fire();
	//離脱
	void Leave();

private:
	enum Situation {
		PROXIMITY, //近接
		FIRE, //射撃
		LEAVE //離脱
	};

	// メンバ関数ポインタのテーブル
	static void (Enemy::* pfunc[])();
};

