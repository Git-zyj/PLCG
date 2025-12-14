/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (18650 + 18329075669501206017);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_10 = (((arr_1 [i_0] [i_0]) - ((min(var_4, (arr_1 [i_0] [i_0]))))));
            arr_6 [i_1] [i_0] = var_4;
        }
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_11 = var_6;

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_3] [i_2] [i_5] [i_5] = var_7;
                        var_12 = var_0;
                    }
                }
            }

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_13 = (+(((arr_19 [i_2]) & var_9)));
                var_14 = var_1;
            }
            var_15 = (max((max((min(var_5, var_7)), (arr_14 [i_3] [i_3] [11] [i_2]))), (arr_15 [i_2] [i_2] [4] [i_2] [i_3] [4])));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_16 = (-18644 / var_6);
            arr_23 [11] [i_7] [11] = (((var_6 / (arr_19 [i_2]))));
            arr_24 [i_2] = var_1;
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_17 = (((var_4 || var_1) / (max((min(var_1, 18112483643141979810)), (arr_25 [i_8])))));
        var_18 = 8930486693977762068;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_19 = 8845414676526994694;
                        arr_34 [i_8] [i_8] [i_8] [i_8] = (min((arr_25 [i_8]), (((arr_33 [i_8] [i_8] [i_9] [i_8] [i_10] [i_8]) ? (((min((arr_26 [i_8] [i_9]), (arr_28 [i_8] [i_9]))))) : (((arr_33 [i_8] [i_9] [8] [i_8] [i_10] [i_8]) ? (arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [16]) : var_9))))));
                        var_20 *= (((var_2 << (var_3 - 5366391489999003590))));
                        var_21 = ((((min(((((arr_27 [i_8]) ? -18651 : var_0))), var_8))) ? var_3 : (arr_25 [i_8])));
                    }
                    var_22 = (max(var_4, ((min((arr_32 [1] [20] [i_10]), var_0)))));
                    arr_35 [i_9] [i_9] [i_10] &= min(var_4, ((min(((max((arr_31 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_33 [i_10] [i_10] [i_10] [i_10] [i_10] [i_9])))), var_2))));
                }
            }
        }
        var_23 = (((max(((((arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_31 [i_8] [11] [i_8] [i_8] [i_8]) : var_2))), (max(var_3, var_9))))) ? ((((!((min((arr_27 [i_8]), var_8))))))) : (((arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_33 [14] [i_8] [i_8] [i_8] [i_8] [i_8]) : var_7)));
    }
    var_24 = var_2;
    #pragma endscop
}
