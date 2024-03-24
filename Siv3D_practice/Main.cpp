# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	const Font font{ FontMethod::MSDF, 48 };

	// 残り時間（秒）
	double timeLeft = 5.0;

	while (System::Update())
	{
		timeLeft -= Scene::DeltaTime();

		if (0.0 < timeLeft)
		{
			font(U"残り時間：{:.2f}"_fmt(timeLeft)).draw(40, 20, 20, Palette::Black);
		}
		else
		{
			font(U"ゲームオーバー").draw(40, 20, 20, Palette::Black);
		}
	}
}

// 前フレームからの経過時間を調べる　

//while (System::Update())
//{
//	ClearPrint();
//
//	// 60 Hz の場合, 1/60 秒 (約 0.0166)
//	const double deltaTime = Scene::DeltaTime();
//
//	Print << deltaTime;
//}


// 横方向移動し続ける

//const Texture emoji{ U"☃️"_emoji };
//
//// 移動速度 (ピクセル / 秒)
//const double velocity = 20;
//
//// 絵文字の X 座標
//double x = 100;
//
//while (System::Update())
//{
//	x += (Scene::DeltaTime() * velocity);
//
//	emoji.drawAt(x, 300);
//}


// 回転し続ける

//const Texture emoji{ U"🍣"_emoji };
//
//// 回転速度 (ラジアン / 秒)
//const double angularVelocity = 90_deg;
//
//// 回転速度
//double angle = 0_deg;
//
//while (System::Update())
//{
//	angle += (Scene::DeltaTime() * angularVelocity);
//
//	emoji.rotated(angle).drawAt(400, 300);
//}


// 図形を描く

//Circle circle{ 200, 200, 100 };
//
//RectF rect{ 400, 300, 300, 200 };
//
//while (System::Update())
//{
//	circle.draw(Palette::Orange);
//
//	circle.drawFrame(2, 2, Palette::Red);
//
//	rect.draw(ColorF{ 0.5 });
//
//	RectF{ rect.x, rect.y, (rect.w * 0.5), rect.h }.draw(ColorF{ 0.3, 0.9, 0.6 });
//
//	rect.drawFrame(4, 4, ColorF{ 0.2 });
//}


// 図形を動かす

//Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });
//
//Circle circle{ 200, 300, 0 };
//
//RectF rect{ 300, 200, 300, 200 };
//
//while (System::Update())
//{
//	double deltaTime = Scene::DeltaTime();
//
//	circle.r += (deltaTime * 20);
//
//	rect.x += (deltaTime * 10);
//
//	circle.draw();
//
//	rect.draw(ColorF{ 0.5 });
//}


// 経過時間を蓄積する

//Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });
//
//const Font font{ FontMethod::MSDF, 48 };
//
//// 経過時間の蓄積（秒）
//double accumulatedTime = 0.0;
//
//while (System::Update())
//{
//	accumulatedTime += Scene::DeltaTime();
//
//	font(U"経過時間: {:.2f}"_fmt(accumulatedTime)).draw(40, 20, 20, Palette::Black);
//}
