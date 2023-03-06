#pragma once

#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE, UNICODE_MODE_WINDOWS, UNICODE_MODE_LINUX, UNICODE_MODE_MACOS

enum unicode_names {
	_AGRV,  // à
	_SAGRV, // À
	_EGRV,  // è
	_SEGRV, // È
	_UGRV,  // ù
	_SUGRV, // Ù
	_EACU,  // é
	_SEACU, // É
	_ACIR,  // â
	_SACIR, // Â
	_ECIR,  // ê
	_SECIR, // Ê
	_ICIR,  // î
	_SICIR, // Î
	_OCIR,  // ô
	_SOCIR, // Ô
	_UCIR,  // û
	_SUCIR, // Û
	_AE,    // æ
	_SAE,   // Æ
	_OE,    // œ
	_SOE,   // Œ
	_CCED,  // ç
	_SCCED, // Ç
	_EURO   // €
};

const uint32_t PROGMEM unicode_map[] = {
	[_AGRV]  = 0x00E0,
	[_SAGRV] = 0x00C0,
	[_EGRV]  = 0x00E8,
	[_SEGRV] = 0x00C8,
	[_UGRV]  = 0x00F9,
	[_SUGRV] = 0x00D9,
	[_EACU]  = 0x00E9,
	[_SEACU] = 0x00C9,
	[_ACIR]  = 0x00E2,
	[_SACIR] = 0x00C2,
	[_ECIR]  = 0x00EA,
	[_SECIR] = 0x00CA,
	[_ICIR]  = 0x00EE,
	[_SICIR] = 0x00CE,
	[_OCIR]  = 0x00F4,
	[_SOCIR] = 0x00D4,
	[_UCIR]  = 0x00FB,
	[_SUCIR] = 0x00DB,
	[_AE]    = 0x00E6,
	[_SAE]   = 0x00C6,
	[_OE]    = 0x0153,
	[_SOE]   = 0x0152,
	[_CCED]  = 0x00E7,
	[_SCCED] = 0x00C7,
	[_EURO]  = 0x20AC
};

#define AGRV XP(_AGRV, _SAGRV)
#define EGRV XP(_EGRV, _SEGRV)
#define UGRV XP(_UGRV, _SUGRV)
#define EACU XP(_EACU, _SEACU)
#define ACIR XP(_ACIR, _SACIR)
#define ECIR XP(_ECIR, _SECIR)
#define ICIR XP(_ICIR, _SICIR)
#define OCIR XP(_OCIR, _SOCIR)
#define UCIR XP(_UCIR, _SUCIR)
#define AE XP(_AE, _SAE)
#define OE XP(_OE, _SOE)
#define CCED XP(_CCED, _SCCED)
#define EURO X(_EURO)
