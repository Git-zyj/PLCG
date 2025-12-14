/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 += ((~(max((!2441777951), (((arr_3 [i_0]) ? (arr_1 [2]) : (arr_1 [2])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, (((((var_6 ? ((((arr_9 [i_2] [i_3]) ? var_9 : (arr_8 [i_2 - 1] [i_1] [i_1] [i_3] [i_1] [i_0])))) : (min((arr_1 [i_2]), 15)))) - 0)))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_1] |= (((((((var_3 - (arr_0 [i_0]))) == (arr_2 [i_1])))) == ((((0 ? (arr_7 [i_0] [i_1]) : (arr_10 [i_3] [i_2] [i_1] [i_1] [i_0])))))));
                        var_17 = (max(var_17, (arr_10 [i_0] [12] [i_1] [i_2] [i_3])));
                        var_18 = ((!((min((((arr_5 [i_1]) - var_14)), 973728414)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_19 *= (((arr_13 [i_4]) % (max((arr_13 [i_4]), (((arr_13 [i_4]) ? (arr_14 [i_4]) : 8549136665584393347))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_22 [19] [i_6] [i_5 + 1] [i_5 - 1] [i_4] = (arr_12 [i_4]);
                        var_20 = ((!(((((var_12 | (arr_20 [i_7] [i_6] [i_7] [i_6]))) & (arr_13 [i_5 + 1]))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            arr_25 [i_8] [i_4] = ((~(arr_17 [8] [i_8] [12])));
            var_21 ^= ((arr_15 [i_8 + 2] [i_8 - 1]) * ((~(arr_18 [i_8] [i_8] [i_8] [i_4]))));
        }
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_22 = ((((((min(var_1, (arr_16 [i_9] [i_9] [i_9])) + 9223372036854775807)) << (31 - 30)))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {
                    {
                        var_23 = (arr_21 [i_12 + 1] [i_11] [i_10] [5] [i_10 - 1] [i_9]);
                        var_24 = (((min((max((arr_29 [i_9] [i_10] [i_12]), 13805347104302603189)), (((var_8 ? (arr_26 [i_11]) : (arr_34 [i_12])))))) % (((((0 ? (arr_8 [i_9 - 1] [i_10] [i_10] [i_11] [12] [i_12]) : (arr_14 [i_10]))) + 8549136665584393347)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 12;i_14 += 1)
                {
                    {
                        var_25 = ((+((((((arr_9 [i_13] [i_13]) - 2913908738))) ? ((((!(arr_2 [i_14]))))) : (((arr_7 [i_9] [i_10 + 1]) ? var_2 : (arr_0 [i_13])))))));
                        arr_41 [i_14] [i_14] [i_14 - 1] [1] [i_9] [i_9] = (((((arr_0 [i_9 - 1]) | (arr_12 [i_9 - 1]))) / (max((arr_12 [i_9 - 1]), (arr_0 [i_9 - 1])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {
                        arr_51 [i_15 - 1] &= (arr_36 [i_9] [i_15] [i_15]);
                        var_26 = (arr_26 [i_9]);
                        var_27 += var_2;
                        var_28 *= (arr_42 [i_9 - 1] [i_17]);
                    }
                }
            }
        }
        arr_52 [i_9] [i_9] = (min(((+(((arr_40 [i_9] [i_9] [i_9] [i_9 - 1]) % (arr_19 [i_9] [i_9] [i_9]))))), (arr_8 [i_9 - 1] [i_9] [i_9] [3] [i_9 - 1] [i_9])));
        arr_53 [i_9] = (((((((arr_46 [i_9 - 1]) ? (arr_16 [i_9] [7] [i_9]) : var_13))) == ((~(arr_5 [i_9]))))));
        arr_54 [i_9] = ((((((arr_2 [i_9 - 1]) | ((var_1 & (arr_43 [i_9 - 1])))))) ? ((((~var_7) | (~var_3)))) : (arr_30 [i_9 - 1])));
    }
    var_29 = var_8;
    #pragma endscop
}
