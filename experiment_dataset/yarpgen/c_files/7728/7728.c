/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))));
        var_17 = var_12;
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (((((~(arr_3 [i_1 + 1])))) && (((var_1 ? -var_11 : (max(var_4, -9223372036854775797)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = ((!((((arr_13 [9] [9] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1]) ? 31 : var_5)))));
                                var_18 = var_7;
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_1] [i_1 + 1] = (min(var_9, var_9));
        arr_17 [i_1] |= (((arr_3 [i_1]) && ((min(((max(var_6, var_5))), var_0)))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        var_19 = (min(var_19, (((-9104513372695419821 ? -1044961285 : (arr_18 [i_6 + 1]))))));
        arr_20 [i_6 - 1] = ((var_2 < (arr_19 [i_6 - 1])));
    }
    var_20 = 1044961285;
    var_21 = var_1;

    /* vectorizable */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_22 = (((arr_22 [i_7 - 1]) < (arr_22 [i_7 + 2])));

        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            arr_25 [14] = var_11;
            var_23 = -774874121900904419;
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_29 [12] [12] = (((arr_23 [i_7] [i_7 + 1] [i_7 + 1]) ? (arr_21 [i_7 + 3]) : (((~(arr_22 [i_7 - 1]))))));
            var_24 = (arr_21 [i_7 + 4]);
            arr_30 [i_9] [i_9] [i_7] &= ((~(arr_23 [i_9] [i_9] [15])));
        }
        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            arr_35 [i_10] = ((!(arr_32 [i_7 + 4] [i_7] [i_10])));

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_25 = (max(var_25, ((((((((arr_41 [i_7] [i_7] [i_7] [i_7 + 4]) < 1503775724912444784)))) < 16942968348797106835)))));
                    var_26 = (((arr_21 [i_11]) ? ((var_1 ^ (arr_27 [i_7] [i_10] [i_11]))) : 242));
                    arr_42 [i_7] [i_10] [i_10] [10] [i_12] = (((arr_39 [i_10 - 2] [i_10]) < var_16));
                }
                arr_43 [i_10] [i_10] = (!-1044961285);
                arr_44 [i_10] [i_10 - 3] = var_15;
            }
        }
    }
    #pragma endscop
}
