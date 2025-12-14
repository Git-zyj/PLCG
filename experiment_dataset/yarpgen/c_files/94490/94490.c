/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((arr_2 [i_0] [i_2 + 1]) ? var_16 : 1)))));
                        arr_9 [i_3] [14] [i_2 - 4] [i_3] = (((arr_8 [i_1 + 1] [i_0 - 2]) ? (arr_1 [i_0] [i_2 - 1]) : var_8));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_19 = ((!(arr_2 [i_0] [i_0 + 1])));
            arr_12 [i_0 - 1] [7] = ((121 ? 1 : -20));
            var_20 ^= (arr_8 [i_0] [i_0 - 2]);
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_21 = (((arr_0 [11] [i_0 - 1]) ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0] [i_0 + 2])));
            var_22 = (max(var_22, (((arr_13 [12]) % ((47584 ? 435098774814057404 : (arr_8 [i_0] [i_5])))))));
            var_23 = 545344977;
            var_24 ^= var_8;
        }
    }
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        var_25 = (4226482098 < var_0);
        var_26 = (1 + -1);
        arr_20 [i_6] = (min((((arr_15 [i_6] [i_6]) | var_16)), (arr_5 [i_6] [i_6 - 2] [i_6])));
    }
    var_27 = (((((var_9 ? var_11 : var_12))) ? ((var_17 ? var_9 : var_16)) : var_10));
    var_28 = (max(var_28, ((((((var_2 ? var_4 : 6432))) ? var_8 : var_3)))));
    #pragma endscop
}
