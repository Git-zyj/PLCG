/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 &= (max((1412565930928754133 / 17034178142780797482), (12912260467338428378 | 1412565930928754121)));
                                var_20 ^= ((max((arr_10 [i_2 - 2] [i_2 + 1] [i_2] [5] [i_2] [i_2 - 1]), var_9)) | (((((17034178142780797478 ? -23 : 676454871))))));
                            }
                        }
                    }
                    arr_12 [1] [i_1] [1] |= (max((arr_2 [i_2 - 2]), (max(var_11, (arr_11 [6] [i_2] [1] [1] [i_2 - 2] [i_1])))));
                    var_21 = ((-645354441780342311 || (((~(arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 14;i_7 += 1)
            {
                {
                    var_22 *= (((((~(arr_17 [9]))))) ? (((((((arr_20 [i_7] [i_5] [i_5]) % var_9))) ? ((((arr_21 [i_5] [i_5] [i_6 - 3] [i_6]) == 1412565930928754130))) : (arr_18 [i_6 + 1] [i_7 + 1])))) : (arr_13 [i_5] [i_6]));
                    arr_22 [i_5] [i_7] [i_5] [i_7 + 1] = (((((((max((arr_21 [i_5] [i_5] [i_5] [i_5]), 25752))) ? (arr_15 [i_6]) : (arr_21 [i_6] [i_7 - 3] [i_6 + 2] [i_6])))) ? (((var_10 ? (arr_19 [i_5] [i_6 - 3] [i_5] [11]) : 4294967295))) : (((-(arr_14 [i_7]))))));
                    var_23 = ((((((var_17 - 1412565930928754132) ? (arr_21 [i_5] [i_6] [i_7] [i_7 - 2]) : var_16))) + (((arr_13 [i_5] [i_7 - 3]) % (arr_19 [i_6 - 3] [i_6] [7] [i_7 - 3])))));
                }
            }
        }
        arr_23 [i_5] [i_5] = (max((((arr_20 [i_5] [i_5] [i_5]) ? var_17 : 184)), (arr_18 [i_5] [2])));
        arr_24 [i_5] = ((-((((max(var_16, 6054630155665077207)) >= (((var_12 ? 1994358644 : (arr_14 [i_5])))))))));
    }
    var_24 = (-31304 > (max(1412565930928754112, var_1)));
    #pragma endscop
}
