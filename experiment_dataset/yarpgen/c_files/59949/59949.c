/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_12 = arr_3 [i_0 + 4] [i_0 + 2];
        arr_4 [i_0] = min(-14676, -14676);
        var_13 ^= arr_1 [i_0];
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = max(14676, 22025);
        var_14 = -var_4;
        var_15 ^= arr_0 [i_1 + 1];
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_16 = (min(var_16, -15291));
        var_17 = (17081 || 3680);
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((((((arr_0 [i_3 + 4]) | (arr_0 [i_3 - 1])))) ? ((15310 ? 4203 : 13311)) : var_0));
        var_18 ^= arr_8 [i_3 - 1];
        var_19 ^= 10187;

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_20 ^= (((arr_5 [i_3 - 2] [i_3 + 4]) / ((min(var_9, var_1)))));
            arr_17 [i_3] = ((((((arr_3 [i_3 + 4] [i_4]) || (arr_16 [i_3 + 1] [i_3 + 2] [i_3 + 4])))) << (((arr_11 [i_3]) - 32050))));
            var_21 = (((arr_5 [i_3 + 1] [i_3]) - ((-14653 ? 1918 : 13879))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    {
                        var_22 = (max(var_22, ((max(((((arr_21 [i_3] [14] [i_6 + 2] [i_6] [i_6]) <= var_2))), (((arr_21 [i_3] [i_4] [i_6 + 2] [i_6 - 1] [i_3]) ? (arr_20 [i_6] [i_6 + 1] [i_6 + 2] [i_6 - 1]) : var_11)))))));
                        var_23 = ((!(arr_10 [i_3 + 2])));
                        arr_22 [i_3] [i_6] [i_3] [i_6] = var_6;
                        var_24 = arr_5 [i_3] [i_5];
                    }
                }
            }
            arr_23 [i_3 - 2] [i_3 - 2] = (((arr_12 [i_3 - 2] [i_4]) > (arr_10 [i_4])));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            arr_27 [17] = arr_20 [i_3] [i_3 + 1] [i_3] [i_7];
            var_25 = arr_24 [11] [11];
            arr_28 [i_3] [i_7] [i_7] = (arr_2 [i_3 + 1]);
            var_26 = (max(var_26, (arr_21 [5] [i_3 + 4] [i_3] [i_3] [6])));
            var_27 ^= arr_3 [i_3 + 4] [i_7];
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_28 = ((-25705 - ((((((arr_20 [i_3] [i_8] [i_3] [i_3]) ? (arr_20 [i_3] [i_8] [i_8] [i_8]) : var_11))) ? (arr_25 [i_3 - 2] [i_3 + 2]) : (arr_16 [i_3 - 1] [i_8] [i_8])))));
            var_29 ^= arr_29 [i_3] [i_8] [i_8];
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_30 = (((arr_6 [i_3 + 1]) ? var_6 : (arr_6 [i_3 + 1])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {

                        for (int i_12 = 2; i_12 < 18;i_12 += 1)
                        {
                            arr_42 [i_3] [i_9] [i_10] [i_9] [i_12] = -var_0;
                            var_31 = (min(var_31, ((max((((arr_21 [i_12] [i_12 - 2] [i_11] [i_10] [i_10]) ? (arr_21 [9] [i_12 - 2] [i_12] [i_11] [i_10]) : (arr_21 [i_12] [i_12 - 2] [7] [i_3] [7]))), (arr_21 [i_12] [i_12 - 2] [i_3] [i_3] [i_3]))))));
                            var_32 = (max(var_32, ((((arr_41 [i_3] [i_3 + 1] [i_12 - 1]) ? ((-((max(-22498, (arr_20 [i_9] [i_10] [i_11] [19])))))) : (arr_37 [i_3 + 4] [i_3 - 2] [16] [i_3]))))));
                        }

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_33 = arr_13 [i_11];
                            arr_47 [i_9] [i_9] [i_10] [i_11] [i_13] = (((((arr_31 [i_13]) ? (arr_2 [i_10]) : (arr_38 [i_9]))) % (arr_30 [i_3 + 3])));
                            var_34 = var_10;
                            var_35 = arr_7 [i_3 + 1];
                        }
                        var_36 = (max((arr_18 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 2]), (((arr_25 [i_3 + 3] [i_3 + 1]) ? (arr_25 [i_3 + 3] [i_3 - 1]) : var_6))));
                    }
                }
            }
        }
    }
    var_37 = var_2;
    var_38 = -var_10;
    var_39 = ((((max(-14674, var_11))) ? (~var_0) : (((~var_0) ? ((var_6 ? 10162 : -32408)) : var_4))));
    #pragma endscop
}
