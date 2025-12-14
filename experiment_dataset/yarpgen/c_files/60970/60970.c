/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_11, (!var_8)));
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (((((arr_1 [i_0]) - -119)) + (var_1 + var_4)));
        var_15 = (min((((!var_9) ? 9448175655551049074 : var_9)), ((min((arr_0 [i_0]), ((60 ? (arr_1 [0]) : 60)))))));
        var_16 = (min(var_16, var_7));
        arr_2 [10] = min((((arr_1 [i_0]) * (arr_1 [i_0]))), ((var_9 / (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (min(((min(var_11, 228))), (~var_7)));
        var_18 -= (((max(((9223372036854775808 ? var_1 : (arr_3 [i_1]))), (arr_4 [i_1] [i_1]))) / ((2147483644 ? 115 : -97238439))));
    }
    #pragma endscop
}
