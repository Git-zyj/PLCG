/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max(var_10, ((var_13 ? -0 : (!var_10)))));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = 146;
                            var_18 += (min((((37 ? 46952 : -110))), ((~(arr_0 [i_0])))));
                            var_19 *= ((var_5 ? (((-44 / 1) ? (max(var_7, (arr_12 [i_1] [i_1] [i_2] [i_1] [i_2]))) : (1 * -865453015450532586))) : (var_12 && var_0)));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_20 = (max(var_20, ((max(((1 ? 4018392699 : -8912041733984251502)), 8930128010518706485)))));
                                arr_16 [i_4] [i_0] [i_2] [i_0] [i_1] [i_0] = (arr_14 [i_4] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0]);
                                var_21 -= 8912041733984251502;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_22 = (((((arr_18 [i_0] [i_1] [i_2] [i_5]) ? 211 : var_8)) >= (((var_2 ? var_4 : (arr_8 [i_1] [i_1] [i_3] [i_5]))))));
                                var_23 = ((var_14 & ((var_14 ? var_12 : 3080078464))));
                                var_24 = (max(var_24, ((((~4446103628112150743) ? (arr_10 [i_0] [i_0] [i_0]) : (arr_2 [i_0]))))));
                            }
                        }
                    }
                }
                var_25 += (min(((((!(arr_11 [i_0]))) ? (((-127 - 1) ? var_7 : (arr_19 [i_0] [i_0] [i_1] [i_0] [i_0]))) : 3080078464)), (((var_7 && 4446103628112150725) ? 5113211542152959614 : -0))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_26 = (arr_21 [i_6]);
        var_27 *= (((((arr_20 [i_6] [i_6]) < ((8912041733984251502 / (arr_20 [i_6] [i_6]))))) ? ((min(0, ((((arr_21 [i_6]) != -126)))))) : ((min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6]))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_28 *= ((-3126828912868321758 ? -117 : 18));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_31 [i_7] [i_9] [i_8] [i_8] [i_7] [i_6] = (arr_25 [i_7]);
                            arr_32 [22] [22] [22] [i_8] [22] [i_8] = ((-181884039 ? 1022 : var_14));
                            arr_33 [i_6] &= ((-(arr_20 [i_6] [i_6])));
                            var_29 = -4926077312400591504;
                            arr_34 [i_8] [6] [6] [6] [i_10] [19] = 6959081314743048671;
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_30 = (!250);
                            var_31 = (max(var_31, (((0 ? 2062789134 : -125)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            {
                var_32 = (max(var_32, (arr_24 [i_12] [i_12] [i_12])));
                arr_43 [i_12] [i_12] [i_12] = ((+(min(var_13, (((arr_9 [i_12] [i_12]) / var_2))))));
            }
        }
    }
    #pragma endscop
}
