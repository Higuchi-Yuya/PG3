#pragma once
class SceneManager final
{
public:
	// �C���X�^���X
	static SceneManager* GetInstance();

public:
	// �R�s�[�R���X�g���N�^�𖳌��ɂ���
	SceneManager(const SceneManager&) = delete;
	// ������Z�q�𖳌��ɂ���
	SceneManager& operator=(const SceneManager&) = delete;

	// �V�[���`�F���W�֐�
	void ChangeScene(int sceneNo);

private:
	// �R���X�g���N�^
	SceneManager();
	// �f�X�g���N�^
	~SceneManager();
};

