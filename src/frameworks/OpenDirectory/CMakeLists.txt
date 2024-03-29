project(OpenDirectory)

remove_sdk_framework(OpenDirectory)

add_subdirectory(CFOpenDirectory)

set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "1.0.0")

set(FRAMEWORK_OPENDIRECTORY_VERSION "A")

generate_sdk_framework(OpenDirectory
    VERSION ${FRAMEWORK_OPENDIRECTORY_VERSION}
    HEADER "include/OpenDirectory"
)

add_framework(OpenDirectory
    FAT
    CURRENT_VERSION
    VERSION ${FRAMEWORK_OPENDIRECTORY_VERSION}

    SOURCES
        src/OpenDirectory.m
        src/NSODSession.m
        src/ODSession.m
        src/NSODNode.m
        src/ODNode.m
        src/NSODRecord.m
        src/ODRecord.m
        src/NSODQuery.m
        src/ODQuery.m
        src/NSODContext.m
        src/ODContext.m
        src/ODConfiguration.m
        src/ODModuleEntry.m
        src/ODMappings.m
        src/ODAttributeMap.m
        src/ODRecordMap.m

    DEPENDENCIES
        system
        objc
        Foundation
)

reexport(OpenDirectory CFOpenDirectory ${CMAKE_BINARY_DIR}/src/frameworks/OpenDirectory/CFOpenDirectory/CFOpenDirectory)
