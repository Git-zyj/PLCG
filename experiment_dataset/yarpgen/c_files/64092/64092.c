/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 += (arr_1 [4]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_4));
                    var_21 = 1272620497;
                }
            }
        }
        arr_7 [i_0] = (arr_4 [i_0 + 1] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_13 [i_3] [i_4] [i_4] &= (arr_6 [i_4] [i_4] [i_4] [i_3]);
            var_22 = ((var_5 * (arr_3 [i_3] [i_3] [i_3])));
        }
        arr_14 [i_3] = (arr_8 [i_3]);
        arr_15 [i_3] = ((!(arr_0 [i_3])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_23 = var_9;
        arr_18 [i_5] = ((((((arr_3 [i_5] [i_5] [i_5]) * var_5))) ? -var_3 : (arr_6 [i_5] [i_5] [i_5] [i_5])));
        var_24 = (max(var_24, (!-485670753)));
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_6] [i_7] [i_6] = (max((((65533 + (arr_25 [i_6] [i_7 + 3] [i_8])))), (((var_3 ? (arr_25 [i_7 + 2] [i_6 + 3] [i_8]) : var_5)))));
                    var_25 = var_4;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((((max(65521, var_3)))) ? ((32755 ? 528 : 0)) : (arr_25 [i_9 - 1] [i_6 + 3] [i_6])))));
                                var_27 = (max(var_27, ((((((arr_24 [i_9 - 1]) || (arr_24 [i_9 - 1]))) ? ((((arr_20 [i_7 + 3]) || (arr_19 [i_6 - 1])))) : -7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_16;
    #pragma endscop
}
