# include <Siv3D.hpp> // Siv3D v0.6.14

bool Button(const Rect& rect, const Texture& emoji, const Font& font, const String& text, bool enabled)
{
	if (enabled && rect.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}

	if (enabled)
	{
		rect.draw(ColorF{ 0.3, 0.7, 1.0 });
		font(text).drawAt(40, (rect.x + rect.w / 2), (rect.y + rect.h / 2));
	}
	else
	{
		rect.draw(ColorF{ 0.5 });
		font(text).drawAt(40, (rect.x + rect.w / 2), (rect.y + rect.h / 2), ColorF{ 0.7 });
	}

	emoji.scaled(0.5).drawAt(rect.x + 60, rect.y + 40);

	return (enabled && rect.leftClicked());
}

void Main()
{
	const Texture emojiBread{ U"🍞"_emoji };

	const Texture emojiRice{ U"🍚"_emoji };

	const Font font{ FontMethod::MSDF, 48, Typeface::Bold };

	while (System::Update())
	{
		if (Button(Rect{ 250, 300, 300, 80 }, emojiBread, font, U"パン", false))
		{
			Print << U"つづきから";
		}

		if (Button(Rect{ 250, 400, 300, 80 }, emojiRice, font, U"米", true))
		{
			Print << U"最初から";
		}
	}
}
