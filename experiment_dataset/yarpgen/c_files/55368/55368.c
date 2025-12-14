/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] = var_1;
            var_10 = ((!(var_9 || 0)));
            arr_7 [i_0 + 2] [i_0 + 2] [i_0] = var_0;
            arr_8 [i_0] [i_0 + 3] [i_0] = (arr_1 [i_0]);
            var_11 ^= var_4;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_12 = (min(var_12, ((((arr_0 [i_2]) ? (16 - -32764) : ((16384 ? 0 : 10)))))));
            var_13 &= var_9;
        }
    }
    var_14 = (((((((0 ? var_1 : var_4))) ? ((0 ? 2147483647 : 127)) : 65516))) - (min(0, 67108736)));
    #pragma endscop
}
