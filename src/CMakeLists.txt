set(SOURCE
  ${SOURCE}
  ${CMAKE_CURRENT_SOURCE_DIR}/foo.c
  ${CMAKE_CURRENT_SOURCE_DIR}/main.c
  # foo.c
  # main.c
  PARENT_SCOPE
  )
# target_sources(${PROJECT_NAME} PUBLIC foo.c main.c)

