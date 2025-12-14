/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 122;
    var_13 *= (var_8 >= (max((~0), var_8)));
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_4;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_1] = ((2902499588202317639 ? (arr_5 [i_0] [i_1]) : 0));
            var_15 = (arr_5 [i_1] [i_1]);
            arr_7 [i_1] = (((((-((-119 ? -3927586147159549917 : 0))))) ? (((arr_4 [i_1]) - (arr_4 [i_0]))) : -var_3));
        }
        var_16 = ((-(((((((-49 + 2147483647) << (((arr_4 [i_0]) - 1453308911217754898))))) && var_6)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        var_17 -= ((~(arr_9 [i_2 + 1])));
        arr_11 [i_2 - 2] [i_2 - 1] = ((0 ? 45 : 31));
    }
    #pragma endscop
}
