/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, (((arr_0 [i_0]) ? (((var_4 ? 4050467084 : 32767))) : (((arr_2 [i_0] [i_0]) ? 8188341952848351176 : (arr_2 [i_0] [i_0])))))));
        var_14 = var_11;
        var_15 |= (((((arr_2 [i_0] [i_0]) / -8188341952848351192))) ? (arr_3 [i_0]) : var_9);
        arr_4 [i_0] [i_0] = (arr_2 [3] [i_0]);
        var_16 |= (-1704698223 < var_11);
    }
    var_17 = (min(var_10, ((var_0 ? var_9 : (min(var_5, var_4))))));
    #pragma endscop
}
