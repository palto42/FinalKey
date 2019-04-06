#include "KeyMaps.h"

#include "keymap-us.inc"
#include "keymap-dk.inc"
#include "keymap-fr.inc"
#include "keymap-de.inc"
#include "keymap-se.inc"
#include "keymap-be.inc"
#include "keymap-ee.inc"


void KeyMaps::setKbMap(uint8_t mapNum)
{
  ptxt("[Keyboard: ");
  switch(mapNum)
  {
#ifdef KBMAP_USPC_PTR
    case KBMAP_USPC:
      Keyboard.begin( (uint8_t*)(KBMAP_USPC_PTR) );
      ptxtln("USPC]");
    break;
#endif

#ifdef KBMAP_USMAC_PTR
    case KBMAP_USMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_USMAC_PTR) );
      ptxtln("USMAC]");
    break;
#endif

#ifdef KBMAP_DKPC_PTR
    case KBMAP_DKPC:
      Keyboard.begin( (uint8_t*)(KBMAP_DKPC_PTR) );
      ptxtln("DKPC]");
    break;
#endif
#ifdef KBMAP_DKMAC_PTR
    case KBMAP_DKMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_DKMAC_PTR) );
      ptxtln("DKMAC]");
    break;
#endif

#ifdef KBMAP_EEPC_PTR
    case KBMAP_EEPC:
      Keyboard.begin( (uint8_t*)(KBMAP_EEPC_PTR) );
      ptxtln("EEPC]");
    break;
#endif
#ifdef KBMAP_EEMAC_PTR
    case KBMAP_EEMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_EEMAC_PTR) );
      ptxtln("EEMAC]");
    break;
#endif

#ifdef KBMAP_FRPC_PTR
    case KBMAP_FRPC:
      Keyboard.begin( (uint8_t*)(KBMAP_FRPC_PTR) );
      ptxtln("FRPC]");
    break;
#endif
#ifdef KBMAP_FRMAC_PTR
    case KBMAP_FRMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_FRMAC_PTR) );
      ptxtln("FRMAC]");
    break;
#endif
    
#ifdef KBMAP_DEPC_PTR
    case KBMAP_DEPC:
      Keyboard.begin( (uint8_t*)(KBMAP_DEPC_PTR) );
      ptxtln("DEPC]");
    break;
#endif
#ifdef KBMAP_DEMAC_PTR
    case KBMAP_DEMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_DEMAC_PTR) );
      ptxtln("DEMAC]");
    break;
#endif
#ifdef KBMAP_SEPC_PTR
    case KBMAP_SEPC:
      Keyboard.begin( (uint8_t*)(KBMAP_SEPC_PTR) );
      ptxtln("SE-PC]");
    break;
#endif
#ifdef KBMAP_SEMAC_PTR
    case KBMAP_SEMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_SEMAC_PTR) );
      ptxtln("SEMAC]");
    break;
#endif
#ifdef KBMAP_BEPC_PTR
    case KBMAP_BEPC:
      Keyboard.begin( (uint8_t*)(KBMAP_BEPC_PTR) );
      ptxtln("BE-PC]");
    break;
#endif
#ifdef KBMAP_BEMAC_PTR
    case KBMAP_BEMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_BEMAC_PTR) );
      ptxtln("BEMAC]");
    break;
#endif
    default:
      ptxtln("ERROR]");
    break;
  }

}

void KeyMaps::setKbMapQ(uint8_t mapNum)
{
  switch(mapNum)
  {
#ifdef KBMAP_USPC_PTR
    case KBMAP_USPC:
      Keyboard.begin( (uint8_t*)(KBMAP_USPC_PTR) );
    break;
#endif

#ifdef KBMAP_USMAC_PTR
    case KBMAP_USMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_USMAC_PTR) );
    break;
#endif

#ifdef KBMAP_DKPC_PTR
    case KBMAP_DKPC:
      Keyboard.begin( (uint8_t*)(KBMAP_DKPC_PTR) );
    break;
#endif
#ifdef KBMAP_DKMAC_PTR
    case KBMAP_DKMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_DKMAC_PTR) );
    break;
#endif

#ifdef KBMAP_EEPC_PTR
    case KBMAP_EEPC:
      Keyboard.begin( (uint8_t*)(KBMAP_EEPC_PTR) );
    break;
#endif
#ifdef KBMAP_EEMAC_PTR
    case KBMAP_EEMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_EEMAC_PTR) );
    break;
#endif

#ifdef KBMAP_FRPC_PTR
    case KBMAP_FRPC:
      Keyboard.begin( (uint8_t*)(KBMAP_FRPC_PTR) );
    break;
#endif
#ifdef KBMAP_FRMAC_PTR
    case KBMAP_FRMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_FRMAC_PTR) );
    break;
#endif
    
#ifdef KBMAP_DEPC_PTR
    case KBMAP_DEPC:
      Keyboard.begin( (uint8_t*)(KBMAP_DEPC_PTR) );
    break;
#endif
#ifdef KBMAP_DEMAC_PTR
    case KBMAP_DEMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_DEMAC_PTR) );
    break;
#endif
#ifdef KBMAP_SEPC_PTR
    case KBMAP_SEPC:
      Keyboard.begin( (uint8_t*)(KBMAP_SEPC_PTR) );
    break;
#endif
#ifdef KBMAP_SEMAC_PTR
    case KBMAP_SEMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_SEMAC_PTR) );
    break;
#endif
#ifdef KBMAP_BEPC_PTR
    case KBMAP_BEPC:
      Keyboard.begin( (uint8_t*)(KBMAP_BEPC_PTR) );
    break;
#endif
#ifdef KBMAP_BEMAC_PTR
    case KBMAP_BEMAC:
      Keyboard.begin( (uint8_t*)(KBMAP_BEMAC_PTR) );
    break;
#endif
    default:
    break;
  }

}

KeyMaps kbmaps = KeyMaps();
