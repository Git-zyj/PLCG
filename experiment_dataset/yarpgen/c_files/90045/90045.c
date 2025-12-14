/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_11 <= 2156413659476263519)));
    var_13 = var_9;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_14 -= var_0;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_1] [i_1] [i_0 - 1] = ((!(((-(arr_0 [i_3] [5]))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_0 + 2] &= ((((4095 && (arr_1 [i_1] [12]))) && (!24738)));
                    }
                }
            }
            var_15 = 4294963192;
            var_16 = var_2;
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_19 [6] [i_4] = 3412739500281235379;
            var_17 *= var_3;
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_18 = var_3;
                arr_27 [i_5] [i_5] = ((-7074592708895087340 / (((var_8 ? (arr_22 [i_5] [i_6]) : 1)))));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_37 [i_5] [i_7] [i_9] &= ((arr_28 [i_7]) >= (arr_20 [i_9] [i_0 - 1]));
                            arr_38 [i_5] [i_5] [i_5] [i_5] = arr_12 [i_0] [i_0 + 2] [11] [i_8];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_45 [i_0] [i_5] [i_7] = (((arr_1 [i_10 + 3] [i_0 + 1]) | 51793));
                            var_19 = (arr_6 [i_0 - 1]);
                            var_20 += var_11;
                        }
                    }
                }
                var_21 *= ((!(15 * 1)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((var_10 ? (arr_9 [i_13] [i_5] [i_7]) : -var_11)))));
                            var_23 = ((((arr_3 [i_7] [i_7] [i_7]) ? 31420 : (arr_20 [i_13] [i_13]))));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                var_24 = ((((((arr_46 [i_5] [i_5] [i_14] [i_5]) ? (arr_31 [i_0] [i_14] [5] [i_5]) : 8191))) | -52710940));
                arr_54 [i_5] = (arr_49 [i_0] [i_0]);
            }

            for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
            {
                var_25 = 131071;
                var_26 = ((7074592708895087335 - (arr_6 [i_0])));
                var_27 = (min(var_27, (arr_40 [i_0] [i_5] [10])));
            }
            for (int i_16 = 1; i_16 < 15;i_16 += 1) /* same iter space */
            {
                var_28 = (min(var_28, 1117970113));
                var_29 -= var_7;
                var_30 = 51797;
            }
            for (int i_17 = 1; i_17 < 15;i_17 += 1) /* same iter space */
            {
                var_31 = (7785912186086039716 != -330547758);
                arr_63 [i_0] [i_5] = ((~(arr_29 [i_0])));
            }
        }
        for (int i_18 = 3; i_18 < 13;i_18 += 1)
        {
            var_32 = 2082320245;
            var_33 = (max(var_33, (arr_39 [i_0 - 1])));
            arr_67 [i_0 + 2] = (((-6435800317336671601 != 330547758) ? var_2 : -var_2));
            arr_68 [i_0] [i_0] [4] = (((8191 || 8234214427525659475) && (((var_11 ? 1 : var_11)))));
            var_34 *= ((((((arr_7 [i_0] [i_0] [i_18 + 3] [i_0]) - var_7))) || ((((arr_20 [14] [i_18 + 3]) ? var_1 : var_9)))));
        }
    }
    #pragma endscop
}
