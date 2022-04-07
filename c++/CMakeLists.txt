cmake_minimum_required(VERSION 3.20.3)

project(TripServiceKata VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
fetchcontent_declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0
)
fetchcontent_makeavailable(googletest)

add_executable(TripServiceKata
  TripService/Trip.h
  TripService/TripDAO.h
  TripService/TripService.h
  TripService/TripService.cpp
  TripService/User.h
  TripService/UserSession.h
  main.cpp)

add_executable(Testrunner
  tests/TripServiceTests.cpp)

target_link_libraries(Testrunner gmock gmock_main)
