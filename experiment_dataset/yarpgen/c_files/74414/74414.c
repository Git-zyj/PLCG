/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(-8304547263636856826, -329313272)))) ? var_0 : var_3));
    var_14 = var_11;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_15 = 0;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [13] = (((arr_8 [i_3] [i_1] [i_0 - 3]) ? (arr_3 [i_0 - 1]) : -121));
                        arr_11 [i_0] [1] = (((!(arr_6 [i_0]))));
                        arr_12 [i_1] = -8304547263636856826;
                        var_16 += ((arr_8 [i_3 + 3] [i_1 + 2] [i_0 - 2]) ? (arr_9 [i_0 - 1]) : (arr_8 [i_3 - 1] [i_1 - 1] [i_0 - 4]));
                        var_17 = (min(var_17, (arr_6 [i_1])));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_16 [i_0] |= -8304547263636856826;
            arr_17 [i_0] = -112;
            arr_18 [i_0] [i_4] [23] = (arr_9 [i_0 - 2]);
            arr_19 [i_0] [16] = (arr_9 [8]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_18 &= (((arr_23 [i_0] [i_4] [i_4] [2]) < (arr_23 [i_4] [i_4] [i_4] [i_4])));
                        var_19 = (((arr_20 [i_0] [i_0 - 1] [i_0 - 2] [21]) ? (arr_20 [i_0] [i_0 - 4] [i_0 - 2] [i_5]) : 0));
                        var_20 = (arr_23 [i_0] [i_4] [i_4] [i_6]);
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_26 [i_7] = -3596480293556112704;
            arr_27 [i_0 - 1] [i_0 - 1] = 121;
            var_21 = (((arr_4 [i_0 - 3] [i_0 - 4]) ? (arr_4 [i_0 - 3] [i_0 - 4]) : var_5));
            var_22 = (max(var_22, ((((arr_6 [i_0 - 1]) ? 1 : (arr_6 [i_0 - 1]))))));
        }
    }
    var_23 = (min(var_23, (((var_10 > (max(var_10, (var_5 - var_0))))))));
    #pragma endscop
}
