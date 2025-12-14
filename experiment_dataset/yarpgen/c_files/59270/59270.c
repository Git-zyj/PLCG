/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_14 ? var_17 : (min(((var_7 ? var_12 : var_1)), -var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1]);
                    var_21 += ((-(!131071)));
                    var_22 = ((-(arr_0 [i_1 + 1])));
                }
            }
        }
        var_23 = ((((arr_6 [i_0] [i_0]) ? var_8 : (arr_1 [1]))));
        arr_9 [i_0] [1] = (!8381709066651707834);
        var_24 = var_9;

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_25 = (arr_1 [i_0]);
            var_26 += ((var_7 ? (arr_2 [i_0] [i_3] [i_3]) : (!var_9)));
            var_27 += (!var_16);
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        var_28 = (((arr_16 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]) + var_1));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_29 += ((var_9 << (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [9]) + 2014594443))));
                            arr_24 [i_0] [i_3] [i_4 - 2] [i_4 - 2] [i_6] = var_14;
                        }
                        arr_25 [6] [i_4] [6] [4] = ((var_5 ? ((((arr_13 [1] [i_4] [i_4]) ? (arr_5 [i_0] [i_3]) : (arr_23 [i_3] [i_3] [i_3] [i_5] [9] [i_0])))) : ((8381709066651707814 ? var_2 : var_0))));
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            arr_28 [i_0] [i_0] = var_3;
            arr_29 [i_0] [i_7 - 2] = ((!(arr_27 [i_0] [2] [i_7])));
            var_30 = (arr_21 [i_7 - 2] [i_7 - 1]);
        }
    }
    #pragma endscop
}
