project(xtrace)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions -fno-rtti -std=c++11")

add_definitions(-nostdinc -fvisibility=hidden)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

set(xtrace_sources
	xtracelib.cpp
	trampoline.S
	mach_trace.cpp
	bsd_trace.cpp
	mig_trace.cpp
	tls.cpp
	memory.cpp
	lock.cpp
	posix_spawn_args.cpp
	string.cpp
)

if (TARGET_x86_64)
	set(DYLIB_INSTALL_NAME "/usr/lib/darling/libxtrace.dylib")
	add_darling_library(xtracelib SHARED ${xtrace_sources})
	set_target_properties(xtracelib PROPERTIES OUTPUT_NAME "xtrace")
	target_link_libraries(xtracelib system)

	install(TARGETS xtracelib DESTINATION libexec/darling/usr/lib/darling)
	install(FILES xtrace DESTINATION libexec/darling/usr/bin
	    PERMISSIONS
	    OWNER_READ OWNER_WRITE OWNER_EXECUTE
	    GROUP_READ GROUP_EXECUTE
	    WORLD_READ WORLD_EXECUTE
	)
endif (TARGET_x86_64)
