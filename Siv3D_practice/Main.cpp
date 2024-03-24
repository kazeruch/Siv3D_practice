# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	// ウィンドウを閉じる操作のみを終了操作に設定する。
	// System::SetTerminationTriggers(UserAction::CloseButtonClicked);

	// 終了操作を設定しない。
	System::SetTerminationTriggers(UserAction::NoAction);

	// デフォルトの終了操作に戻す。
	System::SetTerminationTriggers(UserAction::Default);

	while (System::Update())
	{
		// 実行時間が 5 秒以上経過したら
		if (5.0 <= Scene::Time())
		{
			System::Exit();
		}
	}
}

