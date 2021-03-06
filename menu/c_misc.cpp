#include "c_misc.h"
#include "framework/c_group_box.h"
#include "framework/c_float_select.h"
#include "../security/string_obfuscation.h"
#include "../utils/c_config.h"
#include "framework/c_hotkey_select.h"
#include "framework/c_checkbox.h"

c_misc::c_misc(const c_vector2d size) : c_flow_layout(size, c_vector2d(12, 12))
{
	add_child(std::make_shared<c_group_box>(__("Gameplay"), std::initializer_list<std::shared_ptr<c_drawable>> {
		make_child(c_float_select, __("Thirdperson Dist"), config.misc.thirdperson_dist, 150.f, 0.f, 1.f),
		make_child(c_hotkey_select, __("Thirdperson Switch"), config.misc.thirdperson_switch),
		make_child(c_select, __("Buy Bot"), std::vector<std::pair<std::string, char>> {
			__("Off"),
			__("Auto Snipe"),
			__("Scout"),
			__("AWP")
		}, config.misc.buy_bot),
		make_child(c_checkbox, __("Engine Radar"), config.misc.engine_radar),
		make_child(c_checkbox, __("No Scope"), config.misc.no_scope),
		make_child(c_checkbox, __("No Smoke"), config.misc.no_smoke),
		make_child(c_checkbox, __("No Flash"), config.misc.no_flash),
		make_child(c_checkbox, __("No Fog"), config.misc.no_fog),
		make_child(c_checkbox, __("Clan tag"), config.misc.clan_tag),
		make_child(c_float_select, __("Aspect Ratio"), config.misc.aspect_ratio, 100.f, 10.f, 1.f)
	}));
	add_child(std::make_shared<c_group_box>(__("Fakelag settings"), std::initializer_list<std::shared_ptr<c_drawable>> {
//		make_child(c_checkbox, __("Enable fake-lags"), config.misc.fakelag_settings.enabled),
		make_child(c_checkbox, __("Automatic fake-lags"), config.misc.fakelag_settings.fake_lag_automatic),
		make_child(c_float_select, __("Standing"), config.misc.fakelag_settings.fake_lag_standing, 14.f, 2.f, 1.f),
		make_child(c_float_select, __("Moving"), config.misc.fakelag_settings.fake_lag_moving, 14.f, 2.f, 1.f),
//		make_child(c_float_select, __("Air"), config.misc.fakelag_settings.fake_lag_air, 14.f, 1.f, 1.f),
		make_child(c_float_select, __("Slowwalking"), config.misc.fakelag_settings.fake_lag_slowwalk, 14.f, 0.f, 1.f),
		make_child(c_checkbox, __("Peek delay"), config.misc.fakelag_settings.fake_lag_on_peek_delay),
		make_child(c_checkbox, __("Disable on shot"), config.misc.fakelag_settings.disable_on_shooting),
		make_child(c_checkbox, __("Disable on revolver"), config.misc.fakelag_settings.disable_on_revolver),
		make_child(c_checkbox, __("Disable on taser"), config.misc.fakelag_settings.disable_on_tazer),
		make_child(c_checkbox, __("Disable on grenade"), config.misc.fakelag_settings.disable_on_grenade),
		make_child(c_checkbox, __("Disable on knife"), config.misc.fakelag_settings.disable_on_knife)
	}));
	add_child(std::make_shared<c_group_box>(__("Visuals"), std::initializer_list<std::shared_ptr<c_drawable>> {
		make_child(c_checkbox, __("Show indicators"), config.misc.indicators),
		make_child(c_checkbox, __("Anti-aim arrows"), config.misc.arrows),
		make_child(c_float_select, __("World FOV"), config.misc.fov),
		make_child(c_float_select, __("Viewmodel FOV"), config.misc.fov_view),
	}));
	//add_child(std::make_shared<c_group_box>(__("Other"), std::initializer_list<std::shared_ptr<c_drawable>> {
//		make_child(c_float_select, __("Ping Spike"), config.misc.spike_ping, 1000.f, 0.f, 5.f),
//		make_child(c_hotkey_select, __("Ping Switch"), config.misc.ping_switch),
/*		make_child(c_select, __("Radio channel"), std::vector<std::pair<std::string, char>> {
			__("Off"),
			__("Rock"),
			__("Techno"),
			__("HvH"),
			__("Teatime"),
			__("Clubtime"),
			__("Housetime"),
			__("Iluvradio"),
			__("8bit")
		}, config.misc.radio_channel),*/
//		make_child(c_float_select, __("Radio volume"), config.misc.radio_volume, 100.f, 0.f, 1.f),
//		make_child(c_hotkey_select, __("Mute radio"), config.misc.radio_mute),
	//	make_child(c_float_select, __("Aspect Ratio"), config.misc.aspect_ratio, 100.f, 10.f, 1.f),
	//	make_child(c_checkbox, __("Clan tag"), config.misc.clan_tag)
	//}));
}
