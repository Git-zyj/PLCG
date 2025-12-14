/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = 26493;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 5943;
        var_19 = ((((min(-5943, -453227586))) ? var_3 : (((var_8 % (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = var_4;
        arr_5 [i_1] [i_1] = var_15;
        arr_6 [1] [1] = arr_4 [i_1] [i_1];
        arr_7 [2] = (5943 % 1455947594);
    }
    #pragma endscop
}
