/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_13 [3] [i_1] [i_1] [i_1] = (((arr_3 [i_0]) << ((((var_13 ? var_1 : ((37321 ? (arr_3 [i_2]) : 1)))) - 26287))));
                        var_16 = ((max((min(var_2, var_6)), ((((arr_5 [i_0] [i_1 + 1] [i_2]) < (arr_8 [i_1 + 1] [6] [i_3])))))));
                        arr_14 [i_1] = (arr_4 [i_1] [i_2 + 3]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] = (arr_2 [i_4] [0]);
        var_17 = (min(((min((arr_11 [i_4] [i_4]), (max((arr_7 [i_4] [i_4] [i_4] [i_4]), var_6))))), (min((arr_16 [i_4]), (-85 + var_9)))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 = arr_18 [i_5];

        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_5] [i_5] [i_5] = (arr_18 [i_6 - 1]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    {
                        var_19 = (~(arr_27 [18] [i_6 - 1]));
                        arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = 1;
                        var_20 = ((-85 && (arr_19 [i_8 - 1])));
                    }
                }
            }
            var_21 = var_7;
        }
        arr_29 [i_5] = (arr_20 [i_5] [i_5]);
        var_22 = (arr_21 [i_5] [i_5]);
        arr_30 [17] = (arr_21 [3] [i_5]);
    }
    #pragma endscop
}
