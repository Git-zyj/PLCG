/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 = var_13;
            var_20 += (arr_1 [0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_21 = (((arr_1 [i_2] [i_0]) && 3));
            var_22 = ((~(arr_3 [i_2] [i_2] [i_0])));
        }
        var_23 = -533948484408117249;
    }
    var_24 = var_6;
    #pragma endscop
}
