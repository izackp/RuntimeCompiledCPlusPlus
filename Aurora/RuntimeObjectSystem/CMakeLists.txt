cmake_minimum_required(VERSION 2.8)

add_sources(RuntimeObjectSystem_source_files
  IObject.h
  IObjectFactorySystem.h
  IRuntimeObjectSystem.h
  ISimpleSerializer.h
  ObjectInterface.h
  ObjectInterfacePerModule.h
  ObjectInterfacePerModuleSource.cpp
  RuntimeInclude.h
  RuntimeLinkLibrary.h
  RuntimeObjectSystem.cpp
  RuntimeObjectSystem.h
  RuntimeProtector.h
  RuntimeSourceDependency.h
)

if(UNIX OR APPLE)
	add_sources(RuntimeObjectSystem_source_files
		RuntimeObjectSystem_PlatformPosix.cpp
	)
else()
	add_sources(RuntimeObjectSystem_source_files
		RuntimeObjectSystem_PlatformWindows.cpp
	)
endif()

add_subdirectory(ObjectFactorySystem)
add_subdirectory(SimpleSerializer)

add_library(RuntimeObjectSystem ${RuntimeObjectSystem_source_files})