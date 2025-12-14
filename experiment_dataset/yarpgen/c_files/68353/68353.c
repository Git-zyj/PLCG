/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (min(-11083188305625402978, (((~(min(var_7, (arr_1 [4]))))))));
        var_17 += (arr_2 [i_0]);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_18 = (arr_2 [i_1]);
        arr_5 [i_1] = ((~(min(var_4, (arr_2 [i_1])))));
        var_19 += (min(((11083188305625402978 / (~var_12))), (((arr_0 [i_1 - 1]) ? (min(7363555768084148638, 11083188305625402978)) : ((15 ? 17683767282787611541 : var_12))))));
    }
    var_20 = ((!var_4) ? ((min(var_5, var_3))) : (var_6 <= var_3));
    #pragma endscop
}
