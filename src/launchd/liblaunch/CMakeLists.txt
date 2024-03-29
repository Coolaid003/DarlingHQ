project(liblaunch)

cmake_minimum_required(VERSION 3.13)

include_directories(
	${CMAKE_CURRENT_BINARY_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/../src
)

add_definitions(-w -nostdinc)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fblocks -include ${CMAKE_SOURCE_DIR}/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fileport.h -ggdb")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -nostdlib")

mig(job.defs)
mig(helper.defs)

set(launch_sources
	libbootstrap.c
	liblaunch.c
	libvproc.c
	${CMAKE_CURRENT_BINARY_DIR}/jobUser.c
	${CMAKE_CURRENT_BINARY_DIR}/helperServer.c
)

set(DYLIB_INSTALL_NAME "/usr/lib/system/liblaunch.dylib")
add_circular(launch FAT
	SOURCES
		${launch_sources}
	SIBLINGS
		system_c
		system_kernel
		system_dyld
	DEPENDENCIES
		system_pthread
		system_malloc
		platform
		libdispatch_shared
		compiler_rt
)

install(TARGETS launch DESTINATION libexec/darling/usr/lib/system)

