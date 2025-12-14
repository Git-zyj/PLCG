/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_7;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [2] = (((((~((((arr_2 [i_0 + 1]) <= var_2))))) + 2147483647)) << (((((arr_1 [i_0 - 2]) * (arr_2 [i_0]))) - 141891676)));
        var_11 += min(-231, ((2314819577 ? (arr_2 [i_0 - 1]) : (arr_1 [i_0 - 1]))));
        arr_4 [i_0] = (min(20, ((~(!var_4)))));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_12 = (min(var_12, (((((min(((231 ? 2700667121 : 2016)), (max(var_0, var_1))))) + ((-var_5 ? var_3 : var_7)))))));
    var_13 -= var_3;
    #pragma endscop
}
