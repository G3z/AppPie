/*
 * Application.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class ApplicationItem, ApplicationApplication, ApplicationColor, ApplicationDocument, ApplicationWindow, ApplicationAttributeRun, ApplicationCharacter, ApplicationParagraph, ApplicationText, ApplicationAttachment, ApplicationWord, ApplicationDockPreferencesObject, ApplicationScreenSaver, ApplicationScreenSaverPreferencesObject, ApplicationDiskItem, ApplicationAlias, ApplicationDisk, ApplicationDomain, ApplicationClassicDomainObject, ApplicationFile, ApplicationFilePackage, ApplicationFolder, ApplicationLocalDomainObject, ApplicationNetworkDomainObject, ApplicationSystemDomainObject, ApplicationUserDomainObject, ApplicationFolderAction, ApplicationScript, ApplicationAction, ApplicationAttribute, ApplicationUIElement, ApplicationBrowser, ApplicationBusyIndicator, ApplicationButton, ApplicationCheckbox, ApplicationColorWell, ApplicationColumn, ApplicationComboBox, ApplicationDrawer, ApplicationGroup, ApplicationGrowArea, ApplicationImage, ApplicationIncrementor, ApplicationList, ApplicationMenu, ApplicationMenuBar, ApplicationMenuBarItem, ApplicationMenuButton, ApplicationMenuItem, ApplicationOutline, ApplicationPopUpButton, ApplicationProcess, ApplicationApplicationProcess, ApplicationDeskAccessoryProcess, ApplicationProgressIndicator, ApplicationRadioButton, ApplicationRadioGroup, ApplicationRelevanceIndicator, ApplicationRow, ApplicationScrollArea, ApplicationScrollBar, ApplicationSheet, ApplicationSlider, ApplicationSplitter, ApplicationSplitterGroup, ApplicationStaticText, ApplicationTabGroup, ApplicationTable, ApplicationTextArea, ApplicationTextField, ApplicationToolBar, ApplicationValueIndicator, ApplicationPropertyListFile, ApplicationPropertyListItem, ApplicationAnnotation, ApplicationQuickTimeData, ApplicationAudioData, ApplicationMovieData, ApplicationQuickTimeFile, ApplicationAudioFile, ApplicationMovieFile, ApplicationTrack, ApplicationXMLAttribute, ApplicationXMLData, ApplicationXMLElement, ApplicationXMLFile, ApplicationCDAndDVDPreferencesObject, ApplicationInsertionPreference, ApplicationConfiguration, ApplicationInterface, ApplicationLocation, ApplicationNetworkPreferencesObject, ApplicationService, ApplicationSecurityPreferencesObject, ApplicationExposePreferencesObject, ApplicationScreenCorner, ApplicationShortcut, ApplicationSpacesPreferencesObject, ApplicationSpacesShortcut, ApplicationAppearancePreferencesObject, ApplicationUser, ApplicationLoginItem, ApplicationDesktop, ApplicationPrintSettings;

enum ApplicationSavo {
	ApplicationSavoAsk = 'ask ' /* Ask the user whether or not to save the file. */,
	ApplicationSavoNo = 'no  ' /* Do not save the file. */,
	ApplicationSavoYes = 'yes ' /* Save the file. */
};
typedef enum ApplicationSavo ApplicationSavo;

enum ApplicationDpls {
	ApplicationDplsBottom = 'bott' /* bottom */,
	ApplicationDplsLeft = 'left' /* left */,
	ApplicationDplsRight = 'righ' /* right */
};
typedef enum ApplicationDpls ApplicationDpls;

enum ApplicationDpef {
	ApplicationDpefGenie = 'geni' /* genie */,
	ApplicationDpefScale = 'scal' /* scale */
};
typedef enum ApplicationDpef ApplicationDpef;

enum ApplicationEdfm {
	ApplicationEdfmApplePhotoFormat = 'dfph' /* Apple Photo format */,
	ApplicationEdfmAppleShareFormat = 'dfas' /* AppleShare format */,
	ApplicationEdfmAudioFormat = 'dfau' /* audio format */,
	ApplicationEdfmHighSierraFormat = 'dfhs' /* High Sierra format */,
	ApplicationEdfmISO9660Format = 'df96' /* ISO 9660 format */,
	ApplicationEdfmMacOSExtendedFormat = 'dfh+' /* Mac OS Extended format */,
	ApplicationEdfmMacOSFormat = 'dfhf' /* Mac OS format */,
	ApplicationEdfmMSDOSFormat = 'dfms' /* MSDOS format */,
	ApplicationEdfmNFSFormat = 'dfnf' /* NFS format */,
	ApplicationEdfmProDOSFormat = 'dfpr' /* ProDOS format */,
	ApplicationEdfmQuickTakeFormat = 'dfqt' /* QuickTake format */,
	ApplicationEdfmUDFFormat = 'dfud' /* UDF format */,
	ApplicationEdfmUFSFormat = 'dfuf' /* UFS format */,
	ApplicationEdfmUnknownFormat = 'df$$' /* unknown format */,
	ApplicationEdfmWebDAVFormat = 'dfwd' /* WebDAV format */
};
typedef enum ApplicationEdfm ApplicationEdfm;

enum ApplicationEMds {
	ApplicationEMdsCommandDown = 'Kcmd' /* command down */,
	ApplicationEMdsControlDown = 'Kctl' /* control down */,
	ApplicationEMdsOptionDown = 'Kopt' /* option down */,
	ApplicationEMdsShiftDown = 'Ksft' /* shift down */
};
typedef enum ApplicationEMds ApplicationEMds;

enum ApplicationEMky {
	ApplicationEMkyCommand = 'eCmd' /* command */,
	ApplicationEMkyControl = 'eCnt' /* control */,
	ApplicationEMkyOption = 'eOpt' /* option */,
	ApplicationEMkyShift = 'eSft' /* shift */
};
typedef enum ApplicationEMky ApplicationEMky;

enum ApplicationPrmd {
	ApplicationPrmdNormal = 'norm' /* normal */,
	ApplicationPrmdSlideShow = 'pmss' /* slide show */
};
typedef enum ApplicationPrmd ApplicationPrmd;

enum ApplicationMvsz {
	ApplicationMvszCurrent = 'cust' /* current */,
	ApplicationMvszDouble = 'doub' /* double */,
	ApplicationMvszHalf = 'half' /* half */,
	ApplicationMvszNormal = 'norm' /* normal */,
	ApplicationMvszScreen = 'fits' /* screen */
};
typedef enum ApplicationMvsz ApplicationMvsz;

enum ApplicationDhac {
	ApplicationDhacAskWhatToDo = 'dhas' /* ask what to do */,
	ApplicationDhacIgnore = 'dhig' /* ignore */,
	ApplicationDhacOpenApplication = 'dhap' /* open application */,
	ApplicationDhacRunAScript = 'dhrs' /* run a script */
};
typedef enum ApplicationDhac ApplicationDhac;

enum ApplicationEpac {
	ApplicationEpacAllWindows = 'allw' /* all windows */,
	ApplicationEpacApplicationWindows = 'appw' /* application windows */,
	ApplicationEpacDashboard = 'dash' /* dashboard */,
	ApplicationEpacDisableScreenSaver = 'disc' /* disable screen saver */,
	ApplicationEpacNone = 'none' /* none */,
	ApplicationEpacShowDesktop = 'desk' /* show desktop */,
	ApplicationEpacShowSpaces = 'spcs' /* show spaces */,
	ApplicationEpacSleepDisplay = 'diss' /* sleep display */,
	ApplicationEpacStartScreenSaver = 'star' /* start screen saver */
};
typedef enum ApplicationEpac ApplicationEpac;

enum ApplicationEpmd {
	ApplicationEpmdCommand = 'cmdm' /* command */,
	ApplicationEpmdControl = 'ctlm' /* control */,
	ApplicationEpmdNone = 'none' /* none */,
	ApplicationEpmdOption = 'optm' /* option */,
	ApplicationEpmdShift = 'shtm' /* shift */
};
typedef enum ApplicationEpmd ApplicationEpmd;

enum ApplicationEpfk {
	ApplicationEpfkF1 = 'F1ky' /* F1 */,
	ApplicationEpfkF10 = 'F10k' /* F10 */,
	ApplicationEpfkF11 = 'F11k' /* F11 */,
	ApplicationEpfkF12 = 'F12k' /* F12 */,
	ApplicationEpfkF13 = 'F13k' /* F13 */,
	ApplicationEpfkF14 = 'F14k' /* F14 */,
	ApplicationEpfkF15 = 'F15k' /* F15 */,
	ApplicationEpfkF16 = 'F16k' /* F16 */,
	ApplicationEpfkF17 = 'F17k' /* F17 */,
	ApplicationEpfkF18 = 'F18k' /* F18 */,
	ApplicationEpfkF19 = 'F19k' /* F19 */,
	ApplicationEpfkF2 = 'F2ky' /* F2 */,
	ApplicationEpfkF3 = 'F3ky' /* F3 */,
	ApplicationEpfkF4 = 'F4ky' /* F4 */,
	ApplicationEpfkF5 = 'F5ky' /* F5 */,
	ApplicationEpfkF6 = 'F6ky' /* F6 */,
	ApplicationEpfkF7 = 'F7ky' /* F7 */,
	ApplicationEpfkF8 = 'F8ky' /* F8 */,
	ApplicationEpfkF9 = 'F9ky' /* F9 */,
	ApplicationEpfkLeftCommand = 'Lcmd' /* left command */,
	ApplicationEpfkLeftControl = 'Lctl' /* left control */,
	ApplicationEpfkLeftOption = 'Lopt' /* left option */,
	ApplicationEpfkLeftShift = 'Lsht' /* left shift */,
	ApplicationEpfkNone = 'none' /* none */,
	ApplicationEpfkRightCommand = 'Rcmd' /* right command */,
	ApplicationEpfkRightControl = 'Rctl' /* right control */,
	ApplicationEpfkRightOption = 'Ropt' /* right option */,
	ApplicationEpfkRightShift = 'Rsht' /* right shift */,
	ApplicationEpfkSecondaryFunctionKey = 'SFky' /* secondary function key */
};
typedef enum ApplicationEpfk ApplicationEpfk;

enum ApplicationSclp {
	ApplicationSclpTogether = 'tgth' /* together */,
	ApplicationSclpTogetherAtTopAndBottom = 'tgtb' /* together at top and bottom */,
	ApplicationSclpTopAndBottom = 'tpbt' /* top and bottom */
};
typedef enum ApplicationSclp ApplicationSclp;

enum ApplicationSclb {
	ApplicationSclbJumpToHere = 'tohr' /* jump to here */,
	ApplicationSclbJumpToNextPage = 'nxpg' /* jump to next page */
};
typedef enum ApplicationSclb ApplicationSclb;

enum ApplicationFtss {
	ApplicationFtssAutomatic = 'autm' /* automatic */,
	ApplicationFtssLight = 'lite' /* light */,
	ApplicationFtssMedium = 'medi' /* medium */,
	ApplicationFtssStandard = 'stnd' /* standard */,
	ApplicationFtssStrong = 'strg' /* strong */
};
typedef enum ApplicationFtss ApplicationFtss;

enum ApplicationAppe {
	ApplicationAppeBlue = 'blue' /* blue */,
	ApplicationAppeGraphite = 'grft' /* graphite */
};
typedef enum ApplicationAppe ApplicationAppe;

enum ApplicationHico {
	ApplicationHicoBlue = 'blue' /* blue */,
	ApplicationHicoGold = 'gold' /* gold */,
	ApplicationHicoGraphite = 'grft' /* graphite */,
	ApplicationHicoGreen = 'gren' /* green */,
	ApplicationHicoOrange = 'orng' /* orange */,
	ApplicationHicoPurple = 'prpl' /* purple */,
	ApplicationHicoRed = 'red ' /* red */,
	ApplicationHicoSilver = 'slvr' /* silver */
};
typedef enum ApplicationHico ApplicationHico;

enum ApplicationEnum {
	ApplicationEnumStandard = 'lwst' /* Standard PostScript error handling */,
	ApplicationEnumDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum ApplicationEnum ApplicationEnum;



/*
 * Standard Suite
 */

// A scriptable object.
@interface ApplicationItem : SBObject

@property (copy) NSDictionary *properties;  // All of the object's properties.

- (void) closeSaving:(ApplicationSavo)saving savingIn:(ApplicationAlias *)savingIn;  // Close an object.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy object(s) and put the copies at a new location.
- (BOOL) exists;  // Verify if an object exists.
- (void) moveTo:(SBObject *)to;  // Move object(s) to a new location.
- (void) saveAs:(NSString *)as in:(ApplicationAlias *)in_;  // Save an object.
- (void) start;  // start the screen saver
- (void) stop;  // stop the screen saver

@end

// An application's top level scripting object.
@interface ApplicationApplication : SBApplication

- (SBElementArray *) documents;
- (SBElementArray *) windows;

@property (readonly) BOOL frontmost;  // Is this the frontmost (active) application?
@property (copy, readonly) NSString *name;  // The name of the application.
@property (copy, readonly) NSString *version;  // The version of the application.

- (void) quitSaving:(ApplicationSavo)saving;  // Quit an application.
- (void) logOut;  // Log out the current user
- (void) restart;  // Restart the computer
- (void) shutDown;  // Shut Down the computer
- (void) sleep;  // Put the computer to sleep
- (ApplicationUIElement *) clickAt:(NSArray *)at;  // cause the target process to behave as if the UI element were clicked
- (void) keyCode:(NSInteger)x using:(ApplicationEMds)using_;  // cause the target process to behave as if key codes were entered
- (void) keystroke:(NSString *)x using:(ApplicationEMds)using_;  // cause the target process to behave as if keystrokes were entered
- (void) abortTransaction;  // Discard the results of a bounded update session with one or more files.
- (NSInteger) beginTransaction;  // Begin a bounded update session with one or more files.
- (void) endTransaction;  // Apply the results of a bounded update session with one or more files.
- (ApplicationConfiguration *) connect:(id)x;  // connect a configuration or service
- (ApplicationConfiguration *) disconnect:(id)x;  // disconnect a configuration or service

@end

// A color.
@interface ApplicationColor : ApplicationItem


@end

// A document.
@interface ApplicationDocument : ApplicationItem

@property (readonly) BOOL modified;  // Has the document been modified since the last save?
@property (copy) NSString *name;  // The document's name.
@property (copy) NSString *path;  // The document's path.


@end

// A window.
@interface ApplicationWindow : ApplicationItem

@property NSRect bounds;  // The bounding rectangle of the window.
@property (readonly) BOOL closeable;  // Whether the window has a close box.
@property (copy, readonly) ApplicationDocument *document;  // The document whose contents are being displayed in the window.
@property (readonly) BOOL floating;  // Whether the window floats.
- (NSInteger) id;  // The unique identifier of the window.
@property NSInteger index;  // The index of the window, ordered front to back.
@property (readonly) BOOL miniaturizable;  // Whether the window can be miniaturized.
@property BOOL miniaturized;  // Whether the window is currently miniaturized.
@property (readonly) BOOL modal;  // Whether the window is the application's current modal window.
@property (copy) NSString *name;  // The full title of the window.
@property (readonly) BOOL resizable;  // Whether the window can be resized.
@property (readonly) BOOL titled;  // Whether the window has a title bar.
@property BOOL visible;  // Whether the window is currently visible.
@property (readonly) BOOL zoomable;  // Whether the window can be zoomed.
@property BOOL zoomed;  // Whether the window is currently zoomed.


@end



/*
 * Text Suite
 */

// This subdivides the text into chunks that all have the same attributes.
@interface ApplicationAttributeRun : ApplicationItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// This subdivides the text into characters.
@interface ApplicationCharacter : ApplicationItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// This subdivides the text into paragraphs.
@interface ApplicationParagraph : ApplicationItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// Rich (styled) text
@interface ApplicationText : ApplicationItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.

- (void) keystrokeUsing:(ApplicationEMds)using_;  // cause the target process to behave as if keystrokes were entered

@end

// Represents an inline text attachment.  This class is used mainly for make commands.
@interface ApplicationAttachment : ApplicationText

@property (copy) NSString *fileName;  // The path to the file for the attachment


@end

// This subdivides the text into words.
@interface ApplicationWord : ApplicationItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end



/*
 * Dock Preferences Suite
 */

// user's dock preferences
@interface ApplicationDockPreferencesObject : ApplicationItem

@property BOOL animate;  // is the animation of opening applications on or off?
@property BOOL autohide;  // is autohiding the dock on or off?
@property double dockSize;  // size/height of the items (between 0.0 (minimum) and 1.0 (maximum))
@property BOOL magnification;  // is magnification on or off?
@property double magnificationSize;  // maximum magnification size when magnification is on (between 0.0 (minimum) and 1.0 (maximum))
@property ApplicationDpef minimizeEffect;  // minimization effect
@property ApplicationDpls screenEdge;  // location on screen


@end



/*
 * Screen Saver Suite
 */

// an installed screen saver
@interface ApplicationScreenSaver : ApplicationItem

@property (copy, readonly) NSString *displayedName;  // name of the screen saver module as displayed to the user
@property (copy, readonly) NSString *name;  // name of the screen saver module to be displayed
@property (copy, readonly) ApplicationAlias *path;  // path to the screen saver module
@property (copy) NSString *pictureDisplayStyle;  // effect to use when displaying picture-based screen savers (slideshow, collage, or mosaic)


@end

// screen saver settings
@interface ApplicationScreenSaverPreferencesObject : ApplicationItem

@property NSInteger delayInterval;  // number of seconds of idle time before the screen saver starts; zero for never
@property BOOL mainScreenOnly;  // should the screen saver be shown only on the main screen?
@property (readonly) BOOL running;  // is the screen saver running?
@property BOOL showClock;  // should a clock appear over the screen saver?


@end



/*
 * Disk-Folder-File Suite
 */

// An item stored in the file system
@interface ApplicationDiskItem : ApplicationItem

@property (readonly) BOOL busyStatus;  // Is the disk item busy?
@property (copy, readonly) ApplicationDiskItem *container;  // the folder or disk which has this disk item as an element
@property (copy, readonly) NSDate *creationDate;  // the date on which the disk item was created
@property (copy, readonly) NSString *displayedName;  // the name of the disk item as displayed in the User Interface
- (NSString *) id;  // the unique ID of the disk item
@property (copy) NSDate *modificationDate;  // the date on which the disk item was last modified
@property (copy) NSString *name;  // the name of the disk item
@property (copy, readonly) NSString *nameExtension;  // the extension portion of the name
@property (readonly) BOOL packageFolder;  // Is the disk item a package?
@property (copy, readonly) NSString *path;  // the file system path of the disk item
@property (readonly) long long physicalSize;  // the actual space used by the disk item on disk
@property (copy, readonly) NSString *POSIXPath;  // the POSIX file system path of the disk item
@property (readonly) long long size;  // the logical size of the disk item
@property (copy, readonly) NSString *URL;  // the URL of the disk item
@property BOOL visible;  // Is the disk item visible?
@property (copy, readonly) NSString *volume;  // the volume on which the disk item resides

- (void) delete;  // Delete disk item(s).
- (ApplicationDiskItem *) moveTo:(SBObject *)to;  // Move disk item(s) to a new location.

@end

// An alias in the file system
@interface ApplicationAlias : ApplicationDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) items;

@property (copy) NSString *creatorType;  // the OSType identifying the application that created the alias
@property (copy) NSString *fileType;  // the OSType identifying the type of data contained in the alias
@property (copy, readonly) NSString *kind;  // The kind of alias, as shown in Finder
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the "Get Info" window)
@property (copy, readonly) NSString *shortVersion;  // the short version of the application bundle referenced by the alias
@property BOOL stationery;  // Is the alias a stationery pad?
@property (copy, readonly) NSString *typeIdentifier;  // The type identifier of the alias
@property (copy, readonly) NSString *version;  // the version of the application bundle referenced by the alias (visible at the bottom of the "Get Info" window)

- (ApplicationDocument *) open;  // Open an object.
- (void) printPrintDialog:(BOOL)printDialog withProperties:(ApplicationPrintSettings *)withProperties;  // Print an object.

@end

// A disk in the file system
@interface ApplicationDisk : ApplicationDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) items;

@property (readonly) long long capacity;  // the total number of bytes (free or used) on the disk
@property (readonly) BOOL ejectable;  // Can the media be ejected (floppies, CD's, and so on)?
@property (readonly) ApplicationEdfm format;  // the file system format of this disk
@property (readonly) long long freeSpace;  // the number of free bytes left on the disk
@property BOOL ignorePrivileges;  // Ignore permissions on this disk?
@property (readonly) BOOL localVolume;  // Is the media a local volume (as opposed to a file server)?
@property (copy, readonly) NSString *server;  // the server on which the disk resides, AFP volumes only
@property (readonly) BOOL startup;  // Is this disk the boot disk?
@property (copy, readonly) NSString *zone;  // the zone in which the disk's server resides, AFP volumes only


@end

// A domain in the file system
@interface ApplicationDomain : ApplicationItem

- (SBElementArray *) folders;

@property (copy, readonly) ApplicationFolder *applicationSupportFolder;  // The Application Support folder
@property (copy, readonly) ApplicationFolder *applicationsFolder;  // The Applications folder
@property (copy, readonly) ApplicationFolder *desktopPicturesFolder;  // The Desktop Pictures folder
@property (copy, readonly) ApplicationFolder *FolderActionScriptsFolder;  // The Folder Action Scripts folder
@property (copy, readonly) ApplicationFolder *fontsFolder;  // The Fonts folder
- (NSString *) id;  // the unique identifier of the domain
@property (copy, readonly) ApplicationFolder *libraryFolder;  // The Library folder
@property (copy, readonly) NSString *name;  // the name of the domain
@property (copy, readonly) ApplicationFolder *preferencesFolder;  // The Preferences folder
@property (copy, readonly) ApplicationFolder *scriptingAdditionsFolder;  // The Scripting Additions folder
@property (copy, readonly) ApplicationFolder *scriptsFolder;  // The Scripts folder
@property (copy, readonly) ApplicationFolder *sharedDocumentsFolder;  // The Shared Documents folder
@property (copy, readonly) ApplicationFolder *speakableItemsFolder;  // The Speakable Items folder
@property (copy, readonly) ApplicationFolder *utilitiesFolder;  // The Utilities folder
@property (copy, readonly) ApplicationFolder *workflowsFolder;  // The Automator Workflows folder


@end

// The Classic domain in the file system
@interface ApplicationClassicDomainObject : ApplicationDomain

- (SBElementArray *) folders;

@property (copy, readonly) ApplicationFolder *appleMenuFolder;  // The Apple Menu Items folder
@property (copy, readonly) ApplicationFolder *controlPanelsFolder;  // The Control Panels folder
@property (copy, readonly) ApplicationFolder *controlStripModulesFolder;  // The Control Strip Modules folder
@property (copy, readonly) ApplicationFolder *desktopFolder;  // The Classic Desktop folder
@property (copy, readonly) ApplicationFolder *extensionsFolder;  // The Extensions folder
@property (copy, readonly) ApplicationFolder *fontsFolder;  // The Fonts folder
@property (copy, readonly) ApplicationFolder *launcherItemsFolder;  // The Launcher Items folder
@property (copy, readonly) ApplicationFolder *preferencesFolder;  // The Classic Preferences folder
@property (copy, readonly) ApplicationFolder *shutdownFolder;  // The Shutdown Items folder
@property (copy, readonly) ApplicationFolder *startupItemsFolder;  // The StartupItems folder
@property (copy, readonly) ApplicationFolder *systemFolder;  // The System folder


@end

// A file in the file system
@interface ApplicationFile : ApplicationDiskItem

@property (copy) NSString *creatorType;  // the OSType identifying the application that created the file
@property (copy) ApplicationDiskItem *defaultApplication;  // the application that will launch if the file is opened
@property (copy) NSString *fileType;  // the OSType identifying the type of data contained in the file
@property (copy, readonly) NSString *kind;  // The kind of file, as shown in Finder
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the "Get Info" window)
@property (copy, readonly) NSString *shortVersion;  // the short version of the file
@property BOOL stationery;  // Is the file a stationery pad?
@property (copy, readonly) NSString *typeIdentifier;  // The type identifier of the file
@property (copy, readonly) NSString *version;  // the version of the file (visible at the bottom of the "Get Info" window)

- (ApplicationFile *) open;  // Open disk item(s) with the appropriate application.

@end

// A file package in the file system
@interface ApplicationFilePackage : ApplicationFile

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) items;


@end

// A folder in the file system
@interface ApplicationFolder : ApplicationDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) items;


@end

// An item stored in the file system
@interface ApplicationItem (DiskFolderFileSuite)

- (NSString *) id;  // the unique ID of the item
@property (copy) NSString *name;  // the name of the item

@end

// The local domain in the file system
@interface ApplicationLocalDomainObject : ApplicationDomain

- (SBElementArray *) folders;


@end

// The network domain in the file system
@interface ApplicationNetworkDomainObject : ApplicationDomain

- (SBElementArray *) folders;


@end

// The system domain in the file system
@interface ApplicationSystemDomainObject : ApplicationDomain

- (SBElementArray *) folders;


@end

// The user domain in the file system
@interface ApplicationUserDomainObject : ApplicationDomain

- (SBElementArray *) folders;

@property (copy, readonly) ApplicationFolder *desktopFolder;  // The user's Desktop folder
@property (copy, readonly) ApplicationFolder *documentsFolder;  // The user's Documents folder
@property (copy, readonly) ApplicationFolder *downloadsFolder;  // The user's Downloads folder
@property (copy, readonly) ApplicationFolder *favoritesFolder;  // The user's Favorites folder
@property (copy, readonly) ApplicationFolder *homeFolder;  // The user's Home folder
@property (copy, readonly) ApplicationFolder *moviesFolder;  // The user's Movies folder
@property (copy, readonly) ApplicationFolder *musicFolder;  // The user's Music folder
@property (copy, readonly) ApplicationFolder *picturesFolder;  // The user's Pictures folder
@property (copy, readonly) ApplicationFolder *publicFolder;  // The user's Public folder
@property (copy, readonly) ApplicationFolder *sitesFolder;  // The user's Sites folder
@property (copy, readonly) ApplicationFolder *temporaryItemsFolder;  // The Temporary Items folder


@end



/*
 * Folder Actions Suite
 */

// An action attached to a folder in the file system
@interface ApplicationFolderAction : ApplicationItem

- (SBElementArray *) scripts;

@property BOOL enabled;  // Is the folder action enabled?
@property (copy) NSString *name;  // the name of the folder action, which is also the name of the folder
@property (copy, readonly) NSString *path;  // the path to the folder to which the folder action applies
@property (copy, readonly) NSString *volume;  // the volume on which the folder action resides


@end

// A script invoked by a folder action
@interface ApplicationScript : ApplicationItem

@property BOOL enabled;  // Is the script enabled?
@property (copy, readonly) NSString *name;  // the name of the script
@property (copy, readonly) NSString *path;  // the file system path of the disk
@property (copy, readonly) NSString *POSIXPath;  // the POSIX file system path of the disk


@end



/*
 * Processes Suite
 */

// An action that can be performed on the UI element
@interface ApplicationAction : ApplicationItem

@property (copy, readonly) NSString *objectDescription;  // what the action does
@property (copy, readonly) NSString *name;  // the name of the action

- (ApplicationAction *) perform;  // cause the target process to behave as if the action were applied to its UI element

@end

// An named data value associated with the UI element
@interface ApplicationAttribute : ApplicationItem

@property (copy, readonly) NSString *name;  // the name of the attribute
@property (readonly) BOOL settable;  // Can the attribute be set?
@property (copy) id value;  // the current value of the attribute


@end

// A piece of the user interface of a process
@interface ApplicationUIElement : ApplicationItem

- (SBElementArray *) actions;
- (SBElementArray *) attributes;
- (SBElementArray *) browsers;
- (SBElementArray *) busyIndicators;
- (SBElementArray *) buttons;
- (SBElementArray *) checkboxes;
- (SBElementArray *) colorWells;
- (SBElementArray *) columns;
- (SBElementArray *) comboBoxes;
- (SBElementArray *) drawers;
- (SBElementArray *) groups;
- (SBElementArray *) growAreas;
- (SBElementArray *) images;
- (SBElementArray *) incrementors;
- (SBElementArray *) lists;
- (SBElementArray *) menus;
- (SBElementArray *) menuBars;
- (SBElementArray *) menuBarItems;
- (SBElementArray *) menuButtons;
- (SBElementArray *) menuItems;
- (SBElementArray *) outlines;
- (SBElementArray *) popUpButtons;
- (SBElementArray *) progressIndicators;
- (SBElementArray *) radioButtons;
- (SBElementArray *) radioGroups;
- (SBElementArray *) relevanceIndicators;
- (SBElementArray *) rows;
- (SBElementArray *) scrollAreas;
- (SBElementArray *) scrollBars;
- (SBElementArray *) sheets;
- (SBElementArray *) sliders;
- (SBElementArray *) splitters;
- (SBElementArray *) splitterGroups;
- (SBElementArray *) staticTexts;
- (SBElementArray *) tabGroups;
- (SBElementArray *) tables;
- (SBElementArray *) textAreas;
- (SBElementArray *) textFields;
- (SBElementArray *) toolBars;
- (SBElementArray *) UIElements;
- (SBElementArray *) valueIndicators;
- (SBElementArray *) windows;

@property (copy, readonly) NSString *accessibilityDescription;  // a more complete description of the UI element and its capabilities
@property (copy, readonly) NSString *objectDescription;  // the accessibility description, if available; otherwise, the role description
@property (readonly) BOOL enabled;  // Is the UI element enabled? ( Does it accept clicks? )
@property (copy, readonly) NSArray *entireContents;  // a list of every UI element contained in this UI element and its child UI elements, to the limits of the tree
@property BOOL focused;  // Is the focus on this UI element?
@property (copy, readonly) NSString *help;  // an elaborate description of the UI element and its capabilities
@property (readonly) NSInteger maximumValue;  // the maximum value that the UI element can take on
@property (readonly) NSInteger minimumValue;  // the minimum value that the UI element can take on
@property (copy, readonly) NSString *name;  // the name of the UI Element, which identifies it within its container
@property (copy, readonly) NSString *orientation;  // the orientation of the UI element
@property (copy) NSArray *position;  // the position of the UI element
@property (copy, readonly) NSString *role;  // an encoded description of the UI element and its capabilities
@property (copy, readonly) NSString *roleDescription;  // a more complete description of the UI element's role
@property BOOL selected;  // Is the UI element selected?
@property (copy) NSArray *size;  // the size of the UI element
@property (copy, readonly) NSString *subrole;  // an encoded description of the UI element and its capabilities
@property (copy, readonly) NSString *title;  // the title of the UI element as it appears on the screen
@property NSInteger value;  // the current value of the UI element

- (ApplicationUIElement *) clickAt:(NSArray *)at;  // cause the target process to behave as if the UI element were clicked
- (ApplicationUIElement *) select;  // set the selected property of the UI element

@end

// A browser belonging to a window
@interface ApplicationBrowser : ApplicationUIElement


@end

// A busy indicator belonging to a window
@interface ApplicationBusyIndicator : ApplicationUIElement


@end

// A button belonging to a window or scroll bar
@interface ApplicationButton : ApplicationUIElement


@end

// A checkbox belonging to a window
@interface ApplicationCheckbox : ApplicationUIElement


@end

// A color well belonging to a window
@interface ApplicationColorWell : ApplicationUIElement


@end

// A column belonging to a table
@interface ApplicationColumn : ApplicationUIElement


@end

// A combo box belonging to a window
@interface ApplicationComboBox : ApplicationUIElement


@end

// A drawer that may be extended from a window
@interface ApplicationDrawer : ApplicationUIElement


@end

// A group belonging to a window
@interface ApplicationGroup : ApplicationUIElement

- (SBElementArray *) checkboxes;
- (SBElementArray *) staticTexts;


@end

// A grow area belonging to a window
@interface ApplicationGrowArea : ApplicationUIElement


@end

// An image belonging to a static text field
@interface ApplicationImage : ApplicationUIElement


@end

// A incrementor belonging to a window
@interface ApplicationIncrementor : ApplicationUIElement


@end

// A list belonging to a window
@interface ApplicationList : ApplicationUIElement


@end

// A menu belonging to a menu bar item
@interface ApplicationMenu : ApplicationUIElement

- (SBElementArray *) menuItems;


@end

// A menu bar belonging to a process
@interface ApplicationMenuBar : ApplicationUIElement

- (SBElementArray *) menus;
- (SBElementArray *) menuBarItems;


@end

// A menu bar item belonging to a menu bar
@interface ApplicationMenuBarItem : ApplicationUIElement

- (SBElementArray *) menus;


@end

// A menu button belonging to a window
@interface ApplicationMenuButton : ApplicationUIElement


@end

// A menu item belonging to a menu
@interface ApplicationMenuItem : ApplicationUIElement

- (SBElementArray *) menus;


@end

// A outline belonging to a window
@interface ApplicationOutline : ApplicationUIElement


@end

// A pop up button belonging to a window
@interface ApplicationPopUpButton : ApplicationUIElement


@end

// A process running on this computer
@interface ApplicationProcess : ApplicationUIElement

- (SBElementArray *) menuBars;
- (SBElementArray *) windows;

@property (readonly) BOOL acceptsHighLevelEvents;  // Is the process high-level event aware (accepts open application, open document, print document, and quit)?
@property (readonly) BOOL acceptsRemoteEvents;  // Does the process accept remote events?
@property (copy, readonly) NSString *architecture;  // the architecture in which the process is running
@property (readonly) BOOL backgroundOnly;  // Does the process run exclusively in the background?
@property (copy, readonly) NSString *bundleIdentifier;  // the bundle identifier of the process' application file
@property (readonly) BOOL Classic;  // Is the process running in the Classic environment?
@property (copy, readonly) NSString *creatorType;  // the OSType of the creator of the process (the signature)
@property (copy, readonly) NSString *displayedName;  // the name of the file from which the process was launched, as displayed in the User Interface
@property (copy, readonly) ApplicationAlias *file;  // the file from which the process was launched
@property (copy, readonly) NSString *fileType;  // the OSType of the file type of the process
@property BOOL frontmost;  // Is the process the frontmost process
@property (readonly) BOOL hasScriptingTerminology;  // Does the process have a scripting terminology, i.e., can it be scripted?
- (NSInteger) id;  // The unique identifier of the process
@property (copy, readonly) NSString *name;  // the name of the process
@property (readonly) NSInteger partitionSpaceUsed;  // the number of bytes currently used in the process' partition
@property (copy, readonly) NSString *shortName;  // the short name of the file from which the process was launched
@property (readonly) NSInteger totalPartitionSize;  // the size of the partition with which the process was launched
@property (readonly) NSInteger unixId;  // The Unix process identifier of a process running in the native environment, or -1 for a process running in the Classic environment
@property BOOL visible;  // Is the process' layer visible?


@end

// A process launched from an application file
@interface ApplicationApplicationProcess : ApplicationProcess

@property (copy, readonly) ApplicationAlias *applicationFile;  // a reference to the application file from which this process was launched


@end

// A process launched from an desk accessory file
@interface ApplicationDeskAccessoryProcess : ApplicationProcess

@property (copy, readonly) ApplicationAlias *deskAccessoryFile;  // a reference to the desk accessory file from which this process was launched


@end

// A progress indicator belonging to a window
@interface ApplicationProgressIndicator : ApplicationUIElement


@end

// A radio button belonging to a window
@interface ApplicationRadioButton : ApplicationUIElement


@end

// A radio button group belonging to a window
@interface ApplicationRadioGroup : ApplicationUIElement

- (SBElementArray *) radioButtons;


@end

// A relevance indicator belonging to a window
@interface ApplicationRelevanceIndicator : ApplicationUIElement


@end

// A row belonging to a table
@interface ApplicationRow : ApplicationUIElement


@end

// A scroll area belonging to a window
@interface ApplicationScrollArea : ApplicationUIElement


@end

// A scroll bar belonging to a window
@interface ApplicationScrollBar : ApplicationUIElement

- (SBElementArray *) buttons;
- (SBElementArray *) valueIndicators;


@end

// A sheet displayed over a window
@interface ApplicationSheet : ApplicationUIElement


@end

// A slider belonging to a window
@interface ApplicationSlider : ApplicationUIElement


@end

// A splitter belonging to a window
@interface ApplicationSplitter : ApplicationUIElement


@end

// A splitter group belonging to a window
@interface ApplicationSplitterGroup : ApplicationUIElement


@end

// A static text field belonging to a window
@interface ApplicationStaticText : ApplicationUIElement

- (SBElementArray *) images;


@end

// A tab group belonging to a window
@interface ApplicationTabGroup : ApplicationUIElement


@end

// A table belonging to a window
@interface ApplicationTable : ApplicationUIElement


@end

// A text area belonging to a window
@interface ApplicationTextArea : ApplicationUIElement


@end

// A text field belonging to a window
@interface ApplicationTextField : ApplicationUIElement


@end

// A tool bar belonging to a window
@interface ApplicationToolBar : ApplicationUIElement


@end

// A value indicator ( thumb or slider ) belonging to a scroll bar
@interface ApplicationValueIndicator : ApplicationUIElement


@end

// A window belonging to a process
@interface ApplicationWindow (ProcessesSuite)

- (SBElementArray *) browsers;
- (SBElementArray *) busyIndicators;
- (SBElementArray *) buttons;
- (SBElementArray *) checkboxes;
- (SBElementArray *) colorWells;
- (SBElementArray *) comboBoxes;
- (SBElementArray *) drawers;
- (SBElementArray *) groups;
- (SBElementArray *) growAreas;
- (SBElementArray *) images;
- (SBElementArray *) incrementors;
- (SBElementArray *) lists;
- (SBElementArray *) menuButtons;
- (SBElementArray *) outlines;
- (SBElementArray *) popUpButtons;
- (SBElementArray *) progressIndicators;
- (SBElementArray *) radioButtons;
- (SBElementArray *) radioGroups;
- (SBElementArray *) relevanceIndicators;
- (SBElementArray *) scrollAreas;
- (SBElementArray *) scrollBars;
- (SBElementArray *) sheets;
- (SBElementArray *) sliders;
- (SBElementArray *) splitters;
- (SBElementArray *) splitterGroups;
- (SBElementArray *) staticTexts;
- (SBElementArray *) tabGroups;
- (SBElementArray *) tables;
- (SBElementArray *) textAreas;
- (SBElementArray *) textFields;
- (SBElementArray *) toolBars;
- (SBElementArray *) UIElements;

@end



/*
 * Property List Suite
 */

// A file containing data in Property List format
@interface ApplicationPropertyListFile : ApplicationFile

@property (copy) ApplicationPropertyListItem *contents;  // the contents of the property list file; elements and properties of the property list item may be accessed as if they were elements and properties of the property list file


@end

// A unit of data in Property List format
@interface ApplicationPropertyListItem : ApplicationItem

- (SBElementArray *) propertyListItems;

@property (copy, readonly) NSNumber *kind;  // the kind of data stored in the property list item: boolean/data/date/list/number/record/string
@property (copy, readonly) NSString *name;  // the name of the property list item ( if any )
@property (copy) NSString *text;  // the text representation of the property list data
@property (copy) id value;  // the value of the property list item


@end



/*
 * QuickTime File Suite
 */

// A unit of user data in a QuickTime file
@interface ApplicationAnnotation : ApplicationItem

@property (copy, readonly) NSString *fullText;  // the full text of the annotation
- (NSString *) id;  // the unique identifier of the annotation
@property (copy, readonly) NSString *name;  // the name of the annotation


@end

// Data in QuickTime format
@interface ApplicationQuickTimeData : ApplicationItem

- (SBElementArray *) annotations;
- (SBElementArray *) tracks;

@property (readonly) BOOL autoPlay;  // will the movie automatically start playing? (saved with QuickTime file)
@property (readonly) BOOL autoPresent;  // will the movie automatically start presenting? (saved with QuickTime file)
@property (readonly) BOOL autoQuitWhenDone;  // will the player automatically quit when done playing? (saved with QuickTime file)
@property (copy, readonly) NSDate *creationTime;  // the creation time of the QuickTime file
@property (readonly) NSInteger dataSize;  // the size of the QuickTime file data
@property (readonly) NSInteger duration;  // the duration of the QuickTime file, in terms of the time scale
@property (copy, readonly) NSString *href;  // the internet location to open when clicking on the movie (overrides track hrefs)
@property (readonly) BOOL looping;  // keep playing the movie in a loop?
@property (copy, readonly) NSDate *modificationTime;  // the modification time of the QuickTime file
@property (readonly) NSInteger preferredRate;  // the preferred rate of the QuickTime file
@property (readonly) NSInteger preferredVolume;  // the preferred volume of the QuickTime file
@property (readonly) ApplicationPrmd presentationMode;  // mode in which the movie will be presented
@property (readonly) ApplicationMvsz presentationSize;  // size at which the movie will be presented
@property (readonly) BOOL storedStream;  // is this a stored streaming movie?
@property (readonly) NSInteger timeScale;  // the time scale of the QuickTime file


@end



/*
 * Audio File Suite
 */

// Data in Audio format
@interface ApplicationAudioData : ApplicationQuickTimeData


@end



/*
 * Movie File Suite
 */

// Data in Movie format
@interface ApplicationMovieData : ApplicationQuickTimeData

@property (copy, readonly) NSArray *bounds;  // the bounding rectangle of the movie file
@property (copy, readonly) NSArray *naturalDimensions;  // the dimensions the movie has when it is not scaled
@property (readonly) NSInteger previewDuration;  // the preview duration of the movie file
@property (readonly) NSInteger previewTime;  // the preview time of the movie file


@end



/*
 * QuickTime File Suite
 */

// A file containing data in QuickTime format
@interface ApplicationQuickTimeFile : ApplicationFile

@property (copy, readonly) ApplicationQuickTimeData *contents;  // the contents of the QuickTime file; elements and properties of the QuickTime data may be accessed as if they were elements and properties of the QuickTime file


@end



/*
 * Audio File Suite
 */

// A file containing data in Audio format
@interface ApplicationAudioFile : ApplicationQuickTimeFile

@property (copy, readonly) ApplicationAudioData *contents;  // the contents of the audio file; elements and properties of the audio data may be accessed as if they were elements and properties of the audio file


@end



/*
 * Movie File Suite
 */

// A file containing data in Movie format
@interface ApplicationMovieFile : ApplicationQuickTimeFile

@property (copy, readonly) ApplicationMovieData *contents;  // the contents of the movie file; elements and properties of the movie data may be accessed as if they were elements and properties of the movie file


@end



/*
 * QuickTime File Suite
 */

// A track in a QuickTime file
@interface ApplicationTrack : ApplicationItem

- (SBElementArray *) annotations;

@property (readonly) NSInteger audioChannelCount;  // the number of channels in the audio
@property (readonly) BOOL audioCharacteristic;  // can the track be heard?
@property (readonly) double audioSampleRate;  // the sample rate of the audio in kHz
@property (readonly) NSInteger audioSampleSize;  // the size of uncompressed audio samples in bits
@property (copy, readonly) NSDate *creationTime;  // the creation time of the track
@property (copy, readonly) NSString *dataFormat;  // the data format
@property (readonly) NSInteger dataRate;  // the data rate (bytes/sec) of the track
@property (readonly) NSInteger dataSize;  // the size of the track data
@property (copy, readonly) NSArray *dimensions;  // the current dimensions of the track
@property (readonly) NSInteger duration;  // the duration of the track, in terms of the time scale
@property BOOL enabled;  // should this track be used when the movie is playing?
@property BOOL highQuality;  // is the track high quality?
@property (copy, readonly) NSString *href;  // the internet location to open when clicking on the track
@property (copy, readonly) NSString *kind;  // the name of the media in the track, in the current language (e.g., 'Sound', 'Video', 'Text', ...)
@property (copy, readonly) NSDate *modificationTime;  // the modification time of the track
@property (copy, readonly) NSString *name;  // the name of the track
@property NSInteger startTime;  // the time delay before this track starts playing
@property (copy, readonly) NSString *type;  // the type of media in the track (e.g., 'soun', 'vide', 'text', ...)
@property (copy, readonly) NSString *typeClass;  // deprecated: use "type" instead ( included only to resolve a terminology conflict )
@property (readonly) NSInteger videoDepth;  // the color depth of the video
@property (readonly) BOOL visualCharacteristic;  // can the track be seen?


@end



/*
 * System Events Suite
 */

// The System Events application
@interface ApplicationApplication (SystemEventsSuite)

- (SBElementArray *) aliases;
- (SBElementArray *) applicationProcesses;
- (SBElementArray *) audioDatas;
- (SBElementArray *) audioFiles;
- (SBElementArray *) deskAccessoryProcesses;
- (SBElementArray *) desktops;
- (SBElementArray *) disks;
- (SBElementArray *) diskItems;
- (SBElementArray *) domains;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) folderActions;
- (SBElementArray *) items;
- (SBElementArray *) loginItems;
- (SBElementArray *) movieDatas;
- (SBElementArray *) movieFiles;
- (SBElementArray *) processes;
- (SBElementArray *) propertyListFiles;
- (SBElementArray *) propertyListItems;
- (SBElementArray *) QuickTimeDatas;
- (SBElementArray *) QuickTimeFiles;
- (SBElementArray *) screenSavers;
- (SBElementArray *) UIElements;
- (SBElementArray *) users;
- (SBElementArray *) XMLDatas;
- (SBElementArray *) XMLFiles;

@property (copy) ApplicationAppearancePreferencesObject *appearancePreferences;  // a collection of appearance preferences
@property (copy, readonly) ApplicationFolder *applicationSupportFolder;  // The Application Support folder
@property (copy, readonly) ApplicationFolder *applicationsFolder;  // The user's Applications folder
@property (copy) ApplicationCDAndDVDPreferencesObject *CDAndDVDPreferences;  // the preferences for the current user when a CD or DVD is inserted
@property (copy, readonly) ApplicationClassicDomainObject *ClassicDomain;  // the collection of folders belonging to the Classic System
@property (copy, readonly) ApplicationDesktop *currentDesktop;  // the primary desktop
@property (copy) ApplicationScreenSaver *currentScreenSaver;  // the currently selected screen saver
@property (copy, readonly) ApplicationUser *currentUser;  // the currently logged in user
@property (copy, readonly) ApplicationFolder *desktopFolder;  // The user's Desktop folder
@property (copy, readonly) ApplicationFolder *desktopPicturesFolder;  // The Desktop Pictures folder
@property (copy) ApplicationDockPreferencesObject *dockPreferences;  // the preferences for the current user's dock
@property (copy, readonly) ApplicationFolder *documentsFolder;  // The user's Documents folder
@property (copy, readonly) ApplicationFolder *downloadsFolder;  // The user's Downloads folder
@property (copy) ApplicationExposePreferencesObject *exposePreferences;  // the preferences for the current user's expose and dashboard key, mouse and corner bindings
@property (copy, readonly) ApplicationFolder *favoritesFolder;  // The user's Favorites folder
@property (copy, readonly) ApplicationFolder *FolderActionScriptsFolder;  // The user's Folder Action Scripts folder
@property BOOL folderActionsEnabled;  // Are Folder Actions currently being processed?
@property (copy, readonly) ApplicationFolder *fontsFolder;  // The Fonts folder
@property (copy, readonly) ApplicationFolder *homeFolder;  // The Home folder of the currently logged in user
@property (copy, readonly) ApplicationFolder *libraryFolder;  // The Library folder
@property (copy, readonly) ApplicationLocalDomainObject *localDomain;  // the collection of folders residing on the Local machine
@property (copy, readonly) ApplicationFolder *moviesFolder;  // The user's Movies folder
@property (copy, readonly) ApplicationFolder *musicFolder;  // The user's Music folder
@property (copy, readonly) ApplicationNetworkDomainObject *networkDomain;  // the collection of folders residing on the Network
@property (copy) ApplicationNetworkPreferencesObject *networkPreferences;  // the preferences for the current user's network
@property (copy, readonly) ApplicationFolder *picturesFolder;  // The user's Pictures folder
@property (copy, readonly) ApplicationFolder *preferencesFolder;  // The user's Preferences folder
@property (copy, readonly) ApplicationFolder *publicFolder;  // The user's Public folder
@property NSInteger quitDelay;  // the time in seconds the application will idle before quitting; if set to zero, idle time will not cause the application to quit
@property (copy) ApplicationScreenSaverPreferencesObject *screenSaverPreferences;  // the preferences common to all screen savers
@property (readonly) BOOL scriptMenuEnabled;  // Is the Script menu installed in the menu bar?
@property (copy, readonly) ApplicationFolder *scriptingAdditionsFolder;  // The Scripting Additions folder
@property (copy, readonly) ApplicationFolder *scriptsFolder;  // The user's Scripts folder
@property (copy) ApplicationSecurityPreferencesObject *securityPreferences;  // a collection of security preferences
@property (copy, readonly) ApplicationFolder *sharedDocumentsFolder;  // The Shared Documents folder
@property (copy, readonly) ApplicationFolder *sitesFolder;  // The user's Sites folder
@property (copy, readonly) ApplicationFolder *speakableItemsFolder;  // The Speakable Items folder
@property (copy, readonly) ApplicationDisk *startupDisk;  // the disk from which Mac OS X was loaded
@property (copy, readonly) ApplicationSystemDomainObject *systemDomain;  // the collection of folders belonging to the System
@property (copy, readonly) ApplicationFolder *temporaryItemsFolder;  // The Temporary Items folder
@property (copy, readonly) ApplicationFolder *trash;  // The user's Trash folder
@property BOOL UIElementsEnabled;  // Are UI element events currently being processed?
@property (copy, readonly) ApplicationUserDomainObject *userDomain;  // the collection of folders belonging to the User
@property (copy, readonly) ApplicationFolder *utilitiesFolder;  // The Utilities folder
@property (copy, readonly) ApplicationFolder *workflowsFolder;  // The Automator Workflows folder

@end



/*
 * XML Suite
 */

// A named value associated with a unit of data in XML format
@interface ApplicationXMLAttribute : ApplicationItem

@property (copy, readonly) NSString *name;  // the name of the XML attribute
@property (copy) id value;  // the value of the XML attribute


@end

// Data in XML format
@interface ApplicationXMLData : ApplicationItem

- (SBElementArray *) XMLElements;

- (NSString *) id;  // the unique identifier of the XML data
@property (copy) NSString *name;  // the name of the XML data
@property (copy) ApplicationText *text;  // the text representation of the XML data


@end

// A unit of data in XML format
@interface ApplicationXMLElement : ApplicationItem

- (SBElementArray *) XMLAttributes;
- (SBElementArray *) XMLElements;

- (NSString *) id;  // the unique identifier of the XML element
@property (copy, readonly) NSString *name;  // the name of the XML element
@property (copy) id value;  // the value of the XML element


@end

// A file containing data in XML format
@interface ApplicationXMLFile : ApplicationFile

@property (copy) ApplicationXMLData *contents;  // the contents of the XML file; elements and properties of the XML data may be accessed as if they were elements and properties of the XML file


@end



/*
 * CD and DVD Preferences Suite
 */

// user's CD and DVD insertion preferences
@interface ApplicationCDAndDVDPreferencesObject : ApplicationItem

@property (copy, readonly) ApplicationInsertionPreference *blankCD;  // the blank CD insertion preference
@property (copy, readonly) ApplicationInsertionPreference *blankDVD;  // the blank DVD insertion preference
@property (copy, readonly) ApplicationInsertionPreference *musicCD;  // the music CD insertion preference
@property (copy, readonly) ApplicationInsertionPreference *pictureCD;  // the picture CD insertion preference
@property (copy, readonly) ApplicationInsertionPreference *videoDVD;  // the video DVD insertion preference


@end

// a specific insertion preference
@interface ApplicationInsertionPreference : ApplicationItem

@property (copy) ApplicationAlias *customApplication;  // application to launch or activate on the insertion of media
@property (copy) ApplicationAlias *customScript;  // AppleScript to launch or activate on the insertion of media
@property ApplicationDhac insertionAction;  // action to perform on media insertion


@end



/*
 * Network Preferences Suite
 */

// A collection of settings for configuring a connection
@interface ApplicationConfiguration : ApplicationItem

@property (copy) NSString *accountName;  // the name used to authenticate
@property (readonly) BOOL connected;  // Is the configuration connected?
- (NSString *) id;  // the unique identifier for the configuration
@property (copy) NSString *name;  // the name of the configuration


@end

// A collection of settings for a network interface
@interface ApplicationInterface : ApplicationItem

@property BOOL automatic;  // configure the interface speed, duplex, and mtu automatically?
@property (copy) NSString *duplex;  // the duplex setting  half | full | full with flow control
- (NSString *) id;  // the unique identifier for the interface
@property (copy, readonly) NSString *kind;  // the type of interface
@property (copy, readonly) NSString *MACAddress;  // the MAC address for the interface
@property NSInteger mtu;  // the packet size
@property (copy, readonly) NSString *name;  // the name of the interface
@property NSInteger speed;  // ethernet speed 10 | 100 | 1000


@end

// A set of services
@interface ApplicationLocation : ApplicationItem

- (SBElementArray *) services;

- (NSString *) id;  // the unique identifier for the location
@property (copy) NSString *name;  // the name of the location


@end

// the preferences for the current user's network
@interface ApplicationNetworkPreferencesObject : ApplicationItem

- (SBElementArray *) interfaces;
- (SBElementArray *) locations;
- (SBElementArray *) services;

@property (copy) ApplicationLocation *currentLocation;  // the current location


@end

// A collection of settings for a network service
@interface ApplicationService : ApplicationItem

- (SBElementArray *) configurations;

@property (readonly) BOOL active;  // Is the service active?
@property (copy) ApplicationConfiguration *currentConfiguration;  // the currently selected configuration
- (NSString *) id;  // the unique identifier for the service
@property (copy, readonly) ApplicationInterface *interface;  // the interface the service is built on
@property (readonly) NSInteger kind;  // the type of service
@property (copy) NSString *name;  // the name of the service


@end



/*
 * Security Suite
 */

// a collection of security preferences
@interface ApplicationSecurityPreferencesObject : ApplicationItem

@property BOOL automaticLogin;  // Is automatic login allowed?
@property BOOL logOutWhenInactive;  // Will the computer log out when inactive?
@property NSInteger logOutWhenInactiveInterval;  // The interval of inactivity after which the computer will log out
@property BOOL requirePasswordToUnlock;  // Is a password required to unlock secure preferences?
@property BOOL requirePasswordToWake;  // Is a password required to wake the computer from sleep or screen saver?
@property BOOL secureVirtualMemory;  // Is secure virtual memory being used?


@end



/*
 * Expose Preferences Suite
 */

// user's expose and dashboard mouse and key preferences
@interface ApplicationExposePreferencesObject : ApplicationItem

@property (copy, readonly) ApplicationShortcut *allWindowsShortcut;  // the key and mouse binding shortcuts for showing the all application windows
@property (copy, readonly) ApplicationShortcut *applicationWindowsShortcut;  // the key and mouse binding shortcuts for showing the current application windows
@property (copy, readonly) ApplicationScreenCorner *bottomLeftScreenCorner;  // the bottom left screen corner
@property (copy, readonly) ApplicationScreenCorner *bottomRightScreenCorner;  // the bottom right screen corner
@property (copy, readonly) ApplicationShortcut *dashboardShortcut;  // the key and mouse binding shortcuts for showing the dashboard
@property (copy, readonly) ApplicationShortcut *showDesktopShortcut;  // the key and mouse binding shortcuts for showing the desktop
@property (copy, readonly) ApplicationShortcut *showSpacesShortcut;  // the key and mouse binding shortcuts for showing spaces
@property (copy, readonly) ApplicationSpacesPreferencesObject *spacesPreferences;  // the spaces preferences
@property (copy, readonly) ApplicationScreenCorner *topLeftScreenCorner;  // the top left screen corner
@property (copy, readonly) ApplicationScreenCorner *topRightScreenCorner;  // the top right screen corner


@end

// a screen corner location for a specific expose or dashboard feature
@interface ApplicationScreenCorner : ApplicationItem

@property ApplicationEpac activity;  // activity for a specific screen corner
@property ApplicationEpmd modifiers;  // keyboard modifiers used for a specific screen corner, passed as string or list


@end

// a keyboard or mouse shortcut for a specific expose or dashboard feature
@interface ApplicationShortcut : ApplicationItem

@property ApplicationEpfk functionKey;  // keyboard key for a specific shortcut, not all keyboards support all possible function keys
@property ApplicationEpmd functionKeyModifiers;  // keyboard modifiers used for a specific function key, passed as string or list
@property NSInteger mouseButton;  // mouse button for a specific shortcut (between 2 and the users number of buttons, 0 or none to remove the property)
@property ApplicationEpmd mouseButtonModifiers;  // keyboard modifiers used for a specific mouse button, passed as string or list


@end

// user's spaces application bindings and navigation preferences
@interface ApplicationSpacesPreferencesObject : ApplicationItem

@property (copy) NSDictionary *applicationBindings;  // binding of applications to specific spaces
@property (copy, readonly) ApplicationSpacesShortcut *arrowKeyModifiers;  // keyboard modifiers used controlling the arrow key navigation through spaces
@property (copy, readonly) ApplicationSpacesShortcut *numbersKeyModifiers;  // keyboard modifiers used controlling the number key navigation through spaces
@property NSInteger spacesColumns;  // number of columns of spaces
@property BOOL spacesEnabled;  // is spaces enabled?
@property NSInteger spacesRows;  // number of rows of spaces


@end

// The keyboard modifiers for a specific spaces navigation shortcut
@interface ApplicationSpacesShortcut : ApplicationItem

@property ApplicationEpmd keyModifiers;  // modifiers used for a specific function key, passed as string or list


@end



/*
 * Appearance Suite
 */

// A collection of appearance preferences
@interface ApplicationAppearancePreferencesObject : ApplicationItem

@property ApplicationAppe appearance;  // the overall look of buttons, menus and windows
@property BOOL doubleClickMinimizes;  // Does double clicking the title bar minimize a window?
@property BOOL fontSmoothing;  // Is font smoothing on?
@property NSInteger fontSmoothingLimit;  // the font size at or below which font smoothing is turned off
@property ApplicationFtss fontSmoothingStyle;  // the method used for smoothing fonts
@property (copy) NSColor *highlightColor;  // color used for hightlighting selected text and lists
@property NSInteger recentApplicationsLimit;  // the number of recent applications to track
@property NSInteger recentDocumentsLimit;  // the number of recent documents to track
@property NSInteger recentServersLimit;  // the number of recent servers to track
@property ApplicationSclp scrollArrowPlacement;  // the placement of the scroll arrows
@property ApplicationSclb scrollBarAction;  // the action performed by clicking the scroll bar
@property BOOL smoothScrolling;  // Is smooth scrolling used?


@end



/*
 * Accounts Suite
 */

// user account
@interface ApplicationUser : ApplicationItem

@property (copy, readonly) NSString *fullName;  // user's full name
@property (copy, readonly) ApplicationAlias *homeDirectory;  // path to user's home directory
@property (copy, readonly) NSString *name;  // user's short name
@property (copy) ApplicationAlias *picturePath;  // path to user's picture. Can be set for current user only!


@end



/*
 * Login Items Suite
 */

// an item to be launched or opened at login
@interface ApplicationLoginItem : ApplicationItem

@property BOOL hidden;  // Is the Login Item hidden when launched?
@property (copy, readonly) NSString *kind;  // the file type of the Login Item
@property (copy, readonly) NSString *name;  // the name of the Login Item
@property (copy, readonly) NSString *path;  // the file system path to the Login Item


@end



/*
 * Desktop Suite
 */

// desktop picture settings
@interface ApplicationDesktop : ApplicationItem

@property double changeInterval;  // number of seconds to wait between changing the desktop picture
@property (copy, readonly) NSString *displayName;  // name of display on which this desktop appears
@property (copy) ApplicationAlias *picture;  // path to file used as desktop picture
@property NSInteger pictureRotation;  // never, using interval, using login, after sleep
@property (copy) ApplicationAlias *picturesFolder;  // path to folder containing pictures for changing desktop background
@property BOOL randomOrder;  // turn on for random ordering of changing desktop pictures
@property BOOL translucentMenuBar;  // indicates whether the menu bar is translucent


@end



/*
 * Type Definitions
 */

@interface ApplicationPrintSettings : SBObject

@property NSInteger copies;  // the number of copies of a document to be printed
@property BOOL collating;  // Should printed copies be collated?
@property NSInteger startingPage;  // the first page of the document to be printed
@property NSInteger endingPage;  // the last page of the document to be printed
@property NSInteger pagesAcross;  // number of logical pages laid across a physical page
@property NSInteger pagesDown;  // number of logical pages laid out down a physical page
@property (copy) NSDate *requestedPrintTime;  // the time at which the desktop printer should print the document
@property ApplicationEnum errorHandling;  // how errors are handled
@property (copy) NSString *faxNumber;  // for fax number
@property (copy) NSString *targetPrinter;  // for target printer

- (void) closeSaving:(ApplicationSavo)saving savingIn:(ApplicationAlias *)savingIn;  // Close an object.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy object(s) and put the copies at a new location.
- (BOOL) exists;  // Verify if an object exists.
- (void) moveTo:(SBObject *)to;  // Move object(s) to a new location.
- (void) saveAs:(NSString *)as in:(ApplicationAlias *)in_;  // Save an object.
- (void) start;  // start the screen saver
- (void) stop;  // stop the screen saver

@end

