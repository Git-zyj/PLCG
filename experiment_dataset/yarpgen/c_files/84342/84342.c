/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (min(var_0, (max((var_3 / var_1), var_0))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((var_8 / (arr_0 [i_0 + 2])));
        arr_4 [i_0] [9] = var_1;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_12 = (min(var_12, (((-(((arr_6 [i_1]) ? var_9 : var_9)))))));
        var_13 = ((((arr_5 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1]))));
        var_14 = ((-(((((~(arr_7 [i_1])))) ? (((arr_6 [i_1]) ? var_5 : (arr_6 [i_1]))) : (~var_8)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_3] [i_1] = (min((~var_1), (min(7897022688931611774, 1530170818))));
                        arr_18 [i_2] [i_3] [i_4] = var_8;
                        var_15 = (min((arr_5 [i_4 - 2]), (arr_6 [i_1])));
                        arr_19 [i_4] [i_3] [20] [i_1] [i_1] = (max((((var_8 >= (arr_7 [i_1])))), var_5));
                        arr_20 [i_1] [i_2] [i_3] [i_4] = (((((-33 ? (arr_10 [i_1] [16] [14]) : 52))) ? (31814 ^ 2764796478) : ((max(1769211321, var_8)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
