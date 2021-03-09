if(NOT DRIVER_SDMA_MIMX8ML8_INCLUDED)
    
    set(DRIVER_SDMA_MIMX8ML8_INCLUDED true CACHE BOOL "driver_sdma component is included.")

    target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/fsl_sdma.c
    )


    target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/.
    )


    include(driver_memory_MIMX8ML8)

    include(driver_common_MIMX8ML8)

endif()
