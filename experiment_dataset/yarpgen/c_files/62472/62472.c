/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (max(var_8, (!var_16)));
        arr_5 [i_0] |= var_6;
    }
    var_17 = (((max(-var_2, ((max(var_7, var_9))))) << (((var_9 & var_11) ^ var_10))));
    #pragma endscop
}
