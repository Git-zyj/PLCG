/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_0 [i_0])));
        var_19 = (max(var_19, ((((((var_16 << (arr_2 [i_0])))) || ((!(arr_1 [i_0]))))))));
    }
    var_20 = (((max(var_12, 0))) && var_5);
    #pragma endscop
}
