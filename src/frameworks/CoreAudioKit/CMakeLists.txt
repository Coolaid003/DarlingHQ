project(CoreAudioKit)

remove_sdk_framework(CoreAudioKit)

set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "1.0.0")

set(FRAMEWORK_VERSION "A")

generate_sdk_framework(CoreAudioKit
    VERSION ${FRAMEWORK_VERSION}
    HEADER "include/CoreAudioKit"
)

add_framework(CoreAudioKit
    FAT
    CURRENT_VERSION
    VERSION ${FRAMEWORK_VERSION}

    SOURCES
        src/CoreAudioKit.m
        src/AudioBox.m
        src/AUNSButtonActionOnMouseDown.m
        src/CACentralTableViewCell.m
        src/CABTLEMIDIWindowController.m
        src/CABTLEMIDIImpl.m
        src/AUViewController.m
        src/AUAudioUnitViewConfiguration.m
        src/AUNSDeadButton.m
        src/AUAudioUnitRemoteViewController.m
        src/CAToolTipEditTextField.m
        src/CAToolTipParameterStrip.m
        src/CAToolTipPopupMenuStrip.m
        src/CAAxisSettings.m
        src/CAAppleAUGraphView.m
        src/AUNSFineSlider.m
        src/CAFilterControl.m
        src/CAInterDeviceAudioViewController.m
        src/AMSNetworkDeviceCapabilitiesCellView.m
        src/AUNSFlippedView.m
        src/AUAudioUnitViewService.m
        src/AUGenericView.m
        src/AUParameterClump.m
        src/CAUIActionCell.m
        src/TransportInfo.m
        src/AMSNetworkBoxGroup.m
        src/AMSNetworkDeviceOutlineView.m
        src/CANetworkBrowserImpl.m
        src/CANetworkBrowserWindowController.m
        src/AUCocoaPropertyControlBase.m
        src/AUCPULoadView.m
        src/iDamDevice.m
        src/AUDiskStreamingCheckbox.m
        src/AUMeterView.m
        src/AMSNetworkInfoView.m
        src/AURenderQualityPopUp.m
        src/AUChannelLayoutPopUp.m
        src/iDamDeviceImageView.m
        src/AMSBTLEConnectionManager.m
        src/AMSBTLEAdvertisementManager.m
        src/AUPannerViewLoader.m
        src/AUPannerView.m
        src/AUPannerViewPriv.m
        src/CAAppleAU_ToolTipWindow.m
        src/CACustomToolTipView.m
        src/CAAttenuationView.m
        src/CAGraphView.m
        src/CAUITableView.m
        src/CAAppleEQGraphView.m
        src/iDamDeviceNameField.m
        src/AMSBTLEPeripheral.m
        src/CAPannerView.m
        src/CASurroundPannerView.m
        src/AUGenericViewFactory.m
        src/AMSNetworkDeviceTableCellView.m
        src/CAAppleAUCustomViewBase.m
        src/AUParameterStripSizingManager.m
        src/AUAdvancedParameterStrip.m
        src/AUCollapsableParameterClump.m
        src/AUParameterStrip.m
        src/NetworkPanelUtilities.m
        src/AUHistoryView.m

    DEPENDENCIES
        system
        objc
        Foundation
)
