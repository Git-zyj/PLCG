/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-4262935911700133210 ? 4262935911700133209 : -3636182593807796377));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = var_2;
        var_15 = (max(((((((var_5 + 9223372036854775807) << (((-1768792725 + 1768792748) - 22))))) ? (min(var_12, var_8)) : -413027212)), (arr_1 [i_0] [i_0])));
        var_16 = ((~(~3740813034570951010)));
    }
    var_17 = (max(var_17, ((min((min((min(var_12, var_11)), (var_1 & var_0))), (((((max(1, 3636182593807796377))) ? var_11 : 1))))))));
    #pragma endscop
}
