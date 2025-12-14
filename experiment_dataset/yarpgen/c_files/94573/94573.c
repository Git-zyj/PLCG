/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((!var_7) ? ((var_3 ? var_7 : var_6)) : var_10)) / 404346602)))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 = ((((max((((arr_1 [i_0] [i_0]) ? var_11 : -32615)), (!2147483647)))) ? (arr_1 [i_0] [i_0]) : (max(((var_4 ? (arr_2 [14]) : 96)), (((arr_1 [i_0] [i_0]) + (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 ^= var_10;
                    var_22 = ((((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])))) >> (((((arr_4 [i_0 - 2] [i_0 - 1]) / var_15)) - 87561))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_10 [i_3] = ((~((((max((arr_4 [i_3] [i_3]), var_18))) ? (-32750 / var_5) : (arr_5 [i_3] [i_3])))));
        var_23 = ((~(57737 - var_6)));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_24 |= (var_10 ? 27597 : (((((min((arr_9 [i_5] [i_6]), var_15)))) + ((var_17 ? (arr_5 [i_6] [i_6]) : (arr_4 [i_6] [i_4]))))));
                        var_25 -= (min((((arr_6 [i_4] [i_6]) - (arr_6 [i_6] [i_6]))), ((var_5 ? (arr_5 [i_6] [i_5]) : (arr_9 [8] [i_6])))));
                        var_26 = min((((((4007342852 ? (arr_6 [i_3] [i_3]) : (arr_2 [i_3])))) ? (arr_17 [i_5] [i_5] [i_5] [i_3] [i_3]) : 119)), -var_9);
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_27 = var_4;

        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            arr_23 [i_7] [i_8] = ((((((65448 ? -118 : (arr_13 [i_7] [i_7]))))) ? 1779069455 : (arr_3 [i_7] [14] [i_7])));
            var_28 = (((arr_11 [i_7] [i_7]) ? (arr_12 [i_8 + 1] [i_8]) : 57724));
            var_29 = (max(var_29, var_2));
            arr_24 [3] [3] = (max((((arr_19 [i_8]) ? var_0 : var_1)), ((((arr_16 [i_8 + 2] [i_8 - 2] [i_7]) ? 84 : (arr_16 [i_8 - 3] [i_8 - 3] [i_8]))))));
        }
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        var_30 ^= (arr_2 [1]);

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_29 [i_9] [i_10] = ((arr_5 [i_9] [i_10]) / (max((arr_7 [i_10] [i_9 - 1] [i_9]), (arr_25 [i_10] [i_9]))));
            arr_30 [i_10] |= ((((((arr_2 [i_10]) ? (max((arr_4 [i_10] [i_9]), 2147483643)) : ((((arr_7 [8] [i_9] [8]) << (var_4 - 203136201))))))) ? (arr_4 [i_10] [i_10]) : ((((!(arr_25 [i_9 + 1] [i_10])))))));
            var_31 = (((-(arr_5 [i_9] [i_9]))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_34 [i_9] [i_9] = 3633732257;
            arr_35 [i_9] [i_9] = (arr_2 [i_9 - 1]);
            var_32 ^= ((var_3 ? (arr_2 [i_9 + 2]) : ((4007342852 << (((arr_3 [i_9] [i_9 - 1] [i_11]) - 169))))));
        }
        var_33 = (~3376391401);
        arr_36 [i_9] = ((((((arr_5 [i_9] [i_9 - 1]) & (arr_7 [5] [i_9 + 2] [i_9])))) ? var_2 : (arr_1 [i_9] [i_9 + 2])));
        var_34 = (max(var_34, ((((((arr_28 [i_9 + 2]) - 9223372036854775807)) ^ 7798)))));
    }
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        var_35 = (min(var_35, (arr_11 [0] [i_12])));
        var_36 ^= (arr_15 [i_12] [i_12] [i_12 + 1] [i_12] [i_12] [0]);
    }
    var_37 = var_6;
    #pragma endscop
}
