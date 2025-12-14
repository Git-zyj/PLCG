/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (min(5703301443443313335, var_14));
                    var_17 ^= var_2;
                }
            }
        }
    }
    var_18 = var_13;

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_19 = ((~((4294967295 ? var_9 : (arr_0 [i_3])))));
        arr_9 [i_3] = (min((((arr_3 [i_3]) ? (arr_3 [i_3]) : (arr_3 [i_3]))), ((((((2081998770 ? var_8 : var_11))) ? var_13 : ((258048 ? var_9 : var_9)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_20 = ((var_5 ? (((!(arr_2 [i_3] [i_3])))) : (arr_12 [i_3] [i_3])));
                    var_21 += (((max(152, (arr_0 [i_3])))) ? 32767 : ((var_7 ? -94 : (arr_5 [i_3] [15] [i_5] [i_3]))));
                    arr_17 [i_3] [10] = ((var_15 == (((75 ? (var_7 > var_4) : var_7)))));
                }
            }
        }
        var_22 = (min((min(var_1, var_8)), ((max(-var_3, (arr_7 [10]))))));
        var_23 = (max(var_23, (((max((arr_4 [1] [15]), (arr_14 [i_3] [i_3] [i_3])))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_24 = (-2147483647 - 1);
                        arr_27 [i_8] [i_9] = (min(((max(2081998770, (arr_26 [i_6] [i_7] [i_6] [i_7] [i_7 + 1] [i_7])))), (((arr_5 [i_6] [i_7 + 1] [i_8] [i_9]) ? var_14 : 8632023667935717224))));
                    }
                }
            }
        }
        var_25 = (max(0, 2081998768));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_26 = var_5;
        arr_30 [i_10] [i_10] = ((var_2 ? (max((arr_6 [i_10] [i_10] [i_10] [i_10]), var_14)) : (arr_19 [i_10])));
    }
    var_27 = (min(var_6, var_14));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            {
                arr_37 [i_12] [i_12] [i_12] = (max(var_15, (((4294967295 || (((var_7 ? var_4 : var_4))))))));
                var_28 = -var_7;

                /* vectorizable */
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    var_29 = var_10;
                    var_30 = (((arr_3 [i_12 + 1]) > (arr_2 [i_12 - 1] [i_13])));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    arr_43 [i_11] = (min(((((arr_34 [i_11]) || var_12))), ((var_5 ? ((min((arr_19 [i_11]), 2802915531))) : var_5))));
                    var_31 = -4302291736024361898;
                    var_32 ^= ((-(((min(var_4, var_15))))));
                }
            }
        }
    }
    #pragma endscop
}
