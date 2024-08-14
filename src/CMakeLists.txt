add_library(src OBJECT
test_class.cpp
other.cpp
# car_maintenence.cpp
)

target_include_directories(src PUBLIC ../include/)
target_include_directories(src PUBLIC ../include/other/)

#[=[	
	Since we are creating a library target (An entirely new & different target), 
	we can include its dependencies, such as the header files. This IS ENTIRELY 
	necessary as the files in this library target depend on this include file. 
	
	Not including the following line will result in the files in this target not 
	finding the header files, thus resulting in a compilation error.

	If even a single of these files of this target depended on a library, we would 
	have to include the following line.

	target_include_libraries(src PUBLIC library_name)

	----------------------------

	This current set-up may be far from idea and/or efficient but it works, so I'll 
	take it as a will and go from here.
#]=]
