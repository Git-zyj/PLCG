/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0]));
        var_18 = (max(var_18, (((~(((arr_2 [i_0 + 2] [i_0 + 1]) ? (arr_2 [i_0 + 2] [i_0 - 1]) : (arr_2 [i_0 + 2] [i_0 + 2]))))))));
        var_19 *= (((((((min(139, 121)))) < (arr_0 [i_0 - 2] [i_0 - 2]))) ? 255 : -217));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = (max(143, (~var_11)));
        var_21 = ((var_14 ? ((((var_0 >= (!var_14))))) : ((var_17 ? var_10 : (arr_6 [i_1])))));
        var_22 = (max(var_22, ((((((((var_13 ? var_15 : var_10))) ? (var_6 != var_2) : var_17)) >> (97 - 74))))));
    }
    var_23 = var_2;
    var_24 = var_2;
    var_25 -= var_3;
    var_26 = var_0;
    #pragma endscop
}
