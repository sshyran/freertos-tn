if(NOT DRIVER_CODEC_MIMX8ML8_INCLUDED)
    
    set(DRIVER_CODEC_MIMX8ML8_INCLUDED true CACHE BOOL "driver_codec component is included.")

    target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/fsl_codec_common.c
    )


    target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/.
    )


    #OR Logic component
    if(CONFIG_USE_component_wm8904_adapter_MIMX8ML8)
         include(component_wm8904_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_wm8960_adapter_MIMX8ML8)
         include(component_wm8960_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_wm8524_adapter_MIMX8ML8)
         include(component_wm8524_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_sgtl_adapter_MIMX8ML8)
         include(component_sgtl_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_da7212_adapter_MIMX8ML8)
         include(component_da7212_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_ak4497_adapter_MIMX8ML8)
         include(component_ak4497_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_tfa9xxx_adapter_MIMX8ML8)
         include(component_tfa9xxx_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_tfa9896_adapter_MIMX8ML8)
         include(component_tfa9896_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_cs42888_adapter_MIMX8ML8)
         include(component_cs42888_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_wm8904_adapter_MIMX8ML8)
         include(component_codec_wm8904_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_wm8960_adapter_MIMX8ML8)
         include(component_codec_wm8960_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_wm8524_adapter_MIMX8ML8)
         include(component_codec_wm8524_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_sgtl_adapter_MIMX8ML8)
         include(component_codec_sgtl_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_da7212_adapter_MIMX8ML8)
         include(component_codec_da7212_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_ak4497_adapter_MIMX8ML8)
         include(component_codec_ak4497_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_tfa9xxx_adapter_MIMX8ML8)
         include(component_codec_tfa9xxx_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_tfa9896_adapter_MIMX8ML8)
         include(component_codec_tfa9896_adapter_MIMX8ML8)
    endif()
    if(CONFIG_USE_component_codec_cs42888_adapter_MIMX8ML8)
         include(component_codec_cs42888_adapter_MIMX8ML8)
    endif()
    if(NOT (CONFIG_USE_component_wm8904_adapter_MIMX8ML8 OR CONFIG_USE_component_wm8960_adapter_MIMX8ML8 OR CONFIG_USE_component_wm8524_adapter_MIMX8ML8 OR CONFIG_USE_component_sgtl_adapter_MIMX8ML8 OR CONFIG_USE_component_da7212_adapter_MIMX8ML8 OR CONFIG_USE_component_ak4497_adapter_MIMX8ML8 OR CONFIG_USE_component_tfa9xxx_adapter_MIMX8ML8 OR CONFIG_USE_component_tfa9896_adapter_MIMX8ML8 OR CONFIG_USE_component_cs42888_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_wm8904_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_wm8960_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_wm8524_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_sgtl_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_da7212_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_ak4497_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_tfa9xxx_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_tfa9896_adapter_MIMX8ML8 OR CONFIG_USE_component_codec_cs42888_adapter_MIMX8ML8))
        message(WARNING "Since component_wm8904_adapter_MIMX8ML8/component_wm8960_adapter_MIMX8ML8/component_wm8524_adapter_MIMX8ML8/component_sgtl_adapter_MIMX8ML8/component_da7212_adapter_MIMX8ML8/component_ak4497_adapter_MIMX8ML8/component_tfa9xxx_adapter_MIMX8ML8/component_tfa9896_adapter_MIMX8ML8/component_cs42888_adapter_MIMX8ML8/component_codec_wm8904_adapter_MIMX8ML8/component_codec_wm8960_adapter_MIMX8ML8/component_codec_wm8524_adapter_MIMX8ML8/component_codec_sgtl_adapter_MIMX8ML8/component_codec_da7212_adapter_MIMX8ML8/component_codec_ak4497_adapter_MIMX8ML8/component_codec_tfa9xxx_adapter_MIMX8ML8/component_codec_tfa9896_adapter_MIMX8ML8/component_codec_cs42888_adapter_MIMX8ML8 is not included at first or config in config.cmake file, use component_wm8904_adapter_MIMX8ML8 by default.")
        include(component_wm8904_adapter_MIMX8ML8)
    endif()

    include(driver_common_MIMX8ML8)

endif()
