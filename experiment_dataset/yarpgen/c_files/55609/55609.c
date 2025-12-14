/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, (((!-107) ? ((((((((arr_1 [i_0 - 1] [i_0 - 1]) >= 2147483647))) == ((~(arr_1 [1] [2]))))))) : ((var_12 ? var_1 : (((arr_0 [i_0]) ? var_5 : 4294967295))))))));
        var_16 = ((var_12 ? (((arr_0 [i_0 - 1]) / -4294967295)) : (arr_0 [i_0 - 1])));
        arr_2 [i_0] = arr_0 [i_0];
    }
    var_17 ^= var_6;
    #pragma endscop
}
