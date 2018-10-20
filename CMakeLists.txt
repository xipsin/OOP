CMAKE_MINIMUM_REQUIRED(VERSION 3.9) # Обязательно
PROJECT(shapes) # Название проекта

# INCLUDE_DIRECTORIES(${INCLUDE_DIRS}) -- Где искать инклюды
# LINK_DIRECTORIES(${DIRS}) -- Компилятор будет искать либы в директориях ${DIRS}
# ADD_DEFINITIONS(-DMY_DEF=1) -- В коде будет #define MY_DEF 1

SET(SOURCES
    src/main.cpp
)

#       >>> название исполняемого файла <<<    >>> Список всех исходников <<<
ADD_EXECUTABLE(${CMAKE_PROJECT_NAME}                    ${SOURCES})

# TARGET_LINK_LIBRARIES(${CMAKE_PROJECT_NAME} ${LIBRARIES})


