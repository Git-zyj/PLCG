/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((min(var_6, 63)));
                var_19 *= ((max((min((arr_3 [i_0] [i_1] [i_1]), 27)), (arr_2 [i_1 + 1] [i_1 - 1]))));
                var_20 = (arr_2 [i_0] [i_1]);
            }
        }
    }
    var_21 = var_16;
    var_22 |= (min((max((min(64, 1244236888)), (max(var_2, 4294967233)))), (min(((var_17 ? -301163933 : 4294967249)), -4294967233))));

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (max(var_7, (arr_7 [11])));
        arr_11 [i_2] = -65535;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_23 = (max(((((arr_2 [i_3] [i_3]) ? var_13 : -var_3))), var_8));
        var_24 = (max(var_24, ((max(64, var_6)))));
    }
    var_25 = (max(var_1, (max(var_10, var_5))));
    #pragma endscop
}
