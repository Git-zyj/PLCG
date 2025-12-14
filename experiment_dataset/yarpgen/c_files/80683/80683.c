/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 >> (var_10 - 571453375)));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 *= (max((arr_1 [i_0]), var_12));
        arr_2 [i_0] = (max(((-114 + (var_8 + var_8))), (((arr_0 [i_0]) - (var_11 + var_3)))));
        arr_3 [i_0] [i_0] = ((((var_8 & (arr_0 [i_0]))) * (arr_1 [i_0 - 1])));
        var_17 = (min(var_17, (((arr_0 [18]) & ((max((((arr_1 [i_0]) > var_14)), ((142 == (arr_1 [4]))))))))));
        arr_4 [7] [i_0] = 187;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = ((var_0 ? (!var_3) : (arr_7 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_16 [i_1] [i_3] [i_4 + 1] = var_2;
                        arr_17 [i_1] [i_1] [i_2] [2] [i_4] = ((arr_12 [i_3] [i_2 - 3] [i_2 - 3] [i_1]) ? (arr_12 [i_1] [i_4] [i_2 - 1] [i_1]) : (arr_12 [i_4] [i_4] [i_2 + 1] [i_1]));
                        arr_18 [i_1] [i_4 + 2] [i_1] [i_3] [i_2] [i_1] = (arr_12 [i_1] [i_2 - 2] [i_3 - 4] [i_3]);
                        var_19 += ((2147483647 & (arr_12 [i_3 - 4] [i_3 - 4] [i_3 + 1] [i_3 - 3])));
                    }
                    var_20 = 41938;

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_21 = ((arr_12 [i_2] [i_2 + 1] [i_2] [i_3 - 2]) ? (((arr_20 [i_1] [i_2] [9] [i_5]) & var_10)) : (arr_12 [10] [11] [i_3] [i_5]));
                        arr_21 [i_2] = (arr_11 [i_1]);
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_22 = (arr_11 [i_1]);
                        arr_25 [i_6] [i_3] [i_2] [i_1] = (arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] [i_6 - 2]);
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_23 = ((((var_12 ? var_7 : 1887337682)) >> (2147483647 - 2147483632)));
                        var_24 = (-(arr_24 [i_3 - 4] [i_2 + 1]));
                    }
                    var_25 = (((arr_13 [i_1] [i_1] [i_2] [i_3 + 1] [18] [i_3]) && var_9));
                    var_26 ^= ((((~(arr_14 [15] [10] [i_1] [i_1]))) & 12));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        arr_31 [i_8] = var_0;
        var_27 = (max(var_27, (arr_12 [i_8 + 1] [i_8] [i_8 - 1] [i_8])));

        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            arr_34 [i_8] [i_9] [i_9] = var_9;

            /* vectorizable */
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                var_28 = var_2;
                var_29 = (((~243) == ((var_2 & (arr_6 [5] [i_9])))));
                var_30 = ((147 >= (arr_1 [i_8 - 2])));
            }
        }
    }
    var_31 = (((var_13 ? var_13 : (~var_1))));
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            {
                var_32 ^= var_14;
                arr_41 [2] [i_12] = (max((max((arr_26 [i_12 - 1] [i_12] [i_11] [i_12] [i_12 + 1] [2]), (arr_40 [i_12] [i_12] [i_12]))), (max((arr_40 [i_12] [i_12] [i_12]), (arr_26 [i_12] [i_12] [i_11] [i_12] [i_12 + 1] [i_12])))));
            }
        }
    }
    var_33 *= var_5;
    #pragma endscop
}
