project (mq_math)

cmake_minimum_required (VERSION 3.1)
set (CMAKE_CXX_STANDARD 11)

set (HEADER_FILES
     public/mat.h
     public/mat4_row_major.h
     public/mq.h
     public/vec.h
     public/vec2.h
     public/vec3.h
     public/vec4.h
	)
set (IMPL_FILES 
     impl/mat2.cpp
     impl/mat3.cpp
     impl/mat4.cpp
     )
set (SOURCE_FILES ${HEADER_FILES} ${IMPL_FILES})

# ------------------------------------------------------------------------------

add_library (mq_math STATIC ${SOURCE_FILES})

# ------------------------------------------------------------------------------

target_include_directories (
    ${PROJECT_NAME} 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public
    )

# To treat warning as error, uncomment the following:
if (MSVC)
   target_compile_options (mq_math PRIVATE /W4 /WX)
else ()
#   target_compile_options (mq_math PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif ()

# ------------------------------------------------------------------------------
# If unit tests are needed, uncomment the following:
# set (ENABLE_TESTS ON)

if (DEFINED ENABLE_TESTS)     
     add_subdirectory (test)
endif ()
