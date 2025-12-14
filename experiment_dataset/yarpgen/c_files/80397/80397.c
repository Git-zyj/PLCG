/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = (~5577412284473806059);
        var_17 = var_12;
        var_18 = ((-(arr_1 [i_0 - 2])));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_19 = (((((arr_4 [i_1 + 1]) >> (arr_4 [i_1 - 2]))) != (((arr_4 [i_1 - 3]) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_7 [i_1] [i_2] = (((arr_0 [i_2]) ? (arr_4 [i_1 - 3]) : ((var_7 ? -1 : (arr_4 [9])))));
            arr_8 [i_2] = ((1135055780 << (134217216 - 134217193)));
        }
        arr_9 [i_1 + 1] = (min(((((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2]) ? 32760 : (arr_5 [i_1 - 1] [i_1 - 2] [i_1 - 1])))), (((((arr_2 [i_1] [i_1]) ? 5577412284473806059 : (arr_4 [i_1 - 1]))) % (((1 ? 109 : var_8)))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_15 [i_3] = ((-(arr_3 [i_3])));
                    var_20 = (((((1 + (arr_5 [i_1] [i_1 - 3] [i_1 - 1])))) ? ((((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]) && (arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1])))) : (~var_5)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 6;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_3] [i_4] [i_3] [i_3] = ((~((((min((arr_11 [i_4] [i_1]), 6))) ? (~61965) : (0 & var_6)))));
                                arr_21 [i_3] = 147;
                                var_21 = ((-((((max(-15740, 109))) ? (arr_19 [i_1] [i_1 + 1] [i_6]) : (1 ^ -6)))));
                            }
                        }
                    }
                    var_22 = (max((arr_4 [i_1 - 2]), (((arr_14 [i_4] [i_3 - 1] [i_1]) < (var_14 ^ 2)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 7;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_29 [i_7] = (min(((var_3 % (arr_28 [i_8]))), (~var_1)));
                        arr_30 [i_7] [i_1] [5] [i_8] [i_9] = ((-(((arr_12 [i_7]) ? (max(4294967295, (arr_11 [i_9] [i_7]))) : (~3748484757)))));
                    }
                }
            }
        }
    }
    var_23 = ((((max(var_13, (1 == var_3)))) << (33024 - 33005)));
    var_24 = var_15;
    #pragma endscop
}
