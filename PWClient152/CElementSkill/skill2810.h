#ifndef __CPPGEN_GNET_SKILL2810
#define __CPPGEN_GNET_SKILL2810
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2810:public Skill
    {
      public:
        enum
        { SKILL_ID = 2810 };
          Skill2810 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2810Stub:public SkillStub
    {
      public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
          public:
            int GetTime (Skill * skill) const
            {
                return 1001;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return false;
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
                skill->GetPlayer ()->SetDecmp (71);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State2:public SkillStub::State
        {
          public:
            int GetTime (Skill * skill) const
            {
                return 6001;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return false;
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
                skill->GetPlayer ()->SetDecmp (285);
                skill->GetPlayer ()->SetPerform (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 0;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State3:public SkillStub::State
        {
          public:
            int GetTime (Skill * skill) const
            {
                return 0;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return false;
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 0;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
      Skill2810Stub ():SkillStub (2810)
        {
            cls = 11;
            name = L"������֮��";
            nativename = "������֮��";
            icon = "ħ����֮��.dds";
            max_level = 1;
            type = 2;
            apcost = 0;
            arrowcost = 0;
            apgain = 30;
            attr = 4;
            rank = 31;
            eventflag = 0;
            is_senior = 1;
            posdouble = 0;
            clslimit = 0;
            time_type = 0;
            showorder = 1023;
            allow_land = 1;
            allow_air = 1;
            allow_water = 1;
            allow_ride = 0;
            auto_attack = 0;
            long_range = 0;
            restrict_corpse = 0;
            allow_forms = 3;
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (0);
            }
            effect = "";
            range.type = 5;
            doenchant = true;
            dobless = false;
            commoncooldown = 0;
            commoncooldowntime = 0;
            pre_skills.push_back (std::pair < ID, int >(2590, 10));
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill2810Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (356);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 6001;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 180000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int array[10] = { 99 };
            return array[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int array[10] = { 2000000 };
            return array[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int array[10] = { 46373 };
            return array[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int array[10] = { 2000000 };
            return array[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (10);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
        }
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (0.75);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetMoongod (1);
            skill->GetVictim ()->SetProbability (1.0 * 8);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (2844);
            skill->GetVictim ()->SetAurabless2 (1);
            return true;
        }
        bool TakeEffect (Skill * skill) const
        {;
            return true;
        }
        float GetEffectdistance (Skill * skill) const
        {
            return (float) (10);
        }
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif