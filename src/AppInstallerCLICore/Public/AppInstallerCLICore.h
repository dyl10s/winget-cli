// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once

#define CLICORE_ERROR_FACILITY 0x8A150000

#define CLICORE_ERROR_INVALID_CL_ARGUMENTS 0x8A150001
#define CLICORE_ERROR_INTERNAL_ERROR       0x8A150002

int CLICoreMain(int argc, wchar_t const** argv);
