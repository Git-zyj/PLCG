/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = ((((arr_1 [i_1] [i_0]) ? var_13 : 691162707)));
            var_16 = ((~(arr_4 [4] [i_0 - 1] [i_1])));
            arr_6 [i_0] [i_1] [i_0] = (((arr_4 [i_0 + 2] [i_1] [i_0 - 1]) ? (!var_14) : (((arr_4 [i_0] [i_1] [i_0]) ? 691162732 : var_3))));
            arr_7 [i_1] = var_2;
            arr_8 [i_1] [i_1] = var_12;
        }
        arr_9 [i_0] [i_0] = (((var_10 ? (arr_0 [i_0]) : var_1)));
        arr_10 [i_0] [i_0] = (arr_1 [i_0] [i_0 - 1]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_23 [i_2] [18] [i_4] [i_2] [i_2] = ((((max(58220, (min(108, -691162707))))) || (arr_20 [i_5] [i_4 + 2] [i_3] [i_2])));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_17 = (max(var_17, var_4));
                            arr_27 [i_2] [i_3] [i_3] [i_2] = -691162755;
                            var_18 = -691162732;
                            var_19 = (arr_14 [i_4 - 1] [i_4 - 1] [i_2]);
                            arr_28 [i_2] [i_2] [3] [i_4] [i_5] [i_6] = ((((arr_14 [i_2] [i_4 + 2] [i_4]) && (!118))));
                        }
                        arr_29 [i_2] = var_11;
                        arr_30 [16] [i_2] [i_3] [i_2] [i_2] = (arr_19 [17] [17] [i_2]);
                    }
                }
            }
        }
        arr_31 [i_2] [9] = ((arr_13 [i_2]) ? (arr_13 [2]) : (arr_14 [i_2] [13] [10]));
    }
    var_20 = var_12;
    var_21 = var_5;
    var_22 = var_1;
    #pragma endscop
}
