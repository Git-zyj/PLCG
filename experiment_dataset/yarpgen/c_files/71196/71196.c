/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = var_11;
                    var_16 |= (((var_4 / var_14) / var_8));
                    var_17 = ((17399926069941030236 % (((var_12 ? ((max(0, 1))) : (arr_4 [i_0] [i_1 + 1] [i_2 - 1]))))));
                    var_18 ^= 11631569343972751002;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = ((((min(255, (arr_14 [i_3] [i_3])))) ? -var_14 : var_1));
                    var_20 = (((max(var_9, var_8))) ? 17399926069941030222 : (1 / var_14));
                    var_21 = ((-((((var_5 ^ 1046818003768521391) < (arr_11 [i_4 - 1] [i_4 - 1]))))));
                }
            }
        }
    }
    var_22 = 1;

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_23 = var_1;
        arr_22 [i_6] = (arr_10 [i_6] [i_6]);
    }
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_29 [i_9] [i_8] [i_9] = ((13378176913848029797 ? 1 : 18446744073709551611));

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_24 = -1;
                        var_25 ^= (((arr_8 [i_10] [i_9]) ? (arr_32 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7]) : ((var_4 ? 1 : var_2))));
                        arr_33 [i_7 + 2] [i_8 + 2] [i_9] [i_9] [i_9] = ((arr_5 [i_9] [i_9] [i_9]) ? (var_12 * 4486007441326080) : (((arr_30 [i_7 + 2] [i_8 - 1] [i_9]) ? var_10 : var_6)));
                        arr_34 [i_9] [i_7] [i_9] = ((var_2 ? var_0 : (arr_23 [i_8 + 3])));
                    }
                    var_26 = (min(((-(arr_0 [i_8]))), var_2));
                }
            }
        }
        var_27 = (1 > (((max(0, 1)) >> (var_11 - 10332015456790689280))));
    }
    #pragma endscop
}
