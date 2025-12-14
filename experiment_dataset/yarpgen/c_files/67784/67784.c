/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [11] = 2870864682814512268;
        arr_4 [10] = (((min((((11636402600806213544 ? -47 : var_9))), (((arr_1 [21]) ? (arr_2 [i_0] [i_0]) : 9103941070212282076)))) <= (((~(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((-60 && (arr_7 [17])));
        arr_9 [i_1] = ((-((65 ? 190 : (arr_5 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_3] = (((((((var_0 ? (arr_12 [i_2] [i_2]) : -5934829442649121255))) ? (var_10 - 62) : 47)) + (min((arr_6 [i_2] [i_3]), var_1))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_25 [i_5] [i_3] [i_5] [13] [i_6] = max((67 + 238), (((arr_17 [17] [14]) + ((108 ? 190 : 33)))));
                                var_11 ^= ((64 ? ((var_9 ? var_0 : (arr_11 [5]))) : (((((arr_0 [7]) > ((min(110, (arr_15 [i_4] [i_3] [i_3] [i_5 + 3]))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_31 [i_2] [i_3] [i_8] [9] [i_2] = (2147483647 % 6);
                                var_12 &= -7440984949451602465;
                                var_13 = ((((((var_7 ^ var_8) ? (arr_7 [i_3]) : (max(var_2, var_10))))) ? 6595023572420718404 : (((((var_1 / 119) > (arr_13 [4])))))));
                                arr_32 [i_8] [i_8] [i_7 - 1] [i_7 - 2] [i_7 - 1] [i_4] [i_8] = (((!(arr_10 [3]))));
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_2] = (arr_13 [i_2]);
        var_14 = (((5161380091432418637 && (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) ? (arr_2 [i_2] [2]) : (arr_6 [i_2] [i_2]));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_15 = 3;
                                arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_21 [i_9] [i_9] [i_9] [8] [i_12] [i_11 + 1]);
                                arr_48 [i_2] [i_9] [i_2] [i_11 + 1] [i_12] = (((((!((1 >= (arr_15 [i_2] [i_9] [9] [7])))))) != ((max(var_6, -64)))));
                            }
                        }
                    }
                    arr_49 [i_10] = ((((~(arr_37 [i_9])))) ? ((((((-5934829442649121255 + 9223372036854775807) << (((-6 + 45) - 38)))) <= ((~(arr_17 [i_2] [i_10])))))) : (arr_30 [i_2] [i_9] [i_9] [i_10] [i_10]));
                }
            }
        }
    }
    var_16 = ((((((106 ? 24 : var_10)) | ((var_4 ? -1304414364 : 0)))) != -var_5));
    #pragma endscop
}
