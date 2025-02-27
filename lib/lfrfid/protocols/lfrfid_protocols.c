#include "lfrfid_protocols.h"
#include "protocol_em4100.h"
#include "protocol_h10301.h"
#include "protocol_indala26.h"
#include "protocol_io_prox_xsf.h"
#include "protocol_awid.h"
#include "protocol_fdx_a.h"
#include "protocol_fdx_b.h"
#include "protocol_hid_generic.h"
#include "protocol_hid_ex_generic.h"

const ProtocolBase* lfrfid_protocols[] = {
    [LFRFIDProtocolEM4100] = &protocol_em4100,
    [LFRFIDProtocolH10301] = &protocol_h10301,
    [LFRFIDProtocolIndala26] = &protocol_indala26,
    [LFRFIDProtocolIOProxXSF] = &protocol_io_prox_xsf,
    [LFRFIDProtocolAwid] = &protocol_awid,
    [LFRFIDProtocolFDXA] = &protocol_fdx_a,
    [LFRFIDProtocolFDXB] = &protocol_fdx_b,
    [LFRFIDProtocolHidGeneric] = &protocol_hid_generic,
    [LFRFIDProtocolHidExGeneric] = &protocol_hid_ex_generic,
};