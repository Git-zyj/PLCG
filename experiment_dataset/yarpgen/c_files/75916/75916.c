/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_8;
    var_17 = var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_18 = (arr_0 [i_0 + 1]);
        var_19 = (min(var_19, (arr_1 [i_0] [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_20 = (arr_3 [i_1] [i_1]);
            var_21 = (arr_4 [i_1]);
        }
        var_22 = -79;
    }
    var_23 = var_2;
    #pragma endscop
}
