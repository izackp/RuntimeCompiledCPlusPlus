cmake_minimum_required(VERSION 2.8)

add_sources(ConsoleExample_source_files
  ConsoleExample.cpp
  ConsoleGame.cpp
  ConsoleGame.h
  InterfaceIds.h
  IUpdateable.h
  RuntimeObject01.cpp
  StdioLogSystem.cpp
  StdioLogSystem.h
)

MESSAGE("add_executable: " ${ConsoleExample_source_files})
add_executable(ConsoleExample ${ConsoleExample_source_files})
target_link_libraries(ConsoleExample RuntimeCompiler RuntimeObjectSystem)