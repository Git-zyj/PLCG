/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0] [14]) ? ((-((max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))))) : ((((max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) % (arr_1 [i_0])))))));
        var_21 *= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_22 = (((arr_0 [i_2 + 3] [i_2]) % (arr_0 [i_2 + 1] [i_2 + 1])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_11 [i_3] [i_4] [i_3] [i_4] [i_4] = (arr_9 [i_1] [i_1] [i_1] [i_2 + 2] [i_4] [i_4]);
                        arr_12 [i_1] [i_3] [i_4] = (arr_1 [i_2 + 3]);
                        var_23 = ((-(arr_1 [i_1])));
                    }
                }
            }
            arr_13 [i_1] [i_1] [i_2] = (arr_0 [i_2 + 3] [i_2 + 1]);
        }
        var_24 += max((min((arr_2 [i_1]), (arr_1 [i_1]))), (min((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
            {
                arr_18 [i_1] [i_1] [i_6] = ((+(((arr_10 [i_1] [i_5] [i_5] [i_6] [i_6] [i_5]) ? (arr_10 [i_1] [i_1] [i_5] [21] [i_5] [21]) : (arr_4 [i_1])))));
                var_25 = ((-(arr_15 [i_1] [i_5] [i_5])));
                arr_19 [i_1] [i_1] [i_6] |= (arr_10 [i_1] [i_5] [i_6] [i_5] [i_6] [i_1]);
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                arr_23 [i_5] [i_7] &= (arr_21 [i_5] [i_5] [i_5]);
                arr_24 [i_1] [i_5] = (arr_2 [i_1]);
            }
            var_26 = (((arr_20 [i_1] [i_1] [i_5] [i_5]) ? (arr_20 [i_1] [i_5] [i_1] [i_5]) : (arr_20 [i_1] [i_1] [i_5] [i_5])));
        }
    }
    var_27 = var_15;
    var_28 = min(var_11, var_1);
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_29 = (+(((arr_37 [i_12 + 3] [i_12 + 3] [i_12] [i_12 + 2]) ? (arr_37 [i_12 + 3] [i_12] [i_12] [i_12]) : (arr_37 [i_12 + 1] [i_12] [i_12] [i_12 + 1]))));
                                var_30 = ((((arr_20 [i_8] [i_8] [i_8 - 2] [i_12 + 3]) % (min((arr_7 [i_8] [i_9] [i_11]), (arr_37 [i_8] [i_8] [i_8] [i_8]))))));
                                var_31 = (max((((arr_36 [i_8] [i_8] [i_8]) % (arr_39 [i_8 - 1] [i_9] [i_9] [i_9] [i_9 + 1]))), (max((arr_39 [i_9] [i_9] [i_9] [i_9] [i_9 + 1]), (arr_39 [i_8] [i_8] [i_9] [i_9] [i_9 + 1])))));
                                arr_40 [i_8] [i_9] [i_8] [i_8 - 2] [i_8 - 2] [i_8] [i_8 + 1] = (arr_1 [i_8 - 3]);
                                var_32 = (((arr_32 [i_12 - 1] [i_9] [i_9] [i_8]) % ((~(56 % 2147483647)))));
                            }
                        }
                    }
                    arr_41 [i_9] [i_10] = (min(((((arr_26 [i_9 + 1]) / ((min((arr_25 [i_10]), (arr_0 [i_8] [i_8]))))))), (((arr_25 [13]) ? (min((arr_16 [i_9] [i_9] [i_10] [i_9]), (arr_38 [i_8]))) : (((max((arr_27 [i_9]), (arr_36 [i_8] [i_9] [i_10])))))))));
                }
            }
        }
    }
    #pragma endscop
}
