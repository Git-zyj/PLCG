/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = 1021586648275979686;
        var_18 = 5354073515215776008;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 = (var_12 / (max(1965243302809230892, (arr_2 [i_1]))));
        arr_4 [7] [i_1] = -691783496;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_20 += (arr_7 [i_2]);

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_21 = (11692 && 1400805876);
                            arr_18 [i_3] [i_5] [5] [5] [i_3] = 1;
                        }
                    }
                }
            }
            arr_19 [i_3] [3] = 7670529852275314328;
            arr_20 [i_3] = var_11;
            var_22 = 10776214221434237288;
        }
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            var_23 ^= 18446744073709551606;
            var_24 = (arr_9 [i_2] [i_2] [i_2]);
            var_25 = (((arr_11 [i_2] [i_7 + 1] [i_7 + 1]) >= (1794577596 == 10)));
        }
        for (int i_8 = 4; i_8 < 10;i_8 += 1)
        {
            arr_27 [i_2] [1] [i_8] = var_16;
            var_26 = (min(var_26, (2 - 3187803561)));
            var_27 = (arr_2 [i_2]);
        }
        var_28 = ((arr_15 [i_2]) - 1);
    }
    var_29 = 1173;
    var_30 = (max(var_30, var_8));
    var_31 = var_2;
    var_32 = var_6;
    #pragma endscop
}
