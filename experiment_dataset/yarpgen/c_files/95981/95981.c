/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 = ((15 ? (max(var_13, (603763456 | var_6))) : (-2147483647 - 1)));
        var_16 = ((~(arr_0 [i_0 - 3])));
        var_17 = (max(var_17, 0));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_18 = (min(var_18, 32142));
                                var_19 = (((arr_9 [i_3]) < var_3));
                            }
                        }
                    }
                    var_20 = 33393;
                    var_21 = ((-(~2)));
                    var_22 = (max((((!(arr_13 [i_2 + 1] [1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1])))), (arr_11 [14] [i_2 - 1] [i_1] [i_1])));
                }
            }
        }
        var_23 -= var_11;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        arr_19 [i_6] = (~3);
        var_24 = (max(var_24, (((!(arr_18 [i_6 + 2]))))));
    }
    var_25 = 32142;

    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {

                        for (int i_11 = 4; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_26 = ((-var_4 ? ((1 ? (arr_11 [i_11 - 4] [i_11 - 2] [i_11 - 2] [i_11 - 2]) : (arr_21 [i_11 - 4] [i_11 - 1]))) : var_9));
                            var_27 = ((-((((41917 ? 2594387720181808482 : 5199870629873004258)) >> (((~-1365691051) - 1365691031))))));
                            arr_35 [i_11 - 1] [i_8] [i_9] [i_8] [i_7] = (max(var_10, (arr_8 [i_7] [i_7] [i_9] [i_11])));
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_28 = ((var_13 ? var_2 : (((23618 ? 7 : 1365691050)))));
                            arr_40 [i_8] [i_8] [i_8] [i_8] = ((~(arr_13 [i_12 + 1] [i_12 - 4] [i_12 + 1] [i_12 - 3] [i_12 - 4] [i_12 - 4] [i_12 - 1])));
                            arr_41 [i_7] [i_8] [i_8] [i_10] [i_10] [i_10] = ((~(arr_0 [i_12 - 3])));
                        }
                        var_29 = (((((min(var_1, (arr_11 [0] [0] [0] [0])))) ? ((var_12 ? var_3 : 32142)) : (arr_4 [i_7]))));
                    }
                }
            }
            var_30 = -1656225485521121629;
            var_31 = (~-55902);
            var_32 = (min(var_32, var_6));
        }
        var_33 = (arr_12 [i_7] [i_7] [i_7] [i_7]);
        var_34 = (~var_5);
        arr_42 [5] [i_7] = (((((max(var_12, var_5)))) ? (((arr_5 [i_7] [i_7]) ? (var_8 - var_14) : var_10)) : ((~(var_1 << 8)))));
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
    {
        var_35 *= (arr_10 [i_13] [i_13] [9] [i_13] [i_13] [i_13]);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                {
                    arr_50 [i_13] [i_14] [i_15] [i_15] = 49826;
                    var_36 = -1023;
                }
            }
        }
    }
    #pragma endscop
}
