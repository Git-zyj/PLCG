/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(4035222523891369296, -5401226801217438227));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(var_13, 37826))) - ((1 ? (arr_0 [i_0 + 1]) : 14925347946371726030))));
        arr_3 [i_0] = 4201962472901218282;
        arr_4 [i_0 + 2] [i_0 + 2] = ((~(~var_9)));
        arr_5 [i_0] = var_2;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [10] [i_1] = (max(((var_12 ? (max((arr_6 [i_1]), var_4)) : (~220))), ((-32454 ? (((-3597052828347740648 ? var_1 : var_3))) : var_12))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_2] [i_3] = (((((32459 ? (max(var_0, 1)) : var_13))) ? 2057013764 : 19));
                    arr_16 [i_1] = (((arr_12 [i_2] [i_2] [i_2]) ? (((32442 ? (arr_12 [i_2] [i_2] [9]) : 658878679))) : (((arr_12 [8] [i_2] [i_3]) + 567213417880999185))));
                    arr_17 [i_3] [9] [3] [1] = 1;
                    arr_18 [i_1] [3] |= (min(var_5, (min(var_0, (((var_0 ? var_7 : var_1)))))));
                }
            }
        }
        arr_19 [i_1] [i_1] = var_3;
    }
    #pragma endscop
}
