#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Pbgp4Pb{    ///<Output Latch
        using Addr = Register::Address<0x4002a320,0xffff0000,0x00000000,unsigned>;
        ///Output Latch. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace Pbgp4Pbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a330,0xffff0000,0x00000000,unsigned>;
        ///Pin Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbpin{}; 
    }
    namespace Pbgp4Pbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a340,0xffff0000,0x00000000,unsigned>;
        ///Mode Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
    }
    namespace Pbgp4Pboutmd{    ///<Output Mode
        using Addr = Register::Address<0x4002a350,0xffff0000,0x00000000,unsigned>;
        ///Output Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pboutmd{}; 
    }
    namespace Pbgp4Pbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a360,0xfffe0000,0x00000000,unsigned>;
        ///Drive Strength. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbdrv{}; 
        ///Port Bank Weak Pull-up Enable. 
        enum class PbpuenVal {
            disabled=0x00000000,     ///<Disable weak pull-ups for this port.
            enabled=0x00000001,     ///<Enable weak pull-ups for this port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PbpuenVal> pbpuen{}; 
        namespace PbpuenValC{
            constexpr Register::FieldValue<decltype(pbpuen)::Type,PbpuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbpuen)::Type,PbpuenVal::enabled> enabled{};
        }
    }
    namespace Pbgp4Pm{    ///<Port Match Value
        using Addr = Register::Address<0x4002a370,0xffff0000,0x00000000,unsigned>;
        ///Port Match Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Pbgp4Pmen{    ///<Port Match Enable
        using Addr = Register::Address<0x4002a380,0xffff0000,0x00000000,unsigned>;
        ///Port Match Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pmen{}; 
    }
}
