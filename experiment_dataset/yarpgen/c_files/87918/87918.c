/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = (min(var_21, var_7));
    var_22 = (min(var_22, ((max(((((var_4 || var_9) ? var_18 : (!7430835334656807941)))), (min(((-71 ? 11015908739052743675 : 207776789)), 7430835334656807941)))))));
    var_23 = (max(var_23, var_11));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((((min(-12004499067986133569, (((arr_2 [i_0 + 1]) + var_17))))) ? (min((arr_2 [i_0 + 2]), (((arr_1 [i_0]) ? var_12 : (arr_3 [i_0] [i_0]))))) : (((((var_13 <= -1578002168) < ((-1567096085 ? -2066954672 : -2066954672))))))));
        var_24 = (min(var_24, (arr_1 [i_0 + 2])));
    }
    #pragma endscop
}
