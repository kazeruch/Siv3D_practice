# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	Scene::SetBackground(Palette::White);

	while (System::Update())
	{
		// 円を並べる
		/*for (int32 i = 0; i < 5; ++i)
		{
			Circle{ (i * 100), 100, 30 }.draw(Palette::Skyblue);
		}

		for (int32 i = 0; i < 5; ++i)
		{
			Circle{ (50 + i * 100), 200, 30 }.draw(Palette::Seagreen);
		}*/

		// 二重ループで円を並べる
		/*for (int32 y = 0; y < 4; ++y) // 縦方向
		{
			for (int32 x = 0; x < 6; ++x) // 横方向
			{
				Circle{ (x * 100), (y * 100), 30 }.draw(Palette::Skyblue);
			}
		}*/

		// 少し複雑な例
		/*for (int32 y = 0; y < 4; ++y) // 縦方向
		{
			for (int32 x = 0; x < 6; ++x) // 横方向
			{
				if ((x + y) % 2 == 0)
				{
					Circle{ (x * 100), (y * 100), 10 }.draw(Palette::Skyblue);
				}
				else
				{
					Circle{ (x * 100), (y * 100), 30 }.draw(Palette::Skyblue);
				}
			}
		}*/

		// 長方形を並べる
		/*for (int32 x = 0; x < 6; ++x)
		{
			Rect{ (x * 100), 0, 80, 600 }.draw(Palette::Skyblue);
		}*/

		// 色を徐々に変化させる
		/*for (int32 x = 0; x < 6; ++x)
		{
			Rect{ (x * 100), 0, 80, 600 }.draw(ColorF{ 0.0, (x * 0.2), 1.0 });
		}*/

		// 虹色
		for (int32 x = 0; x < 10; ++x)
		{
			Rect{ (x * 80), 0, 80, 600 }.draw(HSV{ (x * 36), 0.5, 1.0 });
		}
	}
}

