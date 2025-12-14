/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (var_11 & var_9)));
    var_14 = var_6;
    var_15 &= var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max((min(((~(arr_2 [i_0]))), (~var_9))), (arr_0 [i_0])));
        var_16 *= ((!((((((16713 ? (arr_2 [i_0]) : (arr_1 [0])))) ? (arr_0 [19]) : ((min(16693, (arr_1 [i_0])))))))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((arr_0 [i_1 - 1]) ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 2]));
                var_17 = var_3;
                var_18 = var_9;
                var_19 = (arr_7 [i_1 - 1] [i_1] [i_2] [i_0]);
                var_20 = (-(arr_8 [i_0] [i_2 - 3] [i_2 + 2]));
            }
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                var_21 = (((min((((arr_13 [i_0] [i_0] [i_0] [i_3 + 2]) ? (arr_2 [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0]))), (arr_2 [i_3 + 2])))) ? var_12 : (min((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]), -8064)));
                arr_15 [i_0] [i_1] [i_0] [0] = ((!(arr_14 [i_3 + 2] [i_3 + 4] [i_3 + 2] [i_3])));
                var_22 += (((min(0, 1))));
            }
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                var_23 += ((((max(16713, 0))) <= ((var_1 ? var_3 : var_2))));

                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    arr_20 [i_0] [i_1] [i_4] [i_5] = (((((((max(-974908257, (arr_7 [i_0] [i_1] [i_4] [i_0])))) ? var_5 : (arr_7 [i_0] [i_4] [i_1 - 1] [i_0])))) ? (((arr_0 [i_4]) ? var_11 : (arr_18 [i_0] [i_1] [i_4 - 3]))) : (((arr_13 [i_1 - 1] [i_1 - 2] [i_0] [i_5 - 2]) ? (arr_3 [i_0]) : (max(var_3, var_1))))));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_1] [i_1] = (max(1, (min(((((arr_12 [i_0] [i_1] [i_4] [i_6]) - var_8))), (((arr_1 [i_4]) & (arr_11 [i_0] [i_1])))))));
                        var_24 &= (!27);
                    }
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        arr_26 [i_0] = ((((((((arr_11 [i_0] [i_0]) == (arr_0 [i_1]))) ? (arr_8 [i_7] [i_4] [i_1]) : var_8))) ? (max((arr_12 [i_7 - 1] [i_5] [i_4 - 2] [i_0]), (arr_12 [i_7 - 2] [i_5] [i_4 - 4] [i_1]))) : ((min((max((arr_5 [i_0] [1] [i_0]), var_0)), (((!(arr_24 [i_0] [i_0] [i_0] [i_0] [18])))))))));
                        arr_27 [i_0] [i_4] [i_4] [i_4] [i_4 - 4] = (min((((arr_8 [i_1 - 2] [i_1 + 1] [i_1 + 1]) << (((arr_8 [i_1 - 2] [i_1 + 1] [i_1 + 1]) - 68)))), (arr_17 [i_1 - 2] [i_1 + 1] [i_1 + 1])));
                        arr_28 [5] [i_1] [i_1] [i_0] [i_1] = min(((((((5265337155263450237 ? var_7 : var_11))) ? (max((arr_19 [i_0] [i_0]), var_3)) : (arr_13 [i_1] [i_1 + 2] [i_0] [i_1 + 2])))), (((arr_11 [i_0] [i_1]) ? (((var_1 ? (arr_25 [i_7 + 1] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 1] [i_0]) : (arr_2 [i_7])))) : (arr_22 [i_7 - 1] [i_0] [i_7] [i_5 - 2] [i_7] [i_7]))));
                        arr_29 [i_0] [i_1 - 2] [i_4] [13] [i_0] [i_0] [i_7 - 1] = (max((((var_11 ? var_0 : var_1))), (arr_11 [i_5 - 4] [i_5 - 3])));
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        arr_32 [21] [21] [i_4] [i_0] [i_8] = ((~((511 ? 6748 : 144115153716117504))));
                        var_25 = var_9;
                        var_26 -= var_2;
                        arr_33 [i_8] [i_0] [i_4] [i_0] [i_0] = var_7;
                    }
                    arr_34 [i_0] [i_1] [i_5] [i_5] &= (((arr_12 [i_5] [i_4] [i_0] [i_0]) ? var_8 : var_7));
                    arr_35 [i_0] [i_1 + 1] [i_0] [i_5] = ((arr_0 [i_1 - 1]) ? var_7 : (arr_8 [i_4] [i_0] [i_0]));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_27 = ((~(((~(arr_39 [i_0] [i_1] [i_0] [i_9]))))));
                    var_28 = (arr_9 [i_1] [i_9]);
                }
            }
            arr_40 [i_0] = (max(((-(arr_17 [i_1 - 2] [i_1 + 2] [i_1 - 1]))), ((((max(var_1, (arr_11 [i_1 - 2] [i_0])))) ? (arr_31 [i_0] [i_1] [i_0] [22] [i_0] [i_0]) : (arr_17 [i_1] [2] [i_0])))));
        }
        var_29 = (min(var_29, 6514585701611479454));
        arr_41 [i_0] = ((((-(arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))) - ((max((arr_38 [i_0] [i_0] [i_0] [i_0]), (arr_38 [22] [22] [i_0] [i_0]))))));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
    {
        arr_45 [i_10] [i_10] = (~(arr_38 [i_10] [i_10] [i_10] [i_10]));
        arr_46 [i_10] [i_10] = (arr_3 [i_10]);
        var_30 ^= ((4909649291458874898 ? (~var_3) : ((((min((arr_42 [i_10]), var_1))) ? ((-(arr_24 [6] [i_10] [18] [i_10] [i_10]))) : ((-(arr_31 [14] [i_10] [i_10] [i_10] [4] [i_10])))))));
    }
    #pragma endscop
}
