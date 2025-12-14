/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max((min(var_3, var_12)), (var_9 - var_1)))) ? (~var_11) : (min(((min(var_8, var_9))), -var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] &= ((!(((-((var_8 ? (arr_2 [i_0]) : var_3)))))));
                var_17 = (~1244938425);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 &= ((!(arr_2 [i_2])));
        arr_8 [i_2] = ((((!(arr_1 [i_2]))) ? (arr_0 [i_2]) : (417471401 < 142)));
        var_19 = ((-(arr_5 [i_2])));
        var_20 = (arr_7 [i_2]);
        var_21 = (((-(arr_6 [i_2] [i_2]))));
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        arr_11 [i_3] = ((-(~78)));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_22 = arr_17 [i_4 - 1] [i_5] [i_3 + 2];
                    var_23 = (((arr_1 [i_3 + 2]) ? (arr_1 [i_4 + 2]) : (arr_1 [i_3 - 1])));
                }
            }
        }
        var_24 = (((((113 ? var_11 : 4294967295))) ? (var_11 + 21) : ((var_3 ? (arr_2 [1]) : 113))));
        var_25 = ((arr_3 [i_3 + 2] [i_3 - 3]) && 3053611527512978078);
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    {
                        var_26 = ((-(((arr_20 [i_8 - 1] [i_7] [i_6] [i_3]) | 159))));
                        arr_25 [i_3 + 1] [i_8 + 3] [i_7] [15] = (arr_15 [i_3] [i_8] [i_7] [i_8]);
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_27 += ((var_6 && (~var_13)));
        arr_29 [i_9] |= (min((arr_26 [i_9] [i_9]), (arr_27 [i_9])));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        arr_32 [i_10] [i_10] = ((89 ? (arr_27 [i_10]) : (arr_28 [5] [5])));
        arr_33 [i_10] = ((~(arr_27 [i_10])));
        var_28 = (((arr_30 [i_10]) ? 92 : (arr_28 [i_10] [i_10])));
    }
    #pragma endscop
}
