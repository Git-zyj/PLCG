/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [11] [i_0] = var_3;
        arr_5 [i_0] = 0;
        var_17 = ((var_7 ? (max(-3982270829059379645, 99)) : (((((((-78 ? var_10 : 29323))) && (((var_1 ? -6 : 0)))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_18 -= (((((min(29323, var_13)))) + (((((1007759218 ? -21 : 1007759218))) ? (3287208077 >> 28) : (~-21)))));
                    arr_13 [i_2] [i_2] = ((((((-(var_8 != var_2))) + 2147483647)) << (((((var_3 && var_11) | (76 && var_4))) - 1))));
                }
            }
        }
    }
    #pragma endscop
}
