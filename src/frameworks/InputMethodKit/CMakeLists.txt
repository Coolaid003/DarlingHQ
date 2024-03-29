project(InputMethodKit)

remove_sdk_framework(InputMethodKit)

set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "429.0.0")

set(FRAMEWORK_VERSION "A")

generate_sdk_framework(InputMethodKit
    VERSION ${FRAMEWORK_VERSION}
    HEADER "include/InputMethodKit"
)

add_framework(InputMethodKit
	FAT
	CURRENT_VERSION
	VERSION ${FRAMEWORK_VERSION}

	SOURCES
		src/InputMethodKit.m
		src/IMKUICandidateController.m
		src/IMKUIView.m
		src/IMKUITopView.m
		src/IMKTextDocumentTraits.m
		src/IMKDocumentContent.m
		src/IMKPhoneNumberInputMethod.m
		src/IMKExtensionMainThreadInit.m
		src/IMKCandidateController.m
		src/IMKKey.m
		src/IMKKeyboardDescriptor.m
		src/IMKKeyboardState.m
		src/IMKKeyboard.m
		src/IMKCandidateArrowView.m
		src/IMKCandidateGroupViewUnit.m
		src/IMKCandidateGroupView.m
		src/IMKCandidateSelectionViewButton.m
		src/IMKCandidateSelectionView.m
		src/IMKCandidateStepperAccessoryImageView.m
		src/IMKCandidateStepperView.m
		src/IMKTruncatedTextField.m
		src/IMKTextFieldCell.m
		src/IMKTextField.m
		src/IMKClipView.m
		src/IMKExtensionHostContext.m
		src/IMKSimulatorXCUICandidateProxy.m
		src/IMKUICandidateBarCorrectionPanelController.m
		src/IMKUICandidateIterativeLayout.m
		src/IMKUISingleCandidateListView.m
		src/IMKUITextField.m
		src/IMKUIWindowContentEmptyView.m
		src/IMKUIWindowContentView.m
		src/IMKUIVisualEffectView.m
		src/IMKUIPanel.m
		src/IMKCandidatePositionedUIString.m
		src/IMKCandidateDisplayArray.m
		src/IMKUICandidateSteppingWindowController.m
		src/IMKUICandidateAccessibilityElement.m
		src/IMKUICandidatePressAndHoldWindowController.m
		src/IMKUIWindowBasedCandidateController.m
		src/IMKSimulatorWindowGrabber.m
		src/IMKAbstractInputMethod.m
		src/IMKVerbatimInputMethod.m
		src/IMKCandidateCanvas.m
		src/IMKUIScrollView.m
		src/IMKUICandidateListView.m
		src/IMKXPCServiceInfoDictionary.m
		src/IMKDocumentView.m
		src/IMKCandidateListDictionary.m
		src/IMKInputControllerPrivate.m
		src/IMKInputController.m
		src/IMKUICandidateSortingBarButton.m
		src/IMKUICandidateSortingBarView.m
		src/IMKUICandidateLineLayoutIterator.m
		src/IMKSimulatorUIOrientationButton.m
		src/IMKSimulatorUIDirectionButton.m
		src/IMKSimulatorSpotlightButton.m
		src/IMKSimulatorPreferencesBar.m
		src/IMKSimulatorWindowContentView.m
		src/IMKSimulatorWindow.m
		src/IMKCompositionResult.m
		src/IMKUIProperties.m
		src/IPMDEventState.m
		src/IMKXPCCompatibilityDOProxyInterposer.m
		src/IMKServerInvocationSentinel.m
		src/IMKServerXPCInvocation.m
		src/IPMDServerClientWrapper.m
		src/IMKServerPrivate.m
		src/IMKServer.m
		src/IMKSimulatorApplication.m
		src/IMKUICandidateGroupViewItemView.m
		src/IMKUICandidateGroupViewItem.m
		src/IMKUICandidateGroupView.m
		src/IMKUICandidateHorizontalController.m
		src/IMKUICandidateHorizontalScrubberController.m
		src/IMKCandidatesPrivate.m
		src/IMKCandidates.m
		src/IMKSimulatorTextView.m
		src/IMKCandidateUnitViewContentView.m
		src/IMKCandidateUnitView.m
		src/IMKCandidateSecondaryUnitView.m
		src/IMKAppleSpellCandidateEngine.m
		src/IMKCandidatePickerInputMethod.m
		src/IMKSimulatorDummyDelegate.m
		src/IMKSimulatorController.m
		src/IMKLog.m
		src/IMKCandidateView.m
		src/IMKCandidateUIElement.m
		src/IMKUICandidateBarView.m
		src/IMKExtensionServiceContext.m
		src/IMKNSApplication.m
		src/IMKExtensionService_Subsystem.m
		src/IMKUICandidateVerticalWindowController.m
		src/IMKLayoutLine.m
		src/IMKLayout.m
		src/IMKDefinitionToLayoutConstraint.m
		src/IMKDefinitionToLayoutController.m
		src/IMKUICandidateVerticalController.m
		src/IMKUICandidatePredictionVerticalController.m
		src/IMKUICandidateLargePredictionVerticalController.m
		src/IMKUICandidateVerticalScrubberController.m
		src/IMKAutoPeriodInputMethod.m
		src/IMKTextInputTextDocumentAdaptor.m
		src/IMKAutoCapitalizationInputMethod.m
		src/IMKUIInformation.m
		src/IMKExtensionIM.m
		src/IMKUICandidateItemView.m
		src/IMKPreferences.m
		src/IMKUICandidateWindowController.m
		src/IMKCandidateEngine.m
		src/IMKCandidateBasedInputController.m
		src/IMKUICandidateLayoutTraits.m
		src/IMKCandidateControllerBasedCandidateMenu.m
		src/IMKCandidateLayoutUnit.m
		src/IMKUICandidateBarListView.m
		src/IMKSimulatorInputModeSelector.m
		src/IMKCurrencyInputMethod.m
		src/IMKSimulatorInputClient.m
		src/IMKMultitapInputMethod.m
		src/IMKWindowController.m
		src/IMKContentView.m
		src/IMKCandidateWindow.m
		src/IMKCandidateLineView.m
		src/IMKCandidateDefinitionUnit.m
		src/IMKUICandidateCollectionDocumentView.m
		src/IMKDebugging.m
		src/IMKUICandidateInformationController.m
		src/IMKUICandidateTouchBarController.m
		src/IMKUICandidateFunctionKeyTouchBarController.m
		src/IMKUICandidateTrackpadHandwritingTouchBarController.m
		src/IMKCandidateUIStringProperties.m
		src/IMKCandidateUIProperties.m
		src/IMKCandidatePopoverController.m
		src/IMKUIInformationWindowController.m
		src/IMKAbstractTextDocument.m
		src/IMKTextDocument.m
		src/IMKLayoutToViewController.m
		src/IMKKeyboardInputController.m
		src/IMKUICandidateTouchBarCandidateListItemController.m
		src/IMKSimulatorPasteboardValueDictionary.m
		src/IMKKeyboardLayoutInputMethod.m
		src/IMKObserver.m
		src/IMKTextDocumentTextInputAdaptor.m
		src/IMKNSXPCListener.m
		src/IMKUICandidateWindowPositionController.m
		src/IMKEnclosingCharactersInputMethod.m
		src/IMKCandidate.m
		src/IMKCandidateList.m
		src/IMKTSMInputSourceHelper.m
		src/IMKUICandidateHorizontalExpandableController.m
		src/IMKCandidateUnitViewTextContainer.m
		src/IMKKeyboardService.m
		src/IMKUICandidateTouchBarLineLayout.m
		src/IMKTouchBarUICandidate.m
		src/IMKUIScrubberView.m
		src/IMKUICandidateTouchBarItemController.m
		src/IMKTextInputFunctionRowItemServiceViewController.m
		src/IMKUICandidateStepperAccessoryImageView.m
		src/IMKUICandidateStepperView.m
		src/IMKCandidateData.m
		src/IMKUIAbstractCandidateLayout.m
		src/IMKUICandidateItemLayout.m
		src/IMKUICandidateVerticallyAlignedController.m
		src/IMKUICandidatePredictionVerticallyAlignedController.m
		src/IMKUICandidateLargePredictionVerticallyAlignedController.m
		src/IMKUICandidateVerticallyAlignedScrubberController.m
		src/IMKInputContext.m
		src/IMKCandidateWindowPositioning.m
		src/IMKUIPanelMask.m
		src/IMKUICorneredPanelMask.m
		src/IMKUISpeechBalloonMask.m
		src/IMKUICandidateLineLayoutEntry.m
		src/IMKUICandidateLineLayout.m
		src/IMKCandidateNavigationController.m
		src/IMKUICandidateHorizontalSteppableController.m
		src/IMKUICandidateTextContainer.m
		src/IMKUICandidate.m
		src/IMKSimulatorKeyboardInterpreter.m
		src/IMKUIFastTrackVerticalLayout.m
		src/IMKCandidateUIStringSizeCache.m
		src/IMKCandidateUIString.m
		src/IMKUICandidateTouchBarOnScreenBridge.m
		src/IMKUIExpandableCandidateWindowController.m
		src/IMKUICandidateArrowButton.m
		src/IMKDoubleSpaceEventHandler.m
		src/IMKUITriCandidateLayout.m
		src/IMKUICandidateLayout.m

	DEPENDENCIES
		system
		objc
		Foundation
)
