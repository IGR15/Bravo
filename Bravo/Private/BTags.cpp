#include "BTags.h"
namespace BTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(None,"BTags.None","None")
	namespace SetByCaller
	{
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Projectile,"BTags.SetByCaller.Projectile","Tag For set by caller magnitude class")

	}
	namespace LTAbilities
	{
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Primary,"BTags.LTAbilities.Primary","Tag For The Primary Ability")
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Secondary,"BTags.LTAbilities.Secondary","Tag For The Secondary Ability")
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Tertiary,"BTags.LTAbilities.Tertiary","Tag For The Tertiary Ability")
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(ActivateOnGiven,"BTags.LTAbilities.ActivateOnGiven","Tag For The  Ability")

		namespace Enemy
		{
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(Attack,"BTags.LTAbilities.Enemy.Attack","Tag for attacking")
		}
	}

	namespace Events
	{
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(KillScored,"BTags.Events.KillScored","Tag For The  Kill scored event")
		namespace Enemy
		{
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(HitReact,"BTags.Events.Enemy.HitReact","Tag For The  Hit React")
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(EndAttack,"BTags.Events.Enemy.EndAttack","Tag For Ending Attack")
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(MeleeTraceHit,"BTags.Events.Enemy.MeleeTraceHit","Tag For Ending Attack trace")
		}
		namespace Player
		{
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(HitReact,"BTags.Events.Player.HitReact","Tag For The  Hit React")
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(Death,"BTags.Events.Player.Death","Tag For The  Death")
		}
	}
}