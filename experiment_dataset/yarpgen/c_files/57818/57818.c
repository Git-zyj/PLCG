/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((var_9 ? var_11 : var_7));
    var_13 ^= var_7;
    var_14 = (((var_7 * (var_11 / var_1))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_10;
        arr_5 [i_0] [i_0] = (((((var_11 << (var_0 - 55761)))) ? (max(((min(var_4, var_2))), ((var_2 ? (arr_0 [i_0]) : var_3)))) : (((max((arr_1 [i_0]), (arr_1 [i_0])))))));
        var_15 = ((65535 ? var_5 : 830195147));
        arr_6 [i_0] = (((((arr_1 [i_0]) | var_9)) | (((var_7 ? var_11 : (arr_3 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (max((arr_3 [i_1]), var_0));
        arr_9 [i_1] = ((20180 ? ((-1718916251527795893 ? -1 : -648073763)) : (54449 != 65535)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_17 = (((arr_10 [i_2] [i_2]) ^ var_0));
        var_18 &= var_4;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_19 = ((var_9 * (arr_13 [11])));
                        var_20 += arr_15 [i_5 - 1] [i_4 - 1];
                        arr_20 [i_5] [i_4] [i_4] [13] [i_4] [3] = ((var_9 % ((((var_11 < (arr_3 [i_4])))))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [9] [i_6] [i_6] = (((arr_14 [i_2] [i_6]) ? (arr_14 [12] [i_6]) : (arr_21 [i_2] [i_2])));
            var_21 *= var_5;
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_27 [i_2] [i_2] [i_2] |= (((arr_15 [i_2] [12]) ? (arr_26 [i_2] [i_7]) : (((var_11 == (arr_16 [12] [12] [6] [i_7]))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    {
                        var_22 = (((arr_28 [i_9 - 2] [1] [i_9 - 1] [i_2]) | (arr_28 [i_9 - 1] [i_9] [i_9 - 2] [i_2])));
                        var_23 = ((var_3 ? (arr_30 [i_2] [i_2] [i_2] [i_2]) : var_9));
                        var_24 = var_3;
                        arr_34 [13] [4] [i_8] [i_9 - 1] = (((arr_31 [5] [i_7] [8] [i_9 - 1]) >= (arr_30 [i_2] [i_2] [16] [i_7])));
                        arr_35 [i_2] [i_7] [i_8] [i_9 - 2] = (((arr_33 [i_2] [i_7] [i_7] [i_9] [i_9 + 1]) & (arr_1 [i_8])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 17;i_11 += 1)
                {
                    {
                        var_25 = var_0;
                        var_26 = (((arr_2 [i_11 - 4]) <= (arr_2 [i_11 - 4])));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_27 = var_8;
            arr_45 [i_12] [i_2] [4] = var_11;
        }
    }
    #pragma endscop
}
