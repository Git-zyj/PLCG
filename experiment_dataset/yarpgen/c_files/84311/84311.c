/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((var_12 ? (var_7 + var_8) : var_4)) << (((307797745 << 13) - 333324232)))))));
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_2] = ((((!(arr_9 [i_0] [i_1]))) ? (arr_11 [i_0]) : (((arr_11 [i_1]) ? (arr_6 [i_0]) : (arr_11 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 += ((+(((((((arr_4 [i_3] [i_1] [i_2]) + 9223372036854775807)) << (((arr_10 [i_0] [i_1] [i_2] [i_2]) - 21348)))) << (((-var_6 + 158) - 33))))));
                                var_16 = ((((((arr_15 [i_3 - 3] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 3] [i_3 - 3]) ? (arr_15 [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 3] [i_3 - 3]) : (arr_10 [i_3 - 3] [i_3 - 1] [i_3] [i_3])))) ? (min((arr_8 [i_3 - 3] [i_3 - 1] [i_3] [i_3]), (arr_15 [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 3]))) : 32767));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2] [i_2] = (max((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_8 [i_0] [i_0] [i_2] [i_0]))), (arr_2 [i_1])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_17 ^= ((!((((arr_0 [i_5 - 1]) << (((arr_9 [i_5] [i_6]) - 140)))))));
                                arr_33 [i_5] [i_7] [i_7] = (((min((arr_15 [i_5] [i_6] [i_7] [i_5 - 2] [i_9] [i_6 + 1] [i_9]), (arr_6 [i_5 + 1]))) << (((((arr_17 [i_7] [i_7] [i_7]) << (((arr_32 [i_5 - 2] [i_5 + 2]) - 9516354753454822950)))) - 10244072))));
                            }
                        }
                    }
                    var_18 = ((0 << (-2019498525421835841 + 2019498525421835880)));
                    var_19 = (max(var_19, (((65530 ? ((~(arr_21 [i_6 - 2] [i_6]))) : (arr_21 [i_6 - 2] [i_6]))))));
                }
            }
        }
    }
    var_20 = (min(var_20, var_7));
    #pragma endscop
}
