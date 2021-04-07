cmake_minimum_required (VERSION 2.6)
project (mystep4make)

include_directories(
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/scr
)

file (GLOB all_SRCS
	"${PROJECT_SOURCE_DIR}/include/*.h"
	"${PROJECT_SOURCE_DIR}/scr/*.cpp"
	)
add_executable (mystep4cmake ${all_SRCS})



