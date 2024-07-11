#pragma once

#include "eficon.h"
#include "efidef.h"

/* ---- Table Header ---- */
typedef struct {
  UINT64 Signature;
  UINT32 Revision;
  UINT32 HeaderSize;
  UINT32 CRC32;
  UINT32 Reserved;
} EFI_TABLE_HEADER;

/* ---- Industry Standard Configuration Tables ---- */
#define EFI_ACPI_20_TABLE_GUID                                                 \
  {                                                                            \
    0x8868e871, 0xe4f1, 0x11d3, {                                              \
      0xbc, 0x22, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81                           \
    }                                                                          \
  }

#define ACPI_TABLE_GUID                                                        \
  {                                                                            \
    0xeb9d2d30, 0x2d88, 0x11d3, {                                              \
      0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d                           \
    }                                                                          \
  }

#define SAL_SYSTEM_TABLE_GUID                                                  \
  {                                                                            \
    0xeb9d2d32, 0x2d88, 0x11d3, {                                              \
      0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d                           \
    }                                                                          \
  }

#define SMBIOS_TABLE_GUID                                                      \
  {                                                                            \
    0xeb9d2d31, 0x2d88, 0x11d3, {                                              \
      0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d                           \
    }                                                                          \
  }

#define SMBIOS3_TABLE_GUID                                                     \
  {0xf2fd1544, 0x9794, 0x4a2c,\
   {0x99,0x2e,0xe5,0xbb,0xcf,0x20,0xe3,0x94})

#define MPS_TABLE_GUID                                                         \
  {                                                                            \
    0xeb9d2d2f, 0x2d88, 0x11d3, {                                              \
      0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d                           \
    }                                                                          \
  }
//
// ACPI 2.0 or newer tables should use EFI_ACPI_TABLE_GUID
//
#define EFI_ACPI_TABLE_GUID                                                    \
  {                                                                            \
    0x8868e871, 0xe4f1, 0x11d3, {                                              \
      0xbc, 0x22, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81                           \
    }                                                                          \
  }

//#define EFI_ACPI_20_TABLE_GUID EFI_ACPI_TABLE_GUID

#define ACPI_TABLE_GUID                                                        \
  {                                                                            \
    0xeb9d2d30, 0x2d88, 0x11d3, {                                              \
      0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d                           \
    }                                                                          \
  }

#define ACPI_10_TABLE_GUID ACPI_TABLE_GUID *

/* ---- JSON Configuration Tables ---- */
#define EFI_JSON_CONFIG_DATA_TABLE_GUID                                        \
  {                                                                            \
    0x87367f87, 0x1119, 0x41ce, {                                              \
      0xaa, 0xec, 0x8b, 0xe0, 0x11, 0x1f, 0x55, 0x8a                           \
    }                                                                          \
  }

#define EFI_JSON_CAPSULE_DATA_TABLE_GUID                                       \
  {                                                                            \
    0x35e7a725, 0x8dd2, 0x4cac, {                                              \
      0x80, 0x11, 0x33, 0xcd, 0xa8, 0x10, 0x90, 0x56                           \
    }                                                                          \
  }

#define EFI_JSON_CAPSULE_RESULT_TABLE_GUID                                     \
  {                                                                            \
    0xdbc461c3, 0xb3de, 0x422a, {                                              \
      0xb9, 0xb4, 0x98, 0x86, 0xfd, 0x49, 0xa1, 0xe5                           \
    }                                                                          \
  }

/* ---- Devicetree Tables ---- */
#define EFI_DTB_TABLE_GUID                                                     \
  {                                                                            \
    0xb1b621d5, 0xf19c, 0x41a5, {                                              \
      0x83, 0x0b, 0xd9, 0x15, 0x2c, 0x69, 0xaa, 0xe0                           \
    }                                                                          \
  }

/* ---- Configuration table ---- */
typedef struct {
  EFI_GUID VendorGuid;
  VOID *VendorTable;
} EFI_CONFIGURATION_TABLE;
