#pragma once

#include <cstdint>
#include <map>
#include <utility>
#include <vector>

#include "fnv_hash.hpp"
 
class SkinDatabase {
public:
	class skin_info {
	public:
		const char* model_name;
		std::string skin_name;
		std::int32_t skin_id;
	};

	class jungle_mob_skin_info {
	public:
		const char* name;
		std::vector<std::uint64_t> name_hashes;
		std::vector<const char*> skins;
	};

	class specialSkin {
	public:
		std::uint64_t champHash;
		std::int32_t skinIdStart;
		std::int32_t skinIdEnd;
		std::vector<const char*> gears;
	};

	void load() noexcept;

	std::map<std::uint64_t, std::vector<skin_info>> champions_skins;
	std::vector<std::pair<std::uint32_t, const char*>> wards_skins;
	
	std::vector<const char*> minions_skins{
		u8"经典", u8"泳池排队",
		u8"源计划", u8"冰雪节",
		u8"德莱文大头", u8"星之守护者",
		u8"电玩", u8"冰雪节2",
		u8"奥德赛", u8"猫狗大战", u8"双城之战"
	};

	std::vector<const char*> turret_skins{
		u8"默认防御塔", u8"默认防御塔2",
		u8"冰雪节防御塔1", u8"冰雪节防御塔2",
		u8"扭曲丛林防御塔1", u8"扭曲丛林防御塔2",
		u8"无限火力防御塔1", u8"无限火力防御塔2",
		u8"电玩派对",
		u8"极限闪击",
		u8"双城之战1", u8"双城之战2",
		u8"屠夫之桥1", u8"屠夫之桥2",
		u8"嚎哭深渊1", u8"嚎哭深渊2"
	};

	std::vector<jungle_mob_skin_info> jungle_mobs_skins{
		{
			u8"纳什男爵",
			{ FNV("SRU_Baron") },
			{ u8"经典", u8"冰雪节", u8"冠军杯赛", u8"新年皮肤", u8"MSI皮肤", u8"奥德赛", u8"冠军杯赛2", u8"破败模式" }
		},
		{
			u8"蓝buff",
			{ FNV("SRU_Blue") },
			{ u8"经典", u8"暗色", u8"泳池派对", u8"破败模式" }
		},
		{
			u8"红buff",
			{ FNV("SRU_Red") },
			{ u8"经典", u8"暗色",u8"泳池派对", u8"破败模式" }
		},
		{
			u8"迅捷蟹",
			{ FNV("Sru_Crab") },
			{ u8"经典", u8"万圣节白", u8"万圣节黑", u8"破败模式" }
		},
		{
			u8"石甲虫",
			{ FNV("SRU_Krug"), FNV("SRU_KrugMini"), FNV("SRU_KrugMiniMini") },
			{ u8"黄色", u8"蓝色" }
		},
		{
			u8"6只因",
			{ FNV("SRU_Razorbeak"), FNV("SRU_RazorbeakMini") },
			{ u8"经典", u8"愚人节小鸡" }
		}
	};

	std::vector<specialSkin> specialSkins{
		{ FNV("Katarina"), 29, 36, { u8"匕首 1", u8"匕首 2", u8"匕首 3", u8"匕首 4", u8"匕首 5", u8"匕首 6" }},
		{ FNV("Renekton"), 26, 32, { u8"无头盔", u8"有头盔", "终极形态", "极限形态" } },
		{ FNV("MissFortune"), 16, 16, { u8"血色女王", u8"总攻时刻", u8"皇家武装", u8"星辰虫群" } },
		{ FNV("Ezreal"), 5, 5, { u8"初形态", u8"中形态", u8"高形态" } }
	};
};
