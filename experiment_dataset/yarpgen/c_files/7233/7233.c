/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_9 [i_0] [i_3] [1] [i_3 + 1] = (arr_5 [i_3]);
                        arr_10 [i_0] [0] [6] [i_3] &= -1910469023;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((var_2 ? ((min(28, var_8))) : ((var_5 ? var_6 : var_7))))));
                        var_11 = (min(var_11, ((((!var_10) ? var_9 : ((((var_9 < -1966196577446490331) >= ((-100 ? 0 : -10601))))))))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_19 [i_0] = (((((arr_14 [i_0] [i_1] [1] [i_2] [i_5] [i_5]) ? 0 : var_1)) >> (((arr_14 [i_5] [i_0] [i_0] [i_1] [i_1] [i_0]) % (arr_14 [i_5] [i_5] [i_2] [i_2] [i_1] [i_0])))));
                        var_12 = var_4;
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_13 = var_2;
                        arr_24 [i_6] [i_6] = 1966196577446490330;
                    }

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_27 [0] [13] [i_7] [i_7 - 1] = max(var_4, (((~(((arr_13 [i_0] [i_0] [1] [i_0] [i_7 - 1]) ? var_8 : var_7))))));
                        var_14 = (min(var_14, var_7));
                    }
                    var_15 = (((var_9 && var_3) ? (((arr_16 [i_1]) | (arr_23 [i_0] [i_0] [i_2]))) : (((arr_23 [8] [i_1] [14]) - (arr_23 [i_2] [i_1] [2])))));
                    arr_28 [i_0] [i_1] [i_2] = (arr_7 [i_0] [i_1] [i_2] [i_0]);
                }
            }
        }
        arr_29 [i_0] = arr_18 [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_16 = ((((min(var_2, 255))) ? -var_7 : (arr_32 [i_8])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    {

                        for (int i_12 = 2; i_12 < 7;i_12 += 1)
                        {
                            var_17 &= var_5;
                            var_18 -= var_3;
                            var_19 = (min(var_19, ((((max(((var_1 ? var_4 : var_3)), (arr_17 [i_12 - 1] [i_11 - 3] [11]))) * ((1 ? 1 : 1864893069)))))));
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            arr_43 [5] [3] [i_10] [i_10] [i_10] [i_10] [i_10] = (0 % ((var_2 ? var_10 : ((var_2 ? var_6 : (arr_7 [i_8] [i_9] [i_8] [i_13]))))));
                            arr_44 [i_13] [i_8] [i_10] [i_9] [i_8] = ((~(!1)));
                            var_20 = 0;
                        }
                        var_21 = ((var_7 ? (((arr_25 [i_9] [i_9] [14] [i_11 - 3] [i_11 + 1] [i_11 - 1]) ? (arr_4 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11]) : var_5)) : var_6));
                    }
                }
            }
            var_22 = (min(var_22, (((79 ? -20 : var_3)))));
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            arr_48 [i_8] [i_14] = (((((arr_18 [i_8] [i_8] [i_8] [i_14] [i_14]) ? (arr_12 [i_14] [i_14] [i_14] [i_8] [i_8]) : (arr_12 [i_14] [i_14] [i_14] [i_14] [i_14]))) < var_10));
            arr_49 [i_14] = ((var_6 ? (((max((arr_33 [i_8] [i_8] [i_8]), var_2)))) : (min(228, ((-(arr_6 [i_14] [i_14] [i_8])))))));
        }
        var_23 += ((((var_8 ? var_8 : var_9)) | (((arr_7 [i_8] [i_8] [i_8] [i_8]) ? var_5 : (arr_7 [i_8] [i_8] [i_8] [i_8])))));
    }
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        var_24 = 10601;
        arr_52 [i_15] = (((arr_50 [i_15] [i_15]) + (arr_50 [i_15] [i_15])));
        arr_53 [i_15] = ((var_7 != ((min(6, 15)))));
    }
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        arr_57 [i_16] = 21063;
        arr_58 [i_16] = (((((((var_1 ? var_4 : var_5))) ? (arr_18 [i_16] [i_16] [1] [4] [i_16]) : (arr_55 [i_16]))) ^ (~var_10)));
    }
    var_25 = (var_1 == var_7);
    #pragma endscop
}
