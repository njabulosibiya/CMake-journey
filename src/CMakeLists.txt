add_library(src OBJECT
test_class.cpp
other.cpp
# car_maintenence.cpp
)


#[=[	
	Since we are creating a library target, we can include things for our target,
	things such as header files. This is not necessary & the code can work without
	the following line, however, each file in src will have to use relative path 
	when including a header file. Example: #include "../include/include_file.h"

	With the below line, relative path is not needed AND it also includes any sub-
	directories in the include folder as well.

	This current set-up may be far from idea and/or efficient but it works, so I'll 
	take it as a will and go from here.
#]=]

target_include_directories(src PUBLIC ../include/)

# Not needed anymore, include directory handled in top-level CMakeLists.txt
# target_include_directories(src PUBLIC .)