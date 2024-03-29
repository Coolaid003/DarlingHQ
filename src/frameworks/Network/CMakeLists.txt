project(Network)

remove_sdk_framework(Network)

set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "1.0.0")

set(FRAMEWORK_VERSION "A")

generate_sdk_framework(Network
    VERSION ${FRAMEWORK_VERSION}
    HEADER "include/Network"
)

add_framework(Network
    FAT
    CURRENT_VERSION
    VERSION ${FRAMEWORK_VERSION}

    SOURCES
        src/Network.m
        src/NWAWDLibnetcoreMPTCPStatsReport.m
        src/NWSystemPathMonitor.m
        src/NWPBCloseConnection.m
        src/NWAWDLBEndpointsFetchReport.m
        src/NWTCPConnection.m
        src/NWAWDLibnetcoreTCPECNInterfaceStatsReport.m
        src/NWAWDNWAPIUsage.m
        src/NWAddressEndpoint.m
        src/NWPBEndpoint.m
        src/NWAWDLibnetcoreTCPKernelStats.m
        src/NWAWDNWConnectionReport.m
        src/NWHostEndpoint.m
        src/NWMonitor.m
        src/NWAWDMPTCPConnectionReport.m
        src/NWAWDLibnetcoreConnectionStatisticsReport.m
        src/NWAWDLibnetcoreStatsReport.m
        src/NWConnection.m
        src/NWAWDNWActivity.m
        src/NWAWDLibnetcoreNetworkdStatsReport.m
        src/NWPBBrowseDescriptor.m
        src/NWRemotePacketProxy.m
        src/NWPBServiceBrowse.m
        src/NWPBAgent.m
        src/NWPBAgentClass.m
        src/ManagedNetworkSettings.m
        src/NWAWDLibnetcoreTCPStatsReport.m
        src/NWAWDLibnetcoreCellularFallbackReport.m
        src/NWAWDNWDeviceReport.m
        src/NWAWDLBConnectionReport.m
        src/NWAdvertiseDescriptor.m
        src/NWEndpoint.m
        src/NWAWDLibnetcoreTCPTFOStatsReport.m
        src/NWPBParameters.m
        src/NWAWDNWActivityEpilogue.m
        src/NWPBUpdateBrowse.m
        src/NWNetworkAgentRegistration.m
        src/NWPHContext.m
        src/NWPHHandler.m
        src/NWPrivilegedHelper.m
        src/NWUDPSession.m
        src/NWRemoteConnectionWriteRequest.m
        src/NWRemoteConnectionDirector.m
        src/NWNetworkDescription.m
        src/NWUDPListener.m
        src/NWParameters.m
        src/NWGenericNetworkAgent.m
        src/NWPBAddressEndpoint.m
        src/NWBonjourServiceEndpoint.m
        src/NWPath.m
        src/NWPathFlow.m
        src/NWRemoteConnectionWrapper.m
        src/NWRemoteBrowserWrapper.m
        src/NWRemoteConnectionActor.m
        src/NWAWDLibnetcoreMbufStatsReport.m
        src/NWPBHostEndpoint.m
        src/NWAWDMPTCPSubflowSwitchingReport.m
        src/NWAWDNWL2Report.m
        src/NWPBCommandMessage.m
        src/NWStreamConnection.m
        src/NWPBOpenConnection.m
        src/NWProtocolTransform.m
        src/NWInterface.m
        src/NWPBStartBrowse.m
        src/NWAWDLibnetcoreConnectionDataUsageSnapshot.m
        src/NWBrowser.m
        src/NWAWDMPTCPConnectionInterfaceReport.m
        src/NWBonjourBrowseDescriptor.m
        src/NWPBPath.m
        src/NWAWDLibnetcoreRNFActivityNotification.m
        src/NWMessage.m
        src/NWOutboundMessage.m
        src/NWInboundMessage.m
        src/NWMessageConnection.m
        src/NWL2Report.m
        src/NWDeviceReport.m
        src/NWActivityStatistics.m
        src/NWActivityEpilogueStatistics.m
        src/NWActivityEmptyTrigger.m
        src/NWPBStopBrowse.m
        src/NWConnectionStatistics.m
        src/NWPBInterface.m
        src/NWPBSendData.m
        src/NWAWDLibnetcoreTCPConnectionReport.m
        src/NWAWDNWActivityEmptyTrigger.m
        src/NWPBServiceEndpoint.m
        src/NWDatagramConnection.m
        src/NWBrowseDescriptor.m
        src/NWAWDLBClientConnectionReport.m
        src/NWPBUpdatePath.m
        src/NWResolver.m
        src/NWTCPListener.m
        src/NWPathEvaluator.m
        src/NWAWDLibnetcoreTCPECNStatsReport.m

    DEPENDENCIES
        system
        objc
        Foundation
)

reexport(Network libnetwork ${CMAKE_BINARY_DIR}/src/external/libnetwork/libnetwork.dylib)
