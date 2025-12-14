/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (arr_4 [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] [i_3] [i_4] = (!14108282);
                                arr_15 [i_0] [i_0] [i_1] [4] [5] [4] [7] = var_10;
                                arr_16 [i_0 - 3] [i_0 - 3] [i_2] [i_0] [i_2] = (arr_3 [i_3] [i_3] [i_3]);
                                arr_17 [i_0] [i_1] = 14108282;
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_0] = (arr_12 [i_0] [i_0] [i_2 + 2] [i_0 - 1] [8]);
                }
            }
        }
        arr_19 [i_0] [8] = (-17351 != 1);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_24 [i_5] = ((-((max((arr_21 [i_5]), (arr_20 [i_5]))))));
        arr_25 [i_5] = var_9;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_29 [12] [i_6] = max(0, 60732);
        arr_30 [0] = (max(((-((24643 ? (arr_22 [i_6] [i_6]) : var_4)))), (arr_21 [i_6])));
        arr_31 [4] = (max(((((var_3 % (arr_20 [i_6]))) + (arr_27 [i_6]))), (((arr_26 [i_6]) >> (((arr_26 [i_6]) - 13371257737354146196))))));
    }
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_40 [i_7] [i_8 + 3] [i_8] [8] = var_12;
                    arr_41 [12] [i_7] [i_9] = (!var_7);
                    arr_42 [i_7] [i_7] [i_7] = (arr_39 [i_7] [i_7] [i_7 + 2]);
                }
            }
        }
    }
    var_13 = (((!11674) ? ((max(1, -11674))) : ((~((max(var_1, var_8)))))));
    #pragma endscop
}
