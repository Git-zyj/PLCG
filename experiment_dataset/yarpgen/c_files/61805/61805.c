/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max(((var_9 ? (((-34 ? var_11 : var_3))) : (3873619626403291852 + var_8))), (((var_6 ? (var_3 * var_9) : var_3))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((-(((((var_3 ? (arr_1 [i_0]) : var_0))) ? (var_3 / var_7) : (min(-1120716077041228818, 3873619626403291852))))));
    }
    var_18 = var_16;
    var_19 ^= var_2;
    #pragma endscop
}
