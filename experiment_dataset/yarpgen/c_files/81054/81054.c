/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((!(arr_3 [i_0] [i_0 - 2]))) || 64);
        var_15 = (min(var_15, (((((((min(2248817314, var_5))) && -11)) && (((((var_13 ? (arr_2 [6] [i_0]) : (arr_3 [i_0] [i_0])))) || var_10)))))));
    }
    var_16 = ((!((max((var_12 && var_3), ((15 ? var_11 : var_9)))))));
    #pragma endscop
}
