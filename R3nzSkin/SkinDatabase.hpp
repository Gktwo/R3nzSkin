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
		u8"����", u8"Ӿ���Ŷ�",
		u8"Դ�ƻ�", u8"��ѩ��",
		u8"�����Ĵ�ͷ", u8"��֮�ػ���",
		u8"����", u8"��ѩ��2",
		u8"�µ���", u8"è����ս", u8"˫��֮ս"
	};

	std::vector<const char*> turret_skins{
		u8"Ĭ�Ϸ�����", u8"Ĭ�Ϸ�����2",
		u8"��ѩ�ڷ�����1", u8"��ѩ�ڷ�����2",
		u8"Ť�����ַ�����1", u8"Ť�����ַ�����2",
		u8"���޻���������1", u8"���޻���������2",
		u8"�����ɶ�",
		u8"��������",
		u8"˫��֮ս1", u8"˫��֮ս2",
		u8"����֮��1", u8"����֮��2",
		u8"������Ԩ1", u8"������Ԩ2"
	};

	std::vector<jungle_mob_skin_info> jungle_mobs_skins{
		{
			u8"��ʲ�о�",
			{ FNV("SRU_Baron") },
			{ u8"����", u8"��ѩ��", u8"�ھ�����", u8"����Ƥ��", u8"MSIƤ��", u8"�µ���", u8"�ھ�����2", u8"�ư�ģʽ" }
		},
		{
			u8"��buff",
			{ FNV("SRU_Blue") },
			{ u8"����", u8"��ɫ", u8"Ӿ���ɶ�", u8"�ư�ģʽ" }
		},
		{
			u8"��buff",
			{ FNV("SRU_Red") },
			{ u8"����", u8"��ɫ",u8"Ӿ���ɶ�", u8"�ư�ģʽ" }
		},
		{
			u8"Ѹ��з",
			{ FNV("Sru_Crab") },
			{ u8"����", u8"��ʥ�ڰ�", u8"��ʥ�ں�", u8"�ư�ģʽ" }
		},
		{
			u8"ʯ�׳�",
			{ FNV("SRU_Krug"), FNV("SRU_KrugMini"), FNV("SRU_KrugMiniMini") },
			{ u8"��ɫ", u8"��ɫ" }
		},
		{
			u8"6ֻ��",
			{ FNV("SRU_Razorbeak"), FNV("SRU_RazorbeakMini") },
			{ u8"����", u8"���˽�С��" }
		}
	};

	std::vector<specialSkin> specialSkins{
		{ FNV("Katarina"), 29, 36, { u8"ذ�� 1", u8"ذ�� 2", u8"ذ�� 3", u8"ذ�� 4", u8"ذ�� 5", u8"ذ�� 6" }},
		{ FNV("Renekton"), 26, 32, { u8"��ͷ��", u8"��ͷ��", "�ռ���̬", "������̬" } },
		{ FNV("MissFortune"), 16, 16, { u8"ѪɫŮ��", u8"�ܹ�ʱ��", u8"�ʼ���װ", u8"�ǳ���Ⱥ" } },
		{ FNV("Ezreal"), 5, 5, { u8"����̬", u8"����̬", u8"����̬" } }
	};
};
