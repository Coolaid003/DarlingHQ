project(OSAKit)

remove_sdk_framework(OSAKit)

set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "107.0.0")

set(FRAMEWORK_VERSION "A")

generate_sdk_framework(OSAKit
    VERSION ${FRAMEWORK_VERSION}
    HEADER "include/OSAKit"
)

add_framework(OSAKit
    FAT
    CURRENT_VERSION
    VERSION ${FRAMEWORK_VERSION}

    SOURCES
        src/OSAKit.m
        src/OSAMergedSortedArray.m
        src/OSATextStorage.m
        src/OSAScriptTextStorage.m
        src/OSAScriptAssistant.m
        src/OSAScriptAssistantView.m
        src/OSAScriptAssistantWindow.m
        src/OSAScriptElement.m
        src/OSAGlobalElement.m
        src/OSAPropertyElement.m
        src/OSAScriptObjectElement.m
        src/OSALongCommentElement.m
        src/OSAShortCommentElement.m
        src/OSATextElement.m
        src/OSAUnknownElement.m
        src/OSAScriptGenerator.m
        src/OSAScriptParser.m
        src/OSAControlElement.m
        src/OSAConsideringElement.m
        src/OSAIgnoringElement.m
        src/OSAIfElement.m
        src/OSAElseIfElement.m
        src/OSAElseElement.m
        src/OSAEndIfElement.m
        src/OSARepeatElement.m
        src/OSATellElement.m
        src/OSATryElement.m
        src/OSAOnErrorElement.m
        src/OSAEndTryElement.m
        src/OSAUsingTermsFromElement.m
        src/OSAWithTimeoutElement.m
        src/OSAWithTransactionElement.m
        src/OSAHandlerElement.m
        src/OSACommandHandlerElement.m
        src/OSAEventHandlerElement.m
        src/OSATerminologyManager.m
        src/OSAActiveProc.m
        src/OSASendProc.m
        src/OSARecordingController.m
        src/OSAScriptAssistantDataSource.m
        src/OSAScriptAssistantWordBasedDataSource.m
        src/OSAScriptAssistantStrategy.m
        src/OSAScriptAssistantKeywordStrategy.m
        src/OSAScriptAssistantTerminologyStrategy.m
        src/OSAScriptAssistantParserStrategy.m
        src/OSAScriptAssistantScannerStrategy.m
        src/OSANameCompletionItem.m
        src/OSAKeywordCompletionItem.m
        src/OSATerminologyCompletionItem.m
        src/OSAComponentInstance.m
        src/OSALanguagePrivate.m
        src/OSALanguage.m
        src/OSAScript.m
        src/OSAScriptPrivate.m
        src/OSAScriptController.m
        src/OSAScriptControllerPrivate.m
        src/OSAScriptView.m
        src/OSAScriptViewPrivate.m
        src/OSADictionaryController.m
        src/OSADictionaryControllerPrivate.m
        src/OSADictionaryHistoryItem.m
        src/OSADictionaryHistory.m
        src/WebKitSoftLinking.m
        src/OSADictionaryView.m
        src/OSADictionaryViewPrivate.m
        src/OSASplitView.m
        src/OSADictionary.m
        src/OSADictionaryPrivate.m
        src/OSADefinition.m
        src/OSAAccessorDefinition.m
        src/OSAClassDefinition.m
        src/OSACocoaDefinition.m
        src/OSAVerbDefinition.m
        src/OSACommandDefinition.m
        src/OSAContentsDefinition.m
        src/OSADirectParameterDefinition.m
        src/OSADocumentationDefinition.m
        src/OSAElementDefinition.m
        src/OSAEnumerationDefinition.m
        src/OSAEnumeratorDefinition.m
        src/OSAEventDefinition.m
        src/OSAParameterDefinition.m
        src/OSAPropertyDefinition.m
        src/OSARespondsToDefinition.m
        src/OSASuiteDefinition.m
        src/OSASynonymDefinition.m
        src/OSADictionaryWindowController.m
        src/OSAImageTextCell.m
        src/OSABrowserCell.m
        src/CPDelayedUpdaterInfo.m
        src/CPDelayedUpdateManager.m
        src/OSALanguageInstancePrivate.m
        src/OSALanguageInstance.m

    DEPENDENCIES
        system
        objc
        Foundation
)
