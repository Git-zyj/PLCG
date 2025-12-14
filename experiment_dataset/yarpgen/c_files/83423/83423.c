/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [21] = (1 & 1023);
        var_14 = (((arr_1 [i_0 - 1]) << (((max((arr_1 [i_0 - 1]), (arr_0 [i_0 - 1]))) - 6133558001562042942))));
    }
    var_15 = ((((var_6 - (max(var_6, var_9)))) - var_2));
    var_16 = (((min((var_3 && var_6), (max(var_12, var_10))))) && (max((var_10 && var_2), (!var_13))));
    var_17 = var_6;
    #pragma endscop
}
