/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_10;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0]) & (max((arr_1 [i_0 + 1]), var_10))));
        var_16 *= ((!(max(((!(arr_0 [5]))), (var_4 || var_3)))));
        arr_3 [i_0] = var_5;
        var_17 = (max((arr_1 [i_0 + 1]), (min((arr_1 [i_0 - 1]), var_7))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_18 = 16;
        arr_6 [i_1] [i_1] = ((70280411115156982 < (var_2 * var_0)));
        var_19 = (max(var_19, ((var_7 ? -17 : var_10))));
    }
    var_20 = (min(var_4, var_1));
    #pragma endscop
}
