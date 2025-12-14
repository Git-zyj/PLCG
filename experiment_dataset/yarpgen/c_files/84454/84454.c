/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 24;i_3 += 1)
                {
                    {
                        var_18 = ((~(arr_9 [i_3] [i_3 - 4] [i_1] [i_1])));
                        arr_12 [i_3] = ((var_5 ? (arr_2 [i_2] [i_1]) : (arr_2 [i_1] [i_2])));
                    }
                }
            }
            var_19 = (((((arr_8 [i_0] [i_1] [i_1] [i_0] [i_1]) || 0)) || ((!(arr_7 [i_1] [i_1] [i_0])))));
        }
        var_20 |= (((((-(var_3 & 36673)))) ? (~var_14) : var_2));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_21 = (max(var_21, var_7));
        var_22 = var_15;
        var_23 = var_4;
        var_24 = (((((~(((arr_1 [i_4]) ? (arr_6 [i_4] [i_4]) : (arr_14 [2])))))) ? (((!((min((arr_15 [i_4]), var_7)))))) : ((-(var_1 & var_10)))));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        arr_19 [i_5] = var_12;
        var_25 -= -1999257084;
        arr_20 [10] |= (--0);
        var_26 = ((((80026054 | (arr_15 [i_5 + 1])))) ? (((arr_7 [i_5 - 2] [i_5] [i_5 - 2]) + (arr_7 [i_5 + 1] [i_5 - 1] [9]))) : 3);
        var_27 -= ((~(max(178583945, 144044819331678208))));
    }
    var_28 = var_14;
    #pragma endscop
}
