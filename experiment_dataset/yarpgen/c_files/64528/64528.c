/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (max((((!((min((arr_2 [i_0]), (arr_0 [i_0] [i_0]))))))), (((arr_0 [i_0] [i_0]) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : (arr_2 [i_0])))));
        var_11 = ((~(((1587968610 ? -9223372036854775795 : 91)))));
    }
    var_12 = ((var_6 * ((var_5 / ((var_8 ? var_8 : var_1))))));
    var_13 = var_9;
    #pragma endscop
}
