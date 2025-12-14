/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (0 >= var_10);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : 44331))) ? (max(((min(var_7, (arr_2 [i_0])))), ((var_11 ? (arr_1 [1] [i_0]) : var_5)))) : (min(var_0, var_11))));
        arr_5 [i_0] = var_10;
        arr_6 [i_0] = var_15;
    }
    #pragma endscop
}
