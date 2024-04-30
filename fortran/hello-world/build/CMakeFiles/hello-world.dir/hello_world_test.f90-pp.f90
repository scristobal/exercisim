# 1 "/home/samu/repos/samu/exercism/fortran/hello-world/hello_world_test.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/samu/repos/samu/exercism/fortran/hello-world/build//"
# 1 "/home/samu/repos/samu/exercism/fortran/hello-world/hello_world_test.f90"
program hello_world_test_main
   use TesterMain
   use hello_world

   implicit none

   ! Test 1: Say Hi!
   call assert_equal("Hello, World!", hello(), "Say Hi!")

   call test_report()
end program

