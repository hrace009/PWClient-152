#ifndef _ELEMENTDATAMAN_H_
#define _ELEMENTDATAMAN_H_

#include <stdlib.h>
#include <stdio.h>
#include <vector.h>
#include <hashmap.h>

#ifdef LINUX
#include "exptypes.h"
#else
#include "../celementdata/exptypes.h"

#endif	//LINUX


extern const char * DataTypeName[DT_MAX+1];

class elementdataman
{
public:
	elementdataman();
	~elementdataman();

	//////////////////////////////////////////////////////////////////////////
	
	void add_structure(unsigned int id, EQUIPMENT_ADDON & data);
	void add_structure(unsigned int id, WEAPON_MAJOR_TYPE & data);
	void add_structure(unsigned int id, WEAPON_SUB_TYPE & data);
	void add_structure(unsigned int id, WEAPON_ESSENCE & data);
	void add_structure(unsigned int id, ARMOR_MAJOR_TYPE & data);
	
	void add_structure(unsigned int id, ARMOR_SUB_TYPE & data);
	void add_structure(unsigned int id, ARMOR_ESSENCE & data);
	void add_structure(unsigned int id, DECORATION_MAJOR_TYPE & data);
	void add_structure(unsigned int id, DECORATION_SUB_TYPE & data);
	void add_structure(unsigned int id, DECORATION_ESSENCE & data);

	void add_structure(unsigned int id, MEDICINE_MAJOR_TYPE & data);
	void add_structure(unsigned int id, MEDICINE_SUB_TYPE & data);
	void add_structure(unsigned int id, MEDICINE_ESSENCE & data);
	void add_structure(unsigned int id, MATERIAL_MAJOR_TYPE & data);
	void add_structure(unsigned int id, MATERIAL_SUB_TYPE & data);

	void add_structure(unsigned int id, MATERIAL_ESSENCE & data);
	void add_structure(unsigned int id, DAMAGERUNE_SUB_TYPE & data);
	void add_structure(unsigned int id, DAMAGERUNE_ESSENCE & data);
	void add_structure(unsigned int id, ARMORRUNE_SUB_TYPE & data);	
	void add_structure(unsigned int id, ARMORRUNE_ESSENCE & data);

	void add_structure(unsigned int id, SKILLTOME_SUB_TYPE & data);
	void add_structure(unsigned int id, SKILLTOME_ESSENCE & data);	
	void add_structure(unsigned int id, FLYSWORD_ESSENCE & data);
	void add_structure(unsigned int id, WINGMANWING_ESSENCE & data);		
	void add_structure(unsigned int id, TOWNSCROLL_ESSENCE & data);

	void add_structure(unsigned int id, UNIONSCROLL_ESSENCE & data);
	void add_structure(unsigned int id, REVIVESCROLL_ESSENCE & data);
	void add_structure(unsigned int id, ELEMENT_ESSENCE & data);
	void add_structure(unsigned int id, TASKMATTER_ESSENCE & data);
	void add_structure(unsigned int id, TOSSMATTER_ESSENCE & data);

	void add_structure(unsigned int id, PROJECTILE_TYPE & data);
	void add_structure(unsigned int id, PROJECTILE_ESSENCE & data);
	void add_structure(unsigned int id, QUIVER_SUB_TYPE & data);
	void add_structure(unsigned int id, QUIVER_ESSENCE & data);
	void add_structure(unsigned int id, STONE_SUB_TYPE & data);

	void add_structure(unsigned int id, STONE_ESSENCE & data);	
	void add_structure(unsigned int id, MONSTER_ADDON & data);
	void add_structure(unsigned int id, MONSTER_TYPE & data);
	void add_structure(unsigned int id, MONSTER_ESSENCE & data);

	void add_structure(unsigned int id, NPC_TALK_SERVICE & data);
	void add_structure(unsigned int id, NPC_SELL_SERVICE & data);
	void add_structure(unsigned int id, NPC_BUY_SERVICE & data);
	void add_structure(unsigned int id, NPC_REPAIR_SERVICE & data);
	void add_structure(unsigned int id, NPC_INSTALL_SERVICE & data);

	void add_structure(unsigned int id, NPC_UNINSTALL_SERVICE & data);
	void add_structure(unsigned int id, NPC_TASK_IN_SERVICE & data);
	void add_structure(unsigned int id, NPC_TASK_OUT_SERVICE & data);
	void add_structure(unsigned int id, NPC_TASK_MATTER_SERVICE & data);
	void add_structure(unsigned int id, NPC_SKILL_SERVICE & data);
	void add_structure(unsigned int id, NPC_HEAL_SERVICE & data);
	void add_structure(unsigned int id, NPC_TRANSMIT_SERVICE & data);
	
	void add_structure(unsigned int id, NPC_TRANSPORT_SERVICE & data);
	void add_structure(unsigned int id, NPC_PROXY_SERVICE & data);
	void add_structure(unsigned int id, NPC_STORAGE_SERVICE & data);
	void add_structure(unsigned int id, NPC_MAKE_SERVICE & data);
	void add_structure(unsigned int id, NPC_DECOMPOSE_SERVICE & data);

	void add_structure(unsigned int id, NPC_TYPE & data);
	void add_structure(unsigned int id, NPC_ESSENCE & data);
	void add_structure(unsigned int id, talk_proc *  data);

	void add_structure(unsigned int id,  FACE_TEXTURE_ESSENCE & data);
	void add_structure(unsigned int id,  FACE_SHAPE_ESSENCE & data);
	void add_structure(unsigned int id,  FACE_EMOTION_TYPE & data);
	void add_structure(unsigned int id,  FACE_EXPRESSION_ESSENCE & data);
	void add_structure(unsigned int id,  FACE_HAIR_ESSENCE & data);
	void add_structure(unsigned int id,  FACE_MOUSTACHE_ESSENCE & data);
	void add_structure(unsigned int id,  COLORPICKER_ESSENCE & data);
	void add_structure(unsigned int id,  CUSTOMIZEDATA_ESSENCE & data);

	void add_structure(unsigned int id,  RECIPE_MAJOR_TYPE & data);
	void add_structure(unsigned int id,  RECIPE_SUB_TYPE & data);
	void add_structure(unsigned int id,  RECIPE_ESSENCE & data);
	
	void add_structure(unsigned int id,  ENEMY_FACTION_CONFIG & data);
	void add_structure(unsigned int id,  CHARRACTER_CLASS_CONFIG & data);
	void add_structure(unsigned int id,  PARAM_ADJUST_CONFIG & data);
	void add_structure(unsigned int id,  PLAYER_ACTION_INFO_CONFIG & data);
	void add_structure(unsigned int id,  TASKDICE_ESSENCE & data);

	void add_structure(unsigned int id,	 TASKNORMALMATTER_ESSENCE & data);
	void add_structure(unsigned int id,	 FACE_FALING_ESSENCE & data);
	void add_structure(unsigned int id,	 PLAYER_LEVELEXP_CONFIG & data);
	void add_structure(unsigned int id,	 MINE_TYPE & data);
	void add_structure(unsigned int id,	 MINE_ESSENCE & data);

	void add_structure(unsigned int id,	 NPC_IDENTIFY_SERVICE & data);
	void add_structure(unsigned int id,  FASHION_MAJOR_TYPE & data);
	void add_structure(unsigned int id,  FASHION_SUB_TYPE & data);
	void add_structure(unsigned int id,  FASHION_ESSENCE & data);

	void add_structure(unsigned int id,  FACETICKET_MAJOR_TYPE & data);
	void add_structure(unsigned int id,  FACETICKET_SUB_TYPE & data);
	void add_structure(unsigned int id,  FACETICKET_ESSENCE & data);
	void add_structure(unsigned int id,  FACEPILL_MAJOR_TYPE & data);
	void add_structure(unsigned int id,  FACEPILL_SUB_TYPE & data);
	
	void add_structure(unsigned int id,  FACEPILL_ESSENCE & data);
	void add_structure(unsigned int id,  SUITE_ESSENCE & data);
	void add_structure(unsigned int id,  GM_GENERATOR_TYPE & data);
	void add_structure(unsigned int id,  GM_GENERATOR_ESSENCE & data);
	void add_structure(unsigned int id,  PET_TYPE & data);

	void add_structure(unsigned int id,  PET_ESSENCE & data);
	void add_structure(unsigned int id,  PET_EGG_ESSENCE & data);
	void add_structure(unsigned int id,  PET_FOOD_ESSENCE & data);
	void add_structure(unsigned int id,  PET_FACETICKET_ESSENCE & data);
	void add_structure(unsigned int id,  FIREWORKS_ESSENCE & data);

	void add_structure(unsigned int id,  WAR_TANKCALLIN_ESSENCE & data);
	void add_structure(unsigned int id,  NPC_WAR_TOWERBUILD_SERVICE & data);
	void add_structure(unsigned int id,	 PLAYER_SECONDLEVEL_CONFIG & data);
	void add_structure(unsigned int id,  NPC_RESETPROP_SERVICE & data);
	void add_structure(unsigned int id,  NPC_PETNAME_SERVICE & data);

	void add_structure(unsigned int id,  NPC_PETLEARNSKILL_SERVICE & data);
	void add_structure(unsigned int id,  NPC_PETFORGETSKILL_SERVICE & data);
	void add_structure(unsigned int id,  SKILLMATTER_ESSENCE & data);	
	void add_structure(unsigned int id,  REFINE_TICKET_ESSENCE & data);	
	void add_structure(unsigned int id,  DESTROYING_ESSENCE & data);

	void add_structure(unsigned int id,  NPC_EQUIPBIND_SERVICE & data);
	void add_structure(unsigned int id,  NPC_EQUIPDESTROY_SERVICE & data);
	void add_structure(unsigned int id,  NPC_EQUIPUNDESTROY_SERVICE & data);
	void add_structure(unsigned int id,  BIBLE_ESSENCE & data);
	void add_structure(unsigned int id,  SPEAKER_ESSENCE & data);

	void add_structure(unsigned int id,  AUTOHP_ESSENCE & data);
	void add_structure(unsigned int id,  AUTOMP_ESSENCE & data);
	void add_structure(unsigned int id,	 DOUBLE_EXP_ESSENCE & data);
	void add_structure(unsigned int id,	 TRANSMITSCROLL_ESSENCE & data);
	void add_structure(unsigned int id,  DYE_TICKET_ESSENCE & data);

	void add_structure(unsigned int id,  GOBLIN_ESSENCE & data);
	void add_structure(unsigned int id,	 GOBLIN_EQUIP_TYPE & data);
	void add_structure(unsigned int id,	 GOBLIN_EQUIP_ESSENCE & data);
	void add_structure(unsigned int id,  GOBLIN_EXPPILL_ESSENCE & data);

	//////////////////////////////////////////////////////////////////////////
public:
	unsigned int get_data_id(ID_SPACE idspace, unsigned int index, DATA_TYPE & datatype);
	unsigned int get_first_data_id(ID_SPACE idspace, DATA_TYPE & datatype);
	unsigned int get_next_data_id(ID_SPACE idspace, DATA_TYPE & datatype);

	unsigned int get_data_num(ID_SPACE idspace);

	DATA_TYPE get_data_type(unsigned int id, ID_SPACE idspace);
	const void * get_data_ptr(unsigned int id, ID_SPACE idspace, DATA_TYPE & datatype);

	int save_data(const char * pathname);
	int load_data(const char * pathname);
	
protected:

	template<class T>
	class array
	{
	public:
		inline size_t size() { return _v.size(); }
		inline void push_back(const T & x) { _v.push_back(x); }
		inline const T & operator [](size_t pos) const { return _v[pos]; }
		inline T & operator [](size_t pos) {return _v[pos];}
		int save(FILE * file)
		{
			size_t s = _v.size();
			fwrite(&s, sizeof(unsigned int), 1, file);
			if(s>0)		fwrite(&(_v[0]), sizeof(T), s, file);
			return 0;
		}
		int load(FILE * file)
		{
			size_t s;
			if(fread(&s, sizeof(unsigned int), 1, file) != 1)	return -1;
			if(s>0)
			{
				_v.reserve(s);
				T data;
				unsigned int i;
				for(i=0; i<s; i++)
				{
					if(fread(&data, sizeof(T), 1, file) != 1) 	return -1;
					_v.push_back(data);
				}
			}
			return 0;		
		}	
	protected:
		abase::vector<T> _v;
	};

	void setup_hash_map();

	void add_id_index(ID_SPACE idspace, unsigned int id, DATA_TYPE type, unsigned int pos, void * start);
	void add_id_index_essence(unsigned int id, DATA_TYPE type, unsigned int pos, void * start);
	void add_id_index_addon(unsigned int id, DATA_TYPE type, unsigned int pos, void * start);
	void add_id_index_talk(unsigned int id, DATA_TYPE type, unsigned int pos, void * start);
	void add_id_index_face(unsigned int id, DATA_TYPE type, unsigned int pos, void * start);
	void add_id_index_recipe(unsigned int id, DATA_TYPE type, unsigned int pos, void * start);
	void add_id_index_config(unsigned int id, DATA_TYPE type, unsigned int pos, void * start);
	
	static void NormalizeRandom(float* r, int n);

	array<EQUIPMENT_ADDON>			equipment_addon_array;
	array<WEAPON_MAJOR_TYPE>		weapon_major_type_array;
	array<WEAPON_SUB_TYPE>			weapon_sub_type_array;
	array<WEAPON_ESSENCE>			weapon_essence_array;
	array<ARMOR_MAJOR_TYPE>			armor_major_type_array;
	
	array<ARMOR_SUB_TYPE>			armor_sub_type_array;
	array<ARMOR_ESSENCE>			armor_essence_array;
	array<DECORATION_MAJOR_TYPE>	decoration_major_type_array;
	array<DECORATION_SUB_TYPE>		decoration_sub_type_array;
	array<DECORATION_ESSENCE>		decoration_essence_array;	// 10
	
	array<MEDICINE_MAJOR_TYPE>		medicine_major_type_array;
	array<MEDICINE_SUB_TYPE>		medicine_sub_type_array;
	array<MEDICINE_ESSENCE>			medicine_essence_array;
	array<MATERIAL_MAJOR_TYPE>		material_major_type_array;
	array<MATERIAL_SUB_TYPE>		material_sub_type_array;

	array<MATERIAL_ESSENCE>			material_essence_array;
	array<DAMAGERUNE_SUB_TYPE>		damagerune_sub_type_array;
	array<DAMAGERUNE_ESSENCE>		damagerune_essence_array;
	array<ARMORRUNE_SUB_TYPE>		armorrune_sub_type_array;
	array<ARMORRUNE_ESSENCE>		armorrune_essence_array;	// 20

	array<SKILLTOME_SUB_TYPE>		skilltome_sub_type_array;
	array<SKILLTOME_ESSENCE>		skilltome_essence_array;
	array<FLYSWORD_ESSENCE>			flysword_essence_array;
	array<WINGMANWING_ESSENCE>		wingmanwing_essence_array;
	array<TOWNSCROLL_ESSENCE>		townscroll_essence_array;

	array<UNIONSCROLL_ESSENCE>		unionscroll_essence_array;
	array<REVIVESCROLL_ESSENCE>		revivescroll_essence_array;
	array<ELEMENT_ESSENCE>			element_essence_array;	
	array<TASKMATTER_ESSENCE>		taskmatter_essence_array;
	array<TOSSMATTER_ESSENCE>		tossmatter_essence_array;	// 30

	array<PROJECTILE_TYPE>			projectile_type_array;
	array<PROJECTILE_ESSENCE>		projectile_essence_array;
	array<QUIVER_SUB_TYPE>			quiver_sub_type_array;
	array<QUIVER_ESSENCE>			quiver_essence_array;
	array<STONE_SUB_TYPE>			stone_sub_type_array;

	array<STONE_ESSENCE>			stone_essence_array;	
	array<MONSTER_ADDON>			monster_addon_array;	
	array<MONSTER_TYPE>				monster_type_array;
	array<MONSTER_ESSENCE>			monster_essence_array;		
	array<NPC_TALK_SERVICE>			npc_talk_service_array;		// 40

	array<NPC_SELL_SERVICE>			npc_sell_service_array;
	array<NPC_BUY_SERVICE>			npc_buy_service_array;
	array<NPC_REPAIR_SERVICE>		npc_repair_service_array;
	array<NPC_INSTALL_SERVICE>		npc_install_service_array;
	array<NPC_UNINSTALL_SERVICE>	npc_uninstall_service_array;

	array<NPC_TASK_IN_SERVICE>		npc_task_in_service_array;
	array<NPC_TASK_OUT_SERVICE>		npc_task_out_service_array;
	array<NPC_TASK_MATTER_SERVICE>	npc_task_matter_service_array;
	array<NPC_SKILL_SERVICE>		npc_skill_service_array;
	array<NPC_HEAL_SERVICE>			npc_heal_service_array;		// 50

	array<NPC_TRANSMIT_SERVICE>		npc_transmit_service_array;
	array<NPC_TRANSPORT_SERVICE>	npc_transport_service_array;
	array<NPC_PROXY_SERVICE>		npc_proxy_service_array;
	array<NPC_STORAGE_SERVICE>		npc_storage_service_array;
	array<NPC_MAKE_SERVICE>			npc_make_service_array;

	array<NPC_DECOMPOSE_SERVICE>	npc_decompose_service_array;	
	array<NPC_TYPE>					npc_type_array;
	array<NPC_ESSENCE>				npc_essence_array;
	array<talk_proc*>				talk_proc_array;
	array<FACE_TEXTURE_ESSENCE>		face_texture_essence_array;	// 60

	array<FACE_SHAPE_ESSENCE>		face_shape_essence_array;	
	array<FACE_EMOTION_TYPE>		face_emotion_type_array;
	array<FACE_EXPRESSION_ESSENCE>	face_expression_essence_array;
	array<FACE_HAIR_ESSENCE>		face_hair_essence_array;
	array<FACE_MOUSTACHE_ESSENCE>	face_moustache_essence_array;
	array<COLORPICKER_ESSENCE>		colorpicker_essence_array;
	array<CUSTOMIZEDATA_ESSENCE>	customizedata_essence_array;
	
	array<RECIPE_MAJOR_TYPE>		recipe_major_type_array;
	array<RECIPE_SUB_TYPE>			recipe_sub_type_array;
	array<RECIPE_ESSENCE>			recipe_essence_array;

	array<ENEMY_FACTION_CONFIG>		enemy_faction_config_array;
	array<CHARRACTER_CLASS_CONFIG>	character_class_config_array;
	array<PARAM_ADJUST_CONFIG>		param_adjust_config_array;
	array<PLAYER_ACTION_INFO_CONFIG> player_action_info_config_array;
	array<TASKDICE_ESSENCE>			taskdice_essence_array;

	array<TASKNORMALMATTER_ESSENCE>	tasknormalmatter_essence_array;
	array<FACE_FALING_ESSENCE>	face_faling_essence_array;
	array<PLAYER_LEVELEXP_CONFIG>	player_levelexp_config_array;
	array<MINE_TYPE>	mine_type_array;
	array<MINE_ESSENCE>	mine_essence_array;

	array<NPC_IDENTIFY_SERVICE>		npc_identify_service_array;	

	array<FASHION_MAJOR_TYPE>		fashion_major_type_array;
	
	array<FASHION_SUB_TYPE>			fashion_sub_type_array;
	array<FASHION_ESSENCE>			fashion_essence_array;

	array<FACETICKET_MAJOR_TYPE>	faceticket_major_type_array;
	array<FACETICKET_SUB_TYPE>		faceticket_sub_type_array;
	array<FACETICKET_ESSENCE>		faceticket_essence_array;
	array<FACEPILL_MAJOR_TYPE>		facepill_major_type_array;
	array<FACEPILL_SUB_TYPE>		facepill_sub_type_array;
	array<FACEPILL_ESSENCE>			facepill_essence_array;

	array<SUITE_ESSENCE>			suite_essence_array;
	array<GM_GENERATOR_TYPE>		gm_generator_type_array;
	array<GM_GENERATOR_ESSENCE>		gm_generator_essence_array;
	array<PET_TYPE>					pet_type_array;
	array<PET_ESSENCE>				pet_essence_array;
	array<PET_EGG_ESSENCE>			pet_egg_essence_array;
	array<PET_FOOD_ESSENCE>			pet_food_essence_array;
	array<PET_FACETICKET_ESSENCE>	pet_faceticket_essence_array;
	array<FIREWORKS_ESSENCE>		fireworks_essence_array;

	array<WAR_TANKCALLIN_ESSENCE>	war_tankcallin_essence_array;
	array<NPC_WAR_TOWERBUILD_SERVICE> npc_war_towerbuild_service_array;
	array<PLAYER_SECONDLEVEL_CONFIG>	player_secondlevel_config_array;
	array<NPC_RESETPROP_SERVICE>	npc_resetprop_service_array;
	array<NPC_PETNAME_SERVICE>	npc_petname_service_array;

	array<NPC_PETLEARNSKILL_SERVICE>	npc_petlearnskill_service_array;
	array<NPC_PETFORGETSKILL_SERVICE>	npc_petforgetskill_service_array;
	array<SKILLMATTER_ESSENCE>		skillmatter_essence_array;
	array<REFINE_TICKET_ESSENCE>	refine_ticket_essence_array;
	array<DESTROYING_ESSENCE>		destroying_essence_array;

	array<NPC_EQUIPBIND_SERVICE>	npc_equipbind_service_array;
	array<NPC_EQUIPDESTROY_SERVICE>	npc_equipdestroy_service_array;
	array<NPC_EQUIPUNDESTROY_SERVICE> npc_equipundestroy_service_array;
	array<BIBLE_ESSENCE>			bible_essence_array;
	array<SPEAKER_ESSENCE>			speaker_essence_array;

	array<AUTOMP_ESSENCE>			automp_essence_array;
	array<AUTOHP_ESSENCE>			autohp_essence_array;
	array<DOUBLE_EXP_ESSENCE>		double_exp_essence_array;
	array<TRANSMITSCROLL_ESSENCE>	transmitscroll_essence_array;
	array<DYE_TICKET_ESSENCE>		dye_ticket_essence_array;

	array<GOBLIN_ESSENCE>			goblin_essence_array;
	array<GOBLIN_EQUIP_TYPE>		goblin_equip_type_array;
	array<GOBLIN_EQUIP_ESSENCE>		goblin_equip_essence_array;
	array<GOBLIN_EXPPILL_ESSENCE>	goblin_exppill_essence_array;

	// the global hash_map for each id space
private:
	struct LOCATION
	{
		DATA_TYPE		type;
		unsigned int	pos;
	};
	typedef abase::hash_map<unsigned int, LOCATION> IDToLOCATIONMap;
	
	IDToLOCATIONMap				essence_id_index_map;
	IDToLOCATIONMap				addon_id_index_map;
	IDToLOCATIONMap				talk_id_index_map;
	IDToLOCATIONMap				face_id_index_map;
	IDToLOCATIONMap				recipe_id_index_map;
	IDToLOCATIONMap				config_id_index_map;


	IDToLOCATIONMap::iterator	esssence_id_index_itr;
	IDToLOCATIONMap::iterator	addon_id_index_itr;
	IDToLOCATIONMap::iterator	talk_id_index_itr;
	IDToLOCATIONMap::iterator	face_id_index_itr;
	IDToLOCATIONMap::iterator	recipe_id_index_itr;
	IDToLOCATIONMap::iterator	config_id_index_itr;

	array<void *>				start_ptr_array;
	array<size_t>				type_size_array;
};

#endif