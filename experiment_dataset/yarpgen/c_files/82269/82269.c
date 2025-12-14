/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((~(max(var_10, var_14))))));
    var_16 = (max((!var_10), (max(var_2, 4801835008180296855))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [5] = -23;
        var_17 = (((max(((var_12 ? var_13 : 2454929360562533945)), (2142204933 % -1955291869))) != 2147483641));
        var_18 = (~((((max(var_4, 13644909065529254761))) ? (((arr_2 [i_0] [i_0]) ? 19957 : (arr_0 [7]))) : (arr_2 [i_0] [i_0]))));
        var_19 = var_4;
    }
    #pragma endscop
}
