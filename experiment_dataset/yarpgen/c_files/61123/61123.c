/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((((110 ? var_2 : var_0))) ? -6950740936430656690 : (arr_0 [i_0])));
        var_13 += ((22924 ? -var_9 : 1096391651));
    }
    var_14 |= var_10;
    var_15 = var_1;

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    var_16 = (((arr_1 [i_1]) ? (-22925 | var_3) : -113));
                    var_17 = (min(var_17, ((max(((var_9 ? (arr_10 [i_3 - 1] [i_3] [i_3] [i_3]) : (arr_10 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]))), var_1)))));
                    arr_11 [i_1] [i_1] [6] = (((min((!var_7), (arr_9 [i_1] [i_1] [i_1]))) ? 52459 : -56));
                    var_18 = var_4;
                }
            }
        }
        var_19 *= ((-(min(var_1, 3267832790))));
        var_20 ^= ((!(((((min((arr_5 [i_1] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? 76 : (max((arr_7 [i_1] [i_1] [1]), 27387)))))));
        var_21 = 5753630115687280189;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_15 [i_4] = -68;
        var_22 = ((+((((((arr_13 [i_4]) ? (arr_13 [i_4]) : 0))) ? 247 : var_10))));

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_20 [i_5] = (((arr_12 [i_4]) ? 3267832794 : (((arr_12 [i_4]) ? 1757686462085659768 : 4294967289))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_23 = var_11;
                var_24 = (2427938470147706762 != 8);
            }
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                var_25 = (min(var_25, ((((arr_24 [i_7 + 1]) ? (((arr_24 [i_7 + 1]) ? (arr_24 [i_7 + 1]) : -2427938470147706779)) : (((min((arr_24 [i_7 + 1]), (arr_24 [i_7 + 1]))))))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_26 ^= (min(19519, ((max(var_11, var_9)))));
                            arr_30 [i_4] [i_5] [i_7] [i_9] = ((var_6 ? 1027134510 : (max((arr_18 [i_7] [i_7 - 1] [i_7 + 1]), ((((arr_22 [i_4] [i_7] [i_8]) ? var_0 : var_9)))))));
                            arr_31 [i_7] [i_7 - 1] [i_7] = (arr_18 [i_7 + 1] [i_7 - 1] [i_5]);
                        }
                    }
                }
                var_27 |= var_8;
            }
            arr_32 [i_4] [i_4] [i_5] = var_6;
        }
    }
    #pragma endscop
}
