#include "Enemy.h"
#include <stdio.h>
#include <memory>

int main() {
	std::unique_ptr<Enemy> enemy_;
	int isAction = false;

	while (true) {
		printf("1を押したら動く。 0なら終わる。\n入力:");
		scanf_s("%d", &isAction);

		// 1以外の数字なら終了
		if (isAction != 1) {
			printf("終了\n");
			break;
		}
		enemy_->Update();
	}

	return 0;
}