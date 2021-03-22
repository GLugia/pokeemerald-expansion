// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

const struct BaseStats gBaseStats[] =
{
    [SPECIES_NONE] = {0},

    [SPECIES_BULBASAUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,    // 49
        .baseDefense   = 50,    // 49
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_ARMOR_TUNING, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_IVYSAUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,    // 62
        .baseDefense   = 65,    // 63
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 142,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_VENUSAUR] =
    {
        .baseHP        = 105,    // 80
        .baseAttack    = 85,    // 82
        .baseDefense   = 95,    // 83
        .baseSpeed     = 80,
        .baseSpAttack  = 105,   // 100
        .baseSpDefense = 110,   // 100
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 236,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CHARMANDER] =
    {
        .baseHP        = 40,    // 39
        .baseAttack    = 60,    // 52
        .baseDefense   = 45,    // 43
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BLAZE, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CHARMELEON] =
    {
        .baseHP        = 60,    // 58
        .baseAttack    = 65,    // 64
        .baseDefense   = 60,    // 58
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BLAZE, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CHARIZARD] =
    {
        .baseHP        = 80,    // 78
        .baseAttack    = 95,    // 84
        .baseDefense   = 80,    // 78
        .baseSpeed     = 120,   // 100
        .baseSpAttack  = 120,   // 109
        .baseSpDefense = 85,    // 85
        .type1 = TYPE_FIRE,
        .type2 = TYPE_DRAGON,	// TYPE_FLYING
        .catchRate = 45,
        .expYield = 240,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BLAZE, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SQUIRTLE] =
    {
        .baseHP        = 45,    // 44
        .baseAttack    = 50,    // 48
        .baseDefense   = 65,
        .baseSpeed     = 45,    // 43
        .baseSpAttack  = 50,
        .baseSpDefense = 65,    // 64
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_TANK_SHELL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WARTORTLE] =
    {
        .baseHP        = 60,    // 59
        .baseAttack    = 65,    // 63
        .baseDefense   = 80,
        .baseSpeed     = 60,    // 58
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_TANK_SHELL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BLASTOISE] =
    {
        .baseHP        = 100,    // 79
        .baseAttack    = 75,    // 83
        .baseDefense   = 130,   // 100
        .baseSpeed     = 80,    // 78
        .baseSpAttack  = 90,    // 85
        .baseSpDefense = 105,   // 105
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_TANK_SHELL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CATERPIE] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 255,
        .expYield = 39,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_METAPOD] =	// TODO (lilua): bulkier? kakuna too?
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_OVERCOAT, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BUTTERFREE] =
    {
        .baseHP        = 95,	// 60
        .baseAttack    = 35,	// 45
        .baseDefense   = 60,	// 50
        .baseSpeed     = 75,	// 70
    	.baseSpAttack  = 100,	// 90
        .baseSpDefense = 90,	// 80
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 178,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .item2 = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_TINTED_LENS, ABILITY_COMPOUND_EYES},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_WEEDLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 39,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KAKUNA] =
    {
        .baseHP        = 45,
        .baseAttack    = 25,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_OVERCOAT, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_BEEDRILL] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 40,
        .baseSpeed     = 140,	// 75
        .baseSpAttack  = 35,	// 45
        .baseSpDefense = 90,	// 80
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 178,
        .evYield_Attack    = 2,
        .evYield_SpDefense = 1,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_MERCILESS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PIDGEY] =
    {
        .baseHP        = 35,	// 40
        .baseAttack    = 30,	// 45
        .baseDefense   = 40,
        .baseSpeed     = 60,	// 56
        .baseSpAttack  = 55,	// 35
        .baseSpDefense = 45,	// 35
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 50,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_AIR_LOCK},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PIDGEOTTO] =
    {
        .baseHP        = 65,	// 63
        .baseAttack    = 50,	// 60
        .baseDefense   = 65,	// 55
        .baseSpeed     = 85,	// 71
        .baseSpAttack  = 85,	// 50
        .baseSpDefense = 65,	// 50
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 122,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_NO_GUARD, ABILITY_DELTA_STREAM},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PIDGEOT] =
    {
        .baseHP        = 85,	// 83
        .baseAttack    = 75,	// 80
        .baseDefense   = 80,	// 75
        .baseSpeed     = 105,	// 101
        .baseSpAttack  = 115,	// 70
        .baseSpDefense = 80,	// 70
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 216,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_NO_GUARD, ABILITY_DELTA_STREAM},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_RATTATA] =
    {
        .baseHP        = 50,	// 30
        .baseAttack    = 55,	// 56
        .baseDefense   = 40,	// 35
        .baseSpeed     = 75,	// 72
        .baseSpAttack  = 25,
        .baseSpDefense = 50,	// 35
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 51,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_RATICATE] =
    {
        .baseHP        = 85,	// 55
        .baseAttack    = 90,	// 81
        .baseDefense   = 75,	// 60
        .baseSpeed     = 100,	// 97
        .baseSpAttack  = 50,
        .baseSpDefense = 85,	// 70
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 127,
        .expYield = 145,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GUTS, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SPEAROW] = // TODO (lilua): balance testing
    {
        .baseHP        = 60,	// 40
        .baseAttack    = 75,	// 60
        .baseDefense   = 40,	// 30
        .baseSpeed     = 80,	// 70
        .baseSpAttack  = 35,	// 31
        .baseSpDefense = 45,	// 31
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed     = 1,
        .item2 = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_GUTS, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FEAROW] =	// TODO (lilua): balance testing
    {
        .baseHP        = 70,	// 65
        .baseAttack    = 100,	// 90
        .baseDefense   = 70,	// 65
        .baseSpeed     = 105,	// 100
        .baseSpAttack  = 75,	// 61
        .baseSpDefense = 80,	// 61
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 155,
        .evYield_Speed     = 2,
        .item2 = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_GUTS, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_EKANS] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 45,	// 44
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,	// 54
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_UNNERVE, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_ARBOK] =
    {
        .baseHP        = 60,	// 60
        .baseAttack    = 95,
        .baseDefense   = 90,	// 69
        .baseSpeed     = 80,
        .baseSpAttack  = 85,	// 65
        .baseSpDefense = 90,	// 79
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 90,
        .expYield = 157,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_PICHU] =
    {
        .baseHP        = 25,	// 20
        .baseAttack    = 60,	// 40
        .baseDefense   = 20,	// 15
        .baseSpeed     = 60,
        .baseSpAttack  = 65,	// 35
        .baseSpDefense = 35,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 190,
        .expYield = 41,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_STATIC, ABILITY_CHEEK_POUCH},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PIKACHU] =
    {
        .baseHP        = 40,	// 35
        .baseAttack    = 65,	// 55
        .baseDefense   = 40,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,	// 50
		.baseSpDefense = 50,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 190,
        .expYield = 112,
        .evYield_Speed     = 2,
        .item2 = ITEM_LIGHT_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_STATIC, ABILITY_CHEEK_POUCH},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_RAICHU] =	// TODO (lilua): balance testing
    {
        .baseHP        = 60,
        .baseAttack    = 120,	// 90
        .baseDefense   = 60,	// 55
        .baseSpeed     = 110,	// 110
        .baseSpAttack  = 80,	// 90
        .baseSpDefense = 100,	// 80
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 75,
        .expYield = 218,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_STATIC, ABILITY_CHEEK_POUCH},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SANDSHREW] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_GRIP_CLAW,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAND_RUSH, ABILITY_SAND_STREAM},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SANDSLASH] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,	// 55
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 90,
        .expYield = 158,
        .evYield_Defense   = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_GRIP_CLAW,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAND_RUSH, ABILITY_SAND_STREAM},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_NIDORAN_F] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,	// 47
        .baseDefense   = 55,	// 52
        .baseSpeed     = 45,	// 41
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_NORMAL,
        .catchRate = 235,
        .expYield = 55,
        .evYield_HP        = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RIVALRY, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDORINA] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,	// 62
        .baseDefense   = 70,	// 67
        .baseSpeed     = 60,	// 56
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .type1 = TYPE_POISON,
        .type2 = TYPE_NORMAL,
        .catchRate = 120,
        .expYield = 128,
        .evYield_HP        = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_RIVALRY, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDOQUEEN] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,	// 92
        .baseDefense   = 90,	// 87
        .baseSpeed     = 80,	// 76
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .type1 = TYPE_POISON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 227,
        .evYield_HP        = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_QUEENLY_MAJESTY, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDORAN_M] =
    {
        .baseHP        = 50,	// 46
        .baseAttack    = 60,	// 57
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_NORMAL,
        .catchRate = 235,
        .expYield = 55,
        .evYield_Attack    = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RIVALRY, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDORINO] =
    {
        .baseHP        = 65,	// 61
        .baseAttack    = 75,	// 72
        .baseDefense   = 60,	// 57
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 128,
        .evYield_Attack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RIVALRY, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDOKING] =
    {
        .baseHP        = 85,	// 81
        .baseAttack    = 105,	// 102
        .baseDefense   = 80,	// 77
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .type1 = TYPE_POISON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 227,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CLEFFA] =
    {
        .baseHP        = 50,
        .baseAttack    = 25,
        .baseDefense   = 30,	// 28
        .baseSpeed     = 15,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 150,
        .expYield = 44,
        .evYield_SpDefense = 1,
        .item2 = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_FRIEND_GUARD, ABILITY_SERENE_GRACE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CLEFAIRY] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 48,	// 48
        .baseSpeed     = 35,
        .baseSpAttack  = 70,	// 60
        .baseSpDefense = 65,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 150,
        .expYield = 113,
        .evYield_HP        = 2,
        .item2 = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_FRIEND_GUARD, ABILITY_SERENE_GRACE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CLEFABLE] =
    {
        .baseHP        = 95,
        .baseAttack    = 70,
        .baseDefense   = 75,	// 73
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 100,	// 90
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 25,
        .expYield = 217,
        .evYield_HP        = 3,
        .item2 = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_FRIEND_GUARD, ABILITY_SERENE_GRACE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_IGGLYBUFF] =
    {
        .baseHP        = 115,	// 90
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 20,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FAIRY,
        .catchRate = 170,
        .expYield = 42,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_FLUFFY, ABILITY_SERENE_GRACE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_JIGGLYPUFF] =
    {
        .baseHP        = 160,	// 115
        .baseAttack    = 45,
        .baseDefense   = 20,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FAIRY,
        .catchRate = 170,
        .expYield = 95,
        .evYield_HP        = 2,
        .item2 = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_FLUFFY, ABILITY_SERENE_GRACE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_WIGGLYTUFF] =
    {
        .baseHP        = 160,	// 140
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 85,
        .baseSpDefense = 80,	// 50
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FAIRY,
        .catchRate = 50,
        .expYield = 196,
        .evYield_HP        = 3,
        .item2 = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_FLUFFY, ABILITY_SERENE_GRACE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_ZUBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GOLBAT] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 159,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_DARK_AURA, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CROBAT] =	// TODO (lilua): something besides dark aura?
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 241,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_DARK_AURA, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_ODDISH] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_ABSORB_BULB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GLOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 138,
        .evYield_SpAttack  = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_ABSORB_BULB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_VILEPLUME] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 95,	// 85
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 90,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpAttack  = 3,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_ABSORB_BULB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_AROMA_VEIL},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BELLOSSOM] =
    {
        .baseHP        = 70,	// 75
        .baseAttack    = 40,	// 80
        .baseDefense   = 95,
        .baseSpeed     = 105,	// 50
        .baseSpAttack  = 90,
        .baseSpDefense = 110,	// 100
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpDefense = 3,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_ABSORB_BULB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_HEALER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_PARAS] =
    {
        .baseHP        = 35,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 45,	// 25
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 57,
        .evYield_Attack    = 1,
        .item1 = ITEM_TINY_MUSHROOM,
        .item2 = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PARASECT] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 95,
        .baseDefense   = 90,	// 80
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 135,	// 80
        .type1 = TYPE_BUG,
        .type2 = TYPE_GHOST,
        .catchRate = 75,
        .expYield = 142,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .item1 = ITEM_TINY_MUSHROOM,
        .item2 = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_VENONAT] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,	// 55
        .baseDefense   = 100,	// 50
        .baseSpeed     = 40,	// 45
        .baseSpAttack  = 60,	// 40
        .baseSpDefense = 40,	// 55
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_FUR_COAT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_VENOMOTH] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 60,	// 65
        .baseDefense   = 80,	// 60
        .baseSpeed     = 100,	// 90
        .baseSpAttack  = 100,	// 90
        .baseSpDefense = 100,	// 75
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 158,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_SHED_SHELL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
		.abilities = {ABILITY_COMPOUND_EYES, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DIGLETT] =
    {
        .baseHP        = 10,
        .baseAttack    = 35,	// 55
        .baseDefense   = 50,	// 25
        .baseSpeed     = 120,	// 95
        .baseSpAttack  = 20,	// 35
        .baseSpDefense = 70,	// 45
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 53,
        .evYield_Speed     = 1,
        .item2 = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_WATER_COMPACTION, ABILITY_ARENA_TRAP},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DUGTRIO] =
    {
        .baseHP        = 80,	// 35
        .baseAttack    = 105,	// 100
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 60,	// 50
        .baseSpDefense = 70,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 50,
        .expYield = 149,
        .evYield_Speed     = 2,
        .item2 = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_WATER_COMPACTION, ABILITY_ARENA_TRAP},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MEOWTH] =
    {
        .baseHP        = 70,	// 40
        .baseAttack    = 75,	// 45
        .baseDefense   = 35,
        .baseSpeed     = 80,	// 90
        .baseSpAttack  = 50,	// 40
        .baseSpDefense = 40,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 58,
        .evYield_Speed     = 1,
        .item2 = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PERSIAN] =
    {
        .baseHP        = 75,	// 65
        .baseAttack    = 90,	// 70
        .baseDefense   = 100,	// 60
        .baseSpeed     = 125,	// 115
        .baseSpAttack  = 70,	// 	65
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 90,
        .expYield = 154,
        .evYield_Speed     = 2,
        .item2 = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PSYDUCK] =
    {
        .baseHP        = 100,	// 50
        .baseAttack    = 65,	// 52
        .baseDefense   = 70,	// 48
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,	// 50
        .type1 = TYPE_WATER,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 190,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DAMP, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_GOLDUCK] =
    {
        .baseHP        = 100,	// 80
        .baseAttack    = 95,	// 82
        .baseDefense   = 80,	// 78
        .baseSpeed     = 115,	// 85
        .baseSpAttack  = 95,
        .baseSpDefense = 90,	// 80
        .type1 = TYPE_WATER,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 75,
        .expYield = 175,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DAMP, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MANKEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 85,	// 80
        .baseDefense   = 35,
        .baseSpeed     = 85,	// 70
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
		.abilities = {ABILITY_ANGER_POINT, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PRIMEAPE] =
    {
        .baseHP        = 95,	// 65
        .baseAttack    = 105,
        .baseDefense   = 60,
        .baseSpeed     = 85,	// 95
        .baseSpAttack  = 70,	// 60
        .baseSpDefense = 70,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
		.abilities = {ABILITY_ANGER_POINT, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_VULPIX] =
    {
        .baseHP        = 45,	// 38
        .baseAttack    = 30,	// 41
        .baseDefense   = 40,	// 40
        .baseSpeed     = 65,
        .baseSpAttack  = 55,	// 50
        .baseSpDefense = 70,	// 60
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 190,
        .expYield = 60,
        .evYield_Speed     = 1,
        .item2 = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NINETALES] =
    {
        .baseHP        = 80,	// 73
        .baseAttack    = 70,	// 76
        .baseDefense   = 80,	// 75
        .baseSpeed     = 110,	// 100
        .baseSpAttack  = 80,	// 81
        .baseSpDefense = 130,	// 100
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 75,
        .expYield = 177,
        .evYield_Speed     = 1,
        .evYield_SpDefense = 1,
        .item2 = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_GROWLITHE] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,	// 70
        .baseDefense   = 45,
        .baseSpeed     = 75,	// 60
        .baseSpAttack  = 75,	// 70
        .baseSpDefense = 60,	// 50
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 190,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_JUSTIFIED},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_ARCANINE] =
    {
        .baseHP        = 90,
        .baseAttack    = 110,	// 110
        .baseDefense   = 80,
        .baseSpeed     = 75,	// 95
        .baseSpAttack  = 100,
        .baseSpDefense = 90,	// 80
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 75,
        .expYield = 194,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_JUSTIFIED},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_POLIWAG] =
    {
        .baseHP        = 60,	// 40
        .baseAttack    = 60,	// 50
        .baseDefense   = 60,	// 40
        .baseSpeed     = 70,	// 90
        .baseSpAttack  = 60,	// 40
        .baseSpDefense = 50,	// 40
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_STORM_DRAIN, ABILITY_INNARDS_OUT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_POLIWHIRL] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,	// 65
        .baseDefense   = 70,	// 65
        .baseSpeed     = 90,
        .baseSpAttack  = 70,	// 50
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 120,
        .expYield = 135,
        .evYield_Speed     = 2,
        .item2 = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_STORM_DRAIN, ABILITY_INNARDS_OUT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_POLIWRATH] =
    {
        .baseHP        = 100,	// 90
        .baseAttack    = 95,
        .baseDefense   = 100,	// 95
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 230,
        .evYield_Defense   = 3,
        .item2 = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_GUTS, ABILITY_INNARDS_OUT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_POLITOED] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 85,	// 75
        .baseSpeed     = 90,	// 70
        .baseSpAttack  = 70,	// 90
        .baseSpDefense = 120,	// 100
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpDefense = 3,
        .item2 = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_DRIZZLE, ABILITY_INNARDS_OUT},
        .abilityHidden = ABILITY_DRIZZLE,
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ABRA] =
    {
        .baseHP        = 30,	// 25
        .baseAttack    = 20,
        .baseDefense   = 15,
        .baseSpeed     = 90,
        .baseSpAttack  = 105,
        .baseSpDefense = 55,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 200,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KADABRA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,	// 30
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 100,
        .expYield = 140,
        .evYield_SpAttack  = 2,
        .item2 = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_ALAKAZAM] =
    {
        .baseHP        = 55,	// 55
        .baseAttack    = 50,
        .baseDefense   = 55,	// 45
        .baseSpeed     = 120,
        .baseSpAttack  = 125,	// 135
        .baseSpDefense = 85,	// 95
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 50,
        .expYield = 225,
        .evYield_SpAttack  = 3,
        .item2 = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MACHOP] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 45,	// 35
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 180,
        .expYield = 61,
        .evYield_Attack    = 1,
        .item2 = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MACHOKE] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,	// 100
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 90,
        .expYield = 142,
        .evYield_Attack    = 2,
        .item2 = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MACHAMP] =
    {
        .baseHP        = 90,
        .baseAttack    = 145,	// 130
        .baseDefense   = 80,
        .baseSpeed     = 45,	// 55
        .baseSpAttack  = 55,	// 65
        .baseSpDefense = 70,	// 85
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 227,
        .evYield_Attack    = 3,
        .item2 = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BELLSPROUT] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 50,	// 40
        .baseSpAttack  = 70,
        .baseSpDefense = 30,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_CORROSION},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WEEPINBELL] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 35,	// 55
        .baseSpAttack  = 85,
        .baseSpDefense = 65,	// 45
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 137,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_CORROSION},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_VICTREEBEL] =
    {
        .baseHP        = 80,	// 80
        .baseAttack    = 105,	// 105
        .baseDefense   = 65,
        .baseSpeed     = 35,	// 70
        .baseSpAttack  = 100,	// 100
        .baseSpDefense = 70,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 221,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_CORROSION},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TENTACOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,	// 40
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,	// 50
        .baseSpDefense = 100,
        .type1 = TYPE_WATER,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_TANGLE, ABILITY_WATER_BUBBLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TENTACRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,	// 70
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 70,	// 80
        .baseSpDefense = 120,
        .type1 = TYPE_WATER,
        .type2 = TYPE_POISON,
        .catchRate = 60,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_TANGLE, ABILITY_WATER_BUBBLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GEODUDE] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        .item2 = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GRAVELER] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 55,	// 35
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GROUND,
        .catchRate = 120,
        .expYield = 137,
        .evYield_Defense   = 2,
        .item2 = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GOLEM] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 140,	// 130
        .baseSpeed     = 45,
        .baseSpAttack  = 75,	// 55
        .baseSpDefense = 75,	// 65
        .type1 = TYPE_FIRE,	// TYPE_ROCK
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 223,
        .evYield_Defense   = 3,
        .item2 = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_SHIELDS_DOWN, ABILITY_SHIELDS_DOWN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

	[SPECIES_GOLEM_MAGMA] =
	{
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 155,
        .baseSpDefense = 75,
        .type1 = TYPE_FIRE,	// TYPE_ROCK
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 223,
        .evYield_Defense   = 3,
        .item2 = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_SHIELDS_DOWN, ABILITY_SHIELDS_DOWN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
	},

    [SPECIES_PONYTA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 50,	// 55
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,	// 65
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 190,
        .expYield = 82,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE},
        .abilityHidden = ABILITY_FLAME_BODY,
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_RAPIDASH] =
    {
        .baseHP        = 65,	// 65
        .baseAttack    = 115,	// 100
        .baseDefense   = 70,
        .baseSpeed     = 115,	// 105
        .baseSpAttack  = 85,	// 80
        .baseSpDefense = 70,	// 80
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 60,
        .expYield = 175,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TURBOBLAZE, ABILITY_FLASH_FIRE},
        .abilityHidden = ABILITY_FLAME_BODY,
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SLOWPOKE] =
    {
        .baseHP        = 85,	// 90
        .baseAttack    = 65,
        .baseDefense   = 85,	// 65
        .baseSpeed     = 15,
        .baseSpAttack  = 55,	// 40
        .baseSpDefense = 85,	// 40
        .type1 = TYPE_WATER,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 190,
        .expYield = 63,
        .evYield_HP        = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_LAGGING_TAIL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SLOWBRO] =
    {
        .baseHP        = 105,	// 95
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 75,
        .expYield = 172,
        .evYield_Defense   = 2,
        .item2 = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SIMPLE, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SLOWKING] =
    {
        .baseHP        = 105,	// 95
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 110,
        .type1 = TYPE_WATER,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 70,
        .expYield = 172,
        .evYield_SpDefense = 3,
        .item2 = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SIMPLE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MAGNEMITE] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 65,	// 70
        .baseSpeed     = 45,
        .baseSpAttack  = 95,
        .baseSpDefense = 50,	// 55
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_STEEL,
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MAGNETON] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 115,	// 95
        .baseSpeed     = 70,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_STEEL,
        .catchRate = 60,
        .expYield = 163,
        .evYield_SpAttack  = 2,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 125,	// 115
        .baseSpeed     = 60,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_STEEL,
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack  = 3,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FARFETCHD] =
    {
        .baseHP        = 65,	// 52
        .baseAttack    = 95,	// 90
        .baseDefense   = 55,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,	// 58
        .baseSpDefense = 65,	// 62
        .type1 = TYPE_FLYING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 132,
        .evYield_Attack    = 1,
        .item2 = ITEM_STICK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    }, // TODO (lilua): swap to galar forme

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 95,	// 62
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 70,	// 65
        .baseSpAttack  = 70,	// 68
        .baseSpDefense = 85,	// 82
        .type1 = TYPE_FLYING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .item2 = ITEM_STICK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DODUO] =
    {
        .baseHP        = 35,
        .baseAttack    = 85,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,	// 35
        .baseSpDefense = 55,	// 35
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 62,
        .evYield_Attack    = 1,
        .item2 = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_TANGLED_FEET, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DODRIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 100,	// 110
        .baseSpAttack  = 80,	// 60
        .baseSpDefense = 60,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack    = 2,
        .item2 = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_TANGLED_FEET, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SEEL] =
    {
        .baseHP        = 95,	// 65
        .baseAttack    = 65,	// 45
        .baseDefense   = 70,	// 55
        .baseSpeed     = 75,	// 45
        .baseSpAttack  = 65,	// 45
        .baseSpDefense = 90,	// 70
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DEWGONG] =
    {
        .baseHP        = 120,	// 90
        .baseAttack    = 80,	// 70
        .baseDefense   = 80,	// 80
        .baseSpeed     = 75,	// 70
        .baseSpAttack  = 80,	// 70
        .baseSpDefense = 105,	// 95
        .type1 = TYPE_WATER,
        .type2 = TYPE_ICE,
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_GRIMER] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,	// 80
        .baseDefense   = 55,	// 50
        .baseSpeed     = 25,
        .baseSpAttack  = 70,	// 40
        .baseSpDefense = 75,	// 50
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 65,
        .evYield_HP        = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_BLACK_SLUDGE,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_GOOEY, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MUK] =
    {
        .baseHP        = 105,
        .baseAttack    = 65,	// 105
        .baseDefense   = 75,
        .baseSpeed     = 40,	// 50
        .baseSpAttack  = 105,	// 65
        .baseSpDefense = 110,	// 100
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 175,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        #ifdef ITEM_EXPANSION
            .item1 = ITEM_BLACK_SLUDGE,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_GOOEY, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SHELLDER] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,	// 65
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 65,	// 45
        .baseSpDefense = 40,	// 25
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .item1 = ITEM_PEARL,
        .item2 = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
		.abilities = {ABILITY_SKILL_LINK, ABILITY_SNOW_CLOAK},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CLOYSTER] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 180,
        .baseSpeed     = 70,
        .baseSpAttack  = 75,	// 85
        .baseSpDefense = 60,	// 45
        .type1 = TYPE_WATER,
        .type2 = TYPE_ICE,
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 2,
        .item1 = ITEM_PEARL,
        .item2 = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
		.abilities = {ABILITY_SKILL_LINK, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GASTLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 50,	// 35
        .baseDefense   = 30,
        .baseSpeed     = 80,
        .baseSpAttack  = 95,	// 100
        .baseSpDefense = 35,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_HAUNTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,	// 50
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 105,	// 115
        .baseSpDefense = 55,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_POISON,
        .catchRate = 90,
        .expYield = 142,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GENGAR] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,	// 65
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_BAD_DREAMS, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_ONIX] =
    {
        .baseHP        = 45,	// 35
        .baseAttack    = 75,	// 45
        .baseDefense   = 165,	// 160
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,	// 45
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 77,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_STEELIX] =
    {
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 200,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,	// 65
        .type1 = TYPE_STEEL,
        .type2 = TYPE_GROUND,
        .catchRate = 25,
        .expYield = 179,
        .evYield_Defense   = 2,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_HEATPROOF, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_DROWZEE] =
    {
        .baseHP        = 10,	// 60
        .baseAttack    = 50,	// 48
        .baseDefense   = 100,	// 45
        .baseSpeed     = 60,	// 42
        .baseSpAttack  = 75,	// 43
        .baseSpDefense = 100,	// 90
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 190,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_INSOMNIA, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_HYPNO] =
    {
        .baseHP        = 15,	// 85
        .baseAttack    = 100,	// 73
        .baseDefense   = 150,	// 70
        .baseSpeed     = 60,	// 67
        .baseSpAttack  = 100,	// 73
        .baseSpDefense = 150,	// 115
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 75,
        .expYield = 169,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_INSOMNIA, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_KRABBY] =
    {
        .baseHP        = 30,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 40,	// 25
        .baseSpAttack  = 40,	// 25
        .baseSpDefense = 40,	// 25
        .type1 = TYPE_WATER,
        .type2 = TYPE_ROCK,
        .catchRate = 225,
        .expYield = 65,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_KINGLER] =
    {
        .baseHP        = 55,	// 55
        .baseAttack    = 135,	// 130
        .baseDefense   = 135,	// 115
        .baseSpeed     = 70,	// 75
        .baseSpAttack  = 50,
        .baseSpDefense = 55,	// 50
        .type1 = TYPE_WATER,
        .type2 = TYPE_STEEL,
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_VOLTORB] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,	// 30
        .baseDefense   = 50,
        .baseSpeed     = 140,	// 100
        .baseSpAttack  = 65,	// 55
        .baseSpDefense = 55,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_STATIC},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ELECTRODE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 200,	// 150
        .baseSpAttack  = 90,	// 80
        .baseSpDefense = 80,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 60,
        .expYield = 172,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_STATIC},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_EXEGGCUTE] =
    {
        .baseHP        = 60,
        .baseAttack    = 20,	// 40
        .baseDefense   = 80,
        .baseSpeed     = 60,	// 40
        .baseSpAttack  = 25,	// 60
        .baseSpDefense = 30,	// 45
        .type1 = TYPE_GRASS,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 90,
        .expYield = 65,
        .evYield_Defense   = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_PSYCHIC_SEED,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_MAGIC_GUARD},
		// TODO (lilua): implement schooling exeggcute
        //.abilities = {ABILITY_SCHOOLING, ABILITY_SCHOOLING},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_EXEGGUTOR] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 125,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 186,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CUBONE] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,	// 50
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 190,
        .expYield = 64,
        .evYield_Defense   = 1,
        .item2 = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MAROWAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 75,	// 45
        .baseSpAttack  = 50,
        .baseSpDefense = 90,	// 80
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GHOST,
        .catchRate = 75,
        .expYield = 149,
        .evYield_Defense   = 2,
        .item2 = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_CURSED_BODY},
        .abilityHidden = ABILITY_BATTLE_ARMOR,
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TYROGUE] =
    {
        .baseHP        = 45,	// 35
        .baseAttack    = 55,	// 35
        .baseDefense   = 55,	// 35
        .baseSpeed     = 40,	// 35
        .baseSpAttack  = 35,
        .baseSpDefense = 55,	// 35
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 42,
        .evYield_Attack    = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_GUTS, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_HITMONTOP] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,	// 95
        .baseDefense   = 105,	// 95
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 125,	// 110
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HITMONLEE] =
    {
        .baseHP        = 50,
        .baseAttack    = 140,	// 120
        .baseDefense   = 55,	// 53
        .baseSpeed     = 90,	// 87
        .baseSpAttack  = 35,
        .baseSpDefense = 110,	// 125
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_LONG_REACH},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

	// TODO (lilua): evolves from tyrogue when def > atk so maybe make it more defensive
    [SPECIES_HITMONCHAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 115,	// 105
        .baseDefense   = 90,	// 79
        .baseSpeed     = 80,	// 76
        .baseSpAttack  = 35,
        .baseSpDefense = 125,	// 110
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_IRON_FIST, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LICKITUNG] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,	// 55
        .baseDefense   = 75,
        .baseSpeed     = 50,	// 30
        .baseSpAttack  = 60,
        .baseSpDefense = 105,	// 75
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 77,
        .evYield_HP        = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_LAGGING_TAIL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 105,	// 95
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 30,
        .expYield = 180,
        .evYield_HP        = 3,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_LAGGING_TAIL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_THICK_FAT, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_KOFFING] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,	// 65
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,	// 60
        .baseSpDefense = 45,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 68,
        .evYield_Defense   = 1,
        .item2 = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_WEEZING] =
    {
        .baseHP        = 65,
        .baseAttack    = 85,	// 90
        .baseDefense   = 150,	// 120
        .baseSpeed     = 60,
        .baseSpAttack  = 90,	// 85
        .baseSpDefense = 70,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 60,
        .expYield = 172,
        .evYield_Defense   = 2,
        .item2 = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_RHYHORN] =
    {
        .baseHP        = 90,	// 80
        .baseAttack    = 100,	// 85
        .baseDefense   = 95,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,	// 30
        .baseSpDefense = 40,	// 30
        .type1 = TYPE_GROUND,
        .type2 = TYPE_ROCK,
        .catchRate = 120,
        .expYield = 69,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_RHYDON] =
    {
        .baseHP        = 115,	// 105
        .baseAttack    = 140,	// 130
        .baseDefense   = 130,	// 120
        .baseSpeed     = 40,
        .baseSpAttack  = 55,	// 45
        .baseSpDefense = 55,	// 45
        .type1 = TYPE_GROUND,
        .type2 = TYPE_ROCK,
        .catchRate = 60,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 120,	// 115
        .baseAttack    = 140,
        .baseDefense   = 170,	// 130
        .baseSpeed     = 40,
        .baseSpAttack  = 60,	// 55
        .baseSpDefense = 65,	// 55
        .type1 = TYPE_GROUND,
        .type2 = TYPE_ROCK,
        .catchRate = 30,
        .expYield = 241,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 130,
        .expYield = 110,
        .evYield_HP        = 1,
        #ifdef ITEM_EXPANSION
            .item1 = ITEM_OVAL_STONE,
        #endif
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_TRIAGE, ABILITY_CUTE_CHARM},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CHANSEY] =
    {
        .baseHP        = 250,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 105,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 30,
        .expYield = 395,
        .evYield_HP        = 2,
        .item1 = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_TRIAGE, ABILITY_NATURAL_CURE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_BLISSEY] =
    {
        .baseHP        = 255,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 135,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 30,
        .expYield = 608,
        .evYield_HP        = 3,
        .item2 = ITEM_LUCKY_EGG,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_TRIAGE, ABILITY_SERENE_GRACE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_TANGELA] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,	// 55
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,	// 100
        .baseSpDefense = 90,	// 40
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 87,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_TANGLE, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 90,	// 50
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 30,
        .expYield = 187,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_TANGLE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_KANGASKHAN] =
    {
        .baseHP        = 105,
        .baseAttack    = 95,
        .baseDefense   = 110,	// 80
        .baseSpeed     = 80,	// 90
        .baseSpAttack  = 60,	// 40
        .baseSpDefense = 70,	// 80
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 172,
        .evYield_HP        = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_SCRAPPY, ABILITY_PARENTAL_BOND},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HORSEA] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 25,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 59,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SNIPER},
        .abilityHidden = ABILITY_DAMP,
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SEADRA] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 45,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 154,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_KINGDRA] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 115,	// 95
        .baseSpDefense = 95,
        .type1 = TYPE_WATER,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 243,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .item2 = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GOLDEEN] =
    {
        .baseHP        = 40,	// 45
        .baseAttack    = 80,	// 67
        .baseDefense   = 60,
        .baseSpeed     = 65,	// 63
        .baseSpAttack  = 45,	// 35
        .baseSpDefense = 60,	// 50
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 64,
        .evYield_Attack    = 1,
        .item2 = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_BUBBLE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SEAKING] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,	// 92
        .baseDefense   = 75,	// 65
        .baseSpeed     = 85,	// 68
        .baseSpAttack  = 75,	// 65
        .baseSpDefense = 75,	// 80
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 158,
        .evYield_Attack    = 2,
        .item2 = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_BUBBLE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_STARYU] =
    {
        .baseHP        = 40,	// 30
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 80,	// 70
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 68,
        .evYield_Speed     = 1,
        .item1 = ITEM_STARDUST,
        .item2 = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_VICTORY_STAR, ABILITY_NATURAL_CURE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_STARMIE] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 115,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .type1 = TYPE_WATER,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 60,
        .expYield = 182,
        .evYield_Speed     = 2,
        .item1 = ITEM_STARDUST,
        .item2 = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_VICTORY_STAR, ABILITY_NATURAL_CURE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 145,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_ILLUSION, ABILITY_FILTER},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MR_MIME] =
    {
        .baseHP        = 70,	// 40
        .baseAttack    = 45,
        .baseDefense   = 85,	// 65
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,	// 120
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 45,
        .expYield = 161,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_ILLUSION, ABILITY_FILTER},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SCYTHER] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,	// 110
        .baseDefense   = 70,	// 80
        .baseSpeed     = 90,	// 105
        .baseSpAttack  = 45,	// 55
        .baseSpDefense = 70,	// 80
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 100,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SCIZOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .type1 = TYPE_BUG,
        .type2 = TYPE_STEEL,
        .catchRate = 25,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SMOOCHUM] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,	// 30
        .baseDefense   = 45,	// 15
        .baseSpeed     = 80,	// 65
        .baseSpAttack  = 85,
        .baseSpDefense = 80,	// 65
        .type1 = TYPE_ICE,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_REFRIGERATE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_JYNX] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,	// 50
        .baseDefense   = 55,	// 35
        .baseSpeed     = 105,	// 95
        .baseSpAttack  = 115,
        .baseSpDefense = 115,	// 95
        .type1 = TYPE_ICE,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_REFRIGERATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ELEKID] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,	// 63
        .baseDefense   = 40,	// 37
        .baseSpeed     = 95,
        .baseSpAttack  = 85,	// 65
        .baseSpDefense = 55,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 72,
        .evYield_Speed     = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_ELECTIRIZER,
        #endif
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_ELECTRIC_SURGE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ELECTABUZZ] =
    {
        .baseHP        = 65,
        .baseAttack    = 105,	// 83
        .baseDefense   = 60,	// 57
        .baseSpeed     = 95,	// 105
        .baseSpAttack  = 85,	// 95
        .baseSpDefense = 85,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed     = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_ELECTIRIZER,
        #endif
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_ELECTRIC_SURGE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 135,	// 123
        .baseDefense   = 70,	// 67
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,	// 85
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 30,
        .expYield = 243,
        .evYield_Attack    = 3,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_ELECTIRIZER,
        #endif
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_ELECTRIC_SURGE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MAGBY] =
    {
        .baseHP        = 45,
        .baseAttack    = 95,	// 75
        .baseDefense   = 40,	// 37
        .baseSpeed     = 85,	// 83
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 73,
        .evYield_Speed     = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_MAGMARIZER,
        #endif
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MAGMAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 70,	// 57
        .baseSpeed     = 85,	// 93
        .baseSpAttack  = 110,	// 100
        .baseSpDefense = 85,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpAttack  = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_MAGMARIZER,
        #endif
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 90,	// 75
        .baseAttack    = 95,
        .baseDefense   = 70,	// 67
        .baseSpeed     = 90,	// 83
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 30,
        .expYield = 243,
        .evYield_SpAttack  = 3,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_MAGMARIZER,
        #endif
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_MEGA_LAUNCHER}, // TODO (lilua): maybe flame body?
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PINSIR] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 120,	// 100
        .baseSpeed     = 85,
        .baseSpAttack  = 65,	// 55
        .baseSpDefense = 90,	// 70
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MILTANK] =
    {
        .baseHP        = 115,	// 95
        .baseAttack    = 80,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 40,
        .baseSpDefense = 90,	// 70
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Defense   = 2,
        .item1 = ITEM_MOOMOO_MILK,
        .item2 = ITEM_MOOMOO_MILK,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_TAUROS] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MAGIKARP] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 55,
        .baseSpeed     = 70,	// 80
        .baseSpAttack  = 15,
        .baseSpDefense = 20,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 40,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WIMP_OUT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_GYARADOS] =
    {
        .baseHP        = 95,
        .baseAttack    = 125,
        .baseDefense   = 75,	// 79
        .baseSpeed     = 85,	// 81
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 189,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LAPRAS] =
    {
        .baseHP        = 130,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 135,	// 95
        .type1 = TYPE_WATER,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 187,
        .evYield_HP        = 2,
        .item1 = ITEM_MYSTIC_WATER,
        .item2 = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_LIQUID_VOICE, ABILITY_TANK_SHELL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DITTO] =
    {
        .baseHP        = 50,	// 48
        .baseAttack    = 50,	// 48
        .baseDefense   = 50,	// 48
        .baseSpeed     = 50,	// 48
        .baseSpAttack  = 50,	// 48
        .baseSpDefense = 50,	// 48
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 35,
        .expYield = 101,
        .evYield_HP        = 1,
        #ifdef ITEM_EXPANSION
            .item1 = ITEM_QUICK_POWDER,
        #endif
        .item2 = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_DITTO,
        .eggGroup2 = EGG_GROUP_DITTO,
        .abilities = {ABILITY_IMPOSTER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_EEVEE] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,	// 55
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 65,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_NORMALIZE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_VAPOREON] =
    {
        .baseHP        = 95,	// 130
        .baseAttack    = 60,	// 65
        .baseDefense   = 85,	// 60
        .baseSpeed     = 65,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,	// 95
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 184,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_STORM_DRAIN},	// ABILITY_HYDROLIZE?
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_JOLTEON] =
    {
        .baseHP        = 95,	// 65
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 110,
        .baseSpDefense = 85,	// 95
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 184,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_GALVANIZE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_FLAREON] =
    {
        .baseHP        = 95,	// 65
        .baseAttack    = 130,
        .baseDefense   = 65,	// 60
        .baseSpeed     = 85,	// 65
        .baseSpAttack  = 60,	// 95
        .baseSpDefense = 110,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 184,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY},	// ABILITY_PYROLIZE?
        .abilityHidden = ABILITY_GUTS,
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ESPEON] =
    {
        .baseHP        = 95,	// 65
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,	// 95
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_MAGIC_GUARD, ABILITY_MAGIC_BOUNCE},	// ABILITY_PSYCHIC_SURGE?
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_UMBREON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 85,	// 65
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PRANKSTER, ABILITY_DARK_AURA},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,	// 65
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 85,	// 95
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 184,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
		.abilities = {ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL},	// ABILITY_HARVEST?
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 95,	// 65
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,	// 95
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
		.abilities = {ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 85,	// 65
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_PIXILATE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_PORYGON] =
    {
        .baseHP        = 85,	// 65
        .baseAttack    = 90,	// 60
        .baseDefense   = 120,	// 70
        .baseSpeed     = 50,	// 40
        .baseSpAttack  = 85,
        .baseSpDefense = 105,	// 75
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 79,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ANALYTIC, ABILITY_DOWNLOAD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_PORYGON2] =
    {
        .baseHP        = 85,
        .baseAttack    = 70,	// 80
        .baseDefense   = 90,
        .baseSpeed     = 100,	// 60
        .baseSpAttack  = 95,	// 105
        .baseSpDefense = 95,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 180,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_DOWNLOAD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,	// 80
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 145,	// 135
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_TRACE, ABILITY_DOWNLOAD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_OMANYTE] =
    {
        .baseHP        = 50,	// 35
        .baseAttack    = 50,	// 40
        .baseDefense   = 110,	// 100
        .baseSpeed     = 35,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,	// 55
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_OMASTAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,	// 60
        .baseDefense   = 135,	// 125
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 80,	// 70
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_KABUTO] =
    {
        .baseHP        = 30,
        .baseAttack    = 80,
        .baseDefense   = 100,	// 90
        .baseSpeed     = 70,	// 55
        .baseSpAttack  = 55,
        .baseSpDefense = 70,	// 45
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KABUTOPS] =
    {
        .baseHP        = 55,	// 60
        .baseAttack    = 130,	// 115
        .baseDefense   = 100,	// 105
        .baseSpeed     = 90,	// 80
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_TOUGH_CLAWS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_AERODACTYL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 130,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 180,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 50,
        .expYield = 78,
        .evYield_HP        = 1,
        .item1 = ITEM_LEFTOVERS,
        .item2 = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_GLUTTONY, ABILITY_PICKUP},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SNORLAX] =
    {
        .baseHP        = 160,
        .baseAttack    = 110,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 25,
        .expYield = 189,
        .evYield_HP        = 2,
        .item1 = ITEM_LEFTOVERS,
        .item2 = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_GLUTTONY, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_ARTICUNO] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 125,
        .type1 = TYPE_ICE,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_SNOW_CLOAK},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ZAPDOS] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_STATIC},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MOLTRES] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_DRATINI] =
    {
        .baseHP        = 45,	// 41
        .baseAttack    = 75,	// 64
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,	// 50
        .baseSpDefense = 50,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .item2 = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,	// GROWTH_SLOW
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_MULTISCALE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRAGONAIR] =
    {
        .baseHP        = 65,	// 61
        .baseAttack    = 95,	// 84
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,	// 70
        .baseSpDefense = 70,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack    = 2,
        .item2 = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,	// GROWTH_SLOW
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_MULTISCALE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRAGONITE] =
    {
        .baseHP        = 95,	// 91
        .baseAttack    = 135,	// 134
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .item2 = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_MULTISCALE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MEWTWO] =
    {
        .baseHP        = 110,	// 106
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 130,
        .baseSpAttack  = 155,	// 154
        .baseSpDefense = 90,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MEW] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .item1 = ITEM_LUM_BERRY,
        .item2 = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CHIKORITA] =	// TODO (lilua): needs 20bst
    {
        .baseHP        = 45,
        .baseAttack    = 40,	// 49
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,	// 49
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_GRASSY_SURGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BAYLEEF] =		// TODO (lilua): needs 10bst
    {
        .baseHP        = 60,
        .baseAttack    = 60,	// 62
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,	// 63
        .baseSpDefense = 80,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_GRASSY_SURGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MEGANIUM] =	// TODO (lilua): needs 50bst
    {
        .baseHP        = 80,
        .baseAttack    = 85,	// 82
        .baseDefense   = 100,
        .baseSpeed     = 80,
        .baseSpAttack  = 85,	// 83
        .baseSpDefense = 100,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 236,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_GRASSY_SURGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CYNDAQUIL] =
    {
        .baseHP        = 40,	// 39
        .baseAttack    = 55,	// 52
        .baseDefense   = 45,	// 43
        .baseSpeed     = 55,	// 65
        .baseSpAttack  = 60,
        .baseSpDefense = 65,	// 50
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_QUILAVA] =		// TODO (lilua): needs 10bst
    {
        .baseHP        = 60,	// 58
        .baseAttack    = 55,	// 64
        .baseDefense   = 50,	// 58
        .baseSpeed     = 90,	// 80
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TYPHLOSION] =	// TODO (lilua): needs 30bst
    {
        .baseHP        = 90,	// 78
        .baseAttack    = 85,	// 84
        .baseDefense   = 70,	// 78
        .baseSpeed     = 110,	// 100
        .baseSpAttack  = 110,	// 109
        .baseSpDefense = 85,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 240,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE},
        .abilityHidden = ABILITY_FLASH_FIRE,
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TOTODILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,	// 64
        .baseSpeed     = 45,	// 43
        .baseSpAttack  = 45,	// 44
        .baseSpDefense = 50,	// 48
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CROCONAW] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 60,	// 58
        .baseSpAttack  = 60,	// 59
        .baseSpDefense = 65,	// 63
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_FERALIGATR] =	// TODO (lilua): needs 45bst
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 100,
        .baseSpeed     = 80,	// 78
        .baseSpAttack  = 80,	// 79
        .baseSpDefense = 85,	// 83
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SENTRET] =
    {
        .baseHP        = 35,
        .baseAttack    = 50,	// 46
        .baseDefense   = 35,	// 34
        .baseSpeed     = 20,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 43,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SIMPLE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FURRET] =
    {
        .baseHP        = 90,	// 85
        .baseAttack    = 70,	// 76
        .baseDefense   = 60,	// 64
        .baseSpeed     = 100,	// 90
        .baseSpAttack  = 45,
        .baseSpDefense = 95,	// 55
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 90,
        .expYield = 145,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SIMPLE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HOOTHOOT] =
    {
        .baseHP        = 60,
        .baseAttack    = 30,
        .baseDefense   = 50,	// 30
        .baseSpeed     = 70,	// 50
        .baseSpAttack  = 40,	// 36
        .baseSpDefense = 60,	// 56
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 52,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NOCTOWL] =
    {
        .baseHP        = 100,
        .baseAttack    = 60,	// 50
        .baseDefense   = 80,	// 50
        .baseSpeed     = 70,
        .baseSpAttack  = 80,	// 86
        .baseSpDefense = 110,	// 96
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 158,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INSOMNIA, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LEDYBA] =
    {
        .baseHP        = 40,
        .baseAttack    = 20,
        .baseDefense   = 30,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 53,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_LEDIAN] =
    {
        .baseHP        = 70,	// 55
        .baseAttack    = 55,	// 35
        .baseDefense   = 80,	// 50
        .baseSpeed     = 85,
        .baseSpAttack  = 90,	// 55
        .baseSpDefense = 120,	// 110
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 137,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SPINARAK] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 50,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_INSOMNIA},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARIADOS] =
    {
        .baseHP        = 100,	// 70
        .baseAttack    = 100,	// 90 -> 110 -> 100
        .baseDefense   = 90,	// 70 -> 100 -> 90
        .baseSpeed     = 60,	// 40
        .baseSpAttack  = 70,	// 60
        .baseSpDefense = 60,	// 70
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 90,
        .expYield = 140,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CHINCHOU] =
    {
        .baseHP        = 105,	// 75
        .baseAttack    = 45,	// 38
        .baseDefense   = 45,	// 38
        .baseSpeed     = 70,	// 67
        .baseSpAttack  = 80,	// 56
        .baseSpDefense = 60,	// 56
        .type1 = TYPE_WATER,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 190,
        .expYield = 66,
        .evYield_HP        = 1,
        .item2 = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LANTURN] =
    {
        .baseHP        = 125,	// 125
        .baseAttack    = 50,	// 58
        .baseDefense   = 65,	// 58
        .baseSpeed     = 70,	// 67
        .baseSpAttack  = 90,	// 76
        .baseSpDefense = 80,	// 76
        .type1 = TYPE_WATER,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 75,
        .expYield = 161,
        .evYield_HP        = 2,
        .item2 = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TOGEPI] =
    {
        .baseHP        = 35,
        .baseAttack    = 20,
        .baseDefense   = 85,	// 65
        .baseSpeed     = 20,
        .baseSpAttack  = 80,	// 40
        .baseSpDefense = 55,	// 65
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 190,
        .expYield = 49,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_TOGETIC] =
    {
        .baseHP        = 85,	// 55
        .baseAttack    = 60,	// 40
        .baseDefense   = 105,	// 85
        .baseSpeed     = 80,	// 40
        .baseSpAttack  = 100,	// 80
        .baseSpDefense = 115,	// 105
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FLYING,
        .catchRate = 75,
        .expYield = 142,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_TOGEKISS] =
    {
        .baseHP        = 85,
        .baseAttack    = 60,	// 50
        .baseDefense   = 95,
        .baseSpeed     = 130,	// 80
        .baseSpAttack  = 120,
        .baseSpDefense = 115,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 245,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_NATU] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_FOREWARN, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_XATU] =
    {
        .baseHP        = 95,	// 65
        .baseAttack    = 75,	// 75
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 75,
        .expYield = 165,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MAREEP] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 30,	// 40
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 235,
        .expYield = 56,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_FUR_COAT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_FLAAFFY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 45,	// 55
        .baseSpeed     = 45,
        .baseSpAttack  = 95,	// 80
        .baseSpDefense = 70,	// 60
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 120,
        .expYield = 128,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_FUR_COAT},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_AMPHAROS] =
    {
        .baseHP        = 110,	// 90
        .baseAttack    = 70,	// 75
        .baseDefense   = 90,	// 85
        .baseSpeed     = 55,
        .baseSpAttack  = 125,	// 115
        .baseSpDefense = 90,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 230,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_DAZZLING},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_AZURILL] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 40,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FAIRY,
        .catchRate = 150,
        .expYield = 38,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MARILL] =
    {
        .baseHP        = 70,
        .baseAttack    = 30,	// 20
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 65,	// 20
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FAIRY,
        .catchRate = 190,
        .expYield = 88,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_AZUMARILL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 80,
        .baseSpeed     = 60,	// 50
        .baseSpAttack  = 65,	// 60
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FAIRY,
        .catchRate = 75,
        .expYield = 189,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BONSLY] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 45,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 255,
        .expYield = 58,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SUDOWOODO] =
    {
        .baseHP        = 60,	// 70
        .baseAttack    = 90,	// 100
        .baseDefense   = 125,	// 115
        .baseSpeed     = 85,	// 30
        .baseSpAttack  = 30,
        .baseSpDefense = 85,	// 65
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 65,
        .expYield = 144,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_DISGUISE, ABILITY_DISGUISE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HOPPIP] =
    {
        .baseHP        = 55,	// 35
        .baseAttack    = 25,	// 35
        .baseDefense   = 60,	// 40
        .baseSpeed     = 50,
        .baseSpAttack  = 25,	// 35
        .baseSpDefense = 65,	// 55
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 50,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SYMBIOSIS},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SKIPLOOM] =
    {
        .baseHP        = 65,	// 55
        .baseAttack    = 35,	// 45
        .baseDefense   = 70,	// 70
        .baseSpeed     = 80,
        .baseSpAttack  = 35,	// 45
        .baseSpDefense = 85,	// 65
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 119,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SYMBIOSIS},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_JUMPLUFF] =
    {
        .baseHP        = 75,
        .baseAttack    = 55,
        .baseDefense   = 90,	// 70
        .baseSpeed     = 10,	// 110
        .baseSpAttack  = 55,
        .baseSpDefense = 125,	// 95
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 207,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_PRANKSTER, ABILITY_FLUFFY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_AIPOM] =
    {
        .baseHP        = 75,	// 55
        .baseAttack    = 90,	// 90
        .baseDefense   = 70,	// 55
        .baseSpeed     = 105,	// 85
        .baseSpAttack  = 60,	// 40
        .baseSpDefense = 70,	// 55
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 72,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RECEIVER, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_AMBIPOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,	// 100
        .baseDefense   = 80,	// 66
        .baseSpeed     = 115,
        .baseSpAttack  = 80,	// 60
        .baseSpDefense = 80,	// 66
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 169,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TECHNICIAN, ABILITY_PICKUP},
        .abilityHidden = ABILITY_SKILL_LINK,
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SUNKERN] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 235,
        .expYield = 36,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
		.abilities = {ABILITY_MOODY, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SUNFLORA] =
    {
        .baseHP        = 80,	// 75
        .baseAttack    = 30,	// 75
        .baseDefense   = 80,	// 55
        .baseSpeed     = 30,
        .baseSpAttack  = 125,	// 105
        .baseSpDefense = 135,	// 85
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 120,
        .expYield = 149,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
		.abilities = {ABILITY_DROUGHT, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_YANMA] =
    {
        .baseHP        = 80,	// 65
        .baseAttack    = 60,	// 65
        .baseDefense   = 90,	// 45
        .baseSpeed     = 95,
        .baseSpAttack  = 120,	// 75
        .baseSpDefense = 60,	// 45
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 75,
        .expYield = 78,
        .evYield_Speed     = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_WIDE_LENS,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_YANMEGA] =
    {
        .baseHP        = 90,	// 86
        .baseAttack    = 80,	// 76
        .baseDefense   = 90,	// 86
        .baseSpeed     = 95,
        .baseSpAttack  = 120,	// 116
        .baseSpDefense = 80,	// 56
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 180,
        .evYield_Attack    = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_WIDE_LENS,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WOOPER] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,	// 45
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 50,	// 25
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 42,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DAMP, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_QUAGSIRE] =
    {
        .baseHP        = 105,	// 95
        .baseAttack    = 85,
        .baseDefense   = 80,	// 85
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,	// 65
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 90,
        .expYield = 151,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DAMP, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MURKROW] =
    {
        .baseHP        = 90,	// 60
        .baseAttack    = 95,	// 85
        .baseDefense   = 55,	// 42
        .baseSpeed     = 95,	// 91
        .baseSpAttack  = 85,	// 85
        .baseSpDefense = 55,	// 42
        .type1 = TYPE_DARK,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 81,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_PRANKSTER, ABILITY_SUPER_LUCK},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_HONCHKROW] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 55,	// 52
        .baseSpeed     = 75,	// 71
        .baseSpAttack  = 105,
        .baseSpDefense = 55,	// 52
        .type1 = TYPE_DARK,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
		.abilities = {ABILITY_SUPER_LUCK, ABILITY_INSOMNIA},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_MISDREAVUS] =
    {
        .baseHP        = 5,		// 60
        .baseAttack    = 40,	// 60
        .baseDefense   = 130,	// 60
        .baseSpeed     = 85,	// 85
        .baseSpAttack  = 190,	// 85
        .baseSpDefense = 105,	// 85
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 87,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_SHADOW_SHIELD, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MISMAGIUS] =
    {
        .baseHP        = 5,	// 5
        .baseAttack    = 60,
        .baseDefense   = 150,	// 60
        .baseSpeed     = 115,	// 105
        .baseSpAttack  = 105,
        .baseSpDefense = 220,	// 105
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_SHADOW_SHIELD, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_B] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_C] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_D] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_E] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_F] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_G] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_H] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_I] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_J] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_K] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_L] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_M] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_N] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_O] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_P] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_Q] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_R] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_S] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_T] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_U] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_V] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_W] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_X] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_Y] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_Z] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_EMARK] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN_QMARK] =
    {
        .baseHP        = 75,	// 48
        .baseAttack    = 95,	// 72
        .baseDefense   = 60,	// 48
        .baseSpeed     = 105,	// 48
        .baseSpAttack  = 95,	// 72
        .baseSpDefense = 60,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 225,
        .expYield = 118,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PROTEAN, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_WYNAUT] =
    {
        .baseHP        = 95,	// 120
        .baseAttack    = 25,	// 23
        .baseDefense   = 50,	// 48
        .baseSpeed     = 25,	// 23
        .baseSpAttack  = 25,	// 23
        .baseSpDefense = 50,	// 48
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 125,
        .expYield = 52,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_PICKUP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WOBBUFFET] =
    {
        .baseHP        = 190,
        .baseAttack    = 35,	// 33
        .baseDefense   = 60,	// 58
        .baseSpeed     = 35,	// 33
        .baseSpAttack  = 35,	// 33
        .baseSpDefense = 60,	// 58
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 142,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_SHADOW_TAG, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GIRAFARIG] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 70,	// 80
        .baseDefense   = 75,	// 65
        .baseSpeed     = 95,	// 85
        .baseSpAttack  = 95,	// 90
        .baseSpDefense = 80,	// 65
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 60,
        .expYield = 159,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DISGUISE, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PINECO] =
    {
        .baseHP        = 60,	// 50
        .baseAttack    = 75,	// 65
        .baseDefense   = 90,
        .baseSpeed     = 15,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,	// 35
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 190,
        .expYield = 58,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_STURDY, ABILITY_SHIELD_DUST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FORRETRESS] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,	// 90
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,	// 60
        .type1 = TYPE_BUG,
        .type2 = TYPE_STEEL,
        .catchRate = 75,
        .expYield = 163,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_TANK_SHELL, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DUNSPARCE] =
    {
        .baseHP        = 110,	// 100
        .baseAttack    = 65,	// 70
        .baseDefense   = 70,
        .baseSpeed     = 90,	// 45
        .baseSpAttack  = 75,	// 65
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 145,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_BERSERK},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_GLIGAR] =
    {
        .baseHP        = 75,	// 65
        .baseAttack    = 90,	// 75
        .baseDefense   = 115,	// 105
        .baseSpeed     = 95,	// 85
        .baseSpAttack  = 45,	// 35
        .baseSpDefense = 85,	// 65
        .type1 = TYPE_GROUND,
        .type2 = TYPE_FLYING,
        .catchRate = 60,
        .expYield = 86,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_POISON_HEAL, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GLISCOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 125,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 179,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_POISON_HEAL, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SNUBBULL] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,	// 50
        .baseSpeed     = 30,
        .baseSpAttack  = 30,	// 40
        .baseSpDefense = 55,	// 40
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 190,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_PIXILATE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_GRANBULL] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,	// 60
        .baseSpDefense = 70,	// 60
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 75,
        .expYield = 158,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_PIXILATE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_QWILFISH] =
    {
        .baseHP        = 70,	// 65
        .baseAttack    = 100,	// 95
        .baseDefense   = 85,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,	// 55
        .type1 = TYPE_WATER,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 88,
        .evYield_Attack    = 1,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_POISON_TOUCH, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SHUCKLE] =
    {
        .baseHP        = 30,	// 20
        .baseAttack    = 50,	// 10
        .baseDefense   = 230,
        .baseSpeed     = 10,	// 5
        .baseSpAttack  = 10,
        .baseSpDefense = 230,
        .type1 = TYPE_BUG,
        .type2 = TYPE_ROCK,
        .catchRate = 190,
        .expYield = 177,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .item1 = ITEM_BERRY_JUICE,
        .item2 = ITEM_BERRY_JUICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_CONTRARY, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_HERACROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SNEASEL] =
    {
        .baseHP        = 70,	// 55
        .baseAttack    = 105,	// 95
        .baseDefense   = 65,	// 55
        .baseSpeed     = 115,	// 115
        .baseSpAttack  = 45,	// 35
        .baseSpDefense = 75,
        .type1 = TYPE_DARK,
        .type2 = TYPE_ICE,
        .catchRate = 60,
        .expYield = 86,
        .evYield_Speed     = 1,
        .item2 = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_WEAVILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,	// 120
        .baseDefense   = 65,
        .baseSpeed     = 125,
        .baseSpAttack  = 45,
        .baseSpDefense = 85,
        .type1 = TYPE_DARK,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .item2 = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PRESSURE, ABILITY_TOUGH_CLAWS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TEDDIURSA] =
    {
        .baseHP        = 60,	// 60
        .baseAttack    = 80,
        .baseDefense   = 55,	// 50
        .baseSpeed     = 45,	// 40
        .baseSpAttack  = 55,	// 50
        .baseSpDefense = 55,	// 50
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 120,
        .expYield = 66,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_URSARING] =
    {
        .baseHP        = 90,
        .baseAttack    = 150,	// 130
        .baseDefense   = 75,
        .baseSpeed     = 60,	// 55
        .baseSpAttack  = 50,	// 75
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SLUGMA] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,	// 40
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 190,
        .expYield = 50,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_LIQUID_OOZE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MAGCARGO] =
    {
		.baseHP        = 65,	// 60
        .baseAttack    = 60,	// 50
        .baseDefense   = 120,
        .baseSpeed     = 30,
        .baseSpAttack  = 90,	// 90
        .baseSpDefense = 80,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_ROCK,
        .catchRate = 75,
        .expYield = 151,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_LIQUID_OOZE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SWINUB] =
    {
        .baseHP        = 70,	// 50
        .baseAttack    = 85,	// 50
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,	// 30
        .type1 = TYPE_ICE,
        .type2 = TYPE_GROUND,
        .catchRate = 225,
        .expYield = 50,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_FUR_COAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PILOSWINE] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,	// 100
        .baseDefense   = 45,	// 80
        .baseSpeed     = 70,	// 50
        .baseSpAttack  = 70,	// 60
        .baseSpDefense = 60,
        .type1 = TYPE_ICE,
        .type2 = TYPE_GROUND,
        .catchRate = 75,
        .expYield = 158,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_FUR_COAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MAMOSWINE] =
    {
        .baseHP        = 130,	// 110
        .baseAttack    = 130,
        .baseDefense   = 50,	// 80
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,	// 60
        .type1 = TYPE_ICE,
        .type2 = TYPE_GROUND,
        .catchRate = 50,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_FUR_COAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CORSOLA] =
    {
		.baseHP        = 75,	// 65
        .baseAttack    = 65,	// 55
        .baseDefense   = 115,	// 95
        .baseSpeed     = 25,	// 35
        .baseSpAttack  = 65,
        .baseSpDefense = 115,	// 95
        .type1 = TYPE_WATER,
        .type2 = TYPE_ROCK,
        .catchRate = 60,
        .expYield = 144,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_LUMINOUS_MOSS,
        #endif
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_REGENERATOR, ABILITY_ARMOR_TUNING},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },  // TODO (lilua): galar?

    [SPECIES_REMORAID] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,	// 65
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,	// 65
        .baseSpDefense = 35,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 60,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_HUSTLE, ABILITY_MEGA_LAUNCHER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_OCTILLERY] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,	// 105
        .baseDefense   = 80,	// 75
        .baseSpeed     = 45,
        .baseSpAttack  = 110,	// 105
        .baseSpDefense = 80,	// 75
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_MEGA_LAUNCHER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DELIBIRD] =
    {
        .baseHP        = 45,
        .baseAttack    = 90,	// 55
        .baseDefense   = 65,	// 45
        .baseSpeed     = 105,	// 75
        .baseSpAttack  = 75,	// 65
        .baseSpDefense = 105,	// 45
        .type1 = TYPE_ICE,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 116,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MANTYKE] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 25,
        .expYield = 69,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MANTINE] =
    {
		.baseHP        = 85,
        .baseAttack    = 50,	// 40
        .baseDefense   = 80,	// 70
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 140,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 25,
        .expYield = 170,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB},
        .abilityHidden = ABILITY_WATER_VEIL,
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SKARMORY] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 140,
        .baseSpeed     = 70,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_FLYING,
        .catchRate = 25,
        .expYield = 163,
        .evYield_Defense   = 2,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_HOUNDOUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 40,	// 30
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FIRE,
        .catchRate = 120,
        .expYield = 66,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_HOUNDOOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 70,	// 50
        .baseSpeed     = 95,
        .baseSpAttack  = 110,
        .baseSpDefense = 90,	// 80
        .type1 = TYPE_DARK,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 175,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_QUICK_FEET, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_PHANPY] =
    {
        .baseHP        = 80,	// 90
        .baseAttack    = 80,	// 60
        .baseDefense   = 50,	// 60
        .baseSpeed     = 60,	// 40
        .baseSpAttack  = 30,	// 40
        .baseSpDefense = 30,	// 40
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 120,
        .expYield = 66,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DONPHAN] =
    {
        .baseHP        = 120,	// 90
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 40,	// 50
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_STEEL,
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_HEAVY_METAL, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_STANTLER] =
    {
        .baseHP        = 105,	// 73
        .baseAttack    = 105,	// 95
        .baseDefense   = 65,	// 62
        .baseSpeed     = 85,
        .baseSpAttack  = 95,	// 85
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 163,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PSYCHIC_SURGE, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SMEARGLE] =
    {
        .baseHP        = 55,
        .baseAttack    = 30,	// 20
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 30,	// 20
        .baseSpDefense = 45,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 88,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
		.abilities = {ABILITY_OWN_TEMPO, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_RAIKOU] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_VOLT_ABSORB},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ENTEI] =
    {
        .baseHP        = 115,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 3,
        .expYield = 261,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SUICUNE] =
    {
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 115,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LARVITAR] =
    {
        .baseHP        = 70,	// 50
        .baseAttack    = 85,	// 64
        .baseDefense   = 90,	// 50
        .baseSpeed     = 55,	// 41
        .baseSpAttack  = 65,	// 45
        .baseSpDefense = 70,	// 50
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,	// GROWTH_SLOW
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_GUTS, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_PUPITAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,	// 84
        .baseDefense   = 90,	// 70
        .baseSpeed     = 55,	// 51
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_TYRANITAR] =
    {
        .baseHP        = 100,
        .baseAttack    = 135,	// 134
        .baseDefense   = 110,
        .baseSpeed     = 65,	// 61
        .baseSpAttack  = 95,
        .baseSpDefense = 100,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_DARK_AURA, ABILITY_SAND_STREAM},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LUGIA] =
    {
        .baseHP        = 110,	// 106
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 100,	// 110
        .baseSpAttack  = 90,
        .baseSpDefense = 155,	// 154
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_MULTISCALE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_HO_OH] =
    {
        .baseHP        = 106,	// 106
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,	// 110
        .baseSpDefense = 155,	// 154
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpDefense = 3,
        .item1 = ITEM_SACRED_ASH,
        .item2 = ITEM_SACRED_ASH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CELEBI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_FAIRY,	// TYPE_PSYCHIC
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .item1 = ITEM_LUM_BERRY,
        .item2 = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TREECKO] =		// TODO (lilua): needs 25bst
    {
        .baseHP        = 40,
        .baseAttack    = 50,	// 45
        .baseDefense   = 30,	// 35
        .baseSpeed     = 70,
        .baseSpAttack  = 60,	// 65
        .baseSpDefense = 45,	// 55
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_OVERGROW, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GROVYLE] =
    {
        .baseHP        = 55,	// 50
        .baseAttack    = 75,	// 65
        .baseDefense   = 45,
        .baseSpeed     = 90,	// 95
        .baseSpAttack  = 80,	// 85
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_OVERGROW, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SCEPTILE] =	// TODO (lilua): needs 30bst
    {
        .baseHP        = 70,
        .baseAttack    = 125,	// 85
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 85,	// 105
        .baseSpDefense = 85,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 239,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_OVERGROW, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TORCHIC] =		// TODO (lilua): needs 25bst
    {
        .baseHP        = 45,
        .baseAttack    = 50,	// 60
        .baseDefense   = 35,	// 40
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_COMBUSKEN] =	// TODO (lilua): needs 15bst
    {
        .baseHP        = 60,
        .baseAttack    = 80,	// 85
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 80,	// 85
        .baseSpDefense = 60,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BLAZIKEN] =	// TODO (lilua): needs 50bst
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MUDKIP] =		// TODO (lilua): needs -5bst
    {
        .baseHP        = 25,	// 50
        .baseAttack    = 55,	// 70
        .baseDefense   = 75,	// 50
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,	// 50
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MARSHTOMP] =	// TODO (lilua): needs -5bst
    {
        .baseHP        = 70,
        .baseAttack    = 80,	// 85
        .baseDefense   = 75,	// 70
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,	// 70
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SWAMPERT] =	// TODO (lilua): needs 45bst
    {
        .baseHP        = 100,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 241,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_STAMINA},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_POOCHYENA] =
    {
        .baseHP        = 35,
        .baseAttack    = 70,	// 55
        .baseDefense   = 50,	// 35
        .baseSpeed     = 35,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 255,
        .expYield = 56,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MIGHTYENA] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 80,	// 70
        .baseSpeed     = 80,	// 70
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 127,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_DARK_AURA},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_ZIGZAGOON] =
    {
        .baseHP        = 40,	// 38
        .baseAttack    = 30,
        .baseDefense   = 45,	// 41
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,	// 41
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .item1 = ITEM_POTION,
        .item2 = ITEM_REVIVE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LINOONE] =
    {
        .baseHP        = 80,	// 78
        .baseAttack    = 75,	// 70
        .baseDefense   = 65,	// 61
        .baseSpeed     = 130,	// 100
        .baseSpAttack  = 60,	// 50
        .baseSpDefense = 65,	// 61
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 90,
        .expYield = 147,
        .evYield_Speed     = 2,
        .item1 = ITEM_POTION,
        .item2 = ITEM_MAX_REVIVE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_LIMBER},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_WURMPLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 45,	// 35
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP        = 1,
        .item1 = ITEM_PECHA_BERRY,
        .item2 = ITEM_BRIGHT_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SILCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,	// 35
        .baseDefense   = 50,	// 55
        .baseSpeed     = 25,	// 15
        .baseSpAttack  = 20,	// 25
        .baseSpDefense = 50,	// 25
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_FILTER},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_BEAUTIFLY] =
    {
        .baseHP        = 65,	// 60
        .baseAttack    = 70,
        .baseDefense   = 60,	// 50
        .baseSpeed     = 85,	// 65
        .baseSpAttack  = 100,
        .baseSpDefense = 60,	// 50
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 178,
        .evYield_SpAttack  = 3,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_SHED_SHELL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CASCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,	// 35
        .baseDefense   = 50,	// 55
        .baseSpeed     = 25,	// 15
        .baseSpAttack  = 20,	// 25
        .baseSpDefense = 50,	// 25
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_FILTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DUSTOX] =
    {
        .baseHP        = 85,	// 60
        .baseAttack    = 60,	// 50
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,	// 50
        .baseSpDefense = 100,	// 90
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpDefense = 3,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_SHED_SHELL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LOTAD] =
    {
        .baseHP        = 45,	// 40
        .baseAttack    = 35,	// 30
        .baseDefense   = 35,	// 30
        .baseSpeed     = 35,	// 30
        .baseSpAttack  = 55,	// 40
        .baseSpDefense = 60,	// 50
        .type1 = TYPE_WATER,
        .type2 = TYPE_GRASS,
        .catchRate = 255,
        .expYield = 44,
        .evYield_SpDefense = 1,
        .item2 = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LOMBRE] =
    {
        .baseHP        = 65,	// 60
        .baseAttack    = 50,
        .baseDefense   = 60,	// 50
        .baseSpeed     = 60,	// 50
        .baseSpAttack  = 85,	// 60
        .baseSpDefense = 75,	// 70
        .type1 = TYPE_WATER,
        .type2 = TYPE_GRASS,
        .catchRate = 120,
        .expYield = 119,
        .evYield_SpDefense = 2,
        .item2 = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LUDICOLO] =
    {
        .baseHP        = 95,	// 80
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,	// 100
        .type1 = TYPE_WATER,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 216,
        .evYield_SpDefense = 3,
        .item2 = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_DANCER, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SEEDOT] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 255,
        .expYield = 44,
        .evYield_Defense   = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_POWER_HERB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NUZLEAF] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,	// 70
        .baseDefense   = 50,	// 40
        .baseSpeed     = 75,	// 60
        .baseSpAttack  = 65,	// 60
        .baseSpDefense = 60,	// 40
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DARK,
        .catchRate = 120,
        .expYield = 119,
        .evYield_Attack    = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_POWER_HERB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SHIFTRY] =
    {
        .baseHP        = 90,
        .baseAttack    = 110,	// 100
        .baseDefense   = 55,	// 60
        .baseSpeed     = 95,	// 80
        .baseSpAttack  = 90,
        .baseSpDefense = 65,	// 60
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 216,
        .evYield_Attack    = 3,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_POWER_HERB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TAILLOW] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,	// 55
        .baseDefense   = 40,	// 30
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 200,
        .expYield = 54,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_GUTS, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SWELLOW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 80,	// 60
        .baseSpeed     = 135,	// 125
        .baseSpAttack  = 75,
        .baseSpDefense = 50,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 159,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_GUTS, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WINGULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,	// 30
        .baseDefense   = 40,	// 30
        .baseSpeed     = 85,
        .baseSpAttack  = 65,	// 55
        .baseSpDefense = 50,	// 30
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 54,
        .evYield_Speed     = 1,
        #ifdef ITEM_EXPANSION
            .item1 = ITEM_PRETTY_WING,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_PELIPPER] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,	// 95
        .baseSpDefense = 80,	// 70
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 154,
        .evYield_Defense   = 2,
        #ifdef ITEM_EXPANSION
            .item1 = ITEM_PRETTY_WING,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_DRIZZLE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_RALTS] =
    {
        .baseHP        = 35,	// 28
        .baseAttack    = 25,
        .baseDefense   = 55,	// 25
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,	// 35
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 235,
        .expYield = 40,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_TELEPATHY, ABILITY_TRACE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_KIRLIA] =
    {
        .baseHP        = 40,	// 38
        .baseAttack    = 45,	// 35
        .baseDefense   = 55,	// 35
        .baseSpeed     = 60,	// 50
        .baseSpAttack  = 75,	// 65
        .baseSpDefense = 55,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 120,
        .expYield = 97,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_TELEPATHY, ABILITY_TRACE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_GARDEVOIR] =
    {
        .baseHP        = 70,	// 68
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 125,
        .baseSpDefense = 115,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 45,
        .expYield = 233,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MAGIC_GUARD, ABILITY_TRACE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_GALLADE] =
    {
        .baseHP        = 90,	// 68
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,	// 65
        .baseSpDefense = 115,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 233,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MAGIC_GUARD, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SURSKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,	// 30
        .baseDefense   = 55,	// 32
        .baseSpeed     = 65,
        .baseSpAttack  = 80,	// 50
        .baseSpDefense = 65,	// 52
        .type1 = TYPE_BUG,
        .type2 = TYPE_WATER,
        .catchRate = 200,
        .expYield = 54,
        .evYield_Speed     = 1,
        #ifdef ITEM_EXPANSION
            .item1 = ITEM_HONEY,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MASQUERAIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 90,	// 62
        .baseSpeed     = 90,	// 80
        .baseSpAttack  = 80,	// 100
        .baseSpDefense = 115,	// 82
        .type1 = TYPE_BUG,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 159,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .item2 = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SHROOMISH] =
    {
        .baseHP        = 65,	// 60
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 30,	// 35
        .baseSpAttack  = 55,	// 40
        .baseSpDefense = 55,	// 60
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 255,
        .expYield = 59,
        .evYield_HP        = 1,
        .item1 = ITEM_TINY_MUSHROOM,
        .item2 = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BRELOOM] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 120,	// 130
        .baseDefense   = 100,	// 80
        .baseSpeed     = 70,
        .baseSpAttack  = 70,	// 60
        .baseSpDefense = 70,	// 60
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FIGHTING,
        .catchRate = 90,
        .expYield = 161,
        .evYield_Attack    = 2,
        .item1 = ITEM_TINY_MUSHROOM,
        .item2 = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_TECHNICIAN, ABILITY_POISON_HEAL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SLAKOTH] =
    {
        .baseHP        = 80,	// 60
        .baseAttack    = 80,	// 60
        .baseDefense   = 80,	// 60
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TRUANT, ABILITY_DEFEATIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_VIGOROTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 120,
        .expYield = 154,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SLAKING] =
    {
        .baseHP        = 150,
        .baseAttack    = 160,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 95,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 252,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TRUANT, ABILITY_DEFEATIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NINCADA] =
    {
        .baseHP        = 35,	// 31
        .baseAttack    = 50,	// 45
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,	// 30
        .type1 = TYPE_BUG,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 53,
        .evYield_Defense   = 1,
        .item2 = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_NINJASK] =
    {
        .baseHP        = 75,	// 61
        .baseAttack    = 90,
        .baseDefense   = 50,	// 45
        .baseSpeed     = 160,
        .baseSpAttack  = 70,	// 50
        .baseSpDefense = 50,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 160,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SHEDINJA] =
    {
        .baseHP        = 1,
        .baseAttack    = 50,	// 90
        .baseDefense   = 30,	// 45
        .baseSpeed     = 90,	// 40
        .baseSpAttack  = 90,	// 30
        .baseSpDefense = 40,	// 30
        .type1 = TYPE_BUG,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 83,
        .evYield_HP        = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_WONDER_GUARD, ABILITY_WONDER_GUARD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WHISMUR] =
    {
        .baseHP        = 65,	// 64
        .baseAttack    = 55,	// 51
        .baseDefense   = 25,	// 23
        .baseSpeed     = 30,	// 28
        .baseSpAttack  = 60,	// 51
        .baseSpDefense = 30,	// 23
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 48,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_BERSERK},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_LOUDRED] =
    {
        .baseHP        = 85,	// 84
        .baseAttack    = 75,	// 71
        .baseDefense   = 45,	// 43
        .baseSpeed     = 60,	// 48
        .baseSpAttack  = 80,	// 71
        .baseSpDefense = 50,	// 43
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 120,
        .expYield = 126,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_BERSERK},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_EXPLOUD] =
    {
        .baseHP        = 105,	// 104
        .baseAttack    = 95,	// 91
        .baseDefense   = 65,	// 63
        .baseSpeed     = 70,	// 68
        .baseSpAttack  = 100,	// 91
        .baseSpDefense = 70,	// 73
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 221,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_BERSERK},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MAKUHITA] =
    {
        .baseHP        = 85,	// 72
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,	// 20
        .baseSpDefense = 50,	// 30
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 180,
        .expYield = 47,
        .evYield_HP        = 1,
        .item2 = ITEM_BLACK_BELT,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_THICK_FAT, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_HARIYAMA] =
    {
        .baseHP        = 155,	// 144
        .baseAttack    = 120,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 70,	// 40
        .baseSpDefense = 80,	// 60
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 200,
        .expYield = 166,
        .evYield_HP        = 2,
        .item2 = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_THICK_FAT, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NOSEPASS] =
    {
        .baseHP        = 60,	// 30
        .baseAttack    = 35,	// 45
        .baseDefense   = 155,	// 135
        .baseSpeed     = 40,	// 30
        .baseSpAttack  = 75,	// 45
        .baseSpDefense = 140,	// 90
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 255,
        .expYield = 75,
        .evYield_Defense   = 1,
        .item2 = ITEM_MAGNET,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_STEELWORKER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PROBOPASS] =
    {
        .baseHP        = 65,	// 60
        .baseAttack    = 55,
        .baseDefense   = 150,	// 145
        .baseSpeed     = 40,
        .baseSpAttack  = 90,	// 75
        .baseSpDefense = 170,	// 150
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .item2 = ITEM_MAGNET,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_STEELWORKER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SKITTY] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_NORMALIZE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_DELCATTY] =
    {
        .baseHP        = 75,	// 70
        .baseAttack    = 90,	// 65
        .baseDefense   = 65,
        .baseSpeed     = 110,	// 90
        .baseSpAttack  = 85,	// 55
        .baseSpDefense = 55,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 60,
        .expYield = 140,
        .evYield_HP        = 1,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_NORMALIZE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SABLEYE] =
    {
        .baseHP        = 85,	// 50
        .baseAttack    = 60,	// 75
        .baseDefense   = 75,
        .baseSpeed     = 120,	// 50
        .baseSpAttack  = 45,	// 65
        .baseSpDefense = 75,	// 65
        .type1 = TYPE_DARK,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 133,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_WIDE_LENS,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_PRANKSTER, ABILITY_STALL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MAWILE] =
    {
        .baseHP        = 70,	// 50
        .baseAttack    = 90,	// 85
        .baseDefense   = 95,	// 85
        .baseSpeed     = 50,
        .baseSpAttack  = 65,	// 55
        .baseSpDefense = 95,	// 55
        .type1 = TYPE_STEEL,
        .type2 = TYPE_FAIRY,
        .catchRate = 45,
        .expYield = 133,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_IRON_BALL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_FAIRY_AURA, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_ARON] =
    {
        .baseHP        = 70,	// 50
        .baseAttack    = 60,	// 70
        .baseDefense   = 110,	// 100
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_ROCK,
        .catchRate = 180,
        .expYield = 66,
        .evYield_Defense   = 1,
        .item2 = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_LIGHT_METAL, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_LAIRON] =
    {
        .baseHP        = 75,	// 60
        .baseAttack    = 90,
        .baseDefense   = 160,	// 140
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,	// 50
        .type1 = TYPE_STEEL,
        .type2 = TYPE_ROCK,
        .catchRate = 90,
        .expYield = 151,
        .evYield_Defense   = 2,
        .item2 = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_STURDY, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_AGGRON] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 110,
        .baseDefense   = 180,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,	// 60
        .type1 = TYPE_STEEL,
        .type2 = TYPE_ROCK,
        .catchRate = 45,
        .expYield = 239,
        .evYield_Defense   = 3,
        .item2 = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_HEAVY_METAL, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MEDITITE] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,	// 40
        .baseSpDefense = 65,	// 55
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 180,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_PURE_POWER, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MEDICHAM] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,	// 60
        .baseDefense   = 75,
        .baseSpeed     = 100,	// 80
        .baseSpAttack  = 90,	// 60
        .baseSpDefense = 75,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 90,
        .expYield = 144,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_PURE_POWER, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ELECTRIKE] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,	// 45
        .baseDefense   = 40,
        .baseSpeed     = 70,	// 65
        .baseSpAttack  = 50,	// 65
        .baseSpDefense = 40,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 120,
        .expYield = 59,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MANECTRIC] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,	// 75
        .baseDefense   = 50,	// 60
        .baseSpeed     = 110,	// 105
        .baseSpAttack  = 110,	// 105
        .baseSpDefense = 80,	// 60
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 166,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PLUSLE] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 60,	// 50
        .baseDefense   = 50,	// 40
        .baseSpeed     = 125,	// 95
        .baseSpAttack  = 105,	// 85
        .baseSpDefense = 75,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_CELL_BATTERY,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_PLUS, ABILITY_BATTERY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MINUN] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 60,	// 40
        .baseDefense   = 75,	// 50
        .baseSpeed     = 105,	// 95
        .baseSpAttack  = 125,	// 75
        .baseSpDefense = 50,	// 85
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_CELL_BATTERY,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_PLUS, ABILITY_BATTERY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_VOLBEAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,	// 73
        .baseDefense   = 55,	// 75
        .baseSpeed     = 135,
        .baseSpAttack  = 70,	// 47
        .baseSpDefense = 75,	// 85
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 150,
        .expYield = 151,
        .evYield_Speed     = 1,
        .item2 = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_DAZZLING},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_ILLUMISE] =
    {
        .baseHP        = 70,	// 65
        .baseAttack    = 35,	// 47
        .baseDefense   = 60,	// 75
        .baseSpeed     = 130,	// 85
        .baseSpAttack  = 85,	// 73
        .baseSpDefense = 75,	// 85
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 150,
        .expYield = 151,
        .evYield_Speed     = 1,
        .item2 = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
		.abilities = {ABILITY_SHIELD_DUST, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_BUDEW] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 56,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_FLOWER_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ROSELIA] =
    {
        .baseHP        = 60,	// 50
        .baseAttack    = 60,
        .baseDefense   = 65,	// 45
        .baseSpeed     = 85,	// 65
        .baseSpAttack  = 115,	// 100
        .baseSpDefense = 125,	// 80
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 150,
        .expYield = 140,
        .evYield_SpAttack  = 2,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_FLOWER_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ROSERADE] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,	// 70
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 125,	// 105
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 232,
        .evYield_SpAttack  = 3,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_TECHNICIAN, ABILITY_FLOWER_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GULPIN] =
    {
        .baseHP        = 70,	// 70
        .baseAttack    = 45,	// 43
        .baseDefense   = 55,	// 53
        .baseSpeed     = 40,
        .baseSpAttack  = 45,	// 43
        .baseSpDefense = 55,	// 53
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 225,
        .expYield = 60,
        .evYield_HP        = 1,
        .item1 = ITEM_ORAN_BERRY,
        .item2 = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LIQUID_OOZE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SWALOT] =
    {
        .baseHP        = 100,	// 100
        .baseAttack    = 80,	// 73
        .baseDefense   = 70,	// 83
        .baseSpeed     = 55,
        .baseSpAttack  = 85,	// 73
        .baseSpDefense = 70,	// 83
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 163,
        .evYield_HP        = 2,
        .item1 = ITEM_ORAN_BERRY,
        .item2 = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LIQUID_OOZE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CARVANHA] =
    {
        .baseHP        = 55,	// 45
        .baseAttack    = 100,	// 90
        .baseDefense   = 20,
        .baseSpeed     = 40,	// 65
        .baseSpAttack  = 75,	// 65
        .baseSpDefense = 20,
        .type1 = TYPE_WATER,
        .type2 = TYPE_DARK,
        .catchRate = 225,
        .expYield = 61,
        .evYield_Attack    = 1,
        .item2 = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SHARPEDO] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 140,	// 120
        .baseDefense   = 35,	// 40
        .baseSpeed     = 60,	// 95
        .baseSpAttack  = 105,	// 95
        .baseSpDefense = 45,	// 40
        .type1 = TYPE_WATER,
        .type2 = TYPE_DARK,
        .catchRate = 60,
        .expYield = 161,
        .evYield_Attack    = 2,
        .item2 = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WAILMER] =
    {
        .baseHP        = 150,	// 130
        .baseAttack    = 80,	// 70
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,	// 35
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 125,
        .expYield = 80,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_WATER_VEIL, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WAILORD] =
    {
        .baseHP        = 205,	// 170
        .baseAttack    = 80,	// 90
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 100,	// 90
        .baseSpDefense = 50,	// 45
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 175,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_WATER_VEIL, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NUMEL] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 50,	// 40
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_STAMINA},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CAMERUPT] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,	// 100
        .baseDefense   = 90,	// 70
        .baseSpeed     = 30,	// 40
        .baseSpAttack  = 115,	// 105
        .baseSpDefense = 75,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GROUND,
        .catchRate = 150,
        .expYield = 161,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_STAMINA},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TORKOAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,	// 85
        .baseDefense   = 170,	// 140
        .baseSpeed     = 20,
        .baseSpAttack  = 75,	// 85
        .baseSpDefense = 65,	// 70
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 90,
        .expYield = 165,
        .evYield_Defense   = 2,
        .item2 = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STEELWORKER, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SPOINK] =
    {
        .baseHP        = 60,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 80,	// 60
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 255,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_GRUMPIG] =
    {
        .baseHP        = 80,	// 80
        .baseAttack    = 45,
        .baseDefense   = 55,	// 65
        .baseSpeed     = 80,
        .baseSpAttack  = 100,	// 90
        .baseSpDefense = 120,	// 110
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 60,
        .expYield = 165,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_DANCER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SPINDA] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,	// 60
        .baseSpDefense = 110,	// 60
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 126,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_CONTRARY, ABILITY_DANCER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TRAPINCH] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 45,
        .baseSpeed     = 10,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack    = 1,
        .item2 = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_ARENA_TRAP},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_VIBRAVA] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 100,	// 70
        .baseSpAttack  = 65,	// 50
        .baseSpDefense = 50,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_DRAGON,
        .catchRate = 120,
        .expYield = 119,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_LEVITATE, ABILITY_COMPOUND_EYES},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FLYGON] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 110,	// 100
        .baseSpAttack  = 100,	// 80
        .baseSpDefense = 80,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 234,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_LEVITATE, ABILITY_COMPOUND_EYES},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CACNEA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 85,	// 40
        .baseSpeed     = 35,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpAttack  = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_STICKY_BARB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_IRON_BARBS},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CACTURNE] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 115,	// 60
        .baseSpeed     = 60,	// 55
        .baseSpAttack  = 115,
        .baseSpDefense = 65,	// 60
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DARK,
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_STICKY_BARB,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_IRON_BARBS},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SWABLU] =
    {
        .baseHP        = 65,	// 65
        .baseAttack    = 50,	// 40
        .baseDefense   = 70,	// 60
        .baseSpeed     = 55,	// 50
        .baseSpAttack  = 75,	// 40
        .baseSpDefense = 110,	// 75
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),	// 50
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_MISTY_SURGE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ALTARIA] =
    {
        .baseHP        = 80,	// 75
        .baseAttack    = 75,	// 70
        .baseDefense   = 85,	// 90
        .baseSpeed     = 105,	// 80
        .baseSpAttack  = 90,	// 70
        .baseSpDefense = 130,	// 105
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 172,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(75),	// 50
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_MISTY_SURGE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ZANGOOSE] =
    {
        .baseHP        = 80,	// 73
        .baseAttack    = 125,	// 115
        .baseDefense   = 70,	// 60
        .baseSpeed     = 90,	// 90
        .baseSpAttack  = 60,
        .baseSpDefense = 70,	// 60
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 90,
        .expYield = 160,
        .evYield_Attack    = 2,
        .item2 = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GUTS, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SEVIPER] =
    {
        .baseHP        = 80,	// 73
        .baseAttack    = 60,	// 100
        .baseDefense   = 70,	// 60
        .baseSpeed     = 90,	// 65
        .baseSpAttack  = 125,	// 100
        .baseSpDefense = 70,	// 60
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 90,
        .expYield = 160,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_SHED_SHELL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_LUNATONE] =
    {
		.baseHP        = 90,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 60,	// 70
        .baseSpAttack  = 115,	// 95
        .baseSpDefense = 85,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 161,
        .evYield_SpAttack  = 2,
        .item1 = ITEM_STARDUST,
        .item2 = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},	// ABILITY_GRAVITATE
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SOLROCK] =
    {
		.baseHP        = 90,
        .baseAttack    = 115,	// 95
        .baseDefense   = 85,
        .baseSpeed     = 60,	// 70
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 161,
        .evYield_Attack    = 2,
        .item1 = ITEM_STARDUST,
        .item2 = ITEM_SUN_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},	// ABILITY_GRAVITATE
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BARBOACH] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,	// 48
        .baseDefense   = 45,	// 43
        .baseSpeed     = 60,
        .baseSpAttack  = 70,	// 46
        .baseSpDefense = 65,	// 41
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 190,
        .expYield = 58,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_WHISCASH] =
    {
        .baseHP        = 100,	// 110
        .baseAttack    = 80,	// 78
        .baseDefense   = 75,	// 73
        .baseSpeed     = 60,
        .baseSpAttack  = 95,	// 76
        .baseSpDefense = 105,	// 71
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 75,
        .expYield = 164,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_THICK_FAT, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CORPHISH] =
    {
        .baseHP        = 40,	// 43
        .baseAttack    = 70,	// 80
        .baseDefense   = 65,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,	// 50
        .baseSpDefense = 35,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 205,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_MARVEL_SCALE, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CRAWDAUNT] =
    {
        .baseHP        = 75,	// 63
        .baseAttack    = 100,	// 120
        .baseDefense   = 95,	// 85
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,	// 55
        .type1 = TYPE_WATER,
        .type2 = TYPE_DARK,
        .catchRate = 155,
        .expYield = 164,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_MARVEL_SCALE, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BALTOY] =
    {
        .baseHP        = 50,	// 40
        .baseAttack    = 30,	// 40
        .baseDefense   = 50,	// 55
        .baseSpeed     = 75,	// 55
        .baseSpAttack  = 30,	// 40
        .baseSpDefense = 55,	// 70
        .type1 = TYPE_GROUND,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 255,
        .expYield = 60,
        .evYield_SpDefense = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_LIGHT_CLAY,
        #endif
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_TRUANT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CLAYDOL] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 55,	// 70
        .baseDefense   = 100,	// 105
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,	// 120
        .type1 = TYPE_GROUND,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 90,
        .expYield = 175,
        .evYield_SpDefense = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_LIGHT_CLAY,
        #endif
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_TRUANT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_LILEEP] =
    {
        .baseHP        = 70,	// 66
        .baseAttack    = 45,	// 41
        .baseDefense   = 60,	// 77
        .baseSpeed     = 25,	// 23
        .baseSpAttack  = 65,	// 61
        .baseSpDefense = 90,	// 87
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 71,
        .evYield_SpDefense = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_BIG_ROOT,
        #endif
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CRADILY] =
    {
        .baseHP        = 100,	// 86
        .baseAttack    = 80,	// 81
        .baseDefense   = 110,	// 97
        .baseSpeed     = 45,	// 43
        .baseSpAttack  = 85,	// 81
        .baseSpDefense = 120,	// 107
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpDefense = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_BIG_ROOT,
        #endif
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ANORITH] =
    {
        .baseHP        = 45,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 30,	// 40
        .baseSpDefense = 40,	// 50
        .type1 = TYPE_ROCK,
        .type2 = TYPE_BUG,
        .catchRate = 45,
        .expYield = 71,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_ARMALDO] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 120,	// 100
        .baseSpeed     = 75,	// 45
        .baseSpAttack  = 70,
        .baseSpDefense = 100,	// 80
        .type1 = TYPE_ROCK,
        .type2 = TYPE_BUG,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_EMERGENCY_EXIT, ABILITY_EMERGENCY_EXIT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FEEBAS] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 20,
        .baseSpeed     = 80,
        .baseSpAttack  = 10,
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 40,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MILOTIC] =
    {
        .baseHP        = 115,	// 95
        .baseAttack    = 80,	// 60
        .baseDefense   = 80,	// 79
        .baseSpeed     = 105,	// 81
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 189,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_MARVEL_SCALE, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CASTFORM] = // TODO (lilua): possible random ability (ie [Drought OR Drizzle] & [Snow Warning OR Sand Stream])
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 147,
        .evYield_HP        = 1,
        .item1 = ITEM_MYSTIC_WATER,
        .item2 = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_FORECAST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CASTFORM_SUNNY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 147,
        .evYield_HP        = 1,
        .item1 = ITEM_MYSTIC_WATER,
        .item2 = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_FORECAST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CASTFORM_RAINY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 147,
        .evYield_HP        = 1,
        .item1 = ITEM_MYSTIC_WATER,
        .item2 = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_FORECAST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CASTFORM_SNOWY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 147,
        .evYield_HP        = 1,
        .item1 = ITEM_MYSTIC_WATER,
        .item2 = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_FORECAST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

//    [SPECIES_CASTFORM_SANDY] = TODO (lilua): unfair for castform in sandstorm \
    {0},

    [SPECIES_KECLEON] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 90,
        .baseDefense   = 75,	// 70
        .baseSpeed     = 40,
        .baseSpAttack  = 75,	// 60
        .baseSpDefense = 150,	// 120
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 200,
        .expYield = 154,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_COLOR_CHANGE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SHUPPET] =
    {
        .baseHP        = 45,	// 44
        .baseAttack    = 95,	// 75
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,	// 63
        .baseSpDefense = 35,	// 33
        .type1 = TYPE_GHOST,
        .type2 = TYPE_NORMAL,
        .catchRate = 225,
        .expYield = 59,
        .evYield_Attack    = 1,
        .item2 = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_PRANKSTER, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_BANETTE] =
    {
        .baseHP        = 65,	// 64
        .baseAttack    = 125,	// 115
        .baseDefense   = 75,	// 65
        .baseSpeed     = 65,
        .baseSpAttack  = 85,	// 83
        .baseSpDefense = 65,	// 63
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 159,
        .evYield_Attack    = 2,
        .item2 = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_PRANKSTER, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_DUSKULL] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 90,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 90,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 190,
        .expYield = 59,
        .evYield_SpDefense = 1,
        .item2 = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_DUSCLOPS] =
    {
        .baseHP        = 45,	// 40
        .baseAttack    = 80,	// 70
        .baseDefense   = 135,	// 130
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
        .baseSpDefense = 135,	// 130
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 90,
        .expYield = 159,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .item2 = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MUMMY, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_DUSKNOIR] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 135,
        .baseSpeed     = 45,
        .baseSpAttack  = 85,	// 65
        .baseSpDefense = 135,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 236,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .item2 = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MUMMY, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TROPIUS] =
    {
        .baseHP        = 105,	// 99
        .baseAttack    = 80,	// 68
        .baseDefense   = 105,	// 83
        .baseSpeed     = 75,	// 51
        .baseSpAttack  = 85,	// 72
        .baseSpDefense = 80,	// 87
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 200,
        .expYield = 161,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
		.abilities = {ABILITY_HARVEST, ABILITY_AERILATE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CHINGLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 60,	// 50
        .baseSpeed     = 45,
        .baseSpAttack  = 55,	// 65
        .baseSpDefense = 130,	// 50
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 120,
        .expYield = 57,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CHIMECHO] =
    {
		.baseHP        = 75,
        .baseAttack    = 50,
        .baseDefense   = 80,
        .baseSpeed     = 70,	// 65
        .baseSpAttack  = 95,
        .baseSpDefense = 180,	// 90
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .item2 = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ABSOL] =
    {
        .baseHP        = 60,	// 65
        .baseAttack    = 135,	// 130
        .baseDefense   = 60,
        .baseSpeed     = 85,	// 75
        .baseSpAttack  = 75,
        .baseSpDefense = 100,	// 60
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 30,
        .expYield = 163,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PRESSURE, ABILITY_SUPER_LUCK},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SNORUNT] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,	// 50
        .baseDefense   = 40,	// 50
        .baseSpeed     = 40,	// 50
        .baseSpAttack  = 70,	// 50
        .baseSpDefense = 50,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 190,
        .expYield = 60,
        .evYield_HP        = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_SNOWBALL,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GLALIE] =
    {
        .baseHP        = 140,	// 80
        .baseAttack    = 80,	// 80
        .baseDefense   = 70,	// 80
        .baseSpeed     = 80,	// 80
        .baseSpAttack  = 60,	// 80
        .baseSpDefense = 70,	// 80
        .type1 = TYPE_ICE,
        .type2 = TYPE_STEEL,
        .catchRate = 75,
        .expYield = 168,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_SLUSH_RUSH, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FROSLASS] =
    {
        .baseHP        = 80,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .type1 = TYPE_ICE,
        .type2 = TYPE_GHOST,
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed     = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SPHEAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 45,	// 25
        .baseSpAttack  = 55,
        .baseSpDefense = 60,	// 50
        .type1 = TYPE_ICE,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 58,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SEALEO] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,	// 75
        .baseSpDefense = 90,	// 70
        .type1 = TYPE_ICE,
        .type2 = TYPE_WATER,
        .catchRate = 120,
        .expYield = 144,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WALREIN] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,	// 95
        .baseSpDefense = 110,	// 90
        .type1 = TYPE_ICE,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 239,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CLAMPERL] =
    {
        .baseHP        = 40,	// 35
        .baseAttack    = 45,	// 64
        .baseDefense   = 95,	// 85
        .baseSpeed     = 35,	// 32
        .baseSpAttack  = 65,	// 74
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 69,
        .evYield_Defense   = 1,
        .item1 = ITEM_PEARL,
        .item2 = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_TANK_SHELL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_HUNTAIL] =
    {
        .baseHP        = 70,	// 55
        .baseAttack    = 115,	// 104
        .baseDefense   = 115,	// 105
        .baseSpeed     = 75,	// 52
        .baseSpAttack  = 75,	// 94
        .baseSpDefense = 75,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 170,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .item2 = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_ILLUMINATE, ABILITY_SWIFT_SWIM},
        .abilityHidden = ABILITY_WATER_VEIL,
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GOREBYSS] =
    {
        .baseHP        = 75,	// 55
        .baseAttack    = 75,	// 84
        .baseDefense   = 75,	// 105
        .baseSpeed     = 70,	// 52
        .baseSpAttack  = 115,	// 114
        .baseSpDefense = 115,	// 75
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 170,
        .evYield_SpAttack  = 2,
        .item2 = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SNIPER, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_RELICANTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,	// 90
        .baseDefense   = 140,	// 130
        .baseSpeed     = 90,	// 55
        .baseSpAttack  = 80,	// 45
        .baseSpDefense = 60,	// 65
        .type1 = TYPE_WATER,
        .type2 = TYPE_ROCK,
        .catchRate = 25,
        .expYield = 170,
        .evYield_HP        = 1,
        .evYield_Defense   = 1,
        .item2 = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_LUVDISC] =
    {
        .baseHP        = 60,	// 43
        .baseAttack    = 35,	// 30
        .baseDefense   = 100,	// 55
        .baseSpeed     = 70,	// 97
        .baseSpAttack  = 85,	// 40
        .baseSpDefense = 155,	// 65
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 116,
        .evYield_Speed     = 1,
        .item1 = ITEM_HEART_SCALE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SOUL_HEART},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_ALOMOMOLA] =
    {
        .baseHP        = 155,	// 165
        .baseAttack    = 30,	// 75
        .baseDefense   = 70,	// 80
        .baseSpeed     = 100,	// 65
        .baseSpAttack  = 60,	// 40
        .baseSpDefense = 85,	// 45
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_HYDRATION, ABILITY_SOUL_HEART},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_BAGON] =
    {
        .baseHP        = 45,
        .baseAttack    = 105,	// 75
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,	// 30
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .item2 = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SHELGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 105,	// 95
        .baseDefense   = 110,	// 100
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Defense   = 2,
        .item2 = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SALAMENCE] =
    {
        .baseHP        = 95,
        .baseAttack    = 135,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .item2 = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BELDUM] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 60,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 60,
        .evYield_Defense   = 1,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_FULL_METAL_BODY, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_METANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 105,	// 75
        .baseDefense   = 120,	// 100
        .baseSpeed     = 50,
        .baseSpAttack  = 75,	// 55
        .baseSpDefense = 90,	// 80
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 147,
        .evYield_Defense   = 2,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_FULL_METAL_BODY, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_METAGROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 145,	// 135
        .baseDefense   = 150,	// 130
        .baseSpeed     = 70,
        .baseSpAttack  = 105,	// 95
        .baseSpDefense = 115,	// 90
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Defense   = 3,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_FULL_METAL_BODY, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_REGIROCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 200,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 150,	// 100
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_ARMOR_TUNING, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_REGICE] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 150,	// 100
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 200,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_ARMOR_TUNING, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_REGISTEEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 175,	// 150
        .baseSpeed     = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 175,	// 150
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_ARMOR_TUNING, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_REGIGIGAS] =
    {
        .baseHP        = 150,	// 110
        .baseAttack    = 160,
        .baseDefense   = 110,	// 110
        .baseSpeed     = 50,	// 100
        .baseSpAttack  = 50,	// 80
        .baseSpDefense = 110,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 3,
        .expYield = 302,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_ARMOR_TUNING, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_LATIAS] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_AERILATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_LATIOS] =
    {
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 110,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_AERILATE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_KYOGRE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 140,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 3,
        .expYield = 302,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRIMORDIAL_SEA, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GROUDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 3,
        .expYield = 302,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_DESOLATE_LAND, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_RAYQUAZA] =
    {
        .baseHP        = 70,	// 105
        .baseAttack    = 150,
        .baseDefense   = 60,	// 90
        .baseSpeed     = 95,
        .baseSpAttack  = 150,
        .baseSpDefense = 60,	// 90
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 306,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_AIR_LOCK, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_JIRACHI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP        = 3,
        .item1 = ITEM_STAR_PIECE,
        .item2 = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_FAIRY_AURA},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_DEOXYS] =
    {
        .baseHP        = 50,
        .baseAttack    = 150,
        .baseDefense   = 50,
        .baseSpeed     = 150,
        .baseSpAttack  = 150,
        .baseSpDefense = 50,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DEOXYS_ATTACK] =
    {
        .baseHP        = 50,
        .baseAttack    = 180,
        .baseDefense   = 20,
        .baseSpeed     = 150,
        .baseSpAttack  = 180,
        .baseSpDefense = 20,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DEOXYS_DEFENSE] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 160,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DEOXYS_SPEED] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 180,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TURTWIG] =		// TODO (lilua): needs -5bst
    {
        .baseHP        = 55,
        .baseAttack    = 70,	// 68
        .baseDefense   = 65,	// 64
        .baseSpeed     = 35,	// 31
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 64,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GROTLE] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,	// 89
        .baseDefense   = 85,
        .baseSpeed     = 40,	// 36
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_TANK_SHELL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TORTERRA] =	// TODO (lilua): needs 50bst
    {
        .baseHP        = 95,
        .baseAttack    = 110,	// 109
        .baseDefense   = 105,
        .baseSpeed     = 60,	// 56
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 236,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE},
        .abilityHidden = ABILITY_SHELL_ARMOR,
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CHIMCHAR] =
    {
        .baseHP        = 45,	// 44
        .baseAttack    = 60,	// 58
        .baseDefense   = 45,	// 44
        .baseSpeed     = 65,	// 61
        .baseSpAttack  = 60,	// 58
        .baseSpDefense = 45,	// 44
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MONFERNO] =
    {
        .baseHP        = 65,	// 64
        .baseAttack    = 80,	// 78
        .baseDefense   = 50,	// 52
        .baseSpeed     = 85,	// 81
        .baseSpAttack  = 80,	// 78
        .baseSpDefense = 50,	// 52
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_INFERNAPE] =	// TODO (lilua): needs 30bst
    {
        .baseHP        = 80,	// 76
        .baseAttack    = 105,	// 104
        .baseDefense   = 75,	// 71
        .baseSpeed     = 110,	// 108
        .baseSpAttack  = 105,	// 104
        .baseSpDefense = 75,	// 71
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 240,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PIPLUP] =
    {
        .baseHP        = 55,	// 53
        .baseAttack    = 50,	// 51
        .baseDefense   = 55,	// 53
        .baseSpeed     = 40,
        .baseSpAttack  = 60,	// 61
        .baseSpDefense = 60,	// 56
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 63,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PRINPLUP] =
    {
        .baseHP        = 65,	// 64
        .baseAttack    = 70,	// 66
        .baseDefense   = 70,	// 68
        .baseSpeed     = 50,
        .baseSpAttack  = 80,	// 81
        .baseSpDefense = 75,	// 76
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 142,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_EMPOLEON] =
    {
        .baseHP        = 85,	// 84
        .baseAttack    = 90,	// 86
        .baseDefense   = 90,	// 88
        .baseSpeed     = 65,	// 60
        .baseSpAttack  = 115,	// 111
        .baseSpDefense = 105,	// 101
        .type1 = TYPE_WATER,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_STARLY] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_STARAVIA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 119,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_STARAPTOR] =
    {
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 218,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BIDOOF] =
    {
        .baseHP        = 60,	// 59
        .baseAttack    = 50,	// 45
        .baseDefense   = 40,
        .baseSpeed     = 35,	// 31
        .baseSpAttack  = 35,
        .baseSpDefense = 60,	// 40
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 50,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SIMPLE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BIBAREL] =
    {
        .baseHP        = 80,	// 79
        .baseAttack    = 90,	// 85
        .baseDefense   = 70,	// 60
        .baseSpeed     = 75,	// 71
        .baseSpAttack  = 55,
        .baseSpDefense = 90,	// 60
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_WATER,
        .catchRate = 127,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_UNAWARE, ABILITY_SIMPLE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KRICKETOT] =
    {
        .baseHP        = 60,	// 37
        .baseAttack    = 25,	// 25
        .baseDefense   = 45,	// 41
        .baseSpeed     = 55,	// 25
        .baseSpAttack  = 25,	// 25
        .baseSpDefense = 45,	// 41
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 255,
        .expYield = 39,
        .evYield_Defense   = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_METRONOME,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_KRICKETUNE] =
    {
        .baseHP        = 90,	// 77
        .baseAttack    = 100,	// 85
        .baseDefense   = 55,	// 51
        .baseSpeed     = 95,	// 65
        .baseSpAttack  = 55,
        .baseSpDefense = 55,	// 51
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 45,
        .expYield = 134,
        .evYield_Attack    = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_METRONOME,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SHINX] =
    {
        .baseHP        = 55,	// 45
        .baseAttack    = 65,
        .baseDefense   = 35,	// 34
        .baseSpeed     = 45,
        .baseSpAttack  = 55,	// 40
        .baseSpDefense = 45,	// 34
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 235,
        .expYield = 53,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GUTS, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LUXIO] =
    {
        .baseHP        = 75,	// 60
        .baseAttack    = 85,
        .baseDefense   = 50,	// 49
        .baseSpeed     = 65,	// 60
        .baseSpAttack  = 70,	// 60
        .baseSpDefense = 65,	// 49
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 120,
        .expYield = 127,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GUTS, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LUXRAY] =
    {
        .baseHP        = 95,	// 80
        .baseAttack    = 120,
        .baseDefense   = 80,	// 79
        .baseSpeed     = 80,	// 70
        .baseSpAttack  = 105,	// 95
        .baseSpDefense = 100,	// 79
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 235,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GUTS, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CRANIDOS] =
    {
        .baseHP        = 80,	// 67
        .baseAttack    = 125,
        .baseDefense   = 40,
        .baseSpeed     = 60,	// 58
        .baseSpAttack  = 30,
        .baseSpDefense = 40,	// 30
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 45,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_RAMPARDOS] =
    {
        .baseHP        = 110,	// 97
        .baseAttack    = 165,
        .baseDefense   = 60,
        .baseSpeed     = 70,	// 58
        .baseSpAttack  = 65,
        .baseSpDefense = 60,	// 50
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SHIELDON] =
    {
        .baseHP        = 40,	// 30
        .baseAttack    = 45,	// 42
        .baseDefense   = 120,	// 118
        .baseSpeed     = 30,
        .baseSpAttack  = 45,	// 42
        .baseSpDefense = 90,	// 88
        .type1 = TYPE_ROCK,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 70,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_ARMOR_TUNING, ABILITY_SOLID_ROCK},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BASTIODON] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 55,	// 52
        .baseDefense   = 170,	// 168
        .baseSpeed     = 30,
        .baseSpAttack  = 50,	// 47
        .baseSpDefense = 140,	// 138
        .type1 = TYPE_ROCK,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_ARMOR_TUNING, ABILITY_SOLID_ROCK},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BURMY] =
    {
        .baseHP        = 60,	// 40
        .baseAttack    = 35,	// 29
        .baseDefense   = 65,	// 45
        .baseSpeed     = 30,	// 36
        .baseSpAttack  = 35,	// 29
        .baseSpDefense = 65,	// 45
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 45,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_OVERCOAT, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BURMY_SANDY_CLOAK] =
    {
        .baseHP        = 60,	// 40
        .baseAttack    = 15,	// 29
        .baseDefense   = 80,	// 45
        .baseSpeed     = 30,	// 36
        .baseSpAttack  = 55,	// 29
        .baseSpDefense = 50,	// 45
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 45,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_OVERCOAT, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BURMY_TRASH_CLOAK] =
    {
        .baseHP        = 60,	// 40
        .baseAttack    = 55,	// 29
        .baseDefense   = 50,	// 45
        .baseSpeed     = 30,	// 36
        .baseSpAttack  = 15,	// 29
        .baseSpDefense = 80,	// 45
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 45,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_OVERCOAT, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_WORMADAM] =	// orig form has balanced stats
    {
        .baseHP        = 80,	// 60
        .baseAttack    = 70,	// 69
        .baseDefense   = 95,	// 85
        .baseSpeed     = 40,	// 36
        .baseSpAttack  = 70,	// 79
        .baseSpDefense = 95,	// 105
        .type1 = TYPE_BUG,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 148,
        .evYield_SpDefense = 2,
        .item2 = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
		.abilities = {ABILITY_OVERCOAT, ABILITY_EFFECT_SPORE},	// TODO (lilua): better ability
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WORMADAM_SANDY_CLOAK] =	// TODO (lilua): scorching sands
    {
        .baseHP        = 80,	// 60
        .baseAttack    = 60,	// 79
        .baseDefense   = 110,	// 105
        .baseSpeed     = 40,	// 36
        .baseSpAttack  = 80,	// 59
        .baseSpDefense = 80,	// 85
        .type1 = TYPE_BUG,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 148,
        .evYield_Defense   = 2,
        .item2 = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_OVERCOAT, ABILITY_SAND_SPIT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WORMADAM_TRASH_CLOAK] =
    {
        .baseHP        = 80,	// 60
        .baseAttack    = 80,	// 69
        .baseDefense   = 80,	// 95
        .baseSpeed     = 40,	// 36
        .baseSpAttack  = 60,	// 69
        .baseSpDefense = 110,	// 95
        .type1 = TYPE_BUG,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 148,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .item2 = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
		.abilities = {ABILITY_OVERCOAT, ABILITY_TANK_SHELL},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MOTHIM] =		// TODO (lilua): further buffs?
    {
        .baseHP        = 40,	// 70
        .baseAttack    = 110,	// 94
        .baseDefense   = 70,	// 50
        .baseSpeed     = 80,	// 66
        .baseSpAttack  = 110,	// 94
        .baseSpDefense = 70,	// 50
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 148,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_SILVER_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_COMBEE] =
    {
        .baseHP        = 40,	// 30
        .baseAttack    = 30,
        .baseDefense   = 50,	// 42
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 50,	// 42
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 49,
        .evYield_Speed     = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_HONEY,
        #endif
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_HONEY_GATHER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_VESPIQUEN] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 80,
        .baseDefense   = 120,	// 102
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,	// 102
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 166,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_PRESSURE, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PACHIRISU] =
    {
        .baseHP        = 70,	// 60
        .baseAttack    = 60,	// 45
        .baseDefense   = 95,	// 70
        .baseSpeed     = 120,	// 95
        .baseSpAttack  = 60,	// 45
        .baseSpDefense = 95,	// 90
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CHEEK_POUCH, ABILITY_VOLT_ABSORB},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_BUIZEL] =
    {
        .baseHP        = 60,	// 55
        .baseAttack    = 65,	// 65
        .baseDefense   = 40,	// 35
        .baseSpeed     = 90,	// 85
        .baseSpAttack  = 60,	// 60
        .baseSpDefense = 35,	// 30
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FLOATZEL] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 70,	// 55
        .baseSpeed     = 115,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,	// 50
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 173,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CHERUBI] =
    {
        .baseHP        = 50,	// 45
        .baseAttack    = 40,	// 35
        .baseDefense   = 50,	// 45
        .baseSpeed     = 45,	// 35
        .baseSpAttack  = 75,	// 62
        .baseSpDefense = 70,	// 53
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 55,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CHERRIM] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 70,	// 60
        .baseDefense   = 80,	// 70
        .baseSpeed     = 110,	// 85
        .baseSpAttack  = 105,	// 87
        .baseSpDefense = 100,	// 78
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 75,
        .expYield = 158,
        .evYield_SpAttack  = 2,
        .item2 = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_FLOWER_GIFT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
    },

    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 70,	// 60
        .baseDefense   = 80,	// 70
        .baseSpeed     = 110,	// 85
        .baseSpAttack  = 105,	// 87
        .baseSpDefense = 100,	// 78
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FIRE,
        .catchRate = 75,
        .expYield = 158,
        .evYield_SpAttack  = 2,
        .item2 = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_FLOWER_GIFT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_SHELLOS] =
    {
        .baseHP        = 80,	// 76
        .baseAttack    = 50,	// 48
        .baseDefense   = 50,	// 48
        .baseSpeed     = 35,	// 34
        .baseSpAttack  = 60,	// 57
        .baseSpDefense = 65,	// 62
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 65,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_STICKY_HOLD, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SHELLOS_EAST_SEA] =
    {
        .baseHP        = 80,	// 76
        .baseAttack    = 60,	// 48
        .baseDefense   = 65,	// 48
        .baseSpeed     = 35,	// 34
        .baseSpAttack  = 50,	// 57
        .baseSpDefense = 50,	// 62
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 65,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GASTRODON] =
    {
        .baseHP        = 115,	// 111
        .baseAttack    = 85,	// 83
        .baseDefense   = 70,	// 68
        .baseSpeed     = 40,	// 39
        .baseSpAttack  = 95,	// 92
        .baseSpDefense = 85,	// 82
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 75,
        .expYield = 166,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_STICKY_HOLD, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GASTRODON_EAST_SEA] =
    {
        .baseHP        = 115,	// 111
        .baseAttack    = 95,	// 83
        .baseDefense   = 85,	// 68
        .baseSpeed     = 40,	// 39
        .baseSpAttack  = 85,	// 92
        .baseSpDefense = 70,	// 82
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 75,
        .expYield = 166,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRIFLOON] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,	// 50
        .baseDefense   = 45,	// 34
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,	// 44
        .type1 = TYPE_GHOST,
        .type2 = TYPE_FLYING,
        .catchRate = 125,
        .expYield = 70,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_UNBURDEN, ABILITY_FLARE_BOOST},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DRIFBLIM] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,	// 80
        .baseDefense   = 60,	// 44
        .baseSpeed     = 80,	// 80
        .baseSpAttack  = 90,
        .baseSpDefense = 60,	// 54
        .type1 = TYPE_GHOST,
        .type2 = TYPE_FLYING,
        .catchRate = 60,
        .expYield = 174,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_UNBURDEN, ABILITY_FLARE_BOOST},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_BUNEARY] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,	// 66
        .baseDefense   = 55,	// 44
        .baseSpeed     = 90,	// 85
        .baseSpAttack  = 45,	// 44
        .baseSpDefense = 50,	// 56
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 70,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_LIMBER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LOPUNNY] =
    {
        .baseHP        = 75,	// 65
        .baseAttack    = 100,	// 76
        .baseDefense   = 85,	// 84
        .baseSpeed     = 105,
        .baseSpAttack  = 55,	// 54
        .baseSpDefense = 80,	// 96
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FIGHTING,
        .catchRate = 60,
        .expYield = 168,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SCRAPPY, ABILITY_LIMBER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GLAMEOW] =
    {
        .baseHP        = 70,	// 49
        .baseAttack    = 55,	// 55
        .baseDefense   = 50,	// 42
        .baseSpeed     = 90,	// 85
        .baseSpAttack  = 45,	// 42
        .baseSpDefense = 55,	// 37
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_LIMBER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PURUGLY] =
    {
        .baseHP        = 100,	// 71
        .baseAttack    = 75,	// 82
        .baseDefense   = 80,	// 64
        .baseSpeed     = 105,	// 112
        .baseSpAttack  = 55,	// 64
        .baseSpDefense = 85,	// 59
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_DARK,
        .catchRate = 75,
        .expYield = 158,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_STUNKY] =
    {
        .baseHP        = 70,	// 63
        .baseAttack    = 65,	// 63
        .baseDefense   = 50,	// 47
        .baseSpeed     = 75,	// 74
        .baseSpAttack  = 45,	// 41
        .baseSpDefense = 45,	// 41
        .type1 = TYPE_POISON,
        .type2 = TYPE_DARK,
        .catchRate = 225,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STENCH, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SKUNTANK] =
    {
        .baseHP        = 110,	// 103
        .baseAttack    = 95,	// 93
        .baseDefense   = 70,	// 67
        .baseSpeed     = 90,	// 84
        .baseSpAttack  = 70,	// 71
        .baseSpDefense = 65,	// 61
        .type1 = TYPE_POISON,
        .type2 = TYPE_DARK,
        .catchRate = 60,
        .expYield = 168,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STENCH, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_BRONZOR] =
    {
        .baseHP        = 60,	// 57
        .baseAttack    = 45,	// 24
        .baseDefense   = 90,	// 86
        .baseSpeed     = 20,	// 23
        .baseSpAttack  = 45,	// 24
        .baseSpDefense = 90,	// 86
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_HEATPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BRONZONG] =
    {
        .baseHP        = 70,	// 67
        .baseAttack    = 90,	// 89
        .baseDefense   = 120,	// 116
        .baseSpeed     = 30,	// 33
        .baseSpAttack  = 90,	// 79
        .baseSpDefense = 120,	// 116
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 90,
        .expYield = 175,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .item2 = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_HEATPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CHATOT] =
    {
        .baseHP        = 80,	// 76
        .baseAttack    = 70,	// 65
        .baseDefense   = 65,	// 45
        .baseSpeed     = 110,	// 91
        .baseSpAttack  = 95,	// 92
        .baseSpDefense = 65,	// 42
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 144,
        .evYield_Attack    = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_METRONOME,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SPIRITOMB] =
    {
        .baseHP        = 55,	// 50
        .baseAttack    = 95,	// 92
        .baseDefense   = 110,	// 108
        .baseSpeed     = 35,
        .baseSpAttack  = 95,	// 92
        .baseSpDefense = 110,	// 108
        .type1 = TYPE_GHOST,
        .type2 = TYPE_DARK,
        .catchRate = 100,
        .expYield = 170,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_PRESSURE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GIBLE] =
    {
        .baseHP        = 60,	// 58
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 45,	// 42
        .baseSpAttack  = 65,	// 40
        .baseSpDefense = 45,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GABITE] =
    {
        .baseHP        = 75,	// 68
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 70,	// 82
        .baseSpAttack  = 75,	// 50
        .baseSpDefense = 55,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GARCHOMP] =
    {
        .baseHP        = 100,	// 108
        .baseAttack    = 120,	// 130
        .baseDefense   = 95,
        .baseSpeed     = 105,	// 102
        .baseSpAttack  = 95,	// 80
        .baseSpDefense = 85,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_RIOLU] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 45,	// 40
        .baseSpeed     = 65,	// 60
        .baseSpAttack  = 35,
        .baseSpDefense = 45,	// 40
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 57,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LUCARIO] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 100,	// 110
        .baseDefense   = 70,
        .baseSpeed     = 100,	// 90
        .baseSpAttack  = 105,	// 115
        .baseSpDefense = 70,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 184,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
		.abilities = {ABILITY_INNER_FOCUS, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_HIPPOPOTAS] =
    {
        .baseHP        = 70,	// 68
        .baseAttack    = 75,	// 72
        .baseDefense   = 80,	// 78
        .baseSpeed     = 35,	// 32
        .baseSpAttack  = 40,	// 38
        .baseSpDefense = 55,	// 42
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 140,
        .expYield = 66,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAND_STREAM, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HIPPOWDON] =
    {
        .baseHP        = 110,	// 108
        .baseAttack    = 115,	// 112
        .baseDefense   = 120,	// 118
        .baseSpeed     = 50,	// 47
        .baseSpAttack  = 70,	// 68
        .baseSpDefense = 85,	// 72
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAND_STREAM, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SKORUPI] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .type1 = TYPE_POISON,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 66,
        .evYield_Defense   = 1,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SNIPER},
        .abilityHidden = ABILITY_KEEN_EYE,
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DRAPION] =
    {
        .baseHP        = 80,	// 70
        .baseAttack    = 95,	// 90
        .baseDefense   = 110,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,	// 75
        .type1 = TYPE_POISON,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 175,
        .evYield_Defense   = 2,
        .item2 = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_MERCILESS, ABILITY_SNIPER},
        .abilityHidden = ABILITY_KEEN_EYE,
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CROAGUNK] =
    {
        .baseHP        = 60,	// 48
        .baseAttack    = 65,	// 61
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,	// 61
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FIGHTING,
        .catchRate = 140,
        .expYield = 60,
        .evYield_Attack    = 1,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_BLACK_SLUDGE,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_POISON_TOUCH, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TOXICROAK] =
    {
        .baseHP        = 90,	// 83
        .baseAttack    = 110,	// 106
        .baseDefense   = 75,	// 65
        .baseSpeed     = 90,	// 85
        .baseSpAttack  = 90,	// 86
        .baseSpDefense = 75,	// 65
        .type1 = TYPE_POISON,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 172,
        .evYield_Attack    = 2,
        #ifdef ITEM_EXPANSION
            .item2 = ITEM_BLACK_SLUDGE,
        #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
		.abilities = {ABILITY_POISON_TOUCH, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CARNIVINE] =
    {
        .baseHP        = 80,	// 74
        .baseAttack    = 100,	// 100
        .baseDefense   = 75,	// 72
        .baseSpeed     = 50,	// 46
        .baseSpAttack  = 130,	// 90
        .baseSpDefense = 75,	// 72
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 200,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_STRONG_JAW, ABILITY_CORROSION},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FINNEON] =
    {
        .baseHP        = 50,	// 49
        .baseAttack    = 55,	// 49
        .baseDefense   = 60,	// 56
        .baseSpeed     = 70,	// 66
        .baseSpAttack  = 55,	// 49
        .baseSpDefense = 65,	// 61
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_WATER_VEIL, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LUMINEON] =
    {
        .baseHP        = 70,	// 69
        .baseAttack    = 80,	// 69
        .baseDefense   = 80,	// 76
        .baseSpeed     = 115,	// 91
        .baseSpAttack  = 75,	// 69
        .baseSpDefense = 90,	// 86
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 161,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_WATER_VEIL, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SNOVER] =
    {
        .baseHP        = 80,	// 60
        .baseAttack    = 65,	// 62
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 65,	// 62
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_ICE,
        .catchRate = 120,
        .expYield = 67,
        .evYield_Attack    = 1,
        .item2 = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
		.abilities = {ABILITY_SNOW_WARNING, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ABOMASNOW] =
    {
        .baseHP        = 120,	// 90
        .baseAttack    = 100,	// 92
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,	// 92
        .baseSpDefense = 90,	// 85
        .type1 = TYPE_GRASS,
        .type2 = TYPE_ICE,
        .catchRate = 60,
        .expYield = 173,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .item2 = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
		.abilities = {ABILITY_SNOW_WARNING, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ROTOM] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 110,	// 107
        .baseSpeed     = 90,	// 86
        .baseSpAttack  = 105,	// 105
        .baseSpDefense = 110,	// 107
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 154,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ROTOM_HEAT] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 110,	// 107
        .baseSpeed     = 90,	// 86
        .baseSpAttack  = 105,	// 105
        .baseSpDefense = 110,	// 107
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 182,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ROTOM_WASH] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 110,	// 107
        .baseSpeed     = 90,	// 86
        .baseSpAttack  = 105,	// 105
        .baseSpDefense = 110,	// 107
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 182,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ROTOM_FROST] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 110,	// 107
        .baseSpeed     = 90,	// 86
        .baseSpAttack  = 105,	// 105
        .baseSpDefense = 110,	// 107
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 182,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ROTOM_FAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 110,	// 107
        .baseSpeed     = 90,	// 86
        .baseSpAttack  = 105,	// 105
        .baseSpDefense = 110,	// 107
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 182,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ROTOM_MOW] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 110,	// 107
        .baseSpeed     = 90,	// 86
        .baseSpAttack  = 105,	// 105
        .baseSpDefense = 110,	// 107
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 182,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_UXIE] =
    {
        .baseHP        = 75,	// 75
        .baseAttack    = 75,
        .baseDefense   = 130,
        .baseSpeed     = 90,	// 95
        .baseSpAttack  = 75,
        .baseSpDefense = 130,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MESPRIT] =
    {
        .baseHP        = 75,	// 80
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 85,	// 80
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_AZELF] =
    {
        .baseHP        = 75,
        .baseAttack    = 130,	// 125
        .baseDefense   = 70,
        .baseSpeed     = 105,	// 115
        .baseSpAttack  = 130,	// 125
        .baseSpDefense = 70,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DIALGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 100,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_DRAGON,
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_PALKIA] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .type1 = TYPE_WATER,
        .type2 = TYPE_DRAGON,
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_HEATRAN] =
    {
        .baseHP        = 95,	// 91
        .baseAttack    = 90,
        .baseDefense   = 110,	// 106
        .baseSpeed     = 80,	// 77
        .baseSpAttack  = 130,
        .baseSpDefense = 110,	// 106
        .type1 = TYPE_FIRE,
        .type2 = TYPE_STEEL,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GIRATINA] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_DRAGON,
        .catchRate = 3,
        .expYield = 306,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_GIRATINA_ORIGIN] =
    {
        .baseHP        = 150,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_DRAGON,
        .catchRate = 3,
        .expYield = 306,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_CRESSELIA] =
    {
        .baseHP        = 90,	// 120
        .baseAttack    = 60,	// 70
        .baseDefense   = 125,	// 120
        .baseSpeed     = 80,	// 85
        .baseSpAttack  = 80,	// 75
        .baseSpDefense = 115,	// 130
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PHIONE] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 30,
        .expYield = 216,
        .evYield_HP        = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HYDRATION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MANAPHY] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HYDRATION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DARKRAI] =
    {
        .baseHP        = 90,	// 70
        .baseAttack    = 60,	// 90
        .baseDefense   = 80,	// 90
        .baseSpeed     = 115,	// 125
        .baseSpAttack  = 125,	// 135
        .baseSpDefense = 80,	// 90
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_BAD_DREAMS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SHAYMIN] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .item1 = ITEM_LUM_BERRY,
        .item2 = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .baseHP        = 100,	// 100
        .baseAttack    = 105,	// 103
        .baseDefense   = 75,
        .baseSpeed     = 130,	// 127
        .baseSpAttack  = 120,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .item1 = ITEM_LUM_BERRY,
        .item2 = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_FIGHTING] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
          .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_FLYING] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_FLYING,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_POISON] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_GROUND] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_ROCK] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_BUG] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_GHOST] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_STEEL] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_FIRE] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_WATER] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_GRASS] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_ELECTRIC] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_PSYCHIC] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_ICE] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_DRAGON] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_DARK] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCEUS_FAIRY] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        #ifdef BATTLE_ENGINE
            .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        #else
            .abilities = {ABILITY_NONE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },
};
