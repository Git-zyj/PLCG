/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -1333701236;
    var_16 += var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 -= (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 = (((arr_2 [3]) ? (arr_0 [i_0]) : var_6));
            var_19 = (min(var_19, var_0));
            var_20 = 1734148782;
        }
    }
    #pragma endscop
}
