/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (0 | -45);
        arr_3 [i_0] = (-103 + 57706);
        arr_4 [i_0] [i_0] = 65535;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((~(arr_6 [i_2] [i_1]))))));
                    arr_11 [1] [i_0] = 107;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_23 ^= 33287;
                        var_24 = (min(var_24, (((6 + ((78 ? (arr_0 [i_3]) : (arr_0 [i_3]))))))));
                        arr_15 [i_0] [14] [i_0] [i_3] [i_2] [i_2] = -0;

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_18 [i_4] [i_0] [0] [i_1] [i_0] [i_0] [1] = (14137 | 102);
                            arr_19 [i_4 + 2] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = (arr_6 [i_4 + 1] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_25 = ((91 * (arr_10 [i_0] [i_0] [i_2] [i_0])));
                            var_26 = 18;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_27 = ((~(arr_17 [i_0])));
                            arr_24 [1] [i_6] [i_0] [i_0] [0] [17] [1] = (!0);
                        }
                        var_28 = (((!(arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] [1]))));
                    }
                    arr_25 [15] [17] [i_0] [i_2] = 0;
                }
            }
        }
    }
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        arr_30 [i_7] = 18373;
        var_29 = (min((arr_7 [i_7] [i_7 - 3] [i_7 - 1]), ((64 * ((max((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [5]), 66)))))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_30 = (108 <= ((32248 - (arr_28 [i_8] [i_8]))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_31 ^= -91;
                        arr_41 [i_8] [i_9] [11] [i_11] = -102;
                        arr_42 [i_9] [i_10] [i_10] [i_10] [i_8] [i_11] = (min((85 && 110), (min(28585, 81))));
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        var_32 = (((65535 > 1) >> ((((arr_35 [i_9] [i_12]) < 0)))));
                        var_33 = (~1);
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        var_34 = (~-114);
                        var_35 = (30900 * 65535);
                    }
                    var_36 = (65535 / var_16);
                    arr_50 [i_10] [6] [i_9] [i_8] = (((max(1, -65)) / ((min(18440, (arr_27 [i_8]))))));
                    var_37 = (min(var_37, (((((max(33304, (arr_5 [i_10])))) >> (((~3567) + 3593)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        arr_53 [1] = -53030;
        var_38 = 31162;
        var_39 = 3566;
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_40 = (~9471);
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                {
                    var_41 -= (arr_7 [i_17] [i_16] [i_17]);
                    var_42 = (((arr_6 [i_15] [16]) * var_6));
                }
            }
        }
        arr_61 [9] = 0;

        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            var_43 = 1;
            var_44 = arr_59 [i_15] [i_18 - 1] [i_18 - 1];
            var_45 = ((-(arr_9 [16])));
            var_46 |= (arr_5 [i_18 - 1]);
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                {
                    arr_72 [i_15] [1] [0] [i_15] = ((((16438 ? 1 : 42221)) * 1));
                    arr_73 [i_15] [i_15] [i_15] [i_15] = (46336 | var_18);
                }
            }
        }
    }
    var_47 = var_16;
    #pragma endscop
}
