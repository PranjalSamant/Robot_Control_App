add_executable(pick_place_tutorial src/pick_place_tutorial.cpp)
target_link_libraries(pick_place_tutorial ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS pick_place_tutorial DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

add_executable(direction src/direction.cpp) # Assuming the new script is named direction.cpp
target_link_libraries(direction ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS direction DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

add_executable(continous src/continous.cpp) # Assuming the new script is named continous.cpp
target_link_libraries(continous ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS continous DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
