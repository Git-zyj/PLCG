/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((((((-32767 - 1) ? ((-21649 ? -21649 : 21648)) : 512444497))) ? (max(((21662 << (((((arr_1 [7] [7]) + 1932849890514566068)) - 17)))), ((max(-21662, -21659))))) : ((-var_12 >> ((((max(21662, -21659))) - 21639))))));
        var_15 = (min(var_15, ((((81 * ((21662 ? -81 : 31618))))))));
        var_16 = 1326490435;
    }
    var_17 = (!2910773391703323038);
    var_18 = ((((max(29122, -21663)))));
    #pragma endscop
}
