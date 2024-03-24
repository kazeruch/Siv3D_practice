# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	while (System::Update())
	{
		if (3.0 <= Scene::Time())
		{
			System::Exit();
		}
	}
} // ここで Main() が終了

// System::Exit() は、System::Update() が false を返すように設定するだけの関数。

