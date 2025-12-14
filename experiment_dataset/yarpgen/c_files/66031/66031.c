/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (max(var_6, ((var_0 ? ((138 ? 0 : var_11)) : var_16))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((-var_11 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_18 = (max(var_18, (((~(arr_1 [i_0]))))));
        arr_5 [i_0] = ((-2050821794103586035 ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, 237));
        arr_8 [17] = ((((max(((var_0 ? var_6 : var_7)), (arr_2 [6])))) ? (var_7 || var_9) : ((-((18165097130999391426 ? -35 : 26))))));
        arr_9 [i_1] = ((~((-(arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_4] [i_4 + 4] [i_4] [i_4 + 3] [i_4 + 3] = ((((((arr_12 [i_2]) ? ((max((arr_12 [i_2]), -1890202237))) : (arr_7 [i_4 - 1])))) ? (((max((arr_13 [i_3 + 1]), 32)))) : ((32 & (arr_7 [i_2])))));
                        var_20 = (((max(237, (arr_1 [i_2]))) * (((arr_16 [i_4 + 2] [i_3 + 1] [i_3 + 1]) ? (arr_16 [i_4 + 3] [i_3 + 2] [i_3 + 2]) : (arr_16 [i_4 + 4] [i_3 + 2] [i_3 - 1])))));
                        var_21 = (((((var_4 ? (((max(9, (arr_13 [i_5]))))) : (arr_7 [i_2])))) % ((~(arr_6 [i_4 + 4] [i_3 - 1])))));
                    }
                }
            }
        }
        var_22 = ((!((max((max(var_11, (arr_2 [i_2]))), (arr_3 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_23 = (((arr_14 [i_6]) ? (arr_14 [i_6]) : (arr_16 [i_6] [i_6] [i_6])));
        var_24 += 4294967295;
        var_25 -= (~18);
    }
    #pragma endscop
}
