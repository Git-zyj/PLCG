/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [1] [i_0 - 1] [1] [i_2 - 1] = (((var_9 ? var_9 : var_2)));
                    arr_9 [i_1] [i_2] = var_7;
                    arr_10 [i_0 + 1] [i_1] [1] = 1015808;
                }
            }
        }
    }
    var_17 = (~var_15);
    var_18 = ((0 ? (!17165724869677899378) : -11303002117115040316));
    var_19 = (((((-(min(30510, var_15))))) ? ((var_5 ? 40169 : ((var_9 ? var_14 : var_0)))) : ((min((~1), var_2)))));
    var_20 = var_14;
    #pragma endscop
}
