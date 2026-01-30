#include <iostream>
#include "Core/Log.h"

int main() {
	PinTr::Log::Init();
	PT_CORE_INFO("Core logger initialized.{0}",3);
	PT_CORE_TRACE("Core logger initialized.{0}","hello");
	PT_CORE_WARN("Core logger initialized.{0}",5.4);
}