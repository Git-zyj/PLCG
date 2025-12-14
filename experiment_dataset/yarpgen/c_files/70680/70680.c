/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [12] [i_1] = ((var_8 >> (((max(var_4, 7675447552090628922)) - 7675447552090628894))));
                    var_11 = (var_5 == -7675447552090628915);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {
                    var_12 = (((((~((65535 ? (arr_0 [i_4]) : 1))))) ? var_1 : ((((min(var_9, 102))) ? (arr_14 [i_3] [7] [i_3]) : 9223372036854775805))));
                    arr_20 [i_3] [i_3] [i_4] [i_5] = 87;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            arr_30 [i_6] [i_7] [i_7] [i_7] [i_7] [i_9] = (arr_27 [i_9] [i_9] [i_9]);
                            var_13 = ((((((max(226, (arr_26 [i_6] [i_6] [i_7] [i_9])))))) < (max(288230101273804800, (max((arr_23 [i_7] [i_7]), 7675447552090628922))))));
                            var_14 = var_8;
                            arr_31 [i_6] [i_7] [i_7] = (max(0, (max((max(-1, 12)), (((9223372036854775807 ? 36 : var_10)))))));
                        }
                    }
                }
                var_15 = (max((87 < 30), ((7675447552090628899 ? 225 : (arr_22 [i_6 + 3] [i_6 + 3])))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_16 ^= ((max(124, (arr_6 [i_7] [i_6]))));
                            var_17 = (min(var_17, (((-(((arr_7 [i_10 + 2] [i_6] [i_11 + 2] [i_10 + 2]) ? (arr_7 [i_10 + 2] [i_6] [i_11 + 2] [i_11]) : (arr_0 [i_10 + 2]))))))));
                            var_18 = (((((((arr_6 [i_7] [i_7]) + -242902530))) ? (arr_25 [i_11 + 1] [i_11 + 4] [i_11 + 3]) : 13858)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_19 = (max((((((-1 ? var_10 : (arr_40 [i_13] [i_15]))) >= 29))), (((arr_45 [i_13] [i_13 - 1] [11] [i_13] [i_13 - 1]) / 18446744073709551615))));
                            var_20 |= (max((max((arr_44 [0] [0]), (arr_7 [i_13 + 1] [22] [22] [i_13]))), (((var_6 >= var_9) >> (((arr_44 [1] [i_13 + 1]) - 23))))));
                            var_21 = 4080;
                        }
                    }
                }
                var_22 = (min(242902530, 1553527899));
            }
        }
    }
    var_23 = 5794320123106650633;
    #pragma endscop
}
