#include "GameManager.h"
#include <Windows.h>

int GameManager::run()
{
    int sceneNum = 0;
    // ゲームループ
    while (true) {
        // シーンに応じた処理を行う
        currentScene->Update();
        currentScene->Draw();

        printf("どのシーンにするか選択してください\n1:Title\n2:GameScene\n3:GameOverScene\n4:GameClearScene\n");

        scanf_s("%d", &sceneNum);

        switch (sceneNum)
        {
        case 1:
            currentScene = std::make_unique<TitleScene>();
            break;
        case 2:
            currentScene = std::make_unique<GameScene>();
            break;
        case 3:
            currentScene = std::make_unique<GameOverScene>();
            break;
        case 4:
            currentScene = std::make_unique<GameClearScene>();
            break;
        default:
            break;
        }

        Sleep(1000);
    }

    return 0;
}
