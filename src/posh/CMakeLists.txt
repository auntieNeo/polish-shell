find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

bison_target(parser parser.y ${CMAKE_CURRENT_BINARY_DIR}/parser.cpp)
flex_target(lexer lexer.l ${CMAKE_CURRENT_BINARY_DIR}/lexer.cpp)
add_flex_bison_dependency(lexer parser)

message(STATUS ${BISON_parser_OUTPUTS})
message(STATUS ${FLEX_lexer_OUTPUTS})

include_directories(
    ${CMAkE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR})
add_library(libposh STATIC
    ${BISON_parser_OUTPUTS}
    ${FLEX_lexer_OUTPUTS}
#    posh.cpp
)
