#ifndef CONFIG_HENNY_H
#define CONFIG_HENNY_H

constexpr int test = 5;

// uncomment the form you want (one only)
//#define DEOXYS_NORMAL // currently not working
#define DEOXYS_ATTACK
//#define DEOXYS_DEFENSE
//#define DEOXYS_SPEED

// uncomment to replace mudkip with deoxys
#define DEOXYS_STARTER

#define INSTANT_TEXT

// uncomment to get Ruby/Sapphire pickup behavior
//#define PICKUP_RS

// press R to switch between mach and acro bike
#define SUPERBIKE

// ...
#define RUN_INSIDE
//#define RUN_EVERYWHERE

#define DONT_CONSUME_TMS

// instantly catch any pokemon with any ball
#define FAST_CATCH

#endif