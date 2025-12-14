/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = ((~(!var_6)));
        var_20 &= ((-((var_16 ? var_10 : (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_0] [i_2] [i_0] [i_0] [i_2] = (var_8 <= var_0);
                            var_21 = (((arr_9 [i_0] [i_0]) | var_18));
                            var_22 = (max(var_22, var_15));
                            var_23 = (!var_7);
                            arr_17 [i_4] [i_0] [i_2] [i_0] [10] |= ((arr_14 [i_3 + 1] [i_3] [i_3] [i_4] [15] [9] [i_4]) ? (arr_14 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [3] [i_3]) : (arr_14 [i_3 - 1] [19] [i_3 - 1] [i_3 - 1] [i_4] [i_4] [7]));
                        }
                        for (int i_5 = 4; i_5 < 22;i_5 += 1)
                        {
                            var_24 = (var_10 && 8302065991365082587);
                            arr_20 [i_2] [7] [19] [i_0] [16] = -1090040186;
                            var_25 = 6890981290512903257;
                        }
                        var_26 ^= (((arr_18 [i_1 + 1] [7] [14] [i_3 + 1] [i_1]) ? (arr_18 [i_1 + 1] [i_2] [i_2] [i_3 + 1] [i_2]) : var_8));
                        var_27 = (+-60);
                        arr_21 [i_0] &= var_10;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_28 = ((((arr_15 [i_6] [i_6] [i_6 - 1] [i_6] [i_6]) > 1)));
                        arr_30 [13] [13] [i_7] [i_8] = (52 - 1090040184);
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_34 [i_9] [i_6] [i_0] = (((arr_9 [i_0] [i_0]) ? 1090040186 : (arr_23 [i_6 - 2])));
                        var_29 = 1;
                    }
                    arr_35 [i_0] [i_0] = var_8;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_41 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = (arr_26 [i_11 + 1] [i_11 + 1] [i_6 + 1] [i_6 - 3]);
                                arr_42 [i_10] [i_10] [i_7] [i_7] [i_11 - 1] = var_3;
                                var_30 = ((44 ? var_16 : (arr_39 [16] [i_11] [i_11 + 3] [i_11] [i_11 + 3] [20] [i_11])));
                            }
                        }
                    }
                    arr_43 [i_0] = var_14;
                    arr_44 [i_6 + 1] [19] = (((!52255) ? var_18 : var_13));
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 12;i_12 += 1)
    {
        var_31 = (max((((108 + var_11) ? (((((arr_26 [i_12] [i_12] [1] [i_12]) != -16967)))) : (arr_11 [i_12] [i_12] [i_12] [i_12]))), ((min(59, var_13)))));
        var_32 -= var_0;
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        arr_53 [i_13] = (arr_19 [21] [22] [22] [i_13] [22]);
        var_33 = min((((6890981290512903257 ? (~-108) : ((-8707455598424275742 ? 1 : 733061986))))), var_10);
    }
    var_34 = ((((var_10 ? (var_3 <= var_18) : (~-108))) - var_13));
    #pragma endscop
}
