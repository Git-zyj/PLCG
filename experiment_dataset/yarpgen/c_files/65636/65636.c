/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (var_10 != var_1);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_1 [i_0])));
        var_15 = ((((!(arr_0 [0]))) || (72 || 183)));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) >= ((((max(70, 191))) & ((max((arr_1 [i_0]), (arr_0 [14]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = ((1 << (192 - 162)));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    {
                        var_17 = (max(var_17, ((((arr_5 [i_1]) == var_10)))));
                        var_18 = var_5;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_19 ^= (arr_3 [i_5]);
                    var_20 = (arr_24 [i_7]);
                }
            }
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_29 [i_8] = (arr_5 [i_5]);
            var_21 = (arr_21 [i_5] [i_5]);
            var_22 ^= (183 & (-127 - 1));
            arr_30 [i_5] [9] = ((var_6 & (arr_10 [i_5] [i_8])));
            var_23 ^= (arr_25 [4] [i_5]);
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_33 [i_9] = (arr_27 [8] [7] [i_5]);
            var_24 = (((arr_8 [i_5]) & (arr_5 [i_9])));
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            var_25 += (-9552 & 1887308237);
            var_26 *= (((arr_9 [i_10 - 1]) - (arr_9 [i_10 - 1])));
            arr_38 [i_5] [i_10] [i_5] = arr_19 [i_10 - 1] [i_10];
            arr_39 [1] [i_10] = (((arr_11 [i_10 - 1] [i_10 - 1] [11] [i_10 - 1]) ? ((((arr_28 [i_5] [i_10] [4]) | var_3))) : 63));
            var_27 = (max(var_27, (((-(arr_25 [i_5] [i_5]))))));
        }
        var_28 = (min(var_28, (((var_3 & (arr_27 [i_5] [i_5] [i_5]))))));
    }
    #pragma endscop
}
