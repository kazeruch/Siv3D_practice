# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	// 背景を白色にする
	// Scene::SetBackground(Palette::White);

	// 背景を黒色にする
	// Scene::SetBackground(Palette::Black);

	// 背景色を HTML カラーで指定する
	// Scene::SetBackground(Palette::Aliceblue);

	// 背景色を RGB で指定する
	// Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });
	// Scene::SetBackground(ColorF{ 0.8 });

	// 背景色を HSV で指定する
	// Scene::SetBackground(HSV{ 220.0, 0./4, 1.0 });
	// Scene::SetBackground(HSV{ 220.0 }); ( s = 1.0, v = 1.0 )

	while (System::Update())
	{
		const double hue = (Scene::Time() * 60);

		// 背景色を HSV で指定する
		Scene::SetBackground(HSV{ hue });
	}
}

