/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((~((((min(var_2, var_8))) - var_1))));
    var_12 = ((max(var_3, ((var_3 ? var_2 : var_2)))));
    var_13 = (min(14, 4294967269));
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (!-6622186486602977428);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 + 2] [i_1] [1] [i_1 + 2] [i_3] = (max((arr_5 [i_0] [i_1] [i_2] [i_0]), (arr_9 [i_0] [i_1 + 2] [i_0] [i_3] [i_3] [i_1 + 2])));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = (((-(-6622186486602977428 | 128))));
                            arr_15 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1] = ((arr_4 [i_1 + 1] [i_1]) ? ((min(2141586879, (116 - 4294967240)))) : ((-(arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                            arr_16 [i_3] [i_2] [i_2] [2] [i_3] = ((((((arr_9 [i_0] [i_0] [1] [i_2] [4] [i_4]) ? (arr_3 [i_4] [i_2] [i_0]) : (arr_3 [i_4] [i_3] [i_0])))) ? ((min((arr_5 [i_0] [i_1] [i_2] [i_3]), ((min(1, 1)))))) : ((-(arr_4 [i_0] [i_1 - 1])))));
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = ((!(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != ((((arr_0 [i_0]) - var_8)))))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_20 [i_5] [10] &= arr_18 [i_5] [i_5];
        arr_21 [i_5] [i_5] = ((-(((var_2 | var_7) ? (arr_19 [i_5]) : var_3))));
        arr_22 [i_5] [i_5] = ((-(((!(((-16 ? 128 : -6622186486602977458))))))));
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        arr_25 [i_6] = ((((~(arr_19 [i_6 - 1]))) / var_9));
        arr_26 [i_6] = (((((arr_23 [i_6 - 1]) ? (arr_23 [i_6 + 1]) : (arr_23 [i_6 + 1]))) | (arr_23 [i_6 - 1])));
        arr_27 [13] [i_6] = ((-((min((arr_24 [i_6 + 2]), (arr_24 [i_6 + 2]))))));
        arr_28 [i_6] [i_6] = (max((((arr_19 [i_6]) - (arr_24 [i_6 + 2]))), (arr_23 [i_6 - 1])));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_31 [i_7] = (arr_18 [i_7] [i_7]);
        arr_32 [i_7] = (1 - 16773120);
        arr_33 [i_7] &= (arr_19 [i_7]);
    }
    #pragma endscop
}
