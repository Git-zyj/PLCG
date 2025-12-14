/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 4294967283;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_11;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((arr_9 [i_0] [i_1] [i_2] [i_2] [i_3]) ? ((72057594037927808 ? var_6 : (arr_3 [i_0 - 3] [i_1] [i_2]))) : (((0 ? 64 : -120))))))));
                        var_20 -= -53993;
                        var_21 -= ((arr_1 [i_0 - 2] [i_3]) ? (arr_1 [i_0 - 1] [i_1]) : (arr_1 [i_3] [i_3]));
                    }
                }
            }
            var_22 = (arr_5 [i_0 - 2] [i_0 - 1]);
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_23 *= (arr_1 [i_4] [1]);
            var_24 = arr_4 [i_0 - 2];
        }
        var_25 = (max(var_25, ((((arr_0 [i_0 + 1]) ? var_10 : 1)))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_15 [i_5] = 53989;
        var_26 = var_8;
        arr_16 [i_5] [i_5] = ((-(((8526849015944654800 == ((-120 ? (arr_12 [i_5]) : var_8)))))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_27 = 16925045338217514305;
        var_28 = ((!(((var_9 ? ((var_12 ? (arr_18 [i_6] [i_6]) : (arr_17 [i_6]))) : ((var_9 ? 119 : var_9)))))));
    }
    #pragma endscop
}
