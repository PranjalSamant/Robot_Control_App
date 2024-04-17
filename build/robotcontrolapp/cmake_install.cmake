# Install script for directory: /home/pranjal/ws_moveit/src/robotcontrolapp

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
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/pranjal/ws_moveit/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/pranjal/ws_moveit/install" TYPE PROGRAM FILES "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/pranjal/ws_moveit/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/pranjal/ws_moveit/install" TYPE PROGRAM FILES "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/pranjal/ws_moveit/install/setup.bash;/home/pranjal/ws_moveit/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/pranjal/ws_moveit/install" TYPE FILE FILES
    "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/setup.bash"
    "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/pranjal/ws_moveit/install/setup.sh;/home/pranjal/ws_moveit/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/pranjal/ws_moveit/install" TYPE FILE FILES
    "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/setup.sh"
    "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/pranjal/ws_moveit/install/setup.zsh;/home/pranjal/ws_moveit/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/pranjal/ws_moveit/install" TYPE FILE FILES
    "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/setup.zsh"
    "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/pranjal/ws_moveit/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/pranjal/ws_moveit/install" TYPE FILE FILES "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/robotcontrolapp.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robotcontrolapp/cmake" TYPE FILE FILES
    "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/robotcontrolappConfig.cmake"
    "/home/pranjal/ws_moveit/build/robotcontrolapp/catkin_generated/installspace/robotcontrolappConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robotcontrolapp" TYPE FILE FILES "/home/pranjal/ws_moveit/src/robotcontrolapp/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/gtest/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/controller_configuration/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/hand_eye_calibration/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/interactivity/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/kinematics/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/motion_planning_api/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/motion_planning_pipeline/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/move_group_interface/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/move_group_python_interface/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/perception_pipeline/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/pick_place/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/planning/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/planning_scene/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/planning_scene_ros_api/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/robot_model_and_robot_state/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/state_display/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/subframes/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/tests/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/trajopt_planner/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/creating_moveit_plugins/lerp_motion_planner/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/moveit_cpp/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/collision_environments/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/visualizing_collisions/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/bullet_collision_checker/cmake_install.cmake")
  include("/home/pranjal/ws_moveit/build/robotcontrolapp/doc/mesh_filter/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/pranjal/ws_moveit/build/robotcontrolapp/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
