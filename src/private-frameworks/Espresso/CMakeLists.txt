project(Espresso)

remove_sdk_framework(Espresso
	PRIVATE
)

set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "0.0.0")

set(FRAMEWORK_VERSION "A")

generate_sdk_framework(Espresso
    VERSION ${FRAMEWORK_VERSION}
    HEADER "include/Espresso"
	PRIVATE
)

add_framework(Espresso
	FAT
	CURRENT_VERSION
	PRIVATE
	VERSION ${FRAMEWORK_VERSION}

	SOURCES
		src/Espresso.m
		src/ETDataTensor.m
		src/EspressoMetalSingleton.m
		src/Espresso_mxnetTools_ImageBinaryRecordReader.m
		src/EspressoPass_transpose_inner_product_weights.m
		src/EspressoFaceLandmarkDetector.m
		src/EspressoFaceDetectedObject.m
		src/EspressoPass_style_transfer_two_nets_onlyanepart.m
		src/EspressoPass_style_transfer_two_nets.m
		src/EspressoPass_style_transfer_parameterize_transplant.m
		src/ETVariablesDefinition.m
		src/ETTaskState.m
		src/EspressoPass_squeeze_devop.m
		src/ETDataPoint.m
		src/ETOptimizerDef.m
		src/ETOptimizerDefSGD.m
		src/ETModelDef.m
		src/ETModelDefMLP.m
		src/ETModelDefLeNet.m
		src/ETOpaqueCopy.m
		src/ETVariable.m
		src/ETImageDescriptorExtractor.m
		src/ETModelWithExtractor.m
		src/ETDataSourceFromFolderData.m
		src/ETDataSourceBlobF4.m
		src/ETDataSourceBuf.m
		src/ETDataSourceWithExtractor.m
		src/ETDataSourceWithCache.m
		src/ETTask.m
		src/ETTaskClassifier.m
		src/ETLossConfig.m
		src/ETLossDefinition.m
		src/EspressoPass_multi_head_prune_undeclared.m
		src/EspressoConvolutionWeightsForMPS.m
		src/EspressoTrainingConvolutionWeightsForMPS.m
		src/EspressoTrainingInnerProductWeightsForMPS.m
		src/EspressoInnerProductWeightsForMPS.m
		src/MyMPSCNNConvolutionGradientState.m
		src/EspressoCustomPass.m
		src/EspressoImage2Image.m
		src/TwoNetsStyleTransfer.m
		src/ETDataPointDictionary.m
		src/EspressoBrickRegistry.m
		src/EspressoBrickTensorShape.m
		src/EspressoBrickTensor.m
		src/EspressoBrickTensorCPU.m
		src/EspressoBrickTensorMetal.m
		src/EspressoPass_find_shared_weights.m
		src/ETTaskDefinition.m
		src/EspressoMetalKernelsCache.m
		src/ETModelDefinition.m
		src/_ETBufferDataSource.m
		src/EspressoPass_make_fully_conv.m
		src/EspressoDCNEspressoOverfeatDetector.m
		src/EspressoNetwork.m
		src/EspressoContext.m
		src/EspressoFDOverfeatNetwork.m
		src/EspressoOJBC.m
		src/EspressoPass_multi_head_program_gen.m
		src/EspressoPass_rpn_tracker_merge_convs.m
		src/EspressoDataFrameMappedFile.m
		src/EspressoDataFrameAttachment.m
		src/EspressoDataFrame.m
		src/EspressoDataFrameStorage.m
		src/EspressoDataFrameImageAttachment.m
		src/EspressoDataFrameTensorAttachment.m
		src/EspressoDataFrameStorageExecutorMatchingBufferSet.m
		src/EspressoDataFrameExecutor.m
		src/EspressoDataFrameStorageExecutor.m
		src/EspressoSharedKernelCacheEntry.m
		src/EspressoPass_lstm_atomizer.m
		src/ETOptimizerDefinition.m
		src/ETLayerInitializationParameters.m
		src/ETImageFolderDataProvider.m
		src/EspressoPass_wavernn_ane.m

	DEPENDENCIES
		system
		objc
		Foundation
)
