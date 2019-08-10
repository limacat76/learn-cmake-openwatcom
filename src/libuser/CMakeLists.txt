add_executable(
	libuser
	src/libuser.c
)

target_link_libraries(
	libuser
	alibrary
)