/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = min(62871, ((max((arr_0 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 - 1] [i_0 + 1])))));
        arr_5 [i_0] = var_12;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 = ((((-(arr_12 [i_0 - 1] [i_0] [i_0] [i_0]))) > 2657));
                        var_14 = var_9;
                        var_15 += (2644 ? 4294967292 : -2015089935);
                    }
                }
            }
        }
        arr_14 [i_0] [i_0 - 1] = arr_3 [i_0] [i_0];
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_16 = ((-((10728463693185722160 << (63488 - 63467)))));
                        var_17 = ((10728463693185722160 ? (((arr_18 [i_7] [i_7] [i_7]) ? var_10 : 128)) : (arr_17 [i_4] [i_5])));
                        var_18 = (max(var_18, (arr_18 [i_4 - 2] [i_5] [i_5])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    var_19 = (arr_26 [i_8] [i_8]);
                    arr_31 [i_4 - 1] [i_8] [i_4 - 2] = (((((arr_24 [i_4 + 2] [i_4 - 2] [i_4] [i_4 - 2] [i_4]) ? (arr_24 [i_4 + 2] [i_4] [i_4] [i_4 - 2] [i_4 + 2]) : 1)) % (((arr_24 [i_4 + 2] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2]) << var_1))));
                    var_20 = arr_22 [i_4 - 1] [i_8] [i_9] [i_9];
                    var_21 = (((min(8114385446817841794, 1))) ? (((arr_27 [i_9] [i_8]) ^ (arr_16 [i_9] [i_8]))) : (arr_27 [i_9] [i_4 - 1]));
                    var_22 = (arr_18 [i_4] [i_8] [i_4 + 2]);
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_34 [i_10] = ((var_10 % ((~((1 ? -23930 : 0))))));
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_23 = (min(var_23, (((var_12 ? 0 : (((((4294967289 ? var_2 : 7718280380523829464))) ? ((984880503 ? 5527758424927677517 : 496920510)) : (arr_10 [i_11 + 2] [i_11 + 2] [i_11 - 3]))))))));
                    arr_39 [i_11] = 16045735770837167055;
                }
            }
        }
        var_24 = (arr_29 [i_10] [i_10] [i_10] [i_10]);
    }
    for (int i_13 = 1; i_13 < 24;i_13 += 1)
    {
        var_25 += 0;
        var_26 += (((((arr_40 [i_13 - 1]) ? (arr_40 [i_13 - 1]) : (arr_40 [i_13 + 1]))) <= (~2015089921)));
        arr_42 [i_13 + 1] = (((min(1686938872, (((var_4 ? (arr_41 [i_13] [i_13]) : var_3))))) % (((max((arr_41 [i_13 - 1] [i_13]), (((!(arr_40 [i_13 + 1]))))))))));
    }
    var_27 = (((var_6 ? var_4 : ((1 ? var_11 : var_5)))) >= (~var_8));
    #pragma endscop
}
