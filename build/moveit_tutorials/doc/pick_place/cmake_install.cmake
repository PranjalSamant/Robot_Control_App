# Install script for directory: /home/pranjal/ws_moveit/src/moveit_tutorials/doc/pick_place

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/pranjal/ws_moveit/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/pick_place_tutorial" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/pick_place_tutorial")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/pick_place_tutorial"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials" TYPE EXECUTABLE FILES "/home/pranjal/ws_moveit/devel/.private/moveit_tutorials/lib/moveit_tutorials/pick_place_tutorial")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/pick_place_tutorial" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/pick_place_tutorial")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/pick_place_tutorial"
         OLD_RPATH "/home/pranjal/ws_moveit/devel/.private/moveit_ros_planning_interface/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_warehouse/lib:/opt/ros/noetic/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_manipulation/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_move_group/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_perception/lib:/home/pranjal/ws_moveit/devel/.private/moveit_visual_tools/lib:/home/pranjal/ws_moveit/devel/.private/rviz_visual_tools/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_planning/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/pranjal/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/pranjal/ws_moveit/devel/.private/srdfdom/lib:/home/pranjal/ws_moveit/devel/.private/geometric_shapes/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/pick_place_tutorial")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/direction" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/direction")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/direction"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials" TYPE EXECUTABLE FILES "/home/pranjal/ws_moveit/devel/.private/moveit_tutorials/lib/moveit_tutorials/direction")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/direction" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/direction")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/direction"
         OLD_RPATH "/home/pranjal/ws_moveit/devel/.private/moveit_ros_planning_interface/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_warehouse/lib:/opt/ros/noetic/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_manipulation/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_move_group/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_perception/lib:/home/pranjal/ws_moveit/devel/.private/moveit_visual_tools/lib:/home/pranjal/ws_moveit/devel/.private/rviz_visual_tools/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_planning/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/pranjal/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/pranjal/ws_moveit/devel/.private/srdfdom/lib:/home/pranjal/ws_moveit/devel/.private/geometric_shapes/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/direction")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/continous" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/continous")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/continous"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials" TYPE EXECUTABLE FILES "/home/pranjal/ws_moveit/devel/.private/moveit_tutorials/lib/moveit_tutorials/continous")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/continous" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/continous")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/continous"
         OLD_RPATH "/home/pranjal/ws_moveit/devel/.private/moveit_ros_planning_interface/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_warehouse/lib:/opt/ros/noetic/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_manipulation/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_move_group/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_perception/lib:/home/pranjal/ws_moveit/devel/.private/moveit_visual_tools/lib:/home/pranjal/ws_moveit/devel/.private/rviz_visual_tools/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_planning/lib:/home/pranjal/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/pranjal/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/pranjal/ws_moveit/devel/.private/srdfdom/lib:/home/pranjal/ws_moveit/devel/.private/geometric_shapes/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_tutorials/continous")
    endif()
  endif()
endif()
