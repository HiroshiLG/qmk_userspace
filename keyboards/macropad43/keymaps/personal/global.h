int idx_keys, idx_group = 0, idx_order = 0, config_mode = 0;
char *level;

typedef struct {
    int group;
    int order;
} pardef_t;

pardef_t padkeys[12] = {
     {2, 6}, {5, 1}, {4, 9}, {3, 2},
     {4, 1}, {0, 0}, {0, 0}, {0, 0},
     {0, 0}, {0, 0}, {0, 0}, {0, 0}
};

typedef struct {
    int group;
    char name[100];
} groups_t;

groups_t group_names[5] = {
    {1,"Orbital Attack"},
    {2,"Eagle Attack"},
    {3,"Sentry Support"},
    {4,"Send Support"},
    {5,"Weapon Support"}
};

typedef struct {
    int group;
    int order;
    char name[100];
} stratagem_t;

stratagem_t stratagems[5][15] = {
    // Orbital Attack
    { {1, 1, "Orbital Gattling Barrage"},
      {1, 2, "Orbital Walking Barrage"},
      {1, 3, "Orbital 120mm HE Barrage"},
      {1, 4, "Orbital 380mm HE Barrage"},
      {1, 5, "Orbital Gas Strike"},
      {1, 6, "Orbital EMS Strike"},
      {1, 7, "Orbital Smoke Strike"},
      {1, 8, "Orbital Airburst Strike"},
      {1, 9, "Orbital Precision Strike"},
      {1,10,"Orbital Railcannon Strike"},
      {1,11,"Orbital Laser"},
      {1,12,"EOF"} },

    // Eagle Attack
    { {2, 1,"Eagle Strafing Run"},
      {2, 2,"Eagle Napalm Airstrike"},
      {2, 3,"Eagle 110mm Rocket Pods"},
      {2, 4,"Eagle AirStrike"},
      {2, 5,"Eagle Smoke Strike"},
      {2, 6,"Eagle Cluster Bomb"},
      {2, 7,"Eagle 500k Bomb"},
      {2, 8,"EOF"} },

    // Sentry Attack
    { {3, 1,"Machine Gun Sentry"},
      {3, 2,"Gatling Sentry"},
      {3, 3,"Autocannon Sentry"},
      {3, 4,"Rocket Sentry"},
      {3, 5,"Mortar Sentry"},
      {3, 6,"EMS Mortar Sentry"},
      {3, 7,"HMG Emplacement"},
      {3, 8,"EOF"}},

    // Send Support
    { {4, 1,"Resupply"},
      {4, 2,"S.O.S Beacon"},
      {4, 3,"Patriot Exosuit"},
      {4, 4,"Supply Pack"},
      {4, 5,"Jump Pack"},
      {4, 6,"Ballistic Shield"},
      {4, 7,"Shield Generator Pack"},
      {4, 8,"Guard Dog"},
      {4, 9,"Guard Dog Rover"},
      {4,10,"Shield Generator"},
      {4,11,"EOF"} },

    // Weapon Support
    {{5 ,1 ,"Grenade Launcher" },
     {5 ,2 ,"Expandable Antitank" },
     {5 ,3 ,"Recoiless Rifle" },
     {5 ,4 ,"Spear" },
     {5 ,5 ,"Railgun" },
     {5 ,6 ,"Anti-Material Rifle" },
     {5 ,7 ,"Autocannon" },
     {5 ,8 ,"Laser Cannon" },
     {5 ,9 ,"Quasar Cannon" },
     {5,10 ,"Arc Thrower" },
     {5,11 ,"Flame Thrower"},
     {5,12 ,"Machine Gun"},
     {5,13 ,"Stalwart"},
     {5,14 ,"Heavy Machinegun"},
     {5,15 ,"EOF"} }
};
