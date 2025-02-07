[PcdsFixedAtBuild.common]
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1080
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|2400

# Smbios Info
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemBrand|"Redmi"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemModel|"K40 Pro"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"haydn"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"MP"

gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdABLProduct|"Redmi K40 Pro"

# Display Caller
# gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdDisplayCallerExitDisableDisplay|FALSE
# gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdDisplayCallerStallBeforeEnable|2000000

[PcdsDynamicDefault.common]
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1080
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|2400
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1080
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|2400
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|99  # = 1080 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|170    # = 2400 / EFI_GLYPH_HEIGHT(19)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|99       # = 1080 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|170         # = 2400 / EFI_GLYPH_HEIGHT(19)
