/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [1] |= (((arr_1 [15] [i_0]) ? (!155978709) : 4138988593));
        arr_3 [i_0] [i_0] = ((3127751789 ? 1167215507 : 4138988588));
    }
    var_11 = ((var_9 ? (((~var_3) ? (min(var_9, var_6)) : (((0 ? 62508 : var_9))))) : ((max(-23, ((var_10 ? var_10 : var_3)))))));
    #pragma endscop
}
