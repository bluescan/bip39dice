#pragma once
#define set(verStr) namespace Version { extern int Major, Minor, Revision; struct Parser { Parser(const char*);  }; static Parser parser(#verStr); }

set("DICE2BIP39_VERSION" "0.9.5")

#undef set
