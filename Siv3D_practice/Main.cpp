# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	// 画像ファイルから画像データを読み込んでテクスチャを作成する
	// このようにメインループの前に作成しないと動作が重くなってしまう
	const Texture texture{ U"example/windmill.png" };

	while (System::Update())
	{
		// 1 秒間に何回メインループが実行されているかを取得する
		int32 fps = Profiler::FPS();

		// 1 秒間に何回メインループが実行されているかを、ウィンドウタイトルに表示する
		Window::SetTitle(fps);

		// テクスチャを描画する
		texture.draw();
	}
}

