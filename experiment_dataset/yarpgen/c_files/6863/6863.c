/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_18 ^= var_9;
            var_19 = 66;
        }
        arr_6 [i_0] [i_0] = (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
    }
    var_20 = (min(var_20, (((var_5 / ((((var_14 | var_5) || -1))))))));
    var_21 = (min(var_21, 15079446416539440656));
    #pragma endscop
}
