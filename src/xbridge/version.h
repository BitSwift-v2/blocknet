#ifndef VERSION
#define VERSION

#define XBRIDGE_VERSION_MAJOR 0
#define XBRIDGE_VERSION_MINOR 65
#define XBRIDGE_VERSION_DESCR "CLTV-secp256k1"

#define MAKE_VERSION(major,minor) (( major << 16 ) + minor )
#define XBRIDGE_VERSION MAKE_VERSION(XBRIDGE_VERSION_MAJOR, XBRIDGE_VERSION_MINOR)

#define XBRIDGE_PROTOCOL_VERSION 0xff00000e

#endif // VERSION

