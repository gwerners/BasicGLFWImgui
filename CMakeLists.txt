
cmake_minimum_required(VERSION 3.6)

project(Basic)

set(ICON glfw.icns)
set(TEXTURE container.jpg)
set(RESOURCE_FILES
  glfw.icns
  container.jpg
  awesomeface.png
  shader.vs
  shader.fs
)

include_directories("${CMAKE_SOURCE_DIR}/deps")
include_directories("${CMAKE_SOURCE_DIR}/GL")
include_directories("${CMAKE_SOURCE_DIR}/GLFW")


set(GLAD "${CMAKE_SOURCE_DIR}/deps/glad/glad.h"
         "${CMAKE_SOURCE_DIR}/deps/glad.c")

if (APPLE)
  add_executable(${PROJECT_NAME}
    main.cpp
    gl3w.c
    imgui_impl_glfw_gl3.cpp
    imgui.cpp
    imgui_draw.cpp
    ${RESOURCE_FILES} ${GLAD})

  target_link_libraries(${PROJECT_NAME}
    "-framework OpenGL"
    "-framework IOKit"
    "-framework CoreVideo"
    "-framework Cocoa"
    ${CMAKE_SOURCE_DIR}/libglfw3_OSX.a)

  set_target_properties(${PROJECT_NAME} PROPERTIES
    MACOSX_BUNDLE TRUE
    MACOSX_FRAMEWORK_IDENTIFIER org.gwf.${PROJECT_NAME}
    RESOURCE "${RESOURCE_FILES}")
elseif (UNIX AND NOT APPLE)

  configure_file(${CMAKE_SOURCE_DIR}/shader.vs ./shader.vs COPYONLY)
  configure_file(${CMAKE_SOURCE_DIR}/shader.fs ./shader.fs COPYONLY)
  configure_file(${CMAKE_SOURCE_DIR}/container.jpg ./container.jpg COPYONLY)
  configure_file(${CMAKE_SOURCE_DIR}/awesomeface.png ./awesomeface.png COPYONLY)

  add_executable(${PROJECT_NAME}
    main.cpp
    gl3w.c
    imgui_impl_glfw_gl3.cpp
    imgui.cpp
    imgui_draw.cpp
    ${RESOURCE_FILES} ${GLAD})

  target_link_libraries(${PROJECT_NAME}
    "-lrt"
    "-lm"
    "-lX11"
    "-lXrandr"
    "-lXinerama"
    "-lXxf86vm"
    "-lXcursor"
    "-lGL"
    "-pthread"
    "-ldl"
    ${CMAKE_SOURCE_DIR}/libglfw3_LINUX.a)
endif()
