/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max((!var_8), var_14))) ? ((-(max(var_4, var_5)))) : (!var_3)));
    var_16 &= ((3399439273 ? var_0 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 ^= min((max(var_11, var_12)), (((((min(var_12, var_1))) ? ((236 ? 60 : 62)) : var_7))));
                arr_4 [10] |= var_10;
                var_18 *= ((!(((255 ? 60 : 7)))));
                arr_5 [i_0] [i_0] = (var_4 ? var_8 : var_8);
            }
        }
    }
    #pragma endscop
}
