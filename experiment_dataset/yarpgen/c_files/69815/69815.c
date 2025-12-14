/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((var_5 ? var_9 : ((var_3 >> (var_6 - 2021476654)))))));
    var_12 = (var_0 ? var_10 : var_5);

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_0;
                    arr_9 [i_2 + 1] [i_0] [i_0] = var_2;
                }
            }
        }
        var_13 = (!1);
        var_14 = max(((var_10 ? var_0 : var_5)), var_4);
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        var_15 = (max(var_15, var_4));
        var_16 = (arr_11 [i_3] [i_3 - 1]);
    }
    #pragma endscop
}
