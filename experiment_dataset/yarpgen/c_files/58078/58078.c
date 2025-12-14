/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_1;
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((+(((arr_4 [i_1] [i_0] [i_0]) * (arr_4 [i_0] [i_1] [i_1]))))))));
                arr_5 [i_1] = (-(var_5 != var_0));
                var_21 = (min(var_21, (((~(((arr_3 [i_0]) >> (((arr_3 [i_1]) - 8384179652306392149)))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = (arr_9 [7] [14]);
        arr_11 [i_2] [i_2] &= (var_13 == var_12);
        var_22 = arr_8 [i_2] [i_2];
        var_23 = (min(var_23, (arr_9 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = (max(var_24, 8519));
        var_25 = ((max((var_2 & var_2), (((~(arr_7 [i_3])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = ((((var_6 ? var_3 : (arr_13 [i_4])))) ? (var_9 & var_6) : (((arr_8 [i_4] [19]) & (arr_18 [1]))));
        arr_20 [3] [i_4] = (arr_9 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {
                    var_26 = (((arr_23 [i_6 + 1] [i_6 + 3] [8] [i_6 + 4]) != (arr_23 [i_6 + 1] [i_6 + 3] [1] [i_6 + 4])));
                    var_27 = var_16;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_28 = ((14101771720873514871 ? -6005 : 4294967274));
        var_29 = ((((min(8190, -6005))) ? ((var_4 ? (arr_12 [i_7] [i_7]) : var_1)) : (arr_12 [i_7] [9])));
        var_30 += (arr_8 [i_7] [i_7]);
    }
    #pragma endscop
}
