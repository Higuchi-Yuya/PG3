#include <stdio.h>
#include <Windows.h>
#include "SceneManager.h"
int main() {
	// �C���X�^���X���擾����
	SceneManager* sceneManager = SceneManager::GetInstance();
	// �V�[���i���o�[
	int SceneNo = 0;

	while (true) {
		Sleep(1 * 1000);
		
		if (SceneNo > 3) {
			SceneNo = 0;
		}
		// �g�p����

		sceneManager->ChangeScene(SceneNo);
		SceneNo++;
	}

	return 0;

}