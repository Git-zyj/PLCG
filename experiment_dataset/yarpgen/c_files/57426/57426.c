/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 11951;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((min((((arr_0 [i_0 + 1]) ? (-2147483647 - 1) : -21378)), (((1 <= (arr_0 [i_0 + 1])))))))));
        arr_3 [i_0] = ((!(65535 / 21377)));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (min(((max(21377, 1))), (min(((144115188075855872 ? var_0 : (arr_1 [i_1]))), ((((arr_4 [i_1] [i_1]) + 21377)))))));
        var_19 = (((1 << (arr_0 [i_1 + 1]))));
        var_20 = var_16;
    }
    #pragma endscop
}
