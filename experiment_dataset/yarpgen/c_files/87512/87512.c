/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 -= ((((((arr_1 [i_0] [0]) ? (arr_1 [i_0] [4]) : (arr_1 [i_0] [6])))) < (((arr_1 [i_0] [6]) | 3944387351141026100))));
        arr_3 [i_0] = (min(((((arr_2 [i_0]) & (3944387351141026111 > 124)))), ((+(min((arr_1 [i_0] [i_0]), 3944387351141026109))))));
    }
    var_21 += (((((min(var_12, -2056785592)))) ? var_6 : var_11));
    #pragma endscop
}
