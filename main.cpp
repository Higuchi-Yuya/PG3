#include "gameScene.h"
#include <windows.h>

int main() {

	// �֐��̐錾
	gameScene* gamescene_ = new gameScene;
	gamescene_->Initialize();

	// �Q�[�����[�v
	while (true) {

		// �X�V����
		gamescene_->Update();

		// �`�揈��
		gamescene_->Draw();

		// �X���[�v
		Sleep(1 * 1000);
	}

	return 0;
}