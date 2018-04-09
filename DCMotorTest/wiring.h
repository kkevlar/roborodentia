#ifndef WIRING_H
#define WIRING_H

#define ADDR_TOP 0x61
#define ADDR_BOT 0x60

#define BOT_PORT_NW 1
#define BOT_PORT_NE 4
#define BOT_PORT_SW 2
#define BOT_PORT_SE 3

#define TOP_PORT_FLYWHEEL 4
#define TOP_PORT_INDEXER 1

#define OFFSET_NW -1
#define OFFSET_NE 1
#define OFFSET_SW 1
#define OFFSET_SE 1

#define OFFSET_FLYWHEEL .25
#define OFFSET_INDEXER .75

#define TOTAL_SWITCH_COUNT 6

#define SWITCH_PIN_NORTH 2
#define SWITCH_PIN_EAST_NORTH 3
#define SWITCH_PIN_EAST_SOUTH 4
#define SWITCH_PIN_SOUTH 5
#define SWITCH_PIN_WEST_SOUTH 6
#define SWITCH_PIN_WEST_NORTH 7

#endif
