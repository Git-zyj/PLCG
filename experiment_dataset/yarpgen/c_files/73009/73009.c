/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (((5269759310469887249 > -1635847748294842789) ? (((~(min((arr_0 [8] [i_0]), (arr_1 [i_0])))))) : (((158 ? -18022 : -5826606332876423461)))));
        arr_3 [i_0] = ((!((((!-98) - ((var_13 >> (5826606332876423458 - 5826606332876423438))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_16 += (((arr_5 [i_1 + 1]) << (-5826606332876423461 + 5826606332876423461)));
        var_17 = ((116 ? 4854 : -5826606332876423461));
    }
    var_18 = (min(var_18, 4854));
    var_19 = ((~(~var_6)));
    #pragma endscop
}
