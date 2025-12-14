/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = ((63488 ? 105 : 1073));
        var_19 = (min(var_19, var_14));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_3] [i_2] [i_1 - 1] [i_0] [i_0] |= ((((((arr_2 [i_1 + 2] [i_1 + 3]) ? 63488 : (arr_2 [i_1 + 1] [i_1 - 1])))) ? (((arr_2 [i_1 + 1] [i_1 - 2]) ^ (arr_2 [i_1 + 2] [i_1 + 3]))) : (arr_2 [i_1 + 2] [i_1 - 1])));
                        var_20 = (min(var_20, ((max(var_6, ((-856733821831988415 / (((var_16 ? 63488 : var_5))))))))));
                        var_21 = (max(var_21, 856733821831988401));
                    }
                }
            }
        }
        var_22 += ((-(arr_5 [9] [i_0 - 1] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_12 [i_4] [i_4] = 4136;
        arr_13 [i_4] = (min((!1439775650), (max(-105, 1769698521))));
        arr_14 [1] = (((arr_11 [i_4]) > 65535));
    }
    var_23 = var_1;
    #pragma endscop
}
