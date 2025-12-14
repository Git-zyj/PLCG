/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = var_8;
    var_22 = ((min(var_15, 14226592094592352119)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_23 = var_11;
        var_24 = (min(var_24, (arr_1 [i_0])));
        var_25 = (((arr_0 [i_0]) & ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_26 = arr_8 [i_2 + 1];
                    var_27 = ((((min(44635, (arr_6 [8] [8] [i_2 - 2])))) * (arr_7 [13] [i_2])));
                    var_28 = max((arr_4 [i_1] [i_2 - 1]), (min((arr_4 [i_3] [i_2 - 1]), -3)));
                    var_29 = ((~((-8 ? (arr_2 [i_2 - 1] [i_2]) : (arr_8 [i_2 - 2])))));
                }
            }
        }
        var_30 = ((var_10 ? ((~(arr_1 [0]))) : -6));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            var_31 = (min((arr_11 [i_4 - 1]), ((((arr_11 [i_4 + 2]) <= 238)))));
            var_32 = ((((max((arr_15 [i_5 - 4] [i_5 - 4]), (arr_13 [i_4] [i_4] [5])))) ? (arr_11 [i_5 - 1]) : var_9));
            arr_16 [i_4] [i_4] = (arr_14 [i_4]);

            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                var_33 = ((min((arr_18 [i_4 + 2] [i_5] [i_4 + 2] [i_6]), (arr_18 [i_6] [i_5 + 3] [16] [i_4]))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_34 = (arr_17 [i_4 + 2] [i_5 + 3] [i_6 + 1] [i_7]);
                            var_35 = var_16;
                            var_36 = ((((arr_21 [i_4 + 2] [i_5] [i_5 + 1] [i_7] [i_4]) ? (arr_14 [i_4]) : 55)));
                            arr_24 [i_4] [i_5] [i_6] [i_7] [i_4] = ((max((arr_12 [i_4]), (arr_12 [i_4]))));
                            var_37 = var_8;
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                var_38 = (arr_21 [i_9 - 1] [i_9 - 1] [i_5 + 3] [i_4 + 3] [i_4]);
                var_39 = (max(var_39, ((((((arr_20 [i_4] [i_4] [2] [2] [i_4]) > (arr_15 [i_4 + 3] [i_4 + 3]))))))));
                var_40 = (arr_17 [i_4] [i_4] [i_4] [i_9]);
            }
        }
        arr_28 [i_4] = (arr_19 [i_4] [i_4] [i_4] [i_4]);
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_41 = arr_10 [i_4];
                        var_42 -= ((((min((arr_26 [8] [8] [8]), (arr_26 [10] [10] [18])))) ? ((((var_1 == (arr_14 [4]))))) : ((max(var_1, var_11)))));

                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_43 = -2;
                            var_44 = var_12;
                            var_45 -= (arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_46 = (arr_30 [i_4 + 1] [i_11 + 1]);
                        }
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            var_47 &= (arr_40 [i_4] [i_11] [i_11] [i_10] [i_4]);
                            var_48 *= arr_20 [i_4] [i_4] [i_11] [i_4] [i_14];
                            var_49 = ((+((((var_6 ? (arr_10 [i_11]) : (arr_15 [i_4] [5])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        var_50 = ((((((arr_20 [i_15] [i_15] [i_15] [8] [i_15]) ? 100 : (arr_20 [i_15] [i_15] [i_15] [i_15] [i_15])))) / (arr_20 [19] [19] [i_15] [i_15] [i_15])));
        var_51 = 109;
    }
    var_52 = var_15;
    #pragma endscop
}
