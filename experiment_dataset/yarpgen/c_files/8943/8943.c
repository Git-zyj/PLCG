/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= (((((min(65526, 9)))) | (min(var_12, (~65)))));
        var_14 = (arr_1 [i_0]);
    }
    var_15 = 52979374;
    var_16 = (((var_11 >> 1) >= ((-239 | (min(var_2, 1055531162664960))))));
    #pragma endscop
}
