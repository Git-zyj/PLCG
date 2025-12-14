/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((((arr_2 [i_0]) && (7 <= 211))) ? (((arr_1 [i_0] [i_0]) ? (((arr_0 [i_0]) ? 211 : 1)) : var_14)) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (max(var_16, (arr_0 [i_1])));
            arr_6 [i_0] [i_0] [i_0] = var_14;
        }
    }
    var_17 = -1908635786;
    #pragma endscop
}
