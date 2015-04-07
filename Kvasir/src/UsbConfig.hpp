#pragma once
#include "MPLUtility.hpp"

namespace Kvasir{
namespace Usb{
	namespace Detail {
		struct DoNothingAction{
			template<typename T>
			static void action(T){};
		};
	}
struct DefaultConfig{
	static constexpr auto devices = MPL::list();
	static constexpr int vid = 0x0000;
	static constexpr int pid = 0x0000;

};

namespace Cdc{
	struct DefaultConfig{
		static constexpr Detail::DoNothingAction onInput{};
		static constexpr Detail::DoNothingAction onOutputDone{};
		//todo add other default config stuff
	};
}
namespace Hid{
	struct DefaultConfig{
		static constexpr Detail::DoNothingAction onInput{};
		static constexpr Detail::DoNothingAction onOutputDone{};
		//todo add other default config stuff
	};
}
}
}
