#ifndef COMMON_H
#define COMMON_H
#include "ocgapi_constants.h"

#define OLD_REPLAY_MODE          231
// Team play: sent to a duelist whose open prompt was already answered by their teammate
#define MSG_TEAM_PROMPT_TAKEN    232
// Team play: tells a duelist their index (0/1) within their team, which decides whose hand cards are theirs
#define MSG_TEAM_INFO            233
#define MSG_TEAM_ACTOR           234 // team play: { MSG_TEAM_ACTOR, core team, duelist } whose answer was accepted

#endif //COMMON_H
