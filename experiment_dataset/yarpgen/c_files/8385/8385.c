/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(100663296, var_18));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] = ((70 ? (arr_4 [i_1 + 1] [i_0] [i_1 - 2]) : (arr_4 [i_1 + 3] [i_0] [i_1 - 3])));
            var_20 = 1013129460;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_21 = var_6;
            var_22 = (((((var_9 / (-32767 - 1)))) ? 21712 : var_16));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [i_0] [i_0] = var_2;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0] = (((arr_11 [i_0 - 2] [i_0] [i_6 - 3]) ? var_13 : (arr_11 [i_0 - 2] [i_0] [i_6 - 1])));
                            var_23 = var_17;
                        }
                    }
                }
            }
        }
        var_24 = (max(var_24, (((arr_20 [i_0] [i_0 + 2]) / (arr_3 [i_0 + 2] [i_0])))));
        var_25 = (min(var_25, (arr_18 [i_0] [2])));
    }
    var_26 = ((var_9 << (2104767134 - 2104767119)));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_30 [i_7] [i_7] = ((!(arr_22 [i_7] [13] [i_7] [13])));
            var_27 = (max(var_27, (((!(((var_13 & (arr_28 [i_8])))))))));
            var_28 = var_0;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_29 = (((arr_21 [i_7] [i_8] [i_7] [i_9] [i_10]) + (arr_22 [i_7] [i_8] [i_7] [i_8])));
                        arr_36 [i_8] [i_8] [i_8] [10] [i_8] &= ((-2104767129 ? (arr_9 [i_8] [i_8]) : (arr_31 [i_7] [i_8] [8])));
                        arr_37 [i_7] [i_9] [i_9] [i_7] [i_7] = ((arr_34 [i_7] [i_9] [i_8] [i_7]) >= -807405502594825550);
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
        {
            var_30 |= 1;
            var_31 += (arr_8 [i_7] [i_7]);
            arr_42 [i_7] [i_11] [i_7] = var_10;
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
        {
            var_32 = (max(var_32, -5640108758066852729));
            arr_45 [i_7] [i_7] = var_14;
            var_33 = var_4;
            var_34 = (((((-(arr_22 [i_7] [i_7] [i_12] [i_12])))) ? var_2 : -5640108758066852754));
            var_35 = (~var_14);
        }
        var_36 = (arr_27 [i_7] [i_7] [i_7]);
        arr_46 [i_7] = 134;
        arr_47 [i_7] = (((arr_19 [i_7] [i_7] [i_7]) < -0));
        var_37 += 122;
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        var_38 = (((min(var_15, 100663296)) & (((((var_12 ? 1593014709549635548 : var_13)) << (((((min(var_5, var_13)) + 8601784909337551472)) - 45)))))));
        arr_51 [i_13] = ((((((((var_16 & (arr_22 [i_13] [i_13] [i_13] [i_13]))) + 9223372036854775807)) << (var_13 - 8653227003750388339))) / ((-31646 ? 2718233776 : (min(807405502594825546, var_0))))));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        arr_54 [i_14] = ((((min((arr_53 [i_14]), (arr_53 [i_14])))) ? ((-(((arr_53 [i_14]) ? var_0 : 11247560471244154341)))) : var_2));

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            arr_57 [i_14] [i_15] [i_15] = (((((min(var_10, 167)))) + (((arr_55 [i_14]) ? var_17 : var_7))));
            var_39 = 136;
        }
        var_40 = (max(var_40, ((((((((min((arr_52 [i_14]), (arr_53 [i_14])))) > ((-9107354039700894718 ? var_12 : (arr_55 [i_14])))))) << ((((var_5 ? 36306 : (arr_53 [i_14]))) - 36288)))))));
    }
    #pragma endscop
}
