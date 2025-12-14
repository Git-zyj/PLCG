/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_6, ((max((var_2 > var_14), -var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = min(var_0, var_17);
                arr_5 [10] [10] [10] |= ((var_7 < 125) > var_15);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_22 = (min(var_22, 1));
        arr_9 [i_2] [i_2] |= (arr_8 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (((((-(arr_11 [i_3])))) ? var_3 : (arr_11 [i_3])));
        var_23 = var_0;
        var_24 = (var_17 | 1);
        var_25 = var_1;
        var_26 = (~8728069529790640094);
    }
    #pragma endscop
}
