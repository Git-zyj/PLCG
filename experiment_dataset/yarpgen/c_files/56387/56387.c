/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_11 = 200;
            var_12 = ((-32 + 1536) / (max(var_8, (arr_5 [i_0] [i_1 + 1] [i_1]))));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_13 = ((-(arr_1 [12])));
            var_14 = ((-(((arr_7 [i_2] [i_2] [i_0]) ? var_8 : ((min((arr_0 [1] [1]), 2725777049)))))));
            arr_8 [i_0] = ((var_3 ? ((-85 ? var_6 : 3840)) : ((var_6 ? (arr_0 [i_2 - 1] [i_2 - 2]) : 0))));
        }
        arr_9 [i_0] = (max((((arr_4 [i_0] [14] [i_0]) + var_10)), (arr_1 [i_0])));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] = (244 - 0);
        var_15 = ((+(min((1 & 0), (arr_2 [i_3 - 2])))));
        var_16 = ((((var_8 ? 0 : var_6))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [i_4] [i_5] [i_6] [i_7] = var_8;
                        var_17 = ((((-9223372036854775807 - 1) ? 18071 : (arr_19 [i_7] [13]))));
                    }
                }
            }
        }
        var_18 = (((arr_7 [i_4] [i_4] [i_4]) ? (arr_14 [i_4]) : (((arr_15 [i_4]) ? var_1 : -323963016))));
        arr_27 [17] = 2048;
        var_19 = ((((var_9 ? 1279648264 : -679693280)) == (0 * var_3)));
    }
    var_20 = var_2;
    var_21 = (((-(~1))));
    #pragma endscop
}
