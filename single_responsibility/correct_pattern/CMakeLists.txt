add_executable(multiple_sensors)

target_sources(multiple_sensors PRIVATE main.cpp PRIVATE sensors.cpp)


target_compile_features(multiple_sensors PUBLIC cxx_std_17)

set_target_properties(
    multiple_sensors
    PROPERTIES
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)