project (mq_math)

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

# -----------------------------------------------------------------------------

add_library (mq_math STATIC ${SOURCE_FILES})

# -----------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# If unit tests are needed, uncomment the following:
# set (ENABLE_TESTS ON)

if (DEFINED ENABLE_TESTS)     
     add_subdirectory (test)
endif ()