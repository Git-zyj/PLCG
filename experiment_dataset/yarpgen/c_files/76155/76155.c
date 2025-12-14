/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (-2147483647 ? 2536608930 : -1046090327571098938);
        arr_4 [i_0] [i_0] = ((((max((arr_2 [i_0 - 3] [i_0 + 1]), (arr_1 [i_0 - 1])))) * (arr_1 [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((min((max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))))));
                        arr_11 [i_0] = -var_16;
                    }
                }
            }
        }
        arr_12 [i_0] = ((~((~(arr_2 [i_0 - 3] [i_0 - 1])))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = ((((min((((arr_13 [i_4] [i_4]) ? var_1 : var_4)), ((40 ? 0 : (-32767 - 1)))))) ? (arr_13 [i_4] [i_4]) : ((var_12 & (max(var_3, (arr_13 [i_4] [i_4])))))));
        arr_16 [i_4] = (((max((((-122005746164263127 ? 4294967295 : var_3))), (max((arr_13 [i_4] [3]), var_6)))) != (((max(24525, 22550))))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_19 [i_5] = (max((min(((~(arr_13 [i_5] [i_5]))), (((var_5 < (arr_17 [2])))))), ((((arr_14 [i_5] [i_5]) ? (((arr_13 [i_5] [i_5]) ? var_2 : (arr_14 [i_5] [i_5]))) : var_13)))));
        var_20 += var_17;
        arr_20 [i_5] = ((((min((arr_18 [i_5]), (arr_18 [i_5])))) ? (max((arr_13 [i_5] [i_5]), (arr_13 [i_5] [i_5]))) : (arr_13 [i_5] [i_5])));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_31 [i_9] [i_9] = ((~((var_15 ? var_1 : var_5))));
                            arr_32 [i_5] [i_9] [i_9] [i_5] [i_5] [i_9] = (((((-(arr_25 [i_9])))) ? (arr_27 [i_9 + 2] [i_8 - 3] [i_7] [i_6] [i_5]) : (arr_27 [i_7] [i_8 - 2] [i_8] [i_8 + 1] [i_9 - 1])));
                        }
                    }
                }
            }
            arr_33 [i_6] |= (((arr_17 [i_6]) % (arr_17 [i_6])));
            var_21 = ((+((var_3 ? (arr_17 [i_5]) : (arr_29 [i_5])))));
            var_22 &= (~(arr_25 [i_5]));
        }
        arr_34 [i_5] [0] |= ((-((15553 ? 35844 : 776391950))));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                {
                    var_23 ^= ((((((max(65535, 2147483647)) >> (((~var_18) + 19020))))) & ((~(arr_22 [i_12 + 1])))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                arr_49 [i_10] [i_10] [i_11] [i_13] [i_13] [i_14] = ((-(~1392867791)));
                                var_24 = (min(((max((arr_43 [i_12] [i_12] [20] [i_12] [i_12 - 1]), (arr_30 [i_10] [i_10] [i_10] [17] [i_11] [i_10])))), (((max(var_7, (arr_48 [21] [i_11] [i_12] [i_12] [i_14]))) / (arr_30 [i_14] [i_11] [i_13] [i_12] [i_11] [i_10])))));
                                arr_50 [2] [i_11] [i_11] [i_11] [i_13] [i_11] [i_14] = ((((~(arr_40 [i_10] [i_11] [i_13] [8]))) < -365326509));
                            }
                        }
                    }
                    var_25 = (min(var_25, ((((-((var_15 ? var_9 : (arr_42 [6] [12])))))))));
                    arr_51 [i_10] [i_11] [i_12] [i_10] = ((-((-(arr_43 [i_10] [i_10] [i_10] [i_10] [i_10])))));
                }
            }
        }
    }
    #pragma endscop
}
