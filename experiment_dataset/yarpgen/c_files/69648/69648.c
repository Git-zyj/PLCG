/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (((arr_1 [i_0]) ? (var_9 / var_1) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_11 = 15;
            arr_5 [i_0] [i_0] [1] = (arr_1 [i_1]);
            var_12 = (max(var_12, ((((arr_1 [i_0]) != (arr_1 [i_0]))))));
            arr_6 [i_1] = var_2;
            var_13 = (((arr_4 [i_0] [i_1] [i_1]) && (((~(arr_4 [i_1] [i_0] [i_0]))))));
        }
        var_14 = (arr_0 [i_0]);
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_11 [i_2] = (arr_1 [i_2]);
            var_15 = var_9;
        }
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            arr_14 [i_2 - 1] [i_2] [i_4] = ((-(arr_2 [i_2])));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_17 [0] [i_2] [i_5] = (~var_7);
                arr_18 [i_2 + 1] [i_4] [i_2] = (!29891);
            }
            /* vectorizable */
            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_16 = (min(var_16, -83));
                            arr_26 [i_2 - 1] [i_8] [i_8] [i_2] [i_2] [i_7] = arr_20 [i_2] [i_2] [i_2] [i_2];
                            var_17 *= (arr_15 [8] [i_7] [i_7]);
                        }
                    }
                }
                arr_27 [6] [i_2] [i_2] = (((arr_10 [i_2 + 1]) ? (arr_10 [i_2 + 1]) : var_1));
            }
        }
        arr_28 [i_2] = ((~(((!29907) | (arr_0 [i_2])))));

        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            arr_31 [i_2] = ((~((-(arr_20 [i_2] [i_9 + 1] [i_2] [i_2])))));
            arr_32 [i_2] [i_2] [1] = var_0;
            arr_33 [1] [i_2] [i_2] = ((((max(547038659, (arr_19 [i_9] [i_9] [i_9] [i_9 - 1])))) && ((!(arr_19 [i_9 + 1] [i_9 - 3] [i_9 - 3] [i_9 - 1])))));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_38 [i_2] [16] [3] = ((1 ? -29886 : -29889));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_18 |= (((arr_36 [i_2 - 1] [i_10 - 1] [i_10 - 1]) ? (arr_36 [i_2 - 1] [i_10 - 1] [i_10 - 1]) : (arr_36 [i_2 - 1] [i_10 - 1] [i_10 - 1])));
                            var_19 &= ((arr_48 [i_10 - 1] [12] [i_10 - 1] [i_13] [i_2 + 1]) != (arr_48 [i_10 - 1] [1] [i_11] [i_12] [i_2 - 1]));
                            arr_49 [i_2] [i_13] [i_12] [i_2 - 1] [i_13] [20] [i_2 - 1] = var_4;
                        }
                    }
                }
            }
            var_20 = (arr_30 [i_2 - 1]);
            arr_50 [i_2] = (((arr_37 [i_2 + 1]) || (arr_37 [i_2 + 1])));
        }

        /* vectorizable */
        for (int i_14 = 2; i_14 < 19;i_14 += 1)
        {
            var_21 |= ((var_0 ? (arr_3 [i_14 - 1]) : (arr_16 [4] [i_2 + 1])));

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_22 = (arr_57 [i_2 - 1] [i_14 + 2] [i_2 - 1]);
                var_23 = ((var_5 ? (arr_0 [i_2 + 1]) : ((((arr_13 [i_14 - 2]) && var_7)))));
                var_24 = (arr_43 [i_2 - 1] [i_14 + 1] [20] [i_15] [1] [20]);
            }
            var_25 = (arr_51 [i_2] [i_2] [6]);
        }
    }
    var_26 = 32762;
    var_27 = -1;
    #pragma endscop
}
