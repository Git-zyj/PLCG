/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_4 [i_0] |= ((~(((arr_2 [7]) ? 58585 : var_6))));
        arr_5 [i_0] = (~-0);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (!var_11);
        arr_9 [i_1] = var_7;
        arr_10 [i_1] = var_8;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    arr_15 [i_1] [5] [i_1] [5] = ((var_10 ? ((((arr_13 [i_1] [i_1] [i_1] [i_1]) ? ((var_8 ? 1 : var_10)) : (min(var_10, var_10))))) : (min(var_8, var_12))));
                    var_15 = max((((arr_13 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1]) ^ (arr_13 [i_3 + 1] [i_3] [i_3] [i_3 + 1]))), (((arr_13 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1]) ? 0 : (arr_13 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1]))));
                }
            }
        }
        var_16 = ((+((((min((arr_13 [i_1] [i_1] [i_1] [i_1]), var_13))) ? var_13 : 0))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_19 [i_4] = (~var_13);
        arr_20 [i_4] = (min(var_0, ((((min(var_7, var_6))) ? var_3 : var_12))));
        arr_21 [i_4] [i_4] = var_9;
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_17 = (max(var_17, (((!((min(var_13, (var_12 / var_9)))))))));
                        arr_29 [9] [i_4] [i_5] [i_5] [i_6] [i_6] = 1;
                        arr_30 [i_4] [15] [15] [i_4] = var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
