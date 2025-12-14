/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 2]);
                var_15 = ((-(((arr_2 [i_0] [i_0] [i_1]) & var_9))));
                var_16 = (max(((max((arr_4 [i_0] [i_0]), var_6))), (((-(arr_4 [i_1] [i_0]))))));
                var_17 = (((((var_8 >= (min(var_7, var_6))))) | (((max(var_3, var_8)) ^ (-31528 && var_2)))));
            }
        }
    }
    var_18 |= (~var_13);
    var_19 = 5813988881726409834;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_20 = ((+(((0 & 105) >> (((~0) + 58))))));
        arr_8 [i_2] [i_2] = var_9;
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_11 [14] = (arr_9 [i_3] [i_3]);
        var_21 = var_6;
    }
    var_22 = var_6;
    #pragma endscop
}
