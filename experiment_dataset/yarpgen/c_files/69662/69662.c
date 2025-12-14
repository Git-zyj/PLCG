/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 2972230918;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] &= (((arr_0 [i_0] [11]) ? 1322736386 : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = (((arr_1 [i_0]) != (arr_1 [i_0])));
    }
    var_14 = (~(((((var_11 ? 2972230887 : var_0))) ? var_2 : var_3)));
    #pragma endscop
}
