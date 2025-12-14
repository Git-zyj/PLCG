/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-((41707 ? (min(96, var_12)) : ((1 ? -1975177836 : 127)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = 1297;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] = var_15;
            arr_6 [i_0] = (arr_1 [i_0] [i_1]);
            var_21 = ((~(min(((min(41707, var_3))), ((var_6 ? 35982 : (-127 - 1)))))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_22 = (1434707108 < ((min(620139761, (arr_10 [i_0 + 2])))));
                            var_23 += ((var_13 ? (((arr_10 [i_3]) ? var_3 : (arr_4 [i_4] [i_4]))) : -19779));
                        }
                    }
                }
                arr_14 [15] [i_0] [15] = (((-(min(-55545059018352575, 4144738927697793346)))));
                arr_15 [i_0 - 2] [i_0 - 2] = (min((min(-var_14, (var_12 == var_10))), ((((min(14, (arr_11 [11] [11] [11] [i_2] [i_2] [i_2])))) ? -62 : 0))));
                arr_16 [i_0] [i_0] [i_0] = ((~((13516513377586002907 ? (arr_7 [i_2]) : 16943781266909856834))));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                arr_20 [i_1] [12] = (arr_12 [i_0] [i_1] [i_0 + 2] [3] [i_5]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_26 [i_7] [14] [i_6] [i_6] [i_7] = (arr_23 [i_0] [i_0 + 1] [i_0 + 2] [i_7] [i_0 + 2]);
                            var_24 = 1502962806799694782;
                            var_25 += (max((min((max((arr_1 [i_0] [i_1]), var_16)), (arr_23 [i_1] [i_5] [i_0 - 1] [i_5] [i_0 + 1]))), (~14)));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                arr_29 [0] = (min((min(((1 ? 25690 : 19676)), 43793)), ((((((arr_19 [i_1] [i_1] [i_1] [i_1]) ? (arr_22 [i_0] [1] [i_8]) : 62957))) ? (arr_28 [i_0] [i_0] [i_0] [i_0 + 1]) : (arr_22 [i_0] [8] [10])))));
                arr_30 [i_0 - 2] [i_0 + 2] [i_0] [i_0 - 1] = (~(min(((2860260188 ? var_1 : -32)), (18446744073709551615 && 1))));
                arr_31 [i_0] = (((max(1, (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))) ? (((arr_8 [i_0 - 1] [i_0 - 1] [7]) | (arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))) : (((arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_0]) ? (arr_18 [i_0 - 1] [i_0 - 1] [1] [i_0 + 2]) : (arr_21 [i_0 - 1] [i_0 - 1] [i_0] [7])))));
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_35 [i_9] = ((4209 ? (((~((15909 ? 32 : (arr_34 [i_9] [i_9])))))) : 16943781266909856843));
        arr_36 [i_9] [i_9] = 37104739;
        var_26 = (min(var_26, ((~(~73)))));
    }
    var_27 = ((min((((0 ? var_4 : -1))), (min(30066, var_9)))));
    #pragma endscop
}
