include_directories("/usr/local/include")
add_executable("fizzbuzz_test" "test_main.cpp" "fizzbuzz_test.cpp" "../src/fizzbuzz.cpp" )
target_link_libraries("fizzbuzz_test" "/usr/local/lib/libCppUTest.a" "/usr/local/lib/libCppUTestExt.a")

add_test("fizzbuzz_test"  ${PROJECT_BINARY_DIR}/bin/fizzbuzz_test)
