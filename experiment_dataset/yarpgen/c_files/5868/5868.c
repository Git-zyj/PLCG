/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = 125;
        arr_2 [i_0] = (arr_0 [i_0]);
        var_20 = (!((((arr_1 [i_0] [i_0]) ? 17213228596070264941 : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 = -119;
        arr_5 [i_1] [i_1] = (!((((49743 || 127) & (((-127 - 1) & 134217727))))));
        var_22 = (min(var_22, (arr_3 [17])));
    }
    var_23 = (-99 == var_2);

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_24 ^= (((((((arr_3 [i_2]) && (arr_0 [i_2]))) ? (((1750293218 << (((((-127 - 1) + 134)) - 6))))) : -4353899882243587435)) >> (((arr_3 [i_2]) - 37))));
        arr_8 [i_2] [i_2] = 1;
    }
    #pragma endscop
}
