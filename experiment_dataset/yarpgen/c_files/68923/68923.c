/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(((0 ? var_2 : var_14)), var_5)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 = var_11;
        arr_3 [i_0] = (((((arr_0 [i_0]) ? -8991590873381712298 : (arr_2 [i_0]))) ^ 0));
        var_17 = (!var_4);
        var_18 = (min(var_18, (((!(arr_0 [14]))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((var_5 & (arr_4 [i_1 - 1])));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_1] = (arr_12 [i_1] [i_2] [i_1 - 2]);
                            var_19 |= ((0 * (arr_5 [i_1 - 2])));
                        }
                    }
                }
            }
            var_20 = (arr_5 [i_1 - 2]);
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_24 [i_1] = (!var_1);

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_27 [i_1] [i_1] = 1;
                    arr_28 [i_8] [i_8] [i_6] [i_6] [i_1 + 1] &= (((arr_26 [i_8] [i_6] [i_6] [i_1 + 3]) % 1));
                    var_21 *= 587289972476611586;
                }
                var_22 += (((arr_10 [i_6] [i_1 - 3] [i_7]) ? (arr_26 [i_7] [i_7] [i_7] [i_1]) : (arr_10 [i_7] [i_7] [i_1 + 1])));
            }
            var_23 = (arr_15 [i_1] [i_1] [i_1] [i_1 + 2] [i_1]);
            arr_29 [i_1 + 2] [i_1] = arr_22 [i_1] [i_1] [i_6] [i_1];
        }
        var_24 = ((((34 ? var_1 : 4416658578751111302)) >> (var_0 - 3822989804458412016)));

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_25 = (((arr_8 [i_1]) > ((((arr_16 [i_1] [17] [i_1] [11] [i_9] [i_9] [i_9]) & (arr_13 [i_1] [i_1] [i_1 + 1] [1]))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 22;i_11 += 1)
                {
                    {
                        var_26 = var_8;
                        var_27 *= (arr_14 [i_9] [i_9] [i_11 + 2] [i_10] [i_11 + 2] [i_9]);
                        var_28 = (min(var_28, ((1 != (arr_5 [i_11])))));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            arr_40 [i_1] = (var_5 == var_10);
            var_29 &= (((-125 / (arr_8 [i_12]))) != (arr_12 [i_12] [i_1 - 2] [i_12]));
            var_30 = (arr_32 [i_1 + 3] [i_12] [i_12]);
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 23;i_15 += 1)
                {
                    {
                        arr_52 [i_1] [11] [3] [i_15] = ((((arr_5 [8]) % (arr_45 [13] [i_1] [i_1]))));
                        var_31 = (((arr_44 [i_15 + 1]) ? var_9 : (arr_48 [i_1] [i_13] [i_14] [i_15 - 1])));
                    }
                }
            }
            var_32 &= 1;
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            arr_55 [i_1] [i_16] = (arr_53 [i_1 - 3]);
            arr_56 [i_1] [i_16] = (var_12 ^ var_3);
        }
    }
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        var_33 -= (arr_44 [i_17]);
        arr_61 [i_17] = (min((max((arr_9 [i_17] [i_17]), (((6642303319450819089 ? var_7 : var_13))))), 11651389865206792922));
        var_34 = (max(var_34, (((10464824105057081676 ? ((842025768 ? 7 : 8172816587505701577)) : (((min((arr_14 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), (arr_14 [16] [1] [1] [i_17] [i_17] [1]))))))))));
        arr_62 [i_17] = (((((max(17859454101232940029, 737851191)))) ? (arr_9 [i_17] [i_17]) : (arr_49 [i_17])));
    }
    var_35 = (min(var_35, var_11));
    #pragma endscop
}
