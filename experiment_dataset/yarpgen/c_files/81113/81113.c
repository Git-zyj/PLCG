/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((((~32767) ? 0 : var_6)) % var_5));
    var_11 = (max((var_1 | var_0), ((min(var_1, var_3)))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_12 = (((var_2 - (arr_0 [i_0 + 3]))));
        arr_4 [i_0] = ((((max(32769, (var_7 + 14781)))) & ((~(arr_3 [i_0 + 1])))));
        var_13 &= (max(2046, 61500));
        var_14 = (min((max((var_0 || var_2), (arr_1 [i_0 + 2]))), var_4));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (!var_0);
        var_15 ^= var_5;
        var_16 = (min(var_16, ((max((var_0 > var_6), (max(63490, 57)))))));
        var_17 = ((-((((max(var_1, 4111449306))) ? 32767 : 187))));
    }
    var_18 = (min(var_2, (min(((63489 ? var_9 : 0)), 1293285570))));
    #pragma endscop
}
