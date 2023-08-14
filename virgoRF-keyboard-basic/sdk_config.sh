#!/bin/bash

SDK_CONFIG_FILE=config/sdk_config.h
CMSIS_CONFIG_TOOL=../../external_tools/cmsisconfig/CMSIS_Configuration_Wizard.jar
java -jar $CMSIS_CONFIG_TOOL $SDK_CONFIG_FILE
