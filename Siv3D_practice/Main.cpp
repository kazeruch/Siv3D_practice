# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	const Texture emoji1{ U"🐈"_emoji };

	const Texture emoji2{ U"🍎"_emoji };

	while (System::Update())
	{
		emoji1.scaled(0.6).rotated(10_deg).drawAt(100, 100);

		emoji2.scaled(0.3).rotated(180_deg).drawAt(200, 300);

		const int32 cursorX = Cursor::Pos().x;

		emoji1.mirrored(400 <= cursorX).drawAt(400, 300);

		emoji2.drawAt(Cursor::Pos());
	}
}

