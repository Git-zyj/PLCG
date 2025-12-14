/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 &= var_19;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 = ((+(((((arr_2 [i_0]) + 2147483647)) << (29291 - 29291)))));
        var_23 ^= (((var_7 ? (arr_1 [i_0]) : var_1)));
        var_24 = (min((arr_2 [5]), ((-(var_4 >= var_6)))));
    }
    #pragma endscop
}
