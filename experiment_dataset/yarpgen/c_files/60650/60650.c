/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 ^= ((-1 + ((var_13 / (~var_11)))));
    var_17 |= ((-55 ? var_6 : 31986));
    var_18 |= var_6;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_0;
        arr_4 [i_0] = (min((((!(arr_2 [i_0 - 1])))), (min(-1, -106))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_19 -= var_12;
        arr_9 [i_1] = (!var_13);
    }
    #pragma endscop
}
