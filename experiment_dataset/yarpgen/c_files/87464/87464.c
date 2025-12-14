/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((var_10 * var_2) * ((((min(var_4, 14931469295927169555))) ? var_9 : var_5)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? (((arr_1 [i_0]) << (((arr_0 [i_0] [i_0]) - 4778741939025502588)))) : (((arr_0 [i_0] [i_0]) ? (var_8 ^ 53) : (min(44, 3515274777782382061))))));
        var_13 = (((((44 ^ (-1092186201 / 49975)))) ? ((-(arr_1 [i_0]))) : ((var_2 ? 14931469295927169555 : 127))));
        var_14 &= (min(50, (arr_1 [i_0])));
        var_15 = (~127);
    }
    var_16 = (min(var_16, (((!((((var_3 && 58) ? 7155409774832581309 : 4294967169))))))));
    #pragma endscop
}
