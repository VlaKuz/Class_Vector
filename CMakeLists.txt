cmake_minimum_required(VERSION 2.6)

project(classvector)

set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/../)
include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
file(GLOB CPPS "*.cpp")

add_executable(${PROJECT_NAME} ${CPPS} ${HPPS})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

#��������� �������� ������ ��� ����������� ���������� �������� ����� 
#�����(��������). ������������� ����������� ��������� � ���������� �������� 
#������� � ��������� ������ �� ������� �������, ����������� ������� 
#������������ ������ �������� ��� �������� ������� � ���������� �������� 
#������������� �������� � ��������� �������� � ����������� ��������� 
#��������, ��������� � ������� ���� ��������� ������� �� ������, ������ �� 
#����� �������� ������� �� ��������� ������� � ����� �������. �������� 
#���������, ��������������� ������ � ���� �������.
#(On English) Class vector with operations: +, -, *const, /const, [], appeal to a specific element, 
#control the out of bounds of the array, the ability to set arbitrary bounds indexes when the object is created
#display the array element at the specified index and the entire array.