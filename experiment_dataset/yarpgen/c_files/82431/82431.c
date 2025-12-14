/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((+(((var_14 / var_9) ^ (var_12 ^ 2305842734335787008)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        var_19 = (max(var_19, var_0));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_0] = ((-(((arr_4 [i_0] [i_0] [i_0]) ? (arr_6 [i_0]) : var_7))));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_20 = (((arr_2 [i_0]) ? ((var_7 ? var_1 : 54321)) : (11214 * 54321)));
                var_21 = (((((-(arr_0 [i_1])))) ? ((var_6 << (((arr_11 [i_2] [i_0]) + 25498)))) : -4436));
                var_22 = (!var_4);
                arr_12 [i_1] [i_0] [i_2] = (((((arr_8 [i_2] [i_2] [i_1] [i_0]) - var_2)) != (((arr_3 [i_1] [1]) ? -32747 : var_14))));
                var_23 = (min(var_23, ((((-(arr_1 [i_0])))))));
            }
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                arr_16 [14] [i_3] = -54321;

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_24 |= -8;
                    var_25 = (min(var_25, (arr_18 [i_0])));
                    var_26 = (max(var_26, (!var_13)));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_27 = (((arr_15 [18] [i_3]) == (((!(arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        var_28 = (((-3303 - (arr_10 [i_4]))));
                        var_29 = (~((430 ? var_1 : var_13)));
                        var_30 = var_6;
                        var_31 *= ((!((((arr_19 [i_0] [i_1] [i_3] [i_4] [i_5]) ? (arr_4 [i_0] [i_1] [i_4]) : (arr_14 [i_3] [i_4] [i_5]))))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_32 = (arr_8 [i_4] [i_4] [i_4] [10]);
                        var_33 = (((!11214) ? ((40490 ? (arr_21 [17] [i_6] [i_3] [i_4] [i_3] [i_1] [i_0]) : (arr_15 [i_0] [i_3]))) : (!var_16)));
                        var_34 = (min(var_34, ((((arr_11 [i_4] [i_6]) ^ (arr_20 [i_0]))))));
                    }
                    arr_23 [i_0] [1] [i_4] [i_3] = var_10;
                }
            }
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                var_35 = (!15);
                var_36 = (((arr_14 [i_7] [i_7] [i_7 - 2]) ? (arr_14 [i_7] [i_7] [i_7 - 2]) : (arr_14 [i_7] [i_7] [i_7 + 1])));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_37 = (var_7 ? (arr_30 [i_1] [i_1] [i_1] [i_1] [i_8] [i_8 - 3]) : (arr_30 [i_1] [i_7] [i_7] [i_7] [i_8] [i_8 - 2]));
                            var_38 = (!(((-(arr_9 [i_8] [i_7] [i_1])))));
                            var_39 = (arr_20 [i_8]);
                        }
                    }
                }
            }
            var_40 = (((arr_30 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1]) ? ((var_5 ? var_5 : (arr_18 [i_1]))) : (arr_2 [i_0])));
        }
        for (int i_10 = 4; i_10 < 19;i_10 += 1)
        {
            arr_34 [i_10] [2] [i_0] = var_8;
            var_41 = ((var_4 ? var_4 : (arr_5 [i_0] [18])));
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_42 += (((!11207) ? (240 + -6101168777963389319) : (~1)));
            var_43 = ((((((arr_5 [i_11] [i_0]) ^ var_10))) ? (arr_17 [i_0] [i_0] [6] [i_11] [i_11] [i_11]) : (~8)));
            var_44 = ((+(((arr_27 [i_0] [i_11]) ? var_5 : (arr_36 [i_0] [i_11])))));
            var_45 -= -1;
        }
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_46 = (arr_37 [i_12]);
        arr_41 [i_12] [5] &= ((2 ? (1 ^ 4436) : ((54307 ? (arr_39 [i_12]) : 4294967295))));
    }
    for (int i_13 = 1; i_13 < 12;i_13 += 1)
    {
        var_47 = (((arr_21 [i_13 - 1] [1] [i_13] [i_13] [i_13] [i_13] [i_13]) ? (arr_21 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : 64005));
        var_48 = ((((arr_4 [i_13] [i_13] [i_13]) << (11216 || 64))) ^ (arr_22 [i_13] [i_13 + 1] [i_13] [i_13]));
    }
    #pragma endscop
}
