/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (!((((var_8 - 27435) ? ((((arr_5 [i_0] [i_0] [i_2]) <= var_15))) : (var_12 >= -2147483647)))));
                    var_17 = (0 | -1034);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_18 = (var_0 ? (max(var_10, var_15)) : ((max(var_6, 22734))));
                    var_19 -= (arr_5 [i_4] [i_3] [i_4]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_20 -= (!var_14);

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_17 [i_6] = (!var_9);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_26 [i_5] [1] [5] [i_7] [i_6] [i_9] = (!var_4);
                            var_21 -= (arr_23 [i_9] [i_5] [i_7] [i_8] [i_9]);
                        }
                    }
                }
                var_22 = (max(var_22, (((-32756 + ((var_0 + (arr_23 [i_7] [i_5] [i_5] [i_5] [i_5]))))))));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_23 = var_3;
                            arr_38 [i_5] [i_5] [i_10] [i_5] [i_5] |= ((((-1073741824 + 2147483647) >> (var_1 + 967167930))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_44 [i_6] [i_13] [i_10] [i_6] [i_6] [i_6] = (((arr_12 [i_6] [i_6]) || (16378 || 0)));
                            arr_45 [i_5] [i_5] [i_5] [i_13] [i_6] [i_13] = (((var_0 + -32756) ^ (((arr_2 [19] [i_6] [19]) + -6))));
                        }
                    }
                }
                arr_46 [i_6] [i_6] [i_6] = (arr_0 [i_6]);
                var_24 = 1073741814;
            }
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    {
                        arr_54 [4] [i_16] [i_15] [i_5] = ((!(arr_28 [i_15] [i_5])));
                        var_25 = (!1);
                        arr_55 [11] = (((((var_3 % (arr_40 [i_5] [i_5] [i_5] [i_17] [i_5] [i_5])))) && (arr_41 [i_5] [i_16])));
                    }
                }
            }
            var_26 += ((var_5 ? var_14 : 32763));
        }
        arr_56 [i_5] = ((var_4 ? (var_14 >= var_8) : (arr_24 [i_5] [i_5] [i_5] [12] [12] [i_5])));
    }
    var_27 += (~1);
    #pragma endscop
}
