# 1 "/home/samu/repos/samu/exercism/fortran/hello-world/hello_world.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/samu/repos/samu/exercism/fortran/hello-world/build//"
# 1 "/home/samu/repos/samu/exercism/fortran/hello-world/hello_world.f90"
module hello_world
contains
   function hello()
      character(13) :: hello
      hello = 'Hello, World!'

   end function hello

end module hello_world
