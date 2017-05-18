
#include <Sem2_Lab7.hpp>
#include <catch.hpp>

SCENARIO ("ConstructorTest(FileExists)"){
	Matrix<int> m;
	int rv = m.fill_by_file("test.txt");
	REQUIRE (rv == 1);
}
SCENARIO ("ConstructorTest(FileDoesn'tExist)"){
	Matrix<int> m;
	int rv = m.fill_by_file("Doesn'tExist.txt");
	REQUIRE (rv == 0);
}
