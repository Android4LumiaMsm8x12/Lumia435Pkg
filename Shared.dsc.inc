#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018 - 2019, RUIKAI LIU. All rights reserved.
#
#  This program and the accompanying materials
#  are licensed and made available under the terms and conditions of the BSD License
#  which accompanies this distribution.  The full text of the license may be found at
#  http://opensource.org/licenses/bsd-license.php
#
#  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
#  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
#
#

[BuildOptions.common]
  GCC:*_*_ARM_CC_FLAGS = -fno-stack-protector
  GCC:*_*_ARM_DLINK_FLAGS = -fno-stack-protector

[BuildOptions.common.EDKII.DXE_CORE,BuildOptions.common.EDKII.DXE_DRIVER,BuildOptions.common.EDKII.UEFI_DRIVER,BuildOptions.common.EDKII.UEFI_APPLICATION]
  GCC:*_*_*_DLINK_FLAGS = -z common-page-size=0x1000 -fno-stack-protector

[BuildOptions.common.EDKII.DXE_RUNTIME_DRIVER]
  GCC:*_*_ARM_DLINK_FLAGS = -z common-page-size=0x1000 -fstack-protector
  RVCT:*_*_ARM_DLINK_FLAGS = --scatter $(EDK_TOOLS_PATH)/Scripts/Rvct-Align4K.sct

[PcdsFeatureFlag.common]
  gEfiMdePkgTokenSpaceGuid.PcdComponentNameDisable|TRUE
  gEfiMdePkgTokenSpaceGuid.PcdDriverDiagnosticsDisable|TRUE
  gEfiMdePkgTokenSpaceGuid.PcdComponentName2Disable|TRUE
  gEfiMdePkgTokenSpaceGuid.PcdDriverDiagnostics2Disable|TRUE
  gEmbeddedTokenSpaceGuid.PcdPrePiProduceMemoryTypeInformationHob|TRUE
  gArmTokenSpaceGuid.PcdCpuDxeProduceDebugSupport|FALSE
  gEfiMdeModulePkgTokenSpaceGuid.PcdTurnOffUsbLegacySupport|TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutGopSupport|TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdSupportUpdateCapsuleReset|TRUE

[PcdsFixedAtBuild.common]
  gEfiMdeModulePkgTokenSpaceGuid.PcdFirmwareVendor|L"subscribe to my youtube channel (Bad Dodo)"
  gEfiMdeModulePkgTokenSpaceGuid.PcdFirmwareVersionString|L"1.01"

# gEmbeddedTokenSpaceGuid.PcdPrePiCpuMemorySize|32
  gEmbeddedTokenSpaceGuid.PcdPrePiCpuIoSize|0
  gEfiMdePkgTokenSpaceGuid.PcdMaximumUnicodeStringLength|1000000
  gEfiMdePkgTokenSpaceGuid.PcdMaximumAsciiStringLength|1000000
  gEfiMdePkgTokenSpaceGuid.PcdMaximumLinkedListLength|1000000
  gEfiMdePkgTokenSpaceGuid.PcdSpinLockTimeout|10000000
  gEfiMdePkgTokenSpaceGuid.PcdDebugClearMemoryValue|0xAF
  gEfiMdePkgTokenSpaceGuid.PcdPerformanceLibraryPropertyMask|1
  gEfiMdePkgTokenSpaceGuid.PcdPostCodePropertyMask|0
  gEfiMdePkgTokenSpaceGuid.PcdUefiLibMaxPrintBufferSize|320
  gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x2f
  gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x800fee0f
  gEfiMdePkgTokenSpaceGuid.PcdReportStatusCodePropertyMask|0x07
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiACPIReclaimMemory|0
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiACPIMemoryNVS|0
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiReservedMemoryType|0
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiRuntimeServicesData|80
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiRuntimeServicesCode|40
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiBootServicesCode|400
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiBootServicesData|800
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiLoaderCode|10
  gEmbeddedTokenSpaceGuid.PcdMemoryTypeEfiLoaderData|0

  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x00C00000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000      # 256K stack
  gEfiMdeModulePkgTokenSpaceGuid.PcdResetOnMemoryTypeInformationChange|FALSE

  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x00C40000
  gArmTokenSpaceGuid.PcdArmArchTimerFreqInHz|19200000
  gArmTokenSpaceGuid.PcdArmArchTimerSecIntrNum|18
  gArmTokenSpaceGuid.PcdArmArchTimerIntrNum|19
  gEmbeddedTokenSpaceGuid.PcdInterruptBaseAddress|0xF9000000
  gArmTokenSpaceGuid.PcdGicDistributorBase|0xF9000000
  gArmTokenSpaceGuid.PcdGicInterruptInterfaceBase|0xF9002000


  # SoC Drivers GPIO TLMM
  gQcomTokenSpaceGuid.PcdGpioTlmmBaseAddress|0xFD510000
  gQcomTokenSpaceGuid.PcdGpioTlmmSummaryIrq|240
  gQcomTokenSpaceGuid.PcdGpioTlmmIoOffset|0x1004
  gQcomTokenSpaceGuid.PcdGpioTlmmIoElementSize|0x10
  gQcomTokenSpaceGuid.PcdGpioTlmmCtlOffset|0x1000
  gQcomTokenSpaceGuid.PcdGpioTlmmCtlElementSize|0x10
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrCfgOffset|0x1008
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrCfgElementSize|0x10
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrStatusOffset|0x100c
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrStatusElementSize|0x10
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrTargetOffset|0x1008
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrTargetElementSize|0x10
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrEnableBit|0
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrStatusBit|0
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrAckHigh|FALSE
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrTargetBit|5
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrTargetKpssValue|4
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrRawStatusBit|4
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrPolarityBit|1
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrDetectionBit|2
  gQcomTokenSpaceGuid.PcdGpioTlmmIntrDetectionWidth|2
  gQcomTokenSpaceGuid.PcdGpioTlmmInBit|0
  gQcomTokenSpaceGuid.PcdGpioTlmmOutBit|1
  gQcomTokenSpaceGuid.PcdGpioTlmmOeBit|9
  gQcomTokenSpaceGuid.PcdGpioTlmmMuxBit|2
  gQcomTokenSpaceGuid.PcdGpioTlmmDrvBit|6
  gQcomTokenSpaceGuid.PcdGpioTlmmPullBit|0
  gQcomTokenSpaceGuid.PcdGpioTlmmNumFunctions|12

  # SoC Drivers SPMI
  gQcomTokenSpaceGuid.PcdSpmiBaseAddress|0xFC4C0000
  
   # SoC Drivers MMC
  gQcomTokenSpaceGuid.PcdSdccMciHcMode|0x00000078
  gQcomTokenSpaceGuid.PcdSdccHcPwrctlStatusReg|0x000000DC
  gQcomTokenSpaceGuid.PcdSdccHcPwrctlMaskReg|0x000000E0
  gQcomTokenSpaceGuid.PcdSdccHcPwrctlClearReg|0x000000E4
  gQcomTokenSpaceGuid.PcdSdccHcPwrctlCtlReg|0x000000E8
  gQcomTokenSpaceGuid.PcdMmcSdhciDdrCfgVal|0x80040870 # DDR_CFG_DLY_VAL Not using here
  gQcomTokenSpaceGuid.PcdMmcSdc1HdrvPullCtlOffset|0x00002044
  gQcomTokenSpaceGuid.PcdMmcSdc2HdrvPullCtlOffset|0x00002048

  # SoC Drivers Misc
  gQcomTokenSpaceGuid.PcdGicSpiStart|32

  #
  # Make VariableRuntimeDxe work at emulated non-volatile variable mode.
  #
  gEfiMdeModulePkgTokenSpaceGuid.PcdEmuVariableNvModeEnable|TRUE



  ## Default Terminal Type
  ## 0-PCANSI, 1-VT100, 2-VT00+, 3-UTF8, 4-TTYTERM
  gEfiMdePkgTokenSpaceGuid.PcdDefaultTerminalType|4

  # Boot Manager
  gEfiMdeModulePkgTokenSpaceGuid.PcdBootManagerMenuFile|{ 0x21, 0xaa, 0x2c, 0x46, 0x14, 0x76, 0x03, 0x45, 0x83, 0x6e, 0x8a, 0xb6, 0xf4, 0x66, 0x23, 0x31 }
  #gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdShellFile|{ 0x83, 0xA5, 0x04, 0x7C, 0x3E, 0x9E, 0x1C, 0x4F, 0xAD, 0x65, 0xE0, 0x52, 0x68, 0xD0, 0xB4, 0xD1 }
  gEfiMdePkgTokenSpaceGuid.PcdPlatformBootTimeOut|5
  
  # RPM
  gQcomTokenSpaceGuid.PcdApcsAlias0IpcInterrupt|0xF9011000 #Value from LK
  gQcomTokenSpaceGuid.PcdSmdIrq|200

   # SMEM
  gQcomTokenSpaceGuid.PcdMsmSharedBase|0x0D900000 #Value from LK
  gQcomTokenSpaceGuid.PcdMsmSharedSize|0x00100000 #Value from LK

[LibraryClasses]
   VariablePolicyHelperLib|MdeModulePkg/Library/VariablePolicyHelperLib/VariablePolicyHelperLib.inf

[LibraryClasses.common]
  ArmLib|ArmPkg/Library/ArmLib/ArmBaseLib.inf
  ArmMmuLib|ArmPkg/Library/ArmMmuLib/ArmMmuBaseLib.inf
  ArmGenericTimerCounterLib|ArmPkg/Library/ArmGenericTimerPhyCounterLib/ArmGenericTimerPhyCounterLib.inf
  ArmDisassemblerLib|ArmPkg/Library/ArmDisassemblerLib/ArmDisassemblerLib.inf
  ArmGicLib|ArmPkg/Drivers/ArmGic/ArmGicLib.inf
  ArmSmcLib|ArmPkg/Library/ArmSmcLib/ArmSmcLib.inf
  ArmGicArchLib|ArmPkg/Library/ArmGicArchLib/ArmGicArchLib.inf
  ArmPlatformLib|Lumia435Pkg/Library/Lumia435Lib/Lumia435Lib.inf
  ArmPlatformStackLib|ArmPlatformPkg/Library/ArmPlatformStackLib/ArmPlatformStackLib.inf
  BaseLib|MdePkg/Library/BaseLib/BaseLib.inf
  BaseMemoryLib|MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
  BaseSynchronizationLib|MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib.inf
  BootLogoLib|MdeModulePkg/Library/BootLogoLib/BootLogoLib.inf
  BmpSupportLib|MdeModulePkg/Library/BaseBmpSupportLib/BaseBmpSupportLib.inf
  CapsuleLib|MdeModulePkg/Library/DxeCapsuleLibNull/DxeCapsuleLibNull.inf
  CacheMaintenanceLib|ArmPkg/Library/ArmCacheMaintenanceLib/ArmCacheMaintenanceLib.inf
  CompilerIntrinsicsLib|ArmPkg/Library/CompilerIntrinsicsLib/CompilerIntrinsicsLib.inf
  CpuExceptionHandlerLib|ArmPkg/Library/ArmExceptionLib/ArmExceptionLib.inf
  CpuLib|MdePkg/Library/BaseCpuLib/BaseCpuLib.inf
  CustomizedDisplayLib|MdeModulePkg/Library/CustomizedDisplayLib/CustomizedDisplayLib.inf
  DefaultExceptionHandlerLib|ArmPkg/Library/DefaultExceptionHandlerLib/DefaultExceptionHandlerLib.inf
  DebugAgentLib|MdeModulePkg/Library/DebugAgentLibNull/DebugAgentLibNull.inf
  DevicePathLib|MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
  DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
  DebugPrintErrorLevelLib|MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib.inf
  DxeServicesLib|MdePkg/Library/DxeServicesLib/DxeServicesLib.inf
  DxeServicesTableLib|MdePkg/Library/DxeServicesTableLib/DxeServicesTableLib.inf
  ExtractGuidedSectionLib|EmbeddedPkg/Library/PrePiExtractGuidedSectionLib/PrePiExtractGuidedSectionLib.inf
  EfiResetSystemLib|ArmPkg/Library/ArmPsciResetSystemLib/ArmPsciResetSystemLib.inf
  FileExplorerLib|MdeModulePkg/Library/FileExplorerLib/FileExplorerLib.inf
  FdtLib|EmbeddedPkg/Library/FdtLib/FdtLib.inf
  FrameBufferBltLib|MdeModulePkg/Library/FrameBufferBltLib/FrameBufferBltLib.inf
  HobLib|MdePkg/Library/DxeHobLib/DxeHobLib.inf
  HiiLib|MdeModulePkg/Library/UefiHiiLib/UefiHiiLib.inf
  TimerLib|ArmPkg/Library/ArmArchTimerLib/ArmArchTimerLib.inf
  IoLib|MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic.inf
  LzmaDecompressLib|MdeModulePkg/Library/LzmaCustomDecompressLib/LzmaCustomDecompressLib.inf
  NetLib|NetworkPkg/Library/DxeNetLib/DxeNetLib.inf
  DpcLib|NetworkPkg/Library/DxeDpcLib/DxeDpcLib.inf
  UdpIoLib|NetworkPkg/Library/DxeUdpIoLib/DxeUdpIoLib.inf
  IpIoLib|NetworkPkg/Library/DxeIpIoLib/DxeIpIoLib.inf
  PcdLib|MdePkg/Library/DxePcdLib/DxePcdLib.inf
  PeCoffExtraActionLib|MdePkg/Library/BasePeCoffExtraActionLibNull/BasePeCoffExtraActionLibNull.inf
  PeCoffLib|MdePkg/Library/BasePeCoffLib/BasePeCoffLib.inf
  PeCoffGetEntryPointLib|MdePkg/Library/BasePeCoffGetEntryPointLib/BasePeCoffGetEntryPointLib.inf
  PerformanceLib|MdePkg/Library/BasePerformanceLibNull/BasePerformanceLibNull.inf
  PrePiLib|EmbeddedPkg/Library/PrePiLib/PrePiLib.inf
  PrePiHobListPointerLib|ArmPlatformPkg/Library/PrePiHobListPointerLib/PrePiHobListPointerLib.inf
  PrePiMemoryAllocationLib|EmbeddedPkg/Library/PrePiMemoryAllocationLib/PrePiMemoryAllocationLib.inf
  PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf
  SafeIntLib|MdePkg/Library/BaseSafeIntLib/BaseSafeIntLib.inf
  SortLib|MdeModulePkg/Library/UefiSortLib/UefiSortLib.inf
  SynchronizationLib|MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib.inf
  UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
  UefiDecompressLib|MdePkg/Library/BaseUefiDecompressLib/BaseUefiDecompressLib.inf
  UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  UefiRuntimeLib|MdePkg/Library/UefiRuntimeLib/UefiRuntimeLib.inf
  UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  UefiDriverEntryPoint|MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint.inf
  UefiApplicationEntryPoint|MdePkg/Library/UefiApplicationEntryPoint/UefiApplicationEntryPoint.inf
  UefiUsbLib|MdePkg/Library/UefiUsbLib/UefiUsbLib.inf
  UefiBootManagerLib|MdeModulePkg/Library/UefiBootManagerLib/UefiBootManagerLib.inf
  UefiHiiServicesLib|MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib.inf
  TpmMeasurementLib|MdeModulePkg/Library/TpmMeasurementLibNull/TpmMeasurementLibNull.inf
  AuthVariableLib|MdeModulePkg/Library/AuthVariableLibNull/AuthVariableLibNull.inf
  VarCheckLib|MdeModulePkg/Library/VarCheckLib/VarCheckLib.inf

  # Platform Drivers
  SerialPortLib|Lumia435Pkg/Library/FrameBufferSerialPortLib/FrameBufferSerialPortLib.inf
  MemoryInitPeiLib|Lumia435Pkg/Library/MemoryInitPeiLib/PeiMemoryAllocationLib.inf
  PlatformPeiLib|Lumia435Pkg/Library/PlatformPeiLib/PlatformPeiLib.inf
  PlatformBootManagerLib|Lumia435Pkg/Library/PlatformBootManagerLib/PlatformBootManagerLib.inf

  # SoC Drivers
  QTimerLib|Lumia435Pkg/Library/QTimerLib/QTimerLib.inf
  InterruptsLib|Lumia435Pkg/Library/InterruptsLib/InterruptsLib.inf
  MallocLib|Lumia435Pkg/Library/MallocLib/MallocLib.inf
  KeypadDeviceHelperLib|Lumia435Pkg/Library/KeypadDeviceHelperLib/KeypadDeviceHelperLib.inf
  KeypadDeviceImplLib|Lumia435Pkg/Library/KeypadDeviceImplLib/KeypadDeviceImplLib.inf
  DloadUtilLib|Lumia435Pkg/Library/DloadUtilLib/DloadUtilLib.inf
  QcomPlatformClockInitLib|Lumia435Pkg/Library/QcomPlatformClockInitLib/QcomPlatformClockInitLib.inf
  QcomPlatformMmcLib|Lumia435Pkg/Library/PlatformMmcLib/QcomPlatformMmcLib.inf
  QcomPlatformMmcClockOverrideLib|Lumia435Pkg/Library/QcomPlatformMmcClockOverrideLib/QcomPlatformMmcClockOverrideLib.inf
  QcomTargetMmcSdhciLib|Lumia435Pkg/Library/TargetMmcSdhciLib/QcomTargetMmcSdhciLib.inf
  LcmLib|Lumia435Pkg/Library/LcmLib/LcmLib.inf
  MicroLibC|Lumia435Pkg/Library/MicroLibC/MicroLibC.inf
  StrLib|Lumia435Pkg/Library/StrLib/StrLib.inf
  SmemLib|Lumia435Pkg/Driver/SmemDxe/SmemImplLib.inf
  
  # System Reset
  EfiResetSystemLib|ArmPkg/Library/ArmPsciResetSystemLib/ArmPsciResetSystemLib.inf

[LibraryClasses.common.SEC]
  HobLib|EmbeddedPkg/Library/PrePiHobLib/PrePiHobLib.inf
  MemoryAllocationLib|EmbeddedPkg/Library/PrePiMemoryAllocationLib/PrePiMemoryAllocationLib.inf
  PrePiMemoryAllocationLib|EmbeddedPkg/Library/PrePiMemoryAllocationLib/PrePiMemoryAllocationLib.inf
  PrePiHobListPointerLib|ArmPlatformPkg/Library/PrePiHobListPointerLib/PrePiHobListPointerLib.inf
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  RpmLib|Lumia435Pkg/Driver/SmdRpmDxe/RpmLib.inf
  SmemLib|Lumia435Pkg/Driver/SmemDxe/SmemImplLib.inf

  # SoC Drivers
  GpioTlmmLib|Lumia435Pkg/GPLDriver/GpioTlmmDxe/GpioTlmmImplLib.inf
  SpmiLib|Lumia435Pkg/Driver/SpmiDxe/SpmiImplLib.inf
  Pm8x41Lib|Lumia435Pkg/Driver/Pm8x41Dxe/Pm8x41ImplLib.inf
  ClockLib|Lumia435Pkg/Driver/ClockDxe/ClockImplLib.inf
  RpmLib|Lumia435Pkg/Driver/SmdRpmDxe/RpmLib.inf
  SmemLib|Lumia435Pkg/Driver/SmemDxe/SmemImplLib.inf

[LibraryClasses.common.DXE_CORE]
  HobLib|MdePkg/Library/DxeCoreHobLib/DxeCoreHobLib.inf
  MemoryAllocationLib|MdeModulePkg/Library/DxeCoreMemoryAllocationLib/DxeCoreMemoryAllocationLib.inf
  DxeCoreEntryPoint|MdePkg/Library/DxeCoreEntryPoint/DxeCoreEntryPoint.inf
  ReportStatusCodeLib|MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  UefiDecompressLib|MdePkg/Library/BaseUefiDecompressLib/BaseUefiDecompressLib.inf
  PerformanceLib|MdeModulePkg/Library/DxeCorePerformanceLib/DxeCorePerformanceLib.inf

[LibraryClasses.common.DXE_DRIVER]
  ReportStatusCodeLib|MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  SecurityManagementLib|MdeModulePkg/Library/DxeSecurityManagementLib/DxeSecurityManagementLib.inf
  PerformanceLib|MdeModulePkg/Library/DxePerformanceLib/DxePerformanceLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  HiiLib|MdeModulePkg/Library/UefiHiiLib/UefiHiiLib.inf
  UefiHiiServicesLib|MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  # SoC Drivers
  QcomDxeTimerLib|Lumia435Pkg/Library/QTimerLib/QcomQTimerDxeTimerLib.inf
  GpioTlmmLib|Lumia435Pkg/GPLDriver/GpioTlmmDxe/GpioTlmmLib.inf
  SpmiLib|Lumia435Pkg/Driver/SpmiDxe/SpmiLib.inf
  Pm8x41Lib|Lumia435Pkg/Driver/Pm8x41Dxe/Pm8x41Lib.inf
  ClockLib|Lumia435Pkg/Driver/ClockDxe/ClockImplLib.inf


[LibraryClasses.common.UEFI_APPLICATION]
  UefiDecompressLib|MdePkg/Library/BaseUefiDecompressLib/BaseUefiTianoCustomDecompressLib.inf
  PerformanceLib|MdeModulePkg/Library/DxePerformanceLib/DxePerformanceLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  HiiLib|MdeModulePkg/Library/UefiHiiLib/UefiHiiLib.inf
  ShellLib|ShellPkg/Library/UefiShellLib/UefiShellLib.inf
  FileHandleLib|MdePkg/Library/UefiFileHandleLib/UefiFileHandleLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  RpmLib|Lumia435Pkg/Driver/SmdRpmDxe/RpmLib.inf

  # SoC Drivers
  GpioTlmmLib|Lumia435Pkg/GPLDriver/GpioTlmmDxe/GpioTlmmLib.inf
  SpmiLib|Lumia435Pkg/Driver/SpmiDxe/SpmiLib.inf
  Pm8x41Lib|Lumia435Pkg/Driver/Pm8x41Dxe/Pm8x41Lib.inf
  ClockLib|Lumia435Pkg/Driver/ClockDxe/ClockImplLib.inf
  SmemLib|Lumia435Pkg/Driver/SmemDxe/SmemImplLib.inf

[LibraryClasses.common.UEFI_DRIVER]
  ReportStatusCodeLib|MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  UefiDecompressLib|MdePkg/Library/BaseUefiDecompressLib/BaseUefiTianoCustomDecompressLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  PerformanceLib|MdeModulePkg/Library/DxePerformanceLib/DxePerformanceLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  UefiScsiLib|MdePkg/Library/UefiScsiLib/UefiScsiLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  RpmLib|Lumia435Pkg/Driver/SmdRpmDxe/RpmLib.inf

  # SoC Drivers
  GpioTlmmLib|Lumia435Pkg/GPLDriver/GpioTlmmDxe/GpioTlmmLib.inf
  SpmiLib|Lumia435Pkg/Driver/SpmiDxe/SpmiLib.inf
  Pm8x41Lib|Lumia435Pkg/Driver/Pm8x41Dxe/Pm8x41Lib.inf
  ClockLib|Lumia435Pkg/Driver/ClockDxe/ClockImplLib.inf
  SmemLib|Lumia435Pkg/Driver/SmemDxe/SmemImplLib.inf

[LibraryClasses.common.DXE_RUNTIME_DRIVER]
  HobLib|MdePkg/Library/DxeHobLib/DxeHobLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  CapsuleLib|MdeModulePkg/Library/DxeCapsuleLibNull/DxeCapsuleLibNull.inf
  ArmSmcLib|ArmPkg/Library/ArmSmcLib/ArmSmcLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  VariablePolicyLib|MdeModulePkg/Library/VariablePolicyLib/VariablePolicyLibRuntimeDxe.inf
  OrderedCollectionLib|MdePkg/Library/BaseOrderedCollectionRedBlackTreeLib/BaseOrderedCollectionRedBlackTreeLib.inf

[Components.common]
  Lumia435Pkg/PrePi/PrePi.inf


  # DXE
  MdeModulePkg/Core/Dxe/DxeMain.inf {
    <LibraryClasses>
    NULL|MdeModulePkg/Library/DxeCrc32GuidedSectionExtractLib/DxeCrc32GuidedSectionExtractLib.inf
    NULL|MdeModulePkg/Library/DxeCrc32GuidedSectionExtractLib/DxeCrc32GuidedSectionExtractLib.inf
    NULL|MdeModulePkg/Library/LzmaCustomDecompressLib/LzmaCustomDecompressLib.inf
  }

  # PCD Database
  MdeModulePkg/Universal/PCD/Dxe/Pcd.inf {
    <LibraryClasses>
    PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  }

  # Processor Core Services
  ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  EmbeddedPkg/ResetRuntimeDxe/ResetRuntimeDxe.inf
  EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf {
    <LibraryClasses>
	RealTimeClockLib|OvmfPkg/Library/XenRealTimeClockLib/XenRealTimeClockLib.inf
  }

  # SoC Drivers (Cross-referenced from EFIDroid and Ben)
  Lumia435Pkg/Driver/BamDxe/BamDxe.inf
  Lumia435Pkg/GPLDriver/GpioTlmmDxe/GpioTlmmDxe.inf
  Lumia435Pkg/GPLDriver/GpioTlmmInterruptDxe/GpioTlmmInterruptDxe.inf
  Lumia435Pkg/Driver/SpmiDxe/SpmiDxe.inf
  Lumia435Pkg/Driver/Pm8x41Dxe/Pm8x41Dxe.inf
  Lumia435Pkg/Driver/GenericKeypadDeviceDxe/GenericKeypadDeviceDxe.inf
  Lumia435Pkg/Driver/KeypadDxe/KeypadDxe.inf
  Lumia435Pkg/Driver/ClockDxe/ClockDxe.inf
  Lumia435Pkg/Driver/SdhciMMCHSDxe/SdhciMMCHS.inf
  Lumia435Pkg/Driver/SmemDxe/SmemDxe.inf
  Lumia435Pkg/Driver/SmdRpmDxe/RpmDxe.inf


  # Runtime Services
  MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  MdeModulePkg/Universal/MonotonicCounterRuntimeDxe/MonotonicCounterRuntimeDxe.inf
  # TODO: Replace with actual Variable Services
  #MdeModulePkg/Universal/Variable/EmuRuntimeDxe/EmuVariableRuntimeDxe.inf
  MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  # Security Stub
  MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  # Graphics Driver
  Lumia435Pkg/Driver/SimpleFbDxe/SimpleFbDxe.inf

  # BDS
  MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  Lumia435Pkg/Drivers/ConSplitterDxe/ConSplitterDxe.inf
  Lumia435Pkg/Drivers/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  MdeModulePkg/Universal/SmbiosDxe/SmbiosDxe.inf
  MdeModulePkg/Universal/DisplayEngineDxe/DisplayEngineDxe.inf
  MdeModulePkg/Universal/SetupBrowserDxe/SetupBrowserDxe.inf
  MdeModulePkg/Universal/DriverHealthManagerDxe/DriverHealthManagerDxe.inf
  MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
  MdeModulePkg/Application/UiApp/UiApp.inf {
    <LibraryClasses>
      NULL|MdeModulePkg/Library/DeviceManagerUiLib/DeviceManagerUiLib.inf
      NULL|MdeModulePkg/Library/BootManagerUiLib/BootManagerUiLib.inf
      NULL|MdeModulePkg/Library/BootMaintenanceManagerUiLib/BootMaintenanceManagerUiLib.inf
  }
  Lumia435Pkg/Driver/LogoDxe/LogoDxe.inf

  # Disk IO
  MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  FatPkg/EnhancedFatDxe/Fat.inf
  MdeModulePkg/Bus/Scsi/ScsiBusDxe/ScsiBusDxe.inf
  MdeModulePkg/Bus/Scsi/ScsiDiskDxe/ScsiDiskDxe.inf

  # Networking
  NetworkPkg/DpcDxe/DpcDxe.inf
  NetworkPkg/ArpDxe/ArpDxe.inf
  NetworkPkg/Dhcp4Dxe/Dhcp4Dxe.inf
  NetworkPkg/Ip4Dxe/Ip4Dxe.inf
  NetworkPkg/MnpDxe/MnpDxe.inf
  NetworkPkg/VlanConfigDxe/VlanConfigDxe.inf
  NetworkPkg/Mtftp4Dxe/Mtftp4Dxe.inf
  NetworkPkg/TcpDxe/TcpDxe.inf
  NetworkPkg/Udp4Dxe/Udp4Dxe.inf
  
  # ACPI AND SMBIOS
  Lumia435Pkg/Driver/SmBiosTableDxe/SmBiosTableDxe.inf

  # Shell
  ShellPkg/Application/Shell/Shell.inf {
    <LibraryClasses>
      ShellCommandLib|ShellPkg/Library/UefiShellCommandLib/UefiShellCommandLib.inf
      NULL|ShellPkg/Library/UefiShellLevel2CommandsLib/UefiShellLevel2CommandsLib.inf
      NULL|ShellPkg/Library/UefiShellLevel1CommandsLib/UefiShellLevel1CommandsLib.inf
      NULL|ShellPkg/Library/UefiShellLevel3CommandsLib/UefiShellLevel3CommandsLib.inf
      NULL|ShellPkg/Library/UefiShellDriver1CommandsLib/UefiShellDriver1CommandsLib.inf
      NULL|ShellPkg/Library/UefiShellDebug1CommandsLib/UefiShellDebug1CommandsLib.inf
      NULL|ShellPkg/Library/UefiShellInstall1CommandsLib/UefiShellInstall1CommandsLib.inf
      NULL|ShellPkg/Library/UefiShellNetwork1CommandsLib/UefiShellNetwork1CommandsLib.inf
      NULL|ShellPkg/Library/UefiShellAcpiViewCommandLib/UefiShellAcpiViewCommandLib.inf
      HandleParsingLib|ShellPkg/Library/UefiHandleParsingLib/UefiHandleParsingLib.inf
      PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf
      BcfgCommandLib|ShellPkg/Library/UefiShellBcfgCommandLib/UefiShellBcfgCommandLib.inf

    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0xFF
      gEfiShellPkgTokenSpaceGuid.PcdShellLibAutoInitialize|FALSE
      gEfiMdePkgTokenSpaceGuid.PcdUefiLibMaxPrintBufferSize|8000
  }
