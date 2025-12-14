/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (((((min(var_10, 3925999070770465639)) <= var_4)) ? (((-3925999070770465632 ? var_5 : 3925999070770465639))) : ((((!((max(var_13, 3925999070770465638)))))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 ^= ((-147 ? (max(-787710328, (arr_0 [i_0 - 1]))) : -3925999070770465638));
        var_18 = (max(var_18, (((((((min((arr_1 [i_0]), var_13))))) >= (arr_0 [14]))))));
        var_19 *= 1491426387;
    }
    var_20 = (max(var_20, -3925999070770465618));
    #pragma endscop
}
