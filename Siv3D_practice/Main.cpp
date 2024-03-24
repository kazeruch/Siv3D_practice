# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	const Texture emoji{ U"☃️"_emoji };

	// 移動の速さ（ピクセル / 秒）
	const double speed = 200;

	Vec2 pos{ 400, 300 };

	while (System::Update())
	{
		const double deltaTime = Scene::DeltaTime();

		// ← キーが押されていたら
		if (KeyLeft.pressed())
		{
			pos.x -= (speed * deltaTime);
		}

		// → キーが押されていたら
		if (KeyRight.pressed())
		{
			pos.x += (speed * deltaTime);
		}

		// ↑ キーが押されていたら
		if (KeyUp.pressed())
		{
			pos.y -= (speed * deltaTime);
		}

		// ↓ キーが押されていたら
		if (KeyDown.pressed())
		{
			pos.y += (speed * deltaTime);
		}

		emoji.drawAt(pos);
	}
}

// キーが押されたか調べる

//while (System::Update())
//{
//	//  A キーが押されたら
//	if (KeyA.down())
//	{
//		Print << U"A";
//	}
//
//	// スペースキーが押されたら
//	if (KeySpace.down())
//	{
//		Print << U"Space";
//	}
//
//	// 1 キーが押されたら
//	if (Key1.down())
//	{
//		Print << U"1";
//	}
//}


// キーが押されているか調べる

//while (System::Update())
//{
//	// A キーが押されていたら
//	if (KeyA.pressed())
//	{
//		Print << U"A";
//	}
//
//	// スペースキーが押されていたら
//	if (KeySpace.pressed())
//	{
//		Print << U"Space";
//	}
//
//	// 1 キーが押されていたら
//	if (Key1.pressed())
//	{
//		Print << U"1";
//	}
//}
