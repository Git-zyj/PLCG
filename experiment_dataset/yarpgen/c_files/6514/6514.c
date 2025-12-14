/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 += ((0 ? (16382 / 1) : (arr_0 [i_0])));
        arr_2 [i_0] = ((7 ? (((((!(arr_0 [i_0]))) ? 1 : (((arr_1 [i_0]) / var_5))))) : ((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0))))));
    }
    var_12 = (max(var_12, ((!((!(!74)))))));
    #pragma endscop
}
