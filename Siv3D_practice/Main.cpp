# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	const Texture emoji{ U"🍪"_emoji };

	const Circle circle{ 200, 200, 50 };

	while (System::Update())
	{
		// 円の上にマウスカーソルがあれば
		if (circle.mouseOver())
		{
			// マウスカーソルを手のアイコンにする
			Cursor::RequestStyle(CursorStyle::Hand);
		}

		// 円を左クリックしたら
		if (circle.leftClicked())
		{
			Print << U"クッキーをクリック";
		}

		// 円は描かない
		// circle.draw()

		// circle.center は Vec2 { circle.x, circle.y } と同じ
		emoji.drawAt(circle.center, Palette::Orange);
	}
}

// マウスクリックを調べる

//while (System::Update())
//{
//	// 左クリックされたら
//	if (MouseL.down())
//	{
//		Print << U"左クリック";
//	}
//
//	// 右クリックされたら
//	if (MouseR.down())
//	{
//		Print << U"右クリック";
//	}
//}


// マウスカーソルの座標に移動する

//const Texture emoji{ U"☃️"_emoji };
//
//Vec2 pos{ 400, 300 };
//
//while (System::Update())
//{
//	// 左クリックされたら
//	if (MouseL.down())
//	{
//		// 現在のマウスカーソルの座標を代入
//		pos = Cursor::Pos();
//	}
//
//	emoji.drawAt(pos);
//}


// 図形をクリックしたかを調べる

//const Circle circle{ 200, 200, 50 };
//
//const Rect rect{ 400, 400, 200, 40 };
//
//while (System::Update())
//{
//	// 円を左クリックしたら
//	if (circle.leftClicked())
//	{
//		Print << U"円をクリック";
//	}
//
//	// 長方形を左クリックしたら
//	if (rect.leftClicked())
//	{
//		Print << U"長方形をクリック";
//	}
//
//	circle.draw(Palette::Orange);
//
//	rect.draw();
//}


// 図形の上にマウスカーソルがあるかを調べる

//const Circle circle{ 200, 200, 50 };
//
//const Rect rect{ 400, 400, 200, 40 };
//
//while (System::Update())
//{
//	// 円の上にマウスカーソルがあれば
//	if (circle.mouseOver())
//	{
//		Print << U"円の上にある";
//	}
//
//	// 長方形の上にマウスカーソルがあれば
//	if (rect.mouseOver())
//	{
//		Print << U"長方形の上にある";
//	}
//
//	circle.draw(Palette::Orange);
//
//	rect.draw();
//}
