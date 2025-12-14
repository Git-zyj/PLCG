/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [1] [i_0] = ((!((max((min(var_3, var_5)), (arr_0 [i_0]))))));
        var_15 = (max(var_15, ((((var_2 > 1) ? ((~(((arr_0 [5]) % (arr_0 [i_0]))))) : (min(-var_0, (~var_6))))))));
        var_16 -= var_2;
    }
    var_17 -= var_1;
    var_18 = ((max(((var_1 ? var_2 : var_14), var_2))));
    #pragma endscop
}
