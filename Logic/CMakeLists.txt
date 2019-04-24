cmake_minimum_required(VERSION 3.13)
project(TareaCorta1)

set(CMAKE_CXX_STANDARD 14)

add_executable(TareaCorta1 main.cpp Models/Car.cpp Models/Car.h Data_Structures/Queue.h Data_Structures/Node.h Products/ProcessManager.cpp Products/ProcessManager.h Products/Boss.cpp Products/Boss.h Data_Structures/GenericLinkedList.h Data_Structures/GenericNode.h Models/timer.h Models/timer.cpp)