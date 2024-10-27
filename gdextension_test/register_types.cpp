#include "register_types.h"
#include "gdextension_test.h"

void initialize_gdextension_test_module(ModuleInitializationLevel p_level) {
	if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE) {
		GDREGISTER_CLASS(GDExtensionTestCase);
	}
}

void uninitialize_gdextension_test_module(ModuleInitializationLevel p_level) {}
