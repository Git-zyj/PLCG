/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((+(((((arr_5 [i_0 - 2] [i_1] [i_2] [i_2]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_3 [i_0 + 1] [i_1] [i_0]))) % ((var_4 ? (arr_4 [i_0] [i_2] [i_2]) : 3261)))))))));

                    for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_1] [i_1] [i_2] [i_3] = var_9;
                        arr_10 [i_0] [i_0] [i_1] = (max((arr_8 [i_0] [i_1]), (((~22991) ^ (arr_7 [2] [i_1] [i_1] [i_3])))));
                    }
                    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_16 *= ((-((((((arr_1 [i_2]) ? (arr_11 [i_0] [i_0 + 1] [i_1] [i_2] [i_2]) : 14218))) ? (arr_11 [i_0 + 1] [i_1] [i_4 + 1] [i_0 - 1] [i_0 - 1]) : (((arr_6 [i_4]) ? var_14 : (arr_7 [4] [4] [i_1] [10])))))));
                        arr_14 [i_1] = (((arr_7 [i_0 - 1] [i_1] [1] [i_4]) ? 10493 : (min((22971 - 34), (arr_5 [i_0 + 2] [i_1] [i_2] [i_4])))));
                    }
                    var_17 += var_8;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_18 *= (80 ^ 21414);
        var_19 *= arr_18 [i_5] [12];
        var_20 += (((((arr_15 [i_5]) ? (arr_15 [i_5]) : (arr_15 [i_5]))) <= ((((max((arr_17 [i_5] [4]), (arr_17 [9] [19])))) % -3245))));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_21 = ((((((arr_13 [i_6] [i_7]) ? (arr_1 [i_6]) : 22971))) ? ((max((arr_5 [3] [i_6] [i_6] [i_7]), -23643))) : 34835));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {

                            for (int i_10 = 2; i_10 < 8;i_10 += 1)
                            {
                                var_22 = (min(var_22, (max((max(32768, (arr_18 [i_6] [i_6]))), (-32767 - 1)))));
                                var_23 = ((((((arr_15 [i_9 + 1]) ? (arr_2 [i_6] [i_10 + 2] [i_6 + 3]) : (arr_5 [i_6 + 3] [i_9 - 1] [i_9] [i_10 - 1])))) ? ((((-(arr_12 [i_6] [2] [i_8] [2]))) / (((arr_25 [i_7]) * (arr_21 [i_6] [i_6] [i_6]))))) : ((((((arr_3 [i_7] [i_8] [i_7]) / (arr_7 [i_6] [i_8] [i_6] [i_10])))) ? (arr_6 [i_6 - 2]) : (arr_11 [i_6 - 2] [i_6] [i_6] [i_6 + 1] [i_6])))));
                            }

                            for (int i_11 = 1; i_11 < 8;i_11 += 1)
                            {
                                arr_33 [i_7] [i_7] [i_8] [i_9] [4] = ((-23406 * (((arr_31 [i_9 - 1] [i_9] [i_9] [0] [i_9 + 1]) / (arr_31 [i_9 + 1] [7] [i_9] [i_9] [i_9 - 1])))));
                                var_24 *= ((var_5 ? ((min(63075, -17009))) : (((((~(arr_30 [10] [i_8] [0] [i_9 - 1] [0] [i_9] [i_8])))) ? -13486 : ((var_6 ? (arr_27 [i_11] [i_8]) : (arr_8 [i_6] [i_6])))))));
                            }
                            for (int i_12 = 0; i_12 < 12;i_12 += 1)
                            {
                                var_25 = (((arr_0 [i_6 - 1] [i_6 + 4]) > ((max((arr_0 [i_6 + 4] [i_9 - 1]), (arr_31 [i_6 + 2] [i_7] [10] [i_9 + 1] [i_9]))))));
                                var_26 ^= min((arr_34 [i_6 + 3] [i_6 + 3] [i_6] [i_8] [i_6 + 3]), 32768);
                                var_27 *= 166;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
