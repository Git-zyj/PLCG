/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_6);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 -= ((~((-(arr_1 [i_0])))));
        var_17 |= (arr_0 [i_0] [i_0]);
        var_18 ^= (arr_0 [i_0] [i_0]);

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            var_19 = (min((min(((min(6, 1))), (arr_2 [16]))), (arr_0 [i_0] [10])));
            var_20 *= (arr_4 [i_0] [i_1] [i_1]);
            var_21 += arr_3 [i_1 - 2] [i_1 - 1] [i_1 + 1];
            var_22 = (arr_4 [i_0] [i_0] [i_1]);
        }
    }
    #pragma endscop
}
