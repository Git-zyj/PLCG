/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = var_10;
        var_16 += (max(-17, (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((((((arr_3 [i_1] [i_1]) ? (arr_2 [i_1]) : -118))) ? var_6 : (arr_2 [i_1])));
        var_17 *= ((((max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))) ? var_10 : ((-(max((arr_3 [i_1] [i_1]), var_7))))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_18 = (((~56) ? ((var_13 | (arr_12 [i_3 - 1] [i_2] [i_4] [i_2 - 1] [i_3]))) : ((~(arr_6 [i_3 - 1] [i_2] [i_2 + 1])))));
                        arr_14 [i_4] [i_4] = var_8;
                        arr_15 [i_4] [i_1] [i_1] [i_3] [i_4] = (arr_6 [i_3] [i_3] [i_3]);
                    }
                }
            }
        }
        var_19 = (max(var_19, (~8646911284551352320)));
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_5] [i_7] [i_7] [i_7] [i_7] [i_8] = (arr_21 [i_5] [i_5]);
                                var_20 *= 0;
                                arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((17 ? ((max(175, 104))) : (0 >> 17)));
                            }
                        }
                    }
                    var_21 = ((-(--0)));
                    arr_31 [i_5] [i_5 + 2] [i_5] [i_5] = var_7;
                    arr_32 [i_5] [i_5] = ((((var_3 ? (arr_27 [i_5 + 1] [4] [1] [i_5 + 3] [i_5 - 1] [6]) : var_2)) / ((~(arr_27 [i_5] [4] [i_6] [i_7 - 1] [i_7 + 3] [i_7 + 3])))));
                    var_22 = (!((max(((~(arr_21 [i_6 - 1] [i_5]))), (~var_10)))));
                }
            }
        }
        arr_33 [15] [15] = 0;

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_23 = (!var_14);
            var_24 = var_12;
            var_25 ^= (~(max((arr_20 [i_5 + 3]), var_8)));
            var_26 += ((-1411729122 ? 3739234466 : 65526));
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_38 [i_5] = ((min((max((arr_25 [i_5] [16]), var_1)), 49)));
            var_27 *= (max(10998, (((((10849717684800286687 ? 10849717684800286677 : 15357764980975268823))) ? (var_1 & var_10) : 1))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            var_28 = (arr_25 [i_5 - 1] [16]);
            arr_41 [7] [i_5] [7] = (((arr_21 [21] [i_5 + 4]) + (arr_21 [i_5] [i_5 + 4])));
            var_29 = var_11;
        }
        var_30 = ((-((~(arr_24 [i_5 - 1] [i_5 + 3] [i_5 + 3] [i_5] [i_5 + 3] [i_5])))));
    }
    var_31 ^= (var_6 ? var_7 : ((((max(var_8, var_2))) ? var_2 : 54538)));
    #pragma endscop
}
