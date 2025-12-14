/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-2147483631 & -2147483632) * ((((!2147483632) && (((var_4 >> (var_0 - 211)))))))));
    var_13 = var_5;
    var_14 = (max(var_14, (-2147483633 >= -2147483626)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((var_7 | 2147483633) * ((-((((arr_1 [i_1] [i_0]) < -2147483623)))))));
                var_15 = (arr_4 [i_0] [i_1] [10]);
                var_16 = (max(var_16, (var_1 == 2147483633)));
            }
        }
    }
    var_17 |= (((!var_1) >= (min(var_0, (((var_6 ? var_5 : var_7)))))));
    #pragma endscop
}
