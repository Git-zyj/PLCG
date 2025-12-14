/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((31 ? (min(14097866753896221306, 1)) : (~31)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_3] = ((0 ? (31 && 1) : ((0 ? 5401392766183092984 : (arr_0 [i_3])))));
                        var_20 = -369164580;
                        var_21 = (((arr_6 [1] [18]) == (arr_1 [i_0])));
                        var_22 = ((((((arr_6 [1] [i_1]) ? 0 : 1))) || (1 == 3919092354)));
                        arr_10 [i_0] [i_0] [i_2] = ((13826951283309176883 ? (arr_3 [8] [i_0] [i_0 + 1]) : (arr_3 [i_3 + 1] [i_0] [i_0 - 1])));
                    }
                }
            }
        }
        var_23 = (((((58 ? 1 : 1))) ? -85 : ((-51279048 ? 0 : 85))));
        var_24 = -2700;
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_25 = (arr_1 [4]);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_26 = (max(var_26, (((((max(0, (min((arr_18 [i_4 + 2] [i_4 + 2]), 72))))) ? (((arr_2 [i_4]) - ((-(arr_12 [10]))))) : (8806253342283810446 || -5260553953455340513))))));
                        var_27 = (min(var_27, (((((((arr_7 [i_6]) > (arr_7 [i_6])))) < (arr_7 [i_6]))))));
                        var_28 = arr_11 [i_4 + 2];
                        var_29 *= (((((~(30 & 255)))) ^ ((((((arr_2 [i_7]) ^ 40))) ? (arr_5 [i_6] [i_5] [8] [2]) : ((((-85 + 2147483647) >> (15528122406331234981 - 15528122406331234952))))))));
                    }
                }
            }
        }
        var_30 -= ((-111 ? 1 : (((1 | 9223372036854775807) ? -81 : (max(-2050471514, 0))))));
        var_31 = ((~((~(((arr_1 [18]) ? (arr_4 [i_4]) : 0))))));
    }
    for (int i_8 = 4; i_8 < 18;i_8 += 1)
    {
        arr_25 [13] [i_8] = ((-0 ? (((-63 ? 113 : (arr_6 [i_8 - 2] [i_8 - 2])))) : (-9223372036854775807 - 1)));

        /* vectorizable */
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            arr_30 [i_8] [i_9] = ((110 / (arr_5 [1] [4] [i_8] [12])));
            var_32 = 40950;
            var_33 += ((!((((arr_6 [i_8] [i_8]) | 30)))));
            arr_31 [i_9] = ((~(arr_7 [18])));
            var_34 = (max(var_34, ((((arr_22 [i_8 + 1] [i_8 - 4]) <= (((-63 ? 1 : 1))))))));
        }
    }
    #pragma endscop
}
