/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (!6433045883539637356);
        var_16 = (max(var_16, (((~(((arr_0 [i_0]) ? var_7 : (arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = var_10;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_17 = ((min((((1 >> (1073741824 - 1073741820))), (max(6433045883539637356, 6433045883539637338))))));
        arr_5 [i_1] [i_1 + 1] = ((-((0 ? 7 : (arr_4 [i_1])))));
        var_18 = var_13;
        var_19 *= ((min((arr_3 [i_1 - 2] [i_1 - 2]), var_6)));
    }
    var_20 = (((1 != var_14) || (((6433045883539637353 ? var_5 : var_12)))));
    var_21 = (max(var_21, (~var_2)));
    var_22 = ((min((min(60, 0)), (min(var_4, var_8)))));
    #pragma endscop
}
