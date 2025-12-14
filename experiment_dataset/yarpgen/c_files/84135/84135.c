/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_9;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 ^= 45765;
        var_17 *= ((+((max((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, (((arr_8 [i_1] [i_2] [i_3]) ? (arr_8 [i_1] [i_2] [i_3]) : (arr_8 [i_3] [i_2] [i_1])))));
                    arr_10 [2] [i_2] [8] [15] = (((var_3 << 1) ? ((-3533597629604519433 ? -483466840 : (arr_4 [i_1]))) : (arr_8 [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_19 = (((arr_14 [i_1] [i_1] [i_1] [i_5 - 1] [i_1] [i_1]) ? (arr_13 [10] [10] [10] [i_5 + 1] [i_5 - 1] [10]) : (arr_13 [i_1] [2] [i_3] [i_5 - 2] [i_5] [i_3])));
                                var_20 = ((-127 - 1) + ((-(arr_8 [i_1] [i_2] [6]))));
                            }
                        }
                    }
                }
            }
        }
        var_21 = var_12;
        var_22 = (((arr_13 [13] [i_1] [i_1] [0] [i_1] [13]) ? 127 : -2180351244561611329));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_23 = (~var_7);
        var_24 &= 232;
        var_25 = (max(var_25, (((((15424 / (arr_17 [i_6] [1]))) * (arr_16 [i_6]))))));
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_26 = (arr_1 [i_7]);
                    var_27 = (arr_5 [i_8]);
                    var_28 = (min(var_28, ((((!(arr_23 [2] [i_8] [i_8])))))));
                    arr_26 [i_7] [i_8] = ((-(arr_1 [i_7])));
                    arr_27 [i_7] [i_7] [i_7] [i_7] = var_9;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    {
                        var_29 = 1;
                        arr_36 [i_10] = (arr_20 [i_7] [i_7]);
                        var_30 |= 94;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            {
                arr_42 [i_13] [i_14 + 4] = (max((arr_41 [i_14] [i_14 + 2] [i_14 + 3]), (((arr_41 [i_14] [i_14 - 2] [i_14 + 3]) ? 1 : (arr_41 [i_14] [i_14 + 3] [i_14 - 2])))));
                var_31 = var_2;
                var_32 = var_8;
            }
        }
    }
    var_33 = var_7;
    #pragma endscop
}
