/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= max((min((min(15363587648463639223, var_1)), ((max(171, var_1))))), (((max(-120, 0)) ^ ((min(var_2, 115))))));
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((min(-125, 3150980815309102978))) || 63);
        var_12 = (var_0 | var_9);
        var_13 ^= (((max(((min(-38, 118))), 4173454435)) + 125));
    }
    #pragma endscop
}
