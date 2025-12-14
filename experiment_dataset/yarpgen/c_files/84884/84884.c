/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max((max((min(var_6, var_4)), var_5)), var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((((+((max((arr_1 [i_0]), (arr_3 [i_1] [i_0] [8]))))))) ? ((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_3 [i_0 - 1] [i_0] [i_0 - 1])))) ? ((min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0])))) : ((max((arr_3 [i_1] [i_0] [i_0]), (arr_0 [i_0])))))) : (max((((arr_1 [i_0]) ? (arr_3 [i_0 + 1] [i_0] [i_0 + 1]) : (arr_3 [i_0] [i_0] [i_0]))), ((min(89, 0)))))));
                arr_5 [i_0] [i_1] [i_0] = (min((min((59 & 249), ((min((arr_1 [i_0]), (arr_1 [i_0])))))), ((max(((((arr_1 [i_0]) != (arr_0 [i_0 - 1])))), (max((arr_2 [i_0] [i_1] [i_0 + 1]), (arr_2 [i_0] [i_0] [i_0]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_11 = (arr_7 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_12 = (max(var_12, (255 % 157)));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_20 [i_6] [i_2] [i_3] [i_4] [i_3] [i_2] [i_2] = (arr_15 [19]);
                            arr_21 [4] [i_5] [i_4] [i_2] [i_2] = (arr_18 [i_6] [i_3] [i_4] [i_3] [i_2]);
                            arr_22 [i_6] [i_5] [i_4] [i_3] [i_2] = ((+(((arr_12 [i_6] [i_3] [i_6] [i_6]) ? (arr_12 [i_2] [i_2] [i_4] [i_5]) : (arr_10 [i_2] [i_2] [i_2])))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_26 [i_4] [i_4] [i_4] [i_4] [9] |= min(((max((arr_16 [i_4] [i_2]), (arr_17 [i_7] [i_5] [i_2] [i_3] [i_2])))), (max((max((arr_7 [i_2]), (arr_14 [i_2] [i_2] [1] [i_2]))), (arr_15 [i_2]))));
                            var_13 &= (min(1, (~254)));
                        }
                        var_14 = (max(var_14, (max((min((max((arr_24 [i_2] [i_2] [i_2] [i_2] [16] [i_2]), (arr_6 [i_2] [i_3]))), (arr_8 [i_2] [i_2] [3]))), (max((arr_11 [0] [i_4] [i_3] [i_2]), (arr_18 [i_5] [i_5] [i_2] [2] [i_2])))))));
                        var_15 = max((arr_10 [i_2] [i_4] [i_4]), (arr_25 [i_5] [i_4] [i_4] [i_3] [i_2] [i_2]));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_30 [i_8] = ((!(((~((max((arr_25 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_7 [i_8])))))))));
        arr_31 [i_8] [i_8] = max((min((min((arr_27 [11]), (arr_27 [i_8]))), (min((arr_11 [11] [i_8] [i_8] [i_8]), (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [22]))))), (min((arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_19 [i_8] [i_8] [i_8]))));
        arr_32 [i_8] = (((arr_17 [i_8] [11] [i_8] [i_8] [i_8]) + (min((((arr_16 [i_8] [i_8]) ? (arr_14 [i_8] [i_8] [i_8] [i_8]) : (arr_11 [i_8] [i_8] [i_8] [i_8]))), ((~(arr_8 [13] [i_8] [i_8])))))));
        var_16 += ((~((min((max((arr_7 [i_8]), (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [2]))), (min(157, 224)))))));
        arr_33 [i_8] = (max((((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]) << ((((max((arr_10 [i_8] [i_8] [i_8]), (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8])))) - 191)))), ((-(arr_16 [i_8] [i_8])))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        arr_37 [i_9] = arr_34 [13];

        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_42 [6] [6] = (arr_39 [i_9 - 1] [i_9 - 1] [i_9 + 1]);
            var_17 = ((!(arr_16 [i_9] [i_9 + 1])));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 4; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    {
                        var_18 *= 1;
                        arr_50 [i_13] [i_12 - 1] [i_12] [i_13] [i_13] [i_13] = ((150 ? 59 : 157));
                        var_19 += (((arr_40 [i_9 + 1] [i_11] [i_12 - 3]) ? (arr_40 [i_9 + 1] [i_11] [i_12 - 3]) : (arr_40 [i_9 + 1] [i_9 + 1] [i_12 - 3])));
                    }
                }
            }
            var_20 *= (arr_10 [i_11] [i_9] [i_9]);
            arr_51 [i_9] [i_11] [i_11] = (((((arr_18 [i_9 - 1] [i_9] [i_9] [i_9] [i_9]) != (arr_9 [i_11] [i_9]))) ? ((~(arr_7 [i_9]))) : (arr_25 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 1])));
            var_21 ^= (((arr_49 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]) ? (arr_49 [i_9 + 1] [i_9 + 1] [i_9] [i_9]) : (arr_49 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_11])));
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            var_22 = (((arr_10 [i_9] [i_9] [i_9]) ? (arr_44 [i_9 + 1] [i_9 + 1] [i_9 - 1]) : (((arr_16 [i_9] [i_9]) ? (arr_9 [i_9] [i_14]) : (arr_39 [i_14] [i_14] [i_9])))));
            arr_54 [i_9] [i_9] [i_9] = (((arr_12 [i_9] [i_9 + 1] [i_9] [i_9 - 1]) | (arr_46 [i_14] [i_9] [i_9])));
            var_23 = (((arr_38 [i_9 + 1] [i_9 + 1] [i_9 + 1]) && (arr_7 [i_14])));
        }
    }
    #pragma endscop
}
