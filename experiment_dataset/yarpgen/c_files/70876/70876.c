/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_18 = var_8;
        arr_4 [i_0] = 16267062902244448952;
    }
    var_19 = 18446744073709551600;
    var_20 = var_13;
    #pragma endscop
}
