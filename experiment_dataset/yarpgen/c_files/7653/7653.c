/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (min(var_11, var_6));
                var_12 = (var_4 - ((var_6 ? var_2 : 0)));
            }
        }
    }
    var_13 = ((32752 ? (max(((max(9, var_9))), -9221120237041090560)) : var_4));
    var_14 = ((var_2 ? (((!(((var_9 ? var_2 : (-9223372036854775807 - 1))))))) : (3968 - var_7)));
    var_15 = (((var_0 + var_7) >= (((var_9 ? var_6 : (var_2 | var_2))))));
    #pragma endscop
}
