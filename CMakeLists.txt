cmake_minimum_required (VERSION 3.26)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})

project (matrix VERSION ${PROJECT_VERSION})

add_executable(matrix src/main.cpp 
src/contrlMatrix.cpp 
src/modelMatrix.cpp)

target_include_directories(matrix
    PRIVATE
    includes/
)

set_target_properties(
	matrix PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
)

install(TARGETS matrix RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)

enable_testing()