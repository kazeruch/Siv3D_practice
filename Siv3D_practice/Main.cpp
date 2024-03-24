# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	Print << U"C++";

	Print << U"Hello, " << U"Siv3D"; // 複数に分けることもできる

	Print << 123;

	Print << 4.567;

	int32 count = 0;

	while (System::Update())
	{
		Print << count;

		++count;
	}
}

