/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 |= (~65535);
        var_16 = (min(var_16, (((((-127 - 1) <= -0))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 = (min(var_17, ((((0 == 195) ? (max((-9223372036854775807 - 1), 0)) : ((22 ? -2561372396915801237 : -1284901553)))))));
        var_18 = ((15895 ? ((9223372036854775807 ? ((min(45, 0))) : var_13)) : ((((arr_5 [i_1]) > 3154228618)))));
        var_19 = (min(var_19, -78924526));
        var_20 = (min(-1, 920414624));
    }
    var_21 |= (((((var_12 ? 3061244876491249161 : var_5)) < 13361123007152656855)) ? (((37406 | ((46291 ? 255 : 0))))) : (min(((max(var_4, 0))), ((22 ? 8661726220530760000 : 25778686064539263)))));
    var_22 &= 15895;
    #pragma endscop
}
