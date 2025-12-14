/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 12202608580190595033;
    var_14 = 1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] &= 1;
        var_15 = (max(0, ((((6244135493518956582 ? 8 : 2147483647)) & (!1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (((max((0 & -3), (0 > var_11))) * (((-1 != (((((arr_2 [22] [i_1]) + 2147483647)) >> (6244135493518956580 - 6244135493518956574))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 = 12202608580190595017;
                        var_17 += (((((var_3 ? var_12 : 0))) ? (arr_12 [i_1] [i_1] [i_2 - 1] [i_2 - 4]) : (4294967295 | 1073741823)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_18 = (((var_0 ? var_7 : var_8)));
                            var_19 = (~1);
                            arr_20 [i_4] [i_5] = 65535;
                        }
                        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_4] [i_1] [i_4] [i_4] [i_4] [i_0] [i_0] = (((arr_19 [i_0] [i_4] [i_2 - 4] [i_1] [i_0]) ? var_11 : var_7));
                            var_20 |= (-127 - 1);
                            var_21 = (min(var_21, ((((arr_19 [i_0] [20] [i_2 - 1] [i_6 + 2] [i_2 - 4]) ? 0 : (arr_19 [i_0] [1] [i_2] [i_6 + 2] [i_2 - 4]))))));
                        }
                        for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [i_4] = (((((var_10 ? 1 : 118))) ? 6244135493518956582 : (((1 ? -1 : 9)))));
                            arr_28 [i_0] [i_1] [i_2] [i_4] [i_4] = ((179 ? var_7 : -7599885436727432781));
                            arr_29 [i_0] [i_4] = (arr_17 [i_2] [i_1] [i_4] [i_4] [i_7]);
                        }

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 = var_8;
                            var_23 = (((~var_2) ? 1 : (12 & 2998363448466795927)));
                            arr_33 [i_0] [i_1] [i_2 - 3] [i_4] [i_4] [i_4] = ((8192 ? (arr_5 [i_0]) : (arr_32 [i_2 + 1] [i_2 - 3] [i_4] [i_4] [i_2 + 1])));
                            arr_34 [i_4] = (arr_8 [i_0] [i_1] [i_2 + 1]);
                        }
                        var_24 = (((1 > 0) == 0));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_25 = (max(((max(65535, ((-14053 ? 136 : 7168))))), ((((((arr_8 [i_0] [i_1] [i_9]) / var_6))) ? ((12202608580190595033 ? var_10 : 12)) : 7635))));
                        arr_37 [i_1] [i_2 - 4] = 1;
                    }
                    var_26 = -25;
                }
            }
        }
        arr_38 [i_0] |= -0;
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 21;i_10 += 1)
    {
        arr_41 [i_10] [i_10] = ((24 ? var_5 : 205));
        var_27 = 12;
    }
    #pragma endscop
}
