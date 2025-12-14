/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1025431003;
    var_13 ^= ((((var_7 ? (min(var_8, var_10)) : (((max(-54, var_1)))))) > (!var_8)));
    var_14 = ((var_4 ? ((min(((var_6 ? var_6 : var_1)), ((var_3 ? 21 : var_7))))) : ((((88241185 >> (var_8 - 14510214187772093049))) / (((max(var_3, 1023))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (((((max(var_5, var_0))) ? (max(1, 88241185)) : 1)));
        arr_4 [i_0] [i_0] = -var_11;
        var_16 = ((((((((arr_0 [i_0]) + 2147483647)) >> (var_5 + 2088694615)))) ? (var_10 & -6494) : (((((((min(-54, 1)))) >= ((174 ? 4294967283 : -6494))))))));
        arr_5 [i_0] [i_0] = ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
    }
    var_17 = var_11;
    #pragma endscop
}
