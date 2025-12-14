/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max(((var_9 ? var_8 : var_6)), (var_0 + var_3))), var_3));
    var_11 += (((var_7 ? var_5 : var_7)));
    var_12 = (((((min(var_7, var_6))) != (var_0 > var_6))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((min(var_3, (arr_0 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 = (arr_1 [i_1]);
            var_15 = (arr_3 [i_1]);
            var_16 *= (arr_0 [i_0] [1]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] &= (((arr_2 [22] [i_2]) == (arr_6 [i_0] [11] [i_0])));
            var_17 -= arr_3 [i_2];
            var_18 = (min((arr_0 [i_2] [i_2]), (((((min(1, var_7))) == (!2078212296))))));
            var_19 = (min(var_19, (arr_1 [i_2])));
            arr_8 [12] [i_0] [19] = -32756;
        }
    }
    #pragma endscop
}
