/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((((var_6 ? (var_13 / var_8) : -var_1)) <= (((~(var_1 >= var_6))))));
    var_15 = (max(var_15, var_7));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((+((((arr_0 [i_0] [i_0]) && (((var_8 ^ (arr_1 [i_0] [i_0])))))))));
        var_17 += (max(10809287941358390695, ((max(((var_11 ? (-9223372036854775807 - 1) : var_6)), (((!(arr_1 [i_0] [i_0])))))))));
    }
    var_18 += (var_3 + var_13);
    var_19 -= (min((-var_0 == -var_4), (!var_5)));
    #pragma endscop
}
