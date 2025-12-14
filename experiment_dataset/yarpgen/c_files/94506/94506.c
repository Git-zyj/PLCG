/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_13 / 1);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = ((144 ? -127 : 335050987));
            var_20 &= (max(((!(((var_17 ? var_2 : var_13))))), (arr_0 [i_0])));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [10] = (2946 < -32746);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_21 = (((2147483647 ? (((arr_1 [i_0]) ? var_0 : var_17)) : 1)));
                        var_22 = (max(-var_5, ((-28913 ? 217 : (arr_14 [9] [9] [i_0] [i_0])))));
                        arr_16 [i_3] = (((((arr_0 [i_0]) ? ((max(var_11, (arr_2 [i_0])))) : (0 / 7)))) ? var_17 : ((var_0 / (arr_6 [i_2] [i_2] [i_0]))));
                    }
                }
            }
            arr_17 [i_0] [i_2] [i_0] = -2939;
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_24 [i_6] = var_8;
                        var_23 = ((-(((((var_5 ? 5245 : 710894619)) >= var_7)))));
                        var_24 = (min(var_24, ((((34 * 21) >= 1)))));
                        var_25 = (((min((arr_6 [i_6 - 1] [i_5 + 1] [i_5 + 1]), var_14)) + (((min(var_9, (arr_18 [i_6 - 1] [i_5 + 1] [i_5 + 1])))))));
                    }
                }
            }
            arr_25 [i_0] = (min((max(var_15, -24)), ((((max(8, 2147483647)) >= 288230376151711743)))));
        }
        arr_26 [i_0] = ((((max(170, 0))) ? var_16 : (((-(~5245))))));
        var_26 = (66584576 | var_3);
        var_27 = (arr_13 [i_0] [i_0] [i_0] [i_0]);
        var_28 = (((arr_22 [15] [i_0] [8] [i_0]) / (((arr_12 [i_0]) + (arr_3 [i_0])))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_29 = ((var_5 | (arr_13 [i_8] [i_8] [i_8] [12])));
        arr_29 [i_8] = ((1 >= ((-(arr_11 [i_8])))));
        var_30 = (arr_10 [i_8] [i_8] [i_8] [6]);
        var_31 -= 65535;
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_32 = (min((arr_18 [i_9] [i_9] [i_9]), (-127 - 1)));
        arr_32 [i_9] [8] |= ((((arr_28 [i_9]) || var_16)));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_33 &= 65535;
        var_34 = var_1;
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 22;i_12 += 1)
        {
            {
                var_35 = arr_38 [i_11];
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_36 -= var_16;
                            var_37 |= (arr_37 [i_14]);
                        }
                    }
                }
                var_38 = (~var_8);
            }
        }
    }
    var_39 = (var_2 * var_11);
    var_40 = (max(var_40, ((max(-288230376151711743, 0)))));
    #pragma endscop
}
