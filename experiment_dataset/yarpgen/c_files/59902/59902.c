/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((((~(119942816 & var_7))) ^ 29078));
        var_13 = ((-(arr_0 [i_0])));
        var_14 = (min((((36457 | ((((arr_3 [i_0] [i_0]) && 2541)))))), var_10));
        arr_4 [19] [i_0] = (((((max(255, var_9))) <= (min(var_9, var_1)))) ? var_0 : 56202799);
    }
    var_15 -= (~56202793);
    #pragma endscop
}
