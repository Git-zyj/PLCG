/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-var_11 + 2147483647) >> ((((~((5 ? var_8 : var_9)))) - 4294967149))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (max(var_14, 236));
        arr_2 [i_0] = (max((0 ^ 0), ((var_4 ? ((((240 == (arr_1 [i_0]))))) : (max(1256616361, 16256))))));
        arr_3 [i_0] [i_0] = (((((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? 44 : ((49280 ? (arr_1 [i_0]) : 0))))) ? (((((max((arr_0 [i_0]), var_8)))) & (((arr_1 [i_0]) + 4294443008)))) : 3038350933));
        arr_4 [i_0] [i_0] = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_15 = var_10;
        arr_8 [i_1] = ((((arr_6 [i_1 - 1] [i_1]) - (~var_8))));
    }
    #pragma endscop
}
