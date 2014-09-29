cmake_minimum_required(VERSION 2.8)

add_sources(RuntimeCompiler_source_files_sub
  FileWatcher.cpp
  FileWatcher.h
  FileWatcherImpl.h
)

if(UNIX AND NOT APPLE)
	add_sources(RuntimeCompiler_source_files
		FileWatcherLinux.cpp
		FileWatcherLinux.h
	)
endif()

if(WIN32)
	add_sources(RuntimeCompiler_source_files
		FileWatcherWin32.cpp
		FileWatcherWin32.h
	)
endif()

if(APPLE)
	add_sources(RuntimeCompiler_source_files
		FileWatcherOSX.cpp
		FileWatcherOSX.h
	)
endif()

set(RuntimeCompiler_source_files "${RuntimeCompiler_source_files}" "${RuntimeCompiler_source_files_sub}" PARENT_SCOPE)