add_executable(multi_sensor)

target_sources(multi_sensor PRIVATE multi_purpose_imaginary_sensor.cpp)


target_compile_features(multi_sensor PUBLIC cxx_std_17)

set_target_properties(
    multi_sensor
    PROPERTIES
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)