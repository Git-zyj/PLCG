/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(var_18, ((max((max(var_4, (arr_0 [i_0]))), 3656446157)))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_19 = ((((-(arr_0 [i_0])))) ? (((arr_0 [i_0]) ? 130 : (arr_1 [i_1]))) : ((max((arr_0 [i_1]), -4256044524784848113))));
            var_20 ^= (((((arr_0 [i_0]) ? -var_3 : var_0)) * (max(((var_7 / (arr_1 [i_0]))), (var_9 / -4256044524784848113)))));
        }
        arr_5 [i_0] = 2820341071107382176;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = (max(var_21, (((((((1373259762 ? (arr_7 [i_2]) : 55992)) + 2147483647)) >> (-1 + 7))))));
        var_22 = arr_7 [i_2];
        var_23 = (min(var_23, (!8388607)));
        arr_8 [4] |= ((((((130 << 9) & (arr_6 [i_2])))) ? ((+(((arr_6 [i_2]) ? (arr_6 [i_2]) : var_8)))) : var_0));
    }
    var_24 = ((((min(var_17, var_4))) ? 39859 : (((var_6 + var_8) + var_9))));
    #pragma endscop
}
