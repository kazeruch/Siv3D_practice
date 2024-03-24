# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	while (System::Update())
	{
		ClearPrint();

		// 現在のマウスカーソル座標を表示する
		// Print << Cursor::Pos();

		// 円を描く
		// Circle{ 400, 300, 20 }.draw();

		// マウスに付随する円を描く
		// Circle{ Cursor::Pos(), 100 }.draw();

		// 色のついた円を描く
		// Circle{ 100, 200, 40 }.draw(); // 色を指定しない場合は白色
		// Circle{ 200, 200, 40 }.draw(Palette::Green);
		// Circle{ 300, 200, 40 }.draw(ColorF{ 0.8 });

		// 左に半透明の円を描く
		// Circle{ 200, 300, 200 }.draw(ColorF{ 1.0, 0.0, 0.0, 0.9 });

		// 右に半透明の円を描く
		// Circle{ 600, 300, 200 }.draw(HSV{ 240.0, 0.5, 1.0, 0.2 });

		// マウスカーソルの位置に半透明の円を描く
		// Circle{ Cursor::Pos(), 100 }.draw(ColorF{ 0.0, 0.5 });

		// 長方形を描く
		// Rect{ 20, 40, 400, 100 }.draw();

		// 正方形を描く
		// Rect{ 100, 200, 80 }.draw(Palette::Orange);

		const double w = (Scene::Time() * 20.0);

		// 長方形を描く （値が double のときは Rect ではなく RectF とする）
		RectF{ 20, 40, w, 100 }.draw();

		// 長方形の枠を描く
		Rect{ 100, 300, 100, 30 }.drawFrame(3, 0);

		// 長方形の枠を描く
		Rect{ 220, 300, 100, 30 }.drawFrame(0, 3);

		// 長方形の枠を描く
		Rect{ 200, 400, 400, 100 }.drawFrame( 3, 3, Palette::Orange );

		// 円の枠を描く
		Circle{ Cursor::Pos(), 40 }.drawFrame(1, 1, Palette::Seagreen);

		// グラデーションで長方形を描く
		Rect{ 0, 0, 600, 500 }.draw(Arg::top = ColorF{ 0.5, 0.7, 0.9 }, Arg::bottom = ColorF{ 0.5, 0.9, 0.7 });
		
	}
}

