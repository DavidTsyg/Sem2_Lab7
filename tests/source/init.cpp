
#include <Sem2_Lab7.hpp>
#include <catch.hpp>

SCENARIO ("constructorTest"){
	Matrix<int> mat(3,3);
	
	REQUIRE (rv == 1);
}
