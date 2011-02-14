/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _GAME_INTERPRETER_BATTLE_H_
#define _GAME_INTERPRETER_BATTLE_H_

#include <map>
#include <string>
#include <vector>
#include "game_character.h"
#include "rpg_eventcommand.h"
#include "system.h"
#include "game_interpreter.h"

class Game_Event;
class Game_CommonEvent;

////////////////////////////////////////////////////////////
/// Game_Interpreter_Battle class
////////////////////////////////////////////////////////////
class Game_Interpreter_Battle : public Game_Interpreter
{
public:
	Game_Interpreter_Battle(int _depth = 0, bool _main_flag = false);
	~Game_Interpreter_Battle();

	bool ExecuteCommand();
private:
	bool CommandCallCommonEvent();
	bool CommandForceFlee();
	bool CommandEnableCombo();
	bool CommandChangeMonsterHP();
	bool CommandChangeMonsterMP();
	bool CommandChangeMonsterCondition();
	bool CommandShowHiddenMonster();
	bool CommandChangeBattleBG();
	bool CommandShowBattleAnimation();
	bool CommandTerminateBattle();
	bool CommandConditionalBranch();
};

#endif
