/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max(-31156, (~var_3)));
    var_14 = (((var_2 + 2147483647) >> ((((var_11 ? 42289 : (max(var_11, var_8)))) - 42285))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = ((~(arr_0 [i_0])));
        var_16 &= (((max(((var_9 % (arr_0 [i_0]))), 23791)) ^ (((max((arr_2 [i_0]), (arr_2 [i_0])))))));
    }
    #pragma endscop
}
