/* Copyright 2017 R. Thomas
 * Copyright 2017 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef LIEF_PE_USER32_DLL_LOOKUP_H_
#define LIEF_PE_USER32_DLL_LOOKUP_H_

#include <map>

namespace LIEF {
namespace PE {

static const std::map<uint32_t, const char*> user32_dll_lookup {
    { 0x0001, "ActivateKeyboardLayout"    },
    { 0x0002, "AdjustWindowRect"          },
    { 0x0003, "AdjustWindowRectEx"        },
    { 0x0004, "AlignRects"                },
    { 0x0005, "AllowForegroundActivation" },
    { 0x0006, "AllowSetForegroundWindow"  },
    { 0x0007, "AnimateWindow"             },
    { 0x0008, "AnyPopup"                  },
    { 0x0009, "AppendMenuA"               },
    { 0x000a, "AppendMenuW"               },
    { 0x000b, "ArrangeIconicWindows"      },
    { 0x000c, "AttachThreadInput"         },
    { 0x000d, "BeginDeferWindowPos"       },
    { 0x000e, "BeginPaint"                },
    { 0x000f, "BlockInput"                },
    { 0x0010, "BringWindowToTop"          },
    { 0x0011, "BroadcastSystemMessage"    },
    { 0x0012, "BroadcastSystemMessageA"   },
    { 0x0013, "BroadcastSystemMessageExA" },
    { 0x0014, "BroadcastSystemMessageExW" },
    { 0x0015, "BroadcastSystemMessageW"   },
    { 0x0016, "BuildReasonArray"          },
    { 0x0017, "CalcMenuBar"               },
    { 0x0018, "CallMsgFilter"             },
    { 0x0019, "CallMsgFilterA"            },
    { 0x001a, "CallMsgFilterW"            },
    { 0x001b, "CallNextHookEx"            },
    { 0x001c, "CallWindowProcA"           },
    { 0x001d, "CallWindowProcW"           },
    { 0x001e, "CascadeChildWindows"       },
    { 0x001f, "CascadeWindows"            },
    { 0x0020, "ChangeClipboardChain"      },
    { 0x0021, "ChangeDisplaySettingsA"    },
    { 0x0022, "ChangeDisplaySettingsExA"  },
    { 0x0023, "ChangeDisplaySettingsExW"  },
    { 0x0024, "ChangeDisplaySettingsW"    },
    { 0x0025, "ChangeMenuA"               },
    { 0x0026, "ChangeMenuW"               },
    { 0x0027, "CharLowerA"                },
    { 0x0028, "CharLowerBuffA"            },
    { 0x0029, "CharLowerBuffW"            },
    { 0x002a, "CharLowerW"                },
    { 0x002b, "CharNextA"                 },
    { 0x002c, "CharNextExA"               },
    { 0x002d, "CharNextW"                 },
    { 0x002e, "CharPrevA"                 },
    { 0x002f, "CharPrevExA"               },
    { 0x0030, "CharPrevW"                 },
    { 0x0031, "CharToOemA"                },
    { 0x0032, "CharToOemBuffA"            },
    { 0x0033, "CharToOemBuffW"            },
    { 0x0034, "CharToOemW"                },
    { 0x0035, "CharUpperA"                },
    { 0x0036, "CharUpperBuffA"            },
    { 0x0037, "CharUpperBuffW"            },
    { 0x0038, "CharUpperW"                },
    { 0x0039, "CheckDlgButton"            },
    { 0x003a, "CheckMenuItem"             },
    { 0x003b, "CheckMenuRadioItem"        },
    { 0x003c, "CheckRadioButton"          },
    { 0x003d, "ChildWindowFromPoint"      },
    { 0x003e, "ChildWindowFromPointEx"    },
    { 0x003f, "CliImmSetHotKey"           },
    { 0x0040, "ClientThreadSetup"         },
    { 0x0041, "ClientToScreen"            },
    { 0x0042, "ClipCursor"                },
    { 0x0043, "CloseClipboard"            },
    { 0x0044, "CloseDesktop"              },
    { 0x0045, "CloseWindow"               },
    { 0x0046, "CloseWindowStation"        },
    { 0x0047, "CopyAcceleratorTableA"     },
    { 0x0048, "CopyAcceleratorTableW"     },
    { 0x0049, "CopyIcon"                  },
    { 0x004a, "CopyImage"                 },
    { 0x004b, "CopyRect"                  },
    { 0x004c, "CountClipboardFormats"     },
    { 0x004d, "CreateAcceleratorTableA"   },
    { 0x004e, "CreateAcceleratorTableW"   },
    { 0x004f, "CreateCaret"               },
    { 0x0050, "CreateCursor"              },
    { 0x0051, "CreateDesktopA"            },
    { 0x0052, "CreateDesktopW"            },
    { 0x0053, "CreateDialogIndirectParamA" },
    { 0x0054, "CreateDialogIndirectParamAorW" },
    { 0x0055, "CreateDialogIndirectParamW" },
    { 0x0056, "CreateDialogParamA"        },
    { 0x0057, "CreateDialogParamW"        },
    { 0x0058, "CreateIcon"                },
    { 0x0059, "CreateIconFromResource"    },
    { 0x005a, "CreateIconFromResourceEx"  },
    { 0x005b, "CreateIconIndirect"        },
    { 0x005c, "CreateMDIWindowA"          },
    { 0x005d, "CreateMDIWindowW"          },
    { 0x005e, "CreateMenu"                },
    { 0x005f, "CreatePopupMenu"           },
    { 0x0060, "CreateSystemThreads"       },
    { 0x0061, "CreateWindowExA"           },
    { 0x0062, "CreateWindowExW"           },
    { 0x0063, "CreateWindowStationA"      },
    { 0x0064, "CreateWindowStationW"      },
    { 0x0065, "CsrBroadcastSystemMessageExW" },
    { 0x0066, "CtxInitUser32"             },
    { 0x0067, "DdeAbandonTransaction"     },
    { 0x0068, "DdeAccessData"             },
    { 0x0069, "DdeAddData"                },
    { 0x006a, "DdeClientTransaction"      },
    { 0x006b, "DdeCmpStringHandles"       },
    { 0x006c, "DdeConnect"                },
    { 0x006d, "DdeConnectList"            },
    { 0x006e, "DdeCreateDataHandle"       },
    { 0x006f, "DdeCreateStringHandleA"    },
    { 0x0070, "DdeCreateStringHandleW"    },
    { 0x0071, "DdeDisconnect"             },
    { 0x0072, "DdeDisconnectList"         },
    { 0x0073, "DdeEnableCallback"         },
    { 0x0074, "DdeFreeDataHandle"         },
    { 0x0075, "DdeFreeStringHandle"       },
    { 0x0076, "DdeGetData"                },
    { 0x0077, "DdeGetLastError"           },
    { 0x0078, "DdeGetQualityOfService"    },
    { 0x0079, "DdeImpersonateClient"      },
    { 0x007a, "DdeInitializeA"            },
    { 0x007b, "DdeInitializeW"            },
    { 0x007c, "DdeKeepStringHandle"       },
    { 0x007d, "DdeNameService"            },
    { 0x007e, "DdePostAdvise"             },
    { 0x007f, "DdeQueryConvInfo"          },
    { 0x0080, "DdeQueryNextServer"        },
    { 0x0081, "DdeQueryStringA"           },
    { 0x0082, "DdeQueryStringW"           },
    { 0x0083, "DdeReconnect"              },
    { 0x0084, "DdeSetQualityOfService"    },
    { 0x0085, "DdeSetUserHandle"          },
    { 0x0086, "DdeUnaccessData"           },
    { 0x0087, "DdeUninitialize"           },
    { 0x0088, "DefDlgProcA"               },
    { 0x0089, "DefDlgProcW"               },
    { 0x008a, "DefFrameProcA"             },
    { 0x008b, "DefFrameProcW"             },
    { 0x008c, "DefMDIChildProcA"          },
    { 0x008d, "DefMDIChildProcW"          },
    { 0x008e, "DefRawInputProc"           },
    { 0x008f, "DefWindowProcA"            },
    { 0x0090, "DefWindowProcW"            },
    { 0x0091, "DeferWindowPos"            },
    { 0x0092, "DeleteMenu"                },
    { 0x0093, "DeregisterShellHookWindow" },
    { 0x0094, "DestroyAcceleratorTable"   },
    { 0x0095, "DestroyCaret"              },
    { 0x0096, "DestroyCursor"             },
    { 0x0097, "DestroyIcon"               },
    { 0x0098, "DestroyMenu"               },
    { 0x0099, "DestroyReasons"            },
    { 0x009a, "DestroyWindow"             },
    { 0x009b, "DeviceEventWorker"         },
    { 0x009c, "DialogBoxIndirectParamA"   },
    { 0x009d, "DialogBoxIndirectParamAorW" },
    { 0x009e, "DialogBoxIndirectParamW"   },
    { 0x009f, "DialogBoxParamA"           },
    { 0x00a0, "DialogBoxParamW"           },
    { 0x00a1, "DisableProcessWindowsGhosting" },
    { 0x00a2, "DispatchMessageA"          },
    { 0x00a3, "DispatchMessageW"          },
    { 0x00a4, "DisplayExitWindowsWarnings" },
    { 0x00a5, "DlgDirListA"               },
    { 0x00a6, "DlgDirListComboBoxA"       },
    { 0x00a7, "DlgDirListComboBoxW"       },
    { 0x00a8, "DlgDirListW"               },
    { 0x00a9, "DlgDirSelectComboBoxExA"   },
    { 0x00aa, "DlgDirSelectComboBoxExW"   },
    { 0x00ab, "DlgDirSelectExA"           },
    { 0x00ac, "DlgDirSelectExW"           },
    { 0x00ad, "DragDetect"                },
    { 0x00ae, "DragObject"                },
    { 0x00af, "DrawAnimatedRects"         },
    { 0x00b0, "DrawCaption"               },
    { 0x00b1, "DrawCaptionTempA"          },
    { 0x00b2, "DrawCaptionTempW"          },
    { 0x00b3, "DrawEdge"                  },
    { 0x00b4, "DrawFocusRect"             },
    { 0x00b5, "DrawFrame"                 },
    { 0x00b6, "DrawFrameControl"          },
    { 0x00b7, "DrawIcon"                  },
    { 0x00b8, "DrawIconEx"                },
    { 0x00b9, "DrawMenuBar"               },
    { 0x00ba, "DrawMenuBarTemp"           },
    { 0x00bb, "DrawStateA"                },
    { 0x00bc, "DrawStateW"                },
    { 0x00bd, "DrawTextA"                 },
    { 0x00be, "DrawTextExA"               },
    { 0x00bf, "DrawTextExW"               },
    { 0x00c0, "DrawTextW"                 },
    { 0x00c1, "EditWndProc"               },
    { 0x00c2, "EmptyClipboard"            },
    { 0x00c3, "EnableMenuItem"            },
    { 0x00c4, "EnableScrollBar"           },
    { 0x00c5, "EnableWindow"              },
    { 0x00c6, "EndDeferWindowPos"         },
    { 0x00c7, "EndDialog"                 },
    { 0x00c8, "EndMenu"                   },
    { 0x00c9, "EndPaint"                  },
    { 0x00ca, "EndTask"                   },
    { 0x00cb, "EnterReaderModeHelper"     },
    { 0x00cc, "EnumChildWindows"          },
    { 0x00cd, "EnumClipboardFormats"      },
    { 0x00ce, "EnumDesktopWindows"        },
    { 0x00cf, "EnumDesktopsA"             },
    { 0x00d0, "EnumDesktopsW"             },
    { 0x00d1, "EnumDisplayDevicesA"       },
    { 0x00d2, "EnumDisplayDevicesW"       },
    { 0x00d3, "EnumDisplayMonitors"       },
    { 0x00d4, "EnumDisplaySettingsA"      },
    { 0x00d5, "EnumDisplaySettingsExA"    },
    { 0x00d6, "EnumDisplaySettingsExW"    },
    { 0x00d7, "EnumDisplaySettingsW"      },
    { 0x00d8, "EnumPropsA"                },
    { 0x00d9, "EnumPropsExA"              },
    { 0x00da, "EnumPropsExW"              },
    { 0x00db, "EnumPropsW"                },
    { 0x00dc, "EnumThreadWindows"         },
    { 0x00dd, "EnumWindowStationsA"       },
    { 0x00de, "EnumWindowStationsW"       },
    { 0x00df, "EnumWindows"               },
    { 0x00e0, "EqualRect"                 },
    { 0x00e1, "ExcludeUpdateRgn"          },
    { 0x00e2, "ExitWindowsEx"             },
    { 0x00e3, "FillRect"                  },
    { 0x00e4, "FindWindowA"               },
    { 0x00e5, "FindWindowExA"             },
    { 0x00e6, "FindWindowExW"             },
    { 0x00e7, "FindWindowW"               },
    { 0x00e8, "FlashWindow"               },
    { 0x00e9, "FlashWindowEx"             },
    { 0x00ea, "FrameRect"                 },
    { 0x00eb, "FreeDDElParam"             },
    { 0x00ec, "GetActiveWindow"           },
    { 0x00ed, "GetAltTabInfo"             },
    { 0x00ee, "GetAltTabInfoA"            },
    { 0x00ef, "GetAltTabInfoW"            },
    { 0x00f0, "GetAncestor"               },
    { 0x00f2, "GetAppCompatFlags"         },
    { 0x00f1, "GetAppCompatFlags2"        },
    { 0x00f3, "GetAsyncKeyState"          },
    { 0x00f4, "GetCapture"                },
    { 0x00f5, "GetCaretBlinkTime"         },
    { 0x00f6, "GetCaretPos"               },
    { 0x00f7, "GetClassInfoA"             },
    { 0x00f8, "GetClassInfoExA"           },
    { 0x00f9, "GetClassInfoExW"           },
    { 0x00fa, "GetClassInfoW"             },
    { 0x00fb, "GetClassLongA"             },
    { 0x00fc, "GetClassLongW"             },
    { 0x00fd, "GetClassNameA"             },
    { 0x00fe, "GetClassNameW"             },
    { 0x00ff, "GetClassWord"              },
    { 0x0100, "GetClientRect"             },
    { 0x0101, "GetClipCursor"             },
    { 0x0102, "GetClipboardData"          },
    { 0x0103, "GetClipboardFormatNameA"   },
    { 0x0104, "GetClipboardFormatNameW"   },
    { 0x0105, "GetClipboardOwner"         },
    { 0x0106, "GetClipboardSequenceNumber" },
    { 0x0107, "GetClipboardViewer"        },
    { 0x0108, "GetComboBoxInfo"           },
    { 0x0109, "GetCursor"                 },
    { 0x010a, "GetCursorFrameInfo"        },
    { 0x010b, "GetCursorInfo"             },
    { 0x010c, "GetCursorPos"              },
    { 0x010d, "GetDC"                     },
    { 0x010e, "GetDCEx"                   },
    { 0x010f, "GetDesktopWindow"          },
    { 0x0110, "GetDialogBaseUnits"        },
    { 0x0111, "GetDlgCtrlID"              },
    { 0x0112, "GetDlgItem"                },
    { 0x0113, "GetDlgItemInt"             },
    { 0x0114, "GetDlgItemTextA"           },
    { 0x0115, "GetDlgItemTextW"           },
    { 0x0116, "GetDoubleClickTime"        },
    { 0x0117, "GetFocus"                  },
    { 0x0118, "GetForegroundWindow"       },
    { 0x0119, "GetGUIThreadInfo"          },
    { 0x011a, "GetGuiResources"           },
    { 0x011b, "GetIconInfo"               },
    { 0x011c, "GetInputDesktop"           },
    { 0x011d, "GetInputState"             },
    { 0x011e, "GetInternalWindowPos"      },
    { 0x011f, "GetKBCodePage"             },
    { 0x0120, "GetKeyNameTextA"           },
    { 0x0121, "GetKeyNameTextW"           },
    { 0x0122, "GetKeyState"               },
    { 0x0123, "GetKeyboardLayout"         },
    { 0x0124, "GetKeyboardLayoutList"     },
    { 0x0125, "GetKeyboardLayoutNameA"    },
    { 0x0126, "GetKeyboardLayoutNameW"    },
    { 0x0127, "GetKeyboardState"          },
    { 0x0128, "GetKeyboardType"           },
    { 0x0129, "GetLastActivePopup"        },
    { 0x012a, "GetLastInputInfo"          },
    { 0x012b, "GetLayeredWindowAttributes" },
    { 0x012c, "GetListBoxInfo"            },
    { 0x012d, "GetMenu"                   },
    { 0x012e, "GetMenuBarInfo"            },
    { 0x012f, "GetMenuCheckMarkDimensions" },
    { 0x0130, "GetMenuContextHelpId"      },
    { 0x0131, "GetMenuDefaultItem"        },
    { 0x0132, "GetMenuInfo"               },
    { 0x0133, "GetMenuItemCount"          },
    { 0x0134, "GetMenuItemID"             },
    { 0x0135, "GetMenuItemInfoA"          },
    { 0x0136, "GetMenuItemInfoW"          },
    { 0x0137, "GetMenuItemRect"           },
    { 0x0138, "GetMenuState"              },
    { 0x0139, "GetMenuStringA"            },
    { 0x013a, "GetMenuStringW"            },
    { 0x013b, "GetMessageA"               },
    { 0x013c, "GetMessageExtraInfo"       },
    { 0x013d, "GetMessagePos"             },
    { 0x013e, "GetMessageTime"            },
    { 0x013f, "GetMessageW"               },
    { 0x0140, "GetMonitorInfoA"           },
    { 0x0141, "GetMonitorInfoW"           },
    { 0x0142, "GetMouseMovePointsEx"      },
    { 0x0143, "GetNextDlgGroupItem"       },
    { 0x0144, "GetNextDlgTabItem"         },
    { 0x0145, "GetOpenClipboardWindow"    },
    { 0x0146, "GetParent"                 },
    { 0x0147, "GetPriorityClipboardFormat" },
    { 0x0148, "GetProcessDefaultLayout"   },
    { 0x0149, "GetProcessWindowStation"   },
    { 0x014a, "GetProgmanWindow"          },
    { 0x014b, "GetPropA"                  },
    { 0x014c, "GetPropW"                  },
    { 0x014d, "GetQueueStatus"            },
    { 0x014e, "GetRawInputBuffer"         },
    { 0x014f, "GetRawInputData"           },
    { 0x0150, "GetRawInputDeviceInfoA"    },
    { 0x0151, "GetRawInputDeviceInfoW"    },
    { 0x0152, "GetRawInputDeviceList"     },
    { 0x0153, "GetReasonTitleFromReasonCode" },
    { 0x0154, "GetRegisteredRawInputDevices" },
    { 0x0155, "GetScrollBarInfo"          },
    { 0x0156, "GetScrollInfo"             },
    { 0x0157, "GetScrollPos"              },
    { 0x0158, "GetScrollRange"            },
    { 0x0159, "GetShellWindow"            },
    { 0x015a, "GetSubMenu"                },
    { 0x015b, "GetSysColor"               },
    { 0x015c, "GetSysColorBrush"          },
    { 0x015d, "GetSystemMenu"             },
    { 0x015e, "GetSystemMetrics"          },
    { 0x015f, "GetTabbedTextExtentA"      },
    { 0x0160, "GetTabbedTextExtentW"      },
    { 0x0161, "GetTaskmanWindow"          },
    { 0x0162, "GetThreadDesktop"          },
    { 0x0163, "GetTitleBarInfo"           },
    { 0x0164, "GetTopWindow"              },
    { 0x0165, "GetUpdateRect"             },
    { 0x0166, "GetUpdateRgn"              },
    { 0x0167, "GetUserObjectInformationA" },
    { 0x0168, "GetUserObjectInformationW" },
    { 0x0169, "GetUserObjectSecurity"     },
    { 0x016a, "GetWinStationInfo"         },
    { 0x016b, "GetWindow"                 },
    { 0x016c, "GetWindowContextHelpId"    },
    { 0x016d, "GetWindowDC"               },
    { 0x016e, "GetWindowInfo"             },
    { 0x016f, "GetWindowLongA"            },
    { 0x0170, "GetWindowLongW"            },
    { 0x0171, "GetWindowModuleFileName"   },
    { 0x0172, "GetWindowModuleFileNameA"  },
    { 0x0173, "GetWindowModuleFileNameW"  },
    { 0x0174, "GetWindowPlacement"        },
    { 0x0175, "GetWindowRect"             },
    { 0x0176, "GetWindowRgn"              },
    { 0x0177, "GetWindowRgnBox"           },
    { 0x0178, "GetWindowTextA"            },
    { 0x0179, "GetWindowTextLengthA"      },
    { 0x017a, "GetWindowTextLengthW"      },
    { 0x017b, "GetWindowTextW"            },
    { 0x017c, "GetWindowThreadProcessId"  },
    { 0x017d, "GetWindowWord"             },
    { 0x017e, "GrayStringA"               },
    { 0x017f, "GrayStringW"               },
    { 0x0180, "HideCaret"                 },
    { 0x0181, "HiliteMenuItem"            },
    { 0x0182, "IMPGetIMEA"                },
    { 0x0183, "IMPGetIMEW"                },
    { 0x0184, "IMPQueryIMEA"              },
    { 0x0185, "IMPQueryIMEW"              },
    { 0x0186, "IMPSetIMEA"                },
    { 0x0187, "IMPSetIMEW"                },
    { 0x0188, "ImpersonateDdeClientWindow" },
    { 0x0189, "InSendMessage"             },
    { 0x018a, "InSendMessageEx"           },
    { 0x018b, "InflateRect"               },
    { 0x018c, "InitializeLpkHooks"        },
    { 0x018d, "InitializeWin32EntryTable" },
    { 0x018e, "InsertMenuA"               },
    { 0x018f, "InsertMenuItemA"           },
    { 0x0190, "InsertMenuItemW"           },
    { 0x0191, "InsertMenuW"               },
    { 0x0192, "InternalGetWindowText"     },
    { 0x0193, "IntersectRect"             },
    { 0x0194, "InvalidateRect"            },
    { 0x0195, "InvalidateRgn"             },
    { 0x0196, "InvertRect"                },
    { 0x0197, "IsCharAlphaA"              },
    { 0x0198, "IsCharAlphaNumericA"       },
    { 0x0199, "IsCharAlphaNumericW"       },
    { 0x019a, "IsCharAlphaW"              },
    { 0x019b, "IsCharLowerA"              },
    { 0x019c, "IsCharLowerW"              },
    { 0x019d, "IsCharUpperA"              },
    { 0x019e, "IsCharUpperW"              },
    { 0x019f, "IsChild"                   },
    { 0x01a0, "IsClipboardFormatAvailable" },
    { 0x01a1, "IsDialogMessage"           },
    { 0x01a2, "IsDialogMessageA"          },
    { 0x01a3, "IsDialogMessageW"          },
    { 0x01a4, "IsDlgButtonChecked"        },
    { 0x01a5, "IsGUIThread"               },
    { 0x01a6, "IsHungAppWindow"           },
    { 0x01a7, "IsIconic"                  },
    { 0x01a8, "IsMenu"                    },
    { 0x01a9, "IsRectEmpty"               },
    { 0x01aa, "IsServerSideWindow"        },
    { 0x01ab, "IsWinEventHookInstalled"   },
    { 0x01ac, "IsWindow"                  },
    { 0x01ad, "IsWindowEnabled"           },
    { 0x01ae, "IsWindowInDestroy"         },
    { 0x01af, "IsWindowUnicode"           },
    { 0x01b0, "IsWindowVisible"           },
    { 0x01b1, "IsZoomed"                  },
    { 0x01b2, "KillSystemTimer"           },
    { 0x01b3, "KillTimer"                 },
    { 0x01b4, "LoadAcceleratorsA"         },
    { 0x01b5, "LoadAcceleratorsW"         },
    { 0x01b6, "LoadBitmapA"               },
    { 0x01b7, "LoadBitmapW"               },
    { 0x01b8, "LoadCursorA"               },
    { 0x01b9, "LoadCursorFromFileA"       },
    { 0x01ba, "LoadCursorFromFileW"       },
    { 0x01bb, "LoadCursorW"               },
    { 0x01bc, "LoadIconA"                 },
    { 0x01bd, "LoadIconW"                 },
    { 0x01be, "LoadImageA"                },
    { 0x01bf, "LoadImageW"                },
    { 0x01c0, "LoadKeyboardLayoutA"       },
    { 0x01c1, "LoadKeyboardLayoutEx"      },
    { 0x01c2, "LoadKeyboardLayoutW"       },
    { 0x01c3, "LoadLocalFonts"            },
    { 0x01c4, "LoadMenuA"                 },
    { 0x01c5, "LoadMenuIndirectA"         },
    { 0x01c6, "LoadMenuIndirectW"         },
    { 0x01c7, "LoadMenuW"                 },
    { 0x01c8, "LoadRemoteFonts"           },
    { 0x01c9, "LoadStringA"               },
    { 0x01ca, "LoadStringW"               },
    { 0x01cb, "LockSetForegroundWindow"   },
    { 0x01cc, "LockWindowStation"         },
    { 0x01cd, "LockWindowUpdate"          },
    { 0x01ce, "LockWorkStation"           },
    { 0x01cf, "LookupIconIdFromDirectory" },
    { 0x01d0, "LookupIconIdFromDirectoryEx" },
    { 0x01d1, "MBToWCSEx"                 },
    { 0x01d2, "MB_GetString"              },
    { 0x01d3, "MapDialogRect"             },
    { 0x01d4, "MapVirtualKeyA"            },
    { 0x01d5, "MapVirtualKeyExA"          },
    { 0x01d6, "MapVirtualKeyExW"          },
    { 0x01d7, "MapVirtualKeyW"            },
    { 0x01d8, "MapWindowPoints"           },
    { 0x01d9, "MenuItemFromPoint"         },
    { 0x01da, "MenuWindowProcA"           },
    { 0x01db, "MenuWindowProcW"           },
    { 0x01dc, "MessageBeep"               },
    { 0x01dd, "MessageBoxA"               },
    { 0x01de, "MessageBoxExA"             },
    { 0x01df, "MessageBoxExW"             },
    { 0x01e0, "MessageBoxIndirectA"       },
    { 0x01e1, "MessageBoxIndirectW"       },
    { 0x01e2, "MessageBoxTimeoutA"        },
    { 0x01e3, "MessageBoxTimeoutW"        },
    { 0x01e4, "MessageBoxW"               },
    { 0x01e5, "ModifyMenuA"               },
    { 0x01e6, "ModifyMenuW"               },
    { 0x01e7, "MonitorFromPoint"          },
    { 0x01e8, "MonitorFromRect"           },
    { 0x01e9, "MonitorFromWindow"         },
    { 0x01ea, "MoveWindow"                },
    { 0x01eb, "MsgWaitForMultipleObjects" },
    { 0x01ec, "MsgWaitForMultipleObjectsEx" },
    { 0x01ed, "NotifyWinEvent"            },
    { 0x01ee, "OemKeyScan"                },
    { 0x01ef, "OemToCharA"                },
    { 0x01f0, "OemToCharBuffA"            },
    { 0x01f1, "OemToCharBuffW"            },
    { 0x01f2, "OemToCharW"                },
    { 0x01f3, "OffsetRect"                },
    { 0x01f4, "OpenClipboard"             },
    { 0x01f5, "OpenDesktopA"              },
    { 0x01f6, "OpenDesktopW"              },
    { 0x01f7, "OpenIcon"                  },
    { 0x01f8, "OpenInputDesktop"          },
    { 0x01f9, "OpenWindowStationA"        },
    { 0x01fa, "OpenWindowStationW"        },
    { 0x01fb, "PackDDElParam"             },
    { 0x01fc, "PaintDesktop"              },
    { 0x01fd, "PaintMenuBar"              },
    { 0x01fe, "PeekMessageA"              },
    { 0x01ff, "PeekMessageW"              },
    { 0x0200, "PostMessageA"              },
    { 0x0201, "PostMessageW"              },
    { 0x0202, "PostQuitMessage"           },
    { 0x0203, "PostThreadMessageA"        },
    { 0x0204, "PostThreadMessageW"        },
    { 0x0205, "PrintWindow"               },
    { 0x0206, "PrivateExtractIconExA"     },
    { 0x0207, "PrivateExtractIconExW"     },
    { 0x0208, "PrivateExtractIconsA"      },
    { 0x0209, "PrivateExtractIconsW"      },
    { 0x020a, "PrivateSetDbgTag"          },
    { 0x020b, "PrivateSetRipFlags"        },
    { 0x020c, "PtInRect"                  },
    { 0x020d, "QuerySendMessage"          },
    { 0x020e, "QueryUserCounters"         },
    { 0x020f, "RealChildWindowFromPoint"  },
    { 0x0210, "RealGetWindowClass"        },
    { 0x0211, "RealGetWindowClassA"       },
    { 0x0212, "RealGetWindowClassW"       },
    { 0x0213, "ReasonCodeNeedsBugID"      },
    { 0x0214, "ReasonCodeNeedsComment"    },
    { 0x0215, "RecordShutdownReason"      },
    { 0x0216, "RedrawWindow"              },
    { 0x0217, "RegisterClassA"            },
    { 0x0218, "RegisterClassExA"          },
    { 0x0219, "RegisterClassExW"          },
    { 0x021a, "RegisterClassW"            },
    { 0x021b, "RegisterClipboardFormatA"  },
    { 0x021c, "RegisterClipboardFormatW"  },
    { 0x021d, "RegisterDeviceNotificationA" },
    { 0x021e, "RegisterDeviceNotificationW" },
    { 0x021f, "RegisterHotKey"            },
    { 0x0220, "RegisterLogonProcess"      },
    { 0x0221, "RegisterMessagePumpHook"   },
    { 0x0222, "RegisterRawInputDevices"   },
    { 0x0223, "RegisterServicesProcess"   },
    { 0x0224, "RegisterShellHookWindow"   },
    { 0x0225, "RegisterSystemThread"      },
    { 0x0226, "RegisterTasklist"          },
    { 0x0227, "RegisterUserApiHook"       },
    { 0x0228, "RegisterWindowMessageA"    },
    { 0x0229, "RegisterWindowMessageW"    },
    { 0x022a, "ReleaseCapture"            },
    { 0x022b, "ReleaseDC"                 },
    { 0x022c, "RemoveMenu"                },
    { 0x022d, "RemovePropA"               },
    { 0x022e, "RemovePropW"               },
    { 0x022f, "ReplyMessage"              },
    { 0x0230, "ResolveDesktopForWOW"      },
    { 0x0231, "ReuseDDElParam"            },
    { 0x0232, "ScreenToClient"            },
    { 0x0233, "ScrollChildren"            },
    { 0x0234, "ScrollDC"                  },
    { 0x0235, "ScrollWindow"              },
    { 0x0236, "ScrollWindowEx"            },
    { 0x0237, "SendDlgItemMessageA"       },
    { 0x0238, "SendDlgItemMessageW"       },
    { 0x0239, "SendIMEMessageExA"         },
    { 0x023a, "SendIMEMessageExW"         },
    { 0x023b, "SendInput"                 },
    { 0x023c, "SendMessageA"              },
    { 0x023d, "SendMessageCallbackA"      },
    { 0x023e, "SendMessageCallbackW"      },
    { 0x023f, "SendMessageTimeoutA"       },
    { 0x0240, "SendMessageTimeoutW"       },
    { 0x0241, "SendMessageW"              },
    { 0x0242, "SendNotifyMessageA"        },
    { 0x0243, "SendNotifyMessageW"        },
    { 0x0244, "SetActiveWindow"           },
    { 0x0245, "SetCapture"                },
    { 0x0246, "SetCaretBlinkTime"         },
    { 0x0247, "SetCaretPos"               },
    { 0x0248, "SetClassLongA"             },
    { 0x0249, "SetClassLongW"             },
    { 0x024a, "SetClassWord"              },
    { 0x024b, "SetClipboardData"          },
    { 0x024c, "SetClipboardViewer"        },
    { 0x024d, "SetConsoleReserveKeys"     },
    { 0x024e, "SetCursor"                 },
    { 0x024f, "SetCursorContents"         },
    { 0x0250, "SetCursorPos"              },
    { 0x0251, "SetDebugErrorLevel"        },
    { 0x0252, "SetDeskWallpaper"          },
    { 0x0253, "SetDlgItemInt"             },
    { 0x0254, "SetDlgItemTextA"           },
    { 0x0255, "SetDlgItemTextW"           },
    { 0x0256, "SetDoubleClickTime"        },
    { 0x0257, "SetFocus"                  },
    { 0x0258, "SetForegroundWindow"       },
    { 0x0259, "SetInternalWindowPos"      },
    { 0x025a, "SetKeyboardState"          },
    { 0x025b, "SetLastErrorEx"            },
    { 0x025c, "SetLayeredWindowAttributes" },
    { 0x025d, "SetLogonNotifyWindow"      },
    { 0x025e, "SetMenu"                   },
    { 0x025f, "SetMenuContextHelpId"      },
    { 0x0260, "SetMenuDefaultItem"        },
    { 0x0261, "SetMenuInfo"               },
    { 0x0262, "SetMenuItemBitmaps"        },
    { 0x0263, "SetMenuItemInfoA"          },
    { 0x0264, "SetMenuItemInfoW"          },
    { 0x0265, "SetMessageExtraInfo"       },
    { 0x0266, "SetMessageQueue"           },
    { 0x0267, "SetParent"                 },
    { 0x0268, "SetProcessDefaultLayout"   },
    { 0x0269, "SetProcessWindowStation"   },
    { 0x026a, "SetProgmanWindow"          },
    { 0x026b, "SetPropA"                  },
    { 0x026c, "SetPropW"                  },
    { 0x026d, "SetRect"                   },
    { 0x026e, "SetRectEmpty"              },
    { 0x026f, "SetScrollInfo"             },
    { 0x0270, "SetScrollPos"              },
    { 0x0271, "SetScrollRange"            },
    { 0x0272, "SetShellWindow"            },
    { 0x0273, "SetShellWindowEx"          },
    { 0x0274, "SetSysColors"              },
    { 0x0275, "SetSysColorsTemp"          },
    { 0x0276, "SetSystemCursor"           },
    { 0x0277, "SetSystemMenu"             },
    { 0x0278, "SetSystemTimer"            },
    { 0x0279, "SetTaskmanWindow"          },
    { 0x027a, "SetThreadDesktop"          },
    { 0x027b, "SetTimer"                  },
    { 0x027c, "SetUserObjectInformationA" },
    { 0x027d, "SetUserObjectInformationW" },
    { 0x027e, "SetUserObjectSecurity"     },
    { 0x027f, "SetWinEventHook"           },
    { 0x0280, "SetWindowContextHelpId"    },
    { 0x0281, "SetWindowLongA"            },
    { 0x0282, "SetWindowLongW"            },
    { 0x0283, "SetWindowPlacement"        },
    { 0x0284, "SetWindowPos"              },
    { 0x0285, "SetWindowRgn"              },
    { 0x0286, "SetWindowStationUser"      },
    { 0x0287, "SetWindowTextA"            },
    { 0x0288, "SetWindowTextW"            },
    { 0x0289, "SetWindowWord"             },
    { 0x028a, "SetWindowsHookA"           },
    { 0x028b, "SetWindowsHookExA"         },
    { 0x028c, "SetWindowsHookExW"         },
    { 0x028d, "SetWindowsHookW"           },
    { 0x028e, "ShowCaret"                 },
    { 0x028f, "ShowCursor"                },
    { 0x0290, "ShowOwnedPopups"           },
    { 0x0291, "ShowScrollBar"             },
    { 0x0292, "ShowStartGlass"            },
    { 0x0293, "ShowWindow"                },
    { 0x0294, "ShowWindowAsync"           },
    { 0x0295, "SoftModalMessageBox"       },
    { 0x0296, "SubtractRect"              },
    { 0x0297, "SwapMouseButton"           },
    { 0x0298, "SwitchDesktop"             },
    { 0x0299, "SwitchToThisWindow"        },
    { 0x029a, "SystemParametersInfoA"     },
    { 0x029b, "SystemParametersInfoW"     },
    { 0x029c, "TabbedTextOutA"            },
    { 0x029d, "TabbedTextOutW"            },
    { 0x029e, "TileChildWindows"          },
    { 0x029f, "TileWindows"               },
    { 0x02a0, "ToAscii"                   },
    { 0x02a1, "ToAsciiEx"                 },
    { 0x02a2, "ToUnicode"                 },
    { 0x02a3, "ToUnicodeEx"               },
    { 0x02a4, "TrackMouseEvent"           },
    { 0x02a5, "TrackPopupMenu"            },
    { 0x02a6, "TrackPopupMenuEx"          },
    { 0x02a7, "TranslateAccelerator"      },
    { 0x02a8, "TranslateAcceleratorA"     },
    { 0x02a9, "TranslateAcceleratorW"     },
    { 0x02aa, "TranslateMDISysAccel"      },
    { 0x02ab, "TranslateMessage"          },
    { 0x02ac, "TranslateMessageEx"        },
    { 0x02ad, "UnhookWinEvent"            },
    { 0x02ae, "UnhookWindowsHook"         },
    { 0x02af, "UnhookWindowsHookEx"       },
    { 0x02b0, "UnionRect"                 },
    { 0x02b1, "UnloadKeyboardLayout"      },
    { 0x02b2, "UnlockWindowStation"       },
    { 0x02b3, "UnpackDDElParam"           },
    { 0x02b4, "UnregisterClassA"          },
    { 0x02b5, "UnregisterClassW"          },
    { 0x02b6, "UnregisterDeviceNotification" },
    { 0x02b7, "UnregisterHotKey"          },
    { 0x02b8, "UnregisterMessagePumpHook" },
    { 0x02b9, "UnregisterUserApiHook"     },
    { 0x02ba, "UpdateLayeredWindow"       },
    { 0x02bb, "UpdatePerUserSystemParameters" },
    { 0x02bc, "UpdateWindow"              },
    { 0x02bd, "User32InitializeImmEntryTable" },
    { 0x02be, "UserClientDllInitialize"   },
    { 0x02bf, "UserHandleGrantAccess"     },
    { 0x02c0, "UserLpkPSMTextOut"         },
    { 0x02c1, "UserLpkTabbedTextOut"      },
    { 0x02c2, "UserRealizePalette"        },
    { 0x02c3, "UserRegisterWowHandlers"   },
    { 0x02c4, "VRipOutput"                },
    { 0x02c5, "VTagOutput"                },
    { 0x02c6, "ValidateRect"              },
    { 0x02c7, "ValidateRgn"               },
    { 0x02c8, "VkKeyScanA"                },
    { 0x02c9, "VkKeyScanExA"              },
    { 0x02ca, "VkKeyScanExW"              },
    { 0x02cb, "VkKeyScanW"                },
    { 0x02cc, "WCSToMBEx"                 },
    { 0x02cd, "WINNLSEnableIME"           },
    { 0x02ce, "WINNLSGetEnableStatus"     },
    { 0x02cf, "WINNLSGetIMEHotkey"        },
    { 0x02d0, "WaitForInputIdle"          },
    { 0x02d1, "WaitMessage"               },
    { 0x02d2, "Win32PoolAllocationStats"  },
    { 0x02d3, "WinHelpA"                  },
    { 0x02d4, "WinHelpW"                  },
    { 0x02d5, "WindowFromDC"              },
    { 0x02d6, "WindowFromPoint"           },
    { 0x02d7, "keybd_event"               },
    { 0x02d8, "mouse_event"               },
    { 0x02d9, "wsprintfA"                 },
    { 0x02da, "wsprintfW"                 },
    { 0x02db, "wvsprintfA"                },
    { 0x02dc, "wvsprintfW"                },
};


}
}

#endif
