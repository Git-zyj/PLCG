/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (~0);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? ((~(var_0 || var_11))) : var_9));
        var_16 = (min(var_16, (((1661063684 >> (var_4 - 4156254112))))));
        var_17 = (((((((min(var_12, var_12))) ? var_7 : (arr_1 [0])))) ? ((((((7741 ? var_2 : 13905484665576334655))) ? -var_1 : 27060))) : ((~((var_5 ? var_4 : var_7))))));
    }
    #pragma endscop
}
