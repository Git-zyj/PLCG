/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    var_21 = ((-(max(((max(var_10, var_10))), (min(1, var_12))))));
    var_22 = (min(50105, (min((~-1), 65280))));
    var_23 ^= (1 > 1);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_24 = (min(var_24, ((((((((max(-8648843819333874269, 179))) ? ((((arr_0 [4]) <= -27))) : var_1))) ? (arr_0 [2]) : var_0)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (((((max(59, 4294967292)) ? var_17 : (max((-9223372036854775807 - 1), var_15))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] &= (!-2131007935);
                    var_25 = (max(var_17, (((1 ? var_17 : 0)))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_0] [i_3] [i_0] = (min(((45051 ? -1 : var_2)), ((min(((max(122, -91))), ((var_3 ? (arr_1 [i_0]) : var_16)))))));
            arr_14 [i_0] [i_0] [i_0] = (min((18446744073709551615 >= 1), 3383901961531075479));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_26 = ((((((arr_17 [i_4]) ^ var_13))) ? 54381 : (arr_17 [i_4])));
        var_27 += var_4;
    }
    #pragma endscop
}
