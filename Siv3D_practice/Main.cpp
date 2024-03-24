# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	/*int32 score = 1234;

	Print << U"スコア: {}"_fmt(score);

	int32 month = 12;

	int32 day = 31;

	Print << U"今日は {} 月 {} 日"_fmt(month, day);

	double x = 123.4567;

	Print << x;

	Print << U"{}"_fmt(x);

	Print << U"{:.2f}"_fmt(x);

	Print << U"{:.0f}"_fmt(x);*/

	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

	const Font font { FontMethod::MSDF, 48 };

	// 太文字のフォント
	const Font boldFont{ FontMethod::MSDF, 48, Typeface::Bold };
		
	int32 count = 0;

	while (System::Update())
	{
		font(U"C++").draw(50, Vec2{ 100, 100 }, Palette::Black);

		boldFont(U"Siv{}D"_fmt(count)).draw(80, Vec2{ 200, 200 }, ColorF{ 0.2, 0.6, 0.9 });

		font(U"こんにちは").draw(25, Vec2{ 100, 400 }, ColorF{ 0.4 });

		font(count).draw(50, Vec2{ 300, 500 });

		++count;

		font(U"Siv3D").draw(50, Arg::rightCenter(780, 300), ColorF{ 0.1 });

		font(U"Hello").draw(50, Arg::rightCenter(780, 400), ColorF{ 0.1 });

		font(U"programming").draw(50, Arg::bottomCenter(Cursor::Pos()), ColorF{ 0.1 });
	}
}

