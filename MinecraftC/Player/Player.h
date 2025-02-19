#pragma once
#include "InputHandler.h"
#include "Inventory.h"
#include "PlayerAI.h"
#include "../Player/Player.h"

struct Level;

typedef struct Entity Player;

typedef struct PlayerData {
	float bodyRotation;
	float oldBodyRotation;
	float oldAnimationStep;
	float tilt;
	float oldTilt;
	PlayerAI ai;
	InputHandler input;
	Inventory inventory;
	int userType;
	float bobbing;
	float oldBobbing;
} PlayerData;

void PlayerCreate(Player * player, struct Level * level);
void PlayerTick(Player * player);
void PlayerTravel(Player * player, float x, float y);
void PlayerResetPosition(Player * player);
void PlayerStepAI(Player * player);
void PlayerReleaseAllKeys(Player * player);
void PlayerSetKey(Player * player, int key, bool state);
