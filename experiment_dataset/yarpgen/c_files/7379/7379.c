/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((25603 ? var_0 : var_15)) - var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = (!-0);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [3] [i_2] = arr_1 [1];
                    arr_9 [2] [2] [i_2] [3] = (arr_6 [i_0]);
                    arr_10 [i_0] [i_2] = ((!(!977044622137235862)));
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        var_17 &= ((var_15 ? (min((!0), (((arr_11 [i_0] [i_0] [i_3] [i_4]) ? var_2 : (arr_15 [20] [2] [i_3] [i_3 + 1] [i_4 - 3]))))) : (((-var_12 ? (!3851353412371051888) : (((!(arr_12 [0] [i_1] [i_1] [i_1])))))))));
                        arr_17 [20] [i_4] [i_4] [i_0] = var_8;
                    }
                    var_18 = (max(var_18, 32339));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                {
                    var_19 = (((-(arr_22 [i_7 - 1] [i_5] [i_5]))) >= (((!var_13) >> (((min((arr_2 [i_5]), (arr_0 [i_5]))) - 1226151375)))));
                    var_20 = (!var_9);
                }
            }
        }
    }
    #pragma endscop
}
