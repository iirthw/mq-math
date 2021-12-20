#pragma once

// Allow nonstandard extension used : nameless struct/union.
# ifdef MQ_NONSTD_EXT 
#   if defined(__clang__) 
#       pragma clang diagnostic push 
#       pragma clang diagnostic ignored "-Wgnu-anonymous-struct" 
#       pragma clang diagnostic ignored "-Wnested-anon-types" 
#   elif defined(__GNUC__) || defined(__GNUG__) 
#       pragma GCC diagnostic push 
#       pragma GCC diagnostic ignored "-Wpedantic" 
#   elif defined(_MSC_VER) 
#       pragma warning(push) 
#       pragma warning(disable: 4201) 
#   endif 
# endif

# ifdef MQ_NONSTD_EXT 
#   if defined(__clang__) 
#       pragma clang diagnostic pop 
#   elif defined(__GNUC__) || defined(__GNUG__) 
#       pragma GCC diagnostic pop 
#   elif defined(_MSC_VER) 
#       pragma warning(pop) 
#   endif 
# endif