/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_19 ^= ((arr_0 [i_2 - 3]) ? (arr_0 [i_2 - 1]) : (arr_1 [i_2 - 2] [i_2 - 3]));
                                var_20 = (min(var_20, (arr_6 [1] [i_1] [23])));
                                arr_13 [i_2] = ((~(arr_0 [i_0])));
                            }
                            for (int i_5 = 3; i_5 < 23;i_5 += 1)
                            {
                                var_21 ^= 3739943535;
                                arr_18 [i_0] [i_2] [i_0] = ((1127464739 ? ((-(arr_11 [i_5 - 1] [i_2] [15] [i_2 - 1] [i_2 - 3]))) : ((-((min((arr_11 [i_0] [i_1] [i_2] [i_3] [i_5 - 3]), (arr_8 [i_0]))))))));
                                var_22 = (min(var_22, (((~(arr_10 [i_1] [i_3] [i_1] [i_1] [i_0] [i_1]))))));
                                arr_19 [i_0] [i_1] [23] [i_2] [i_1] = (arr_8 [i_2 - 2]);
                            }
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_22 [i_0] [i_2] [i_2] = (((arr_8 [i_2 - 1]) ^ (arr_20 [i_2 + 1] [16] [i_2] [i_2] [i_6] [i_0])));
                                var_23 &= ((+(min((((arr_4 [i_0] [i_2]) ? (arr_8 [16]) : (arr_4 [i_0] [i_0]))), ((696 + (arr_6 [i_6] [3] [i_0])))))));
                            }
                            var_24 = ((~(((~var_2) ? (arr_14 [i_0] [2] [i_2 - 3] [i_2] [i_2] [i_3]) : (arr_6 [i_0] [i_2 - 3] [i_2])))));
                            var_25 = (min(var_25, (((max((arr_0 [i_2 - 2]), -51))))));
                        }
                    }
                }
                arr_23 [i_0] &= (((arr_8 [i_0]) ? (arr_0 [i_0]) : 555023761));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            {
                var_26 = ((min(555023761, 7590)));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {

                            for (int i_11 = 0; i_11 < 12;i_11 += 1)
                            {
                                var_27 = (arr_4 [i_7 - 2] [i_7 + 1]);
                                var_28 ^= ((-((64603 ? (arr_9 [i_9 + 4] [i_11]) : ((((arr_33 [i_10] [0]) - (arr_33 [i_9] [i_11]))))))));
                                arr_37 [i_7] [i_11] = ((~((((min((arr_11 [i_8] [12] [i_9] [i_10] [i_11]), 0))) * 1344))));
                                var_29 = (arr_3 [8] [i_7]);
                            }
                            var_30 = (((arr_31 [i_7 - 1] [3] [i_9 + 1] [i_7]) + (((max(66, 64773))))));
                        }
                    }
                }
                var_31 ^= (arr_28 [i_8 + 1]);
                var_32 = (((((arr_17 [i_7 - 1]) ? (arr_17 [i_7 - 1]) : (arr_17 [i_7 - 1]))) * (((arr_17 [i_7 + 1]) / var_16))));
            }
        }
    }
    var_33 &= (((7590 || 555023761) ? var_3 : (~var_2)));
    var_34 &= (max((var_17 * -var_9), var_0));
    #pragma endscop
}
