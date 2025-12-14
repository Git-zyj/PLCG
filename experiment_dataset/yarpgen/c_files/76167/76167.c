/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = ((~(max(var_8, (max(var_4, var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 ^= 63884;
        arr_3 [14] &= ((!(arr_1 [i_0] [i_0])));
        var_14 = (arr_2 [i_0] [i_0]);
        var_15 = (max(var_15, 1665));
        var_16 = arr_1 [6] [1];
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (((arr_5 [i_2]) ? 1651 : (!var_3)));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_4] [i_2] [i_1] [i_2] [i_1] [i_1] = ((~(~27781)));
                            arr_19 [i_5] [i_4] [17] [i_5] [i_5] [i_2] = var_8;
                            arr_20 [i_2] [i_2] [i_3] [i_4] = (((14342 ? 1 : (arr_16 [i_1] [i_2] [i_3] [i_4 + 1] [i_1] [i_3] [i_1]))));
                        }
                    }
                }
                arr_21 [i_1] [i_1] [i_2] = (~var_7);
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_30 [i_1] [i_2] [i_2] [i_2] [i_6] [i_7] [i_8] = var_4;
                            arr_31 [i_2] [i_2] [i_2] [i_2] [i_8] = (arr_23 [i_1] [i_2] [i_6] [i_7 - 1]);
                        }
                    }
                }
                arr_32 [i_1] [i_2] [i_6] [i_2] = 1;
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 18;i_10 += 1)
                {
                    arr_40 [i_1] [i_2] [i_1] [i_10] [i_10] = -119;
                    var_17 = (min(var_17, (((-(arr_6 [i_10]))))));
                    var_18 *= -var_2;
                }
                var_19 = (min(var_19, (arr_33 [i_9] [i_2] [5])));
                var_20 = (max(var_20, var_10));
                arr_41 [i_1] [i_2] [i_1] = ((var_6 ? ((1 ? var_1 : var_7)) : (arr_26 [i_1] [i_2])));
            }
            var_21 = (arr_5 [i_2]);
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
        {
            arr_45 [i_1] [i_1] [i_1] = -2793476985;
            var_22 = var_2;
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
        {
            var_23 = (min(var_23, 2));
            var_24 = (min(var_24, (arr_9 [4])));
        }
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            var_25 = (arr_39 [i_1] [1] [i_1] [i_1]);
            arr_50 [i_1] [i_13] [i_1] = (arr_17 [i_1] [i_13 - 1] [i_1] [i_1] [i_1] [i_1] [18]);
        }
        arr_51 [i_1] [i_1] = ((-(arr_25 [i_1] [i_1] [i_1])));
        arr_52 [i_1] = (arr_4 [i_1]);
    }
    #pragma endscop
}
