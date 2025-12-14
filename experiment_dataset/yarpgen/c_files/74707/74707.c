/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 -= (max(((((arr_1 [i_0]) || (arr_1 [i_0])))), (arr_0 [i_0])));
        var_14 -= var_5;
        var_15 = (max(var_15, ((min((min(16383, 4294967279)), (((arr_1 [i_0]) * (min(var_3, var_4)))))))));
        arr_2 [i_0] [5] |= ((0 << (arr_1 [i_0])));
    }
    var_16 = (max(var_16, (((~(((var_10 || var_9) ? var_11 : ((min(var_7, var_1))))))))));
    var_17 |= var_7;
    #pragma endscop
}
