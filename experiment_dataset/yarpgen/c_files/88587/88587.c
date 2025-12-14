/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_7 > var_10);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 |= var_8;
        var_16 = (!var_12);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_17 = ((~2854415310) ? (arr_11 [i_1] [3] [i_3] [i_3]) : var_7);
                        var_18 ^= (var_8 / var_11);
                        var_19 = (arr_4 [i_2]);
                        var_20 = (max(var_20, var_3));
                    }
                }
            }
            arr_14 [i_2] = var_0;
            var_21 = ((var_8 >= (((-(arr_1 [i_1]))))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_22 = (arr_17 [i_1] [i_5]);
            arr_19 [i_5] [i_5] = (-2147483638 > var_12);
            arr_20 [i_5] [i_5] = var_6;
            var_23 = (arr_18 [i_1] [i_5] [i_1]);
            var_24 = var_0;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_25 = (((((var_10 == (arr_10 [i_1] [i_6] [i_1]))))) > (((arr_0 [i_6] [i_1]) ? var_10 : 65535)));
            var_26 = (max(var_26, (((var_0 | (var_3 >= var_3))))));
            var_27 = (arr_21 [9] [i_6]);
            var_28 = (99 + 1);
            var_29 = (max(var_29, var_3));
        }
        var_30 = var_6;
    }
    #pragma endscop
}
