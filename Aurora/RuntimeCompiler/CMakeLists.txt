cmake_minimum_required(VERSION 2.8)

add_sources(RuntimeCompiler_source_files
  BuildTool.cpp
  BuildTool.h
  CompileOptions.h
  Compiler.h
  FileChangeNotifier.h
  FileChangeNotifier.cpp
  FileMonitor.h
  FileMonitor.cpp
  FileSystemUtils.h
  ICompilerLogger.h
  IFileChangeNotifier.h
  IFileMonitor.h
)

if(UNIX OR APPLE)
	add_sources(RuntimeCompiler_source_files
		Compiler_PlatformPosix.cpp
	)
else()
	add_sources(RuntimeCompiler_source_files
		Compiler_PlatformWindows.cpp
	)
endif()

add_subdirectory(SimpleFileWatcher)

add_library(RuntimeCompiler ${RuntimeCompiler_source_files})