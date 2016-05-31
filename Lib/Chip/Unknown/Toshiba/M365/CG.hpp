#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Clock Generator (CG)
    namespace CgSyscr{    ///<System Control Register
        using Addr = Register::Address<0x400f3000,0xffece8f8,0x00000000,unsigned>;
        ///GEAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> gear{}; 
        ///PRCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prck{}; 
        ///FPSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fpsel{}; 
        ///SCOSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> scosel{}; 
        ///FCSTOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fcstop{}; 
    }
    namespace CgOsccr{    ///<Oscillation Control Register
        using Addr = Register::Address<0x400f3004,0x0000fef8,0x00000000,unsigned>;
        ///WUEON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wueon{}; 
        ///WUEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wuef{}; 
        ///PLLON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pllon{}; 
        ///XEN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> xen1{}; 
        ///XEN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xen2{}; 
        ///OSCSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oscsel{}; 
        ///EHOSCSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ehoscsel{}; 
        ///HWUPSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hwupsel{}; 
        ///WUODR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> wuodr{}; 
    }
    namespace CgStbycr{    ///<Standby Control Register
        using Addr = Register::Address<0x400f3008,0xfffefff8,0x00000000,unsigned>;
        ///STBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> stby{}; 
        ///DRVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drve{}; 
    }
    namespace CgPllsel{    ///<PLL Selection Register
        using Addr = Register::Address<0x400f300c,0xffff0000,0x00000000,unsigned>;
        ///PLLSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pllsel{}; 
        ///PLLSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,1),Register::ReadWriteAccess,unsigned> pllset{}; 
    }
    namespace CgUsbctl{    ///<USB Clock and Reset Control register
        using Addr = Register::Address<0x400f3038,0xfffffcff,0x00000000,unsigned>;
        ///USBCLKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> usbclken{}; 
        ///USBCLKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbclksel{}; 
    }
    namespace CgProtect{    ///<Protect Register
        using Addr = Register::Address<0x400f303c,0xffffff00,0x00000000,unsigned>;
        ///CGPROTECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cgprotect{}; 
    }
    namespace CgImcga{    ///<CG Interrupt Mode Control Register A
        using Addr = Register::Address<0x400f3040,0x82828282,0x00000000,unsigned>;
        ///INT0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int0en{}; 
        ///EMST0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst0{}; 
        ///EMCG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> emcg0{}; 
        ///INT1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> int1en{}; 
        ///EMST1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst1{}; 
        ///EMCG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> emcg1{}; 
        ///INT2EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> int2en{}; 
        ///EMST2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst2{}; 
        ///EMCG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> emcg2{}; 
        ///INT3EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> int3en{}; 
        ///EMST3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst3{}; 
        ///EMCG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> emcg3{}; 
    }
    namespace CgImcgb{    ///<CG Interrupt Mode Control Register B
        using Addr = Register::Address<0x400f3044,0x82828282,0x00000000,unsigned>;
        ///INT4EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int4en{}; 
        ///EMST4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst4{}; 
        ///EMCG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> emcg4{}; 
        ///INT5EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> int5en{}; 
        ///EMST5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst5{}; 
        ///EMCG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> emcg5{}; 
        ///INT6EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> int6en{}; 
        ///EMST6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst6{}; 
        ///EMCG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> emcg6{}; 
        ///INT7EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> int7en{}; 
        ///EMST7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst7{}; 
        ///EMCG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> emcg7{}; 
    }
    namespace CgImcgc{    ///<CG Interrupt Mode Control Register C
        using Addr = Register::Address<0x400f3048,0x82828282,0x00000000,unsigned>;
        ///INT8EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int8en{}; 
        ///EMST8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst8{}; 
        ///EMCG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> emcg8{}; 
        ///INT9EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> int9en{}; 
        ///EMST9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emst9{}; 
        ///EMCG9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> emcg9{}; 
        ///INTAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> intaen{}; 
        ///EMSTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emsta{}; 
        ///EMCGA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> emcga{}; 
        ///INTBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> intben{}; 
        ///EMSTB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emstb{}; 
        ///EMCGB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> emcgb{}; 
    }
    namespace CgIcrcg{    ///<CG Interrupt Request Clear Register
        using Addr = Register::Address<0x400f3060,0xffffffe0,0x00000000,unsigned>;
        ///ICRCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icrcg{}; 
    }
    namespace CgRstflg{    ///<Reset Flag Register
        using Addr = Register::Address<0x400f3064,0xffffffe2,0x00000000,unsigned>;
        ///PINRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///WDTRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtrstf{}; 
        ///STOP2RSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop2rstf{}; 
        ///DBGRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgrstf{}; 
    }
    namespace CgNmiflg{    ///<NMI Flag Register
        using Addr = Register::Address<0x400f3068,0xfffffffc,0x00000000,unsigned>;
        ///NMIFLG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmiflg0{}; 
        ///NMIFLG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmiflg1{}; 
    }
}
