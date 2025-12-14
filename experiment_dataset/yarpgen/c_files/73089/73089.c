/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max(-var_6, (max(var_14, 0)))), var_14));
    var_19 ^= 16929843879876122094;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = arr_0 [i_0] [i_0];
        arr_2 [i_0] = (min(var_11, var_2));
        var_21 = (max(var_21, ((((((2026234286024557507 ? ((var_1 ? var_0 : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [15]) & (max(var_11, var_3)))) : ((((arr_1 [i_0] [i_0]) ? 116 : (~2)))))))));
        var_22 = (min(var_22, (((+(((arr_1 [3] [i_0]) / var_3)))))));
        var_23 = ((13176 ? 1 : 2));
    }
    var_24 |= -116;
    #pragma endscop
}
