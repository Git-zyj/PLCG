/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (+(((arr_4 [i_1 + 3] [i_1]) - var_4)));
                                var_14 = (!((min((((arr_1 [i_1]) - -353792665)), 105))));
                                var_15 -= ((((max((arr_7 [i_4 + 2] [2] [i_2] [2] [i_0]), (arr_7 [i_0] [6] [i_2] [i_4] [i_4])))) ? var_6 : (max(-76, -814578328382956456))));
                                var_16 = (((!127) ? (arr_8 [i_0] [i_1] [i_1] [i_4 - 1]) : (((~(arr_13 [i_0] [i_0] [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }
                    var_17 = 7168;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] = -106;
                                var_18 = ((((min((((2672484561 ? var_4 : var_4))), (arr_1 [i_1])))) ? ((~(arr_6 [i_1] [3] [i_5 + 4] [i_6 + 1]))) : 94));
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2 + 1] [i_7] = (((arr_2 [i_1 + 1] [i_1]) ? (((arr_2 [i_1 + 3] [i_1]) ? var_1 : 29315)) : (min((arr_2 [i_1 - 1] [i_1]), var_6))));
                        var_19 = ((!(arr_5 [i_2] [i_1] [i_2] [1])));
                        var_20 = (arr_3 [i_0]);
                    }
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_29 [i_1] [i_1] [i_8] [5] = var_5;
                            var_21 ^= (min((arr_8 [i_8 + 1] [i_2 + 1] [1] [i_2]), ((max(((var_7 ? (arr_17 [i_0] [i_0] [i_0] [i_8 + 2] [i_9]) : 72)), (52465 / 7168))))));
                        }
                        arr_30 [i_1] [2] [i_1] = ((!(((((max((arr_5 [i_8] [i_2 - 1] [i_1] [13]), var_4))) ? (arr_10 [i_1] [i_8] [i_2] [i_1] [i_1 + 2] [i_1]) : var_12)))));
                        arr_31 [i_0] [i_1] [0] [i_0] [i_0] [i_8] = ((max(var_5, (arr_10 [i_1] [3] [i_1] [i_1 + 3] [3] [i_8 + 2]))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_22 = var_1;
                            var_23 = var_4;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_1] [i_2 - 1] [i_1] [i_1] [i_11] = 67108863;
                            arr_37 [12] [i_1] [12] &= (arr_5 [i_11] [i_11] [i_1 + 3] [i_1]);
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_24 = ((((((arr_12 [i_1 + 3] [i_2 + 1]) & (arr_12 [i_1 + 2] [i_2 - 1])))) <= (min(46, ((4294967295 ? 4294967278 : 107))))));
                            var_25 = (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            {
                arr_46 [i_13] [i_14] = (arr_44 [i_13 - 1]);
                arr_47 [i_13] = var_5;
            }
        }
    }
    var_26 &= (!1628410113);
    var_27 = -var_1;
    #pragma endscop
}
