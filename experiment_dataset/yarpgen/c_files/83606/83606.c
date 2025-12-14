/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = ((var_8 ? (min((36 && var_14), (var_16 + var_1))) : var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [10] = (((-6695 > 1) * 6695));
        var_21 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_1] &= (((((-(arr_5 [i_2 + 2])))) ? (arr_5 [i_2 - 2]) : ((127 ? (arr_5 [i_2 - 1]) : (arr_5 [i_2 + 2])))));
                arr_10 [i_1] [i_2] [19] = ((+(((arr_7 [i_2 + 2] [i_2] [i_2]) ^ (arr_7 [i_1] [i_1] [i_2])))));
                arr_11 [i_2 - 1] [i_2] [i_2] = ((0 ? (1608812588 < -15432) : (arr_4 [i_1])));
                arr_12 [i_2] = (((((arr_6 [i_1] [i_2 - 3]) ? (arr_6 [i_2] [i_2 - 3]) : 4)) < (((((arr_6 [i_1] [i_2 - 3]) > (arr_6 [i_1] [i_2 - 3])))))));
                arr_13 [i_2] [i_2] = -64;
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_23 [i_5] [i_4] [i_3] = (arr_6 [i_4] [i_3]);
                    var_22 = (max(var_22, (arr_5 [i_5])));
                }
            }
        }
        arr_24 [i_3] = ((((((arr_16 [i_3]) >> (arr_17 [i_3] [i_3] [i_3]))) > 1)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_23 -= (arr_18 [i_6]);
        arr_27 [i_6] = (32255 | 32255);
        var_24 = (((arr_25 [i_6]) >> ((((1746658937618879106 ? 50166 : (arr_4 [i_6]))) - 50157))));
    }
    #pragma endscop
}
