# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	/*bool a = true;

	int32 b = 123;

	double c = 0.5;

	size_t d = 100;

	Print << U"a: " << a;

	Print << U"b: " << b;

	Print << U"c: " << c;

	Print << U"d: " << d;*/

	//char32 a = U'A';

	//String b = U"Hello";

	//// FilePath は String の別名
	//FilePath c = U"example/windmill.png";

	//Print << U"a: " << a;

	//Print << U"b: " << b;

	//Print << U"c: " << c;

	Array<int32> a = { 10, 20, 50, 100 };

	Optional<double> b;

	Print << U"a: " << a;

	Print << U"b: " << b;

	b = 12.3;

	Print << U"b: " << b;

	while (System::Update())
	{
		
	}
}

