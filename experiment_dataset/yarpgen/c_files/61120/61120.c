/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 -= (max((min((max(var_2, (arr_2 [i_0]))), (arr_1 [i_0]))), var_0));
        arr_3 [10] |= (min(26282, ((((max(var_12, -26283))) ? (max(31, var_12)) : -32))));
        arr_4 [i_0] = (max((arr_1 [i_0]), (arr_2 [i_0])));
        var_14 = (!var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_1] = (arr_6 [i_1] [i_1]);
            var_15 = (max(var_15, -63));
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_16 -= (((((arr_14 [i_1] [i_1] [i_1] [14] [i_4] [i_1]) ? (arr_7 [1] [i_1] [i_1]) : (arr_8 [i_1] [i_2])))) ? ((var_4 ? 0 : var_10)) : (arr_7 [i_3 + 2] [i_3 - 2] [i_3 - 1]));
                        var_17 -= 63;
                        arr_15 [i_4] |= -32;
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_5;
                    }
                }
            }
            var_18 = 62;
            var_19 = (max(var_19, ((((arr_14 [i_1] [i_1] [i_1] [i_1] [8] [14]) ? (arr_5 [i_1]) : -63)))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_20 [i_1] [i_1] = (((arr_5 [i_5]) + var_12));
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_20 = (-26283 ? (arr_22 [i_6] [8] [i_6 + 1]) : (arr_22 [i_6] [i_6] [i_6 + 2]));
                            var_21 = (max(var_21, (arr_7 [i_1] [i_5] [i_6 - 1])));
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_33 [i_1] [i_1] = ((((((arr_14 [i_1] [21] [i_1] [i_1] [i_1] [21]) - var_2))) ? (arr_31 [i_1] [21] [i_1]) : var_3));
                var_22 = (((-24658 ? 9223372036854775807 : var_11)));
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
            {
                var_23 = (arr_32 [i_1] [i_1] [i_5] [i_10]);
                var_24 = (arr_17 [i_1]);
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    {
                        arr_44 [16] [i_1] [i_1] [1] [i_13 - 1] [i_13] |= (((((-(arr_32 [1] [i_12] [1] [8])))) ? (~var_6) : 23612));
                        arr_45 [15] [15] [i_12] [i_12] [15] [i_1] = (((arr_22 [i_1] [i_1] [8]) - var_5));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    var_25 -= ((~(arr_23 [3] [13] [i_14] [i_14])));
                    arr_51 [i_1] [i_14] [i_14] = (!-18);
                }
            }
        }
        arr_52 [i_1] = (var_2 ? (arr_46 [13] [i_1] [i_1]) : (arr_13 [i_1] [i_1] [i_1] [i_1]));
        arr_53 [i_1] = var_1;
    }
    for (int i_16 = 1; i_16 < 12;i_16 += 1)
    {
        var_26 = ((((arr_50 [i_16] [i_16 + 1]) ? 507996975 : (arr_29 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 + 1]))) & ((max(1, (!6821913508306459369)))));
        var_27 = ((((var_4 ? (arr_18 [i_16 - 1] [i_16 - 1] [i_16 - 1]) : 0)) * -26230));
        var_28 = (min(var_28, ((min((arr_47 [i_16 - 1]), (arr_47 [i_16 - 1]))))));
    }
    var_29 = ((var_2 & (var_10 && 93)));
    #pragma endscop
}
