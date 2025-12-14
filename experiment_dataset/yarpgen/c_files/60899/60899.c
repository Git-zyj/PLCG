/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_16 * (min(((4261148013 ? 0 : var_16)), 255))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (max((arr_0 [i_0] [15]), (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 |= var_3;
            var_21 = (max(var_21, (((var_14 + (!-35))))));
            arr_5 [i_0] |= (max(-224, (max(255, 6733915473749374387))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_0] = ((((max(var_8, (arr_0 [i_0] [i_0])))) * (((arr_2 [i_0]) ? (arr_0 [i_2] [i_0]) : var_14))));
            arr_10 [i_0] [i_0] = (min((arr_4 [i_0]), var_14));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = ((-4 ? ((max((arr_12 [i_0]), 1))) : (arr_12 [i_0])));
            var_23 += arr_2 [i_0];
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_24 *= max((arr_1 [i_4]), var_5);
        var_25 &= ((3 ? var_2 : (!255)));
        arr_17 [i_4] = ((((arr_0 [i_4 - 1] [i_4 - 1]) && (((var_6 ? (arr_6 [i_4] [i_4 - 1] [10]) : var_8))))));
        var_26 *= ((~(arr_1 [i_4])));
        var_27 = var_14;
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        arr_21 [i_5] = ((((((arr_6 [i_5 + 1] [i_5 - 1] [i_5 - 1]) | (arr_20 [i_5 - 1] [i_5 - 1])))) ? -80 : (arr_6 [i_5] [i_5] [i_5 + 1])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_28 *= ((~((-(arr_23 [i_6 + 2] [4])))));
                    var_29 = ((~(arr_6 [i_5 + 1] [i_5] [i_6 - 1])));
                }
            }
        }
        var_30 &= 4;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    {
                        arr_35 [i_5] [13] [i_5] [i_10 - 2] = ((6733915473749374364 >> (-38 + 44)));
                        arr_36 [i_5] [i_5] [i_5] [2] = (arr_32 [i_5 + 1] [i_5] [i_9] [i_5 + 1]);

                        for (int i_11 = 4; i_11 < 16;i_11 += 1)
                        {
                            arr_40 [i_5] = 268369920;
                            var_31 *= (arr_8 [i_5] [i_5 + 1] [i_5 - 1]);
                            var_32 = (max((((((252 && (arr_1 [i_10])))) | ((min(1, -9246))))), 233));
                        }
                        for (int i_12 = 4; i_12 < 16;i_12 += 1)
                        {
                            var_33 *= (((((min(((((arr_2 [i_9]) != (arr_7 [i_5] [i_5])))), (max(var_5, 1)))))) & ((((3874227375 >= (arr_31 [i_10] [i_10]))) ? ((((!(arr_30 [i_12] [i_10] [i_10] [i_8]))))) : ((6733915473749374387 / (arr_28 [i_8])))))));
                            var_34 &= ((1 ? 766120490 : 65535));
                        }

                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            arr_46 [i_5] [i_5] [i_9] [i_5] |= (!-7477);
                            arr_47 [i_5 + 1] [i_5] = (min(5328610110839990747, 22));
                            arr_48 [i_5 + 1] [i_13] [i_5] = ((1587405193 != (((((var_7 ? 29 : 97)))))));
                            arr_49 [i_5] = (arr_1 [i_5]);
                            var_35 = var_0;
                        }
                        var_36 = (min(var_36, (arr_44 [i_8] [i_8] [i_9] [i_8] [i_10 - 1])));
                    }
                }
            }
        }
    }
    var_37 |= var_16;
    #pragma endscop
}
